// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FVirtualTextureTranscodeCache @ 1489b50b0

FVirtualTextureTranscodeCache * __thiscall
FVirtualTextureTranscodeCache::FVirtualTextureTranscodeCache(FVirtualTextureTranscodeCache *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVirtualTextureTranscodeCache *pFVar7;
  
  piVar1 = &(this->Tasks).ArrayNum;
  piVar2 = &(this->Tasks).ArrayMax;
  (this->Tasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  FHashTable::FHashTable(&this->TileIDToTaskIndex,0x400,0);
  FHashTable::FHashTable(&this->ProducerToTaskIndex,0x400,0);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,2,(ForAnyElementType *)this,piVar1,piVar2);
  DefaultConstructItems<FVirtualTextureTranscodeCache::FTaskEntry,int>
            ((this->Tasks).AllocatorInstance.Data + (longlong)iVar6 * 0x40,2);
  if (*piVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FVirtualTextureTranscodeCache *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->Tasks).AllocatorInstance.Data;
  *(undefined2 *)(pFVar3 + 0x38) = 0;
  *(undefined4 *)(pFVar3 + 0x3c) = 0;
  if (*piVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FVirtualTextureTranscodeCache *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->Tasks).AllocatorInstance.Data;
  *(undefined2 *)(pFVar3 + 0x78) = 0;
  *(undefined4 *)(pFVar3 + 0x7c) = 0x10001;
  return this;
}

// ~FVirtualTextureTranscodeCache @ 1489ba0c0

void __thiscall
FVirtualTextureTranscodeCache::~FVirtualTextureTranscodeCache(FVirtualTextureTranscodeCache *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->ProducerToTaskIndex).IndexSize != 0) {
    (this->ProducerToTaskIndex).HashMask = 0;
    (this->ProducerToTaskIndex).IndexSize = 0;
    operator_delete__((this->ProducerToTaskIndex).Hash);
    (this->ProducerToTaskIndex).Hash = FHashTable::EmptyHash;
    operator_delete__((this->ProducerToTaskIndex).NextIndex);
    (this->ProducerToTaskIndex).NextIndex = (uint *)0x0;
  }
  if ((this->TileIDToTaskIndex).IndexSize != 0) {
    (this->TileIDToTaskIndex).HashMask = 0;
    (this->TileIDToTaskIndex).IndexSize = 0;
    operator_delete__((this->TileIDToTaskIndex).Hash);
    (this->TileIDToTaskIndex).Hash = FHashTable::EmptyHash;
    operator_delete__((this->TileIDToTaskIndex).NextIndex);
    (this->TileIDToTaskIndex).NextIndex = (uint *)0x0;
  }
  DestructItems<FVirtualTextureTranscodeCache::FTaskEntry,int>
            ((FTaskEntry *)(this->Tasks).AllocatorInstance.Data,(this->Tasks).ArrayNum);
  pFVar1 = (this->Tasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AcquireTaskResult @ 1489c2000

/* WARNING: Enum "Type": Some values do not have unique names */

FVTUploadTileHandle * __thiscall
FVirtualTextureTranscodeCache::AcquireTaskResult
          (FVirtualTextureTranscodeCache *this,FVTTranscodeTileHandle param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FVTUploadTileHandle *pFVar9;
  FTaskGraphInterface *this_00;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  uint uStackX_14;
  
  uVar11 = param_1._s_1.Index;
  if ((uVar11 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskIndex >= LIST_COUNT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                         ,0x155,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FVTUploadTileHandle *)(*pcVar6)();
    return pFVar9;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Tasks).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FVTUploadTileHandle *)(*pcVar6)();
    return pFVar9;
  }
  pFVar3 = (this->Tasks).AllocatorInstance.Data;
  uStackX_14 = param_1._s_1.Magic;
  if ((*(ushort *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 0x38) != uStackX_14) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskEntry.Magic == InHandle.Magic",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                         ,0x157,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FVTUploadTileHandle *)(*pcVar6)();
    return pFVar9;
  }
  if ((*(longlong *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 8) != 0) &&
     (*(char *)(*(longlong *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 8) + 0xd0) == '\0')) {
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (this_00,(TRefCountPtr<FBaseGraphTask> *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 8),
               (Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local);
  }
  puVar4 = *(undefined8 **)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 8) = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  RemoveFromList(this,uVar11);
  AddToList(this,0,uVar11);
  *(short *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 0x38) =
       *(short *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 0x38) + 1;
  if (uVar11 < (this->TileIDToTaskIndex).IndexSize) {
    uVar10 = (ulonglong)*(ushort *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 0x3a) &
             (ulonglong)(this->TileIDToTaskIndex).HashMask;
    puVar5 = (this->TileIDToTaskIndex).Hash;
    puVar12 = puVar5 + uVar10;
    uVar8 = puVar5[uVar10];
    if (uVar8 == uVar11) {
      uVar8 = (this->TileIDToTaskIndex).NextIndex[param_1.PackedData & 0xffffffff];
LAB_1489c2188:
      *puVar12 = uVar8;
    }
    else if (uVar8 != 0xffffffff) {
      puVar5 = (this->TileIDToTaskIndex).NextIndex;
      do {
        puVar12 = puVar5 + uVar8;
        uVar8 = puVar5[uVar8];
        if (uVar8 == uVar11) {
          uVar8 = puVar5[param_1.PackedData & 0xffffffff];
          goto LAB_1489c2188;
        }
      } while (uVar8 != 0xffffffff);
    }
  }
  uVar8 = (*(uint *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 0x30) >> 0x10 ^
          *(uint *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 0x30)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (uVar11 < (this->ProducerToTaskIndex).IndexSize) {
    uVar8 = (uVar8 >> 0x10 ^ uVar8) & (this->ProducerToTaskIndex).HashMask;
    puVar5 = (this->ProducerToTaskIndex).Hash;
    puVar12 = puVar5 + uVar8;
    uVar8 = puVar5[uVar8];
    if (uVar8 == uVar11) {
      uVar8 = (this->ProducerToTaskIndex).NextIndex[param_1.PackedData & 0xffffffff];
LAB_1489c21f7:
      *puVar12 = uVar8;
    }
    else if (uVar8 != 0xffffffff) {
      puVar5 = (this->ProducerToTaskIndex).NextIndex;
      do {
        puVar12 = puVar5 + uVar8;
        uVar8 = puVar5[uVar8];
        if (uVar8 == uVar11) {
          uVar8 = puVar5[param_1.PackedData & 0xffffffff];
          goto LAB_1489c21f7;
        }
      } while (uVar8 != 0xffffffff);
    }
  }
  return (FVTUploadTileHandle *)(pFVar3 + (longlong)(int)uVar11 * 0x40 + 0x10);
}

// AddToList @ 1489c7e10

void __thiscall
FVirtualTextureTranscodeCache::AddToList
          (FVirtualTextureTranscodeCache *this,int param_1,int param_2)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1 < (this->Tasks).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->Tasks).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_2 < (this->Tasks).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Tasks).AllocatorInstance.Data;
  if (param_2 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= LIST_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.h"
                       ,0x80,L"");
    if (bVar5) {
code_r0x0001489c7f30:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((0xffff < param_2) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index <= 0xffff",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.h"
                              ,0x81,L""), bVar5)) goto code_r0x0001489c7f30;
  if ((*(short *)(pFVar3 + (longlong)param_2 * 0x40 + 0x3c) != param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry.NextIndex == Index",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.h"
                         ,0x84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(short *)(pFVar3 + (longlong)param_2 * 0x40 + 0x3e) != param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry.PrevIndex == Index",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.h"
                         ,0x85,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(short *)(pFVar3 + (longlong)param_2 * 0x40 + 0x3c) = (short)param_1;
  *(undefined2 *)(pFVar3 + (longlong)param_2 * 0x40 + 0x3e) =
       *(undefined2 *)(pFVar2 + (longlong)param_1 * 0x40 + 0x3e);
  sVar1 = *(short *)(pFVar2 + (longlong)param_1 * 0x40 + 0x3e);
  uVar6 = 0;
  if ((int)sVar1 < (this->Tasks).ArrayNum) {
    uVar6 = (uint)~(int)sVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(short *)((this->Tasks).AllocatorInstance.Data + (longlong)sVar1 * 0x40 + 0x3c) = (short)param_2;
  *(short *)(pFVar2 + (longlong)param_1 * 0x40 + 0x3e) = (short)param_2;
  return;
}

// FindTask @ 1489e2cf0

FVTTranscodeTileHandleAndStatus * __thiscall
FVirtualTextureTranscodeCache::FindTask
          (FVirtualTextureTranscodeCache *this,
          FVTTranscodeTileHandleAndStatus *__return_storage_ptr__,FVTTranscodeKey *param_1)

{
  uint uVar1;
  code *pcVar2;
  FVTTranscodeTileHandle FVar3;
  bool bVar4;
  uint uVar5;
  FVTTranscodeTileHandleAndStatus *pFVar6;
  FScriptContainerElement *pFVar7;
  
  uVar1 = (this->TileIDToTaskIndex).Hash
          [(ulonglong)param_1->Hash & (ulonglong)(this->TileIDToTaskIndex).HashMask];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      (__return_storage_ptr__->Handle).PackedData = 0;
      __return_storage_ptr__->IsComplete = false;
      return __return_storage_ptr__;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->Tasks).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar7 = (this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x40;
    if (*(ulong64 *)pFVar7 == (param_1->field0_0x0).Key) {
      if ((*(longlong *)(pFVar7 + 8) == 0) || (*(char *)(*(longlong *)(pFVar7 + 8) + 0xd0) != '\0'))
      {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      FVar3.PackedData._4_2_ = *(undefined2 *)(pFVar7 + 0x38);
      FVar3._s_1.Index = uVar1;
      FVar3.PackedData._6_2_ = 0;
      __return_storage_ptr__->Handle = FVar3;
      __return_storage_ptr__->IsComplete = bVar4;
      return __return_storage_ptr__;
    }
    uVar1 = (this->TileIDToTaskIndex).NextIndex[uVar1];
  }
  pcVar2 = (code *)swi(3);
  pFVar6 = (FVTTranscodeTileHandleAndStatus *)(*pcVar2)();
  return pFVar6;
}

// GatherProducePageDataTasks @ 1489e4980

void __thiscall
FVirtualTextureTranscodeCache::GatherProducePageDataTasks
          (FVirtualTextureTranscodeCache *this,FVirtualTextureProducerHandle *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  
  uVar6 = (param_1->PackedValue >> 0x10 ^ param_1->PackedValue) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = (this->ProducerToTaskIndex).Hash
          [(uVar6 >> 0x10 ^ uVar6) & (this->ProducerToTaskIndex).HashMask];
  while( true ) {
    if (uVar6 == 0xffffffff) {
      return;
    }
    uVar7 = 0;
    if ((int)uVar6 < (this->Tasks).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar1 = (this->Tasks).AllocatorInstance.Data;
    if (*(uint *)(pFVar1 + (longlong)(int)uVar6 * 0x40 + 0x30) == param_1->PackedValue) {
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
               ((longlong)pFVar1 + (longlong)(int)uVar6 * 0x40 + 8);
      if ((*(longlong *)(pFVar1 + (longlong)(int)uVar6 * 0x40 + 8) != 0) &&
         (*(char *)(*(longlong *)(pFVar1 + (longlong)(int)uVar6 * 0x40 + 8) + 0xd0) == '\0')) {
        FVar2 = (param_2->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
        if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar9 = FVar2;
        }
        if ((ulonglong)FVar9 <= (ulonglong)FVar10) {
          FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
          if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar9 = FVar2;
          }
          if (((ulonglong)FVar10 < (ulonglong)((longlong)FVar9 + (longlong)param_2->ArrayMax * 8))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        FVar2 = (param_2->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
        if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar9 = FVar2;
        }
        *(undefined8 *)((longlong)FVar9 + (longlong)iVar8 * 8) = 0;
        lVar3 = *(longlong *)FVar10;
        *(longlong *)((longlong)FVar9 + (longlong)iVar8 * 8) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
          UNLOCK();
        }
      }
    }
    uVar6 = (this->ProducerToTaskIndex).NextIndex[uVar6];
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetKey @ 1489e9880

FVTTranscodeKey * __cdecl
FVirtualTextureTranscodeCache::GetKey
          (FVTTranscodeKey *__return_storage_ptr__,FVirtualTextureProducerHandle *param_1,
          uchar param_2,uchar param_3,uint param_4)

{
  ulonglong uVar1;
  
  (__return_storage_ptr__->field0_0x0)._s_1.ProducerID = (uint)*param_1;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) =
       ((uint)param_3 << 0x18 ^
       ((*(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) ^ param_4) & 0xffffff ^
       *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4)) & 0xffffff) & 0xfffffff |
       (uint)param_2 << 0x1c;
  uVar1 = ((__return_storage_ptr__->field0_0x0).Key >> 0x21 ^
          (__return_storage_ptr__->field0_0x0).Key) * -0xae502812aa7333;
  uVar1 = (uVar1 >> 0x21 ^ uVar1) * -0x3b314601e57a13ad;
  __return_storage_ptr__->Hash = (ushort)(uVar1 >> 0x21) ^ (ushort)uVar1;
  return __return_storage_ptr__;
}

// GetTaskEvent @ 1489ee030

TRefCountPtr<FBaseGraphTask> __thiscall
FVirtualTextureTranscodeCache::GetTaskEvent
          (FVirtualTextureTranscodeCache *this,FVTTranscodeTileHandle param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  uint uVar7;
  undefined8 in_R8;
  uint uStackX_1c;
  
  uVar7 = (uint)in_R8;
  if (uVar7 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskIndex >= LIST_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x13f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
  }
  uVar5 = 0;
  if ((int)uVar7 < (this->Tasks).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
  }
  pFVar1 = (this->Tasks).AllocatorInstance.Data;
  uStackX_1c = (uint)((ulonglong)in_R8 >> 0x20);
  if (*(ushort *)(pFVar1 + (longlong)(int)uVar7 * 0x40 + 0x38) != uStackX_1c) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskEntry.Magic == InHandle.Magic",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x141,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
  }
  lVar2 = *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x40 + 8);
  *(longlong *)param_1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
    UNLOCK();
  }
  return (TRefCountPtr<FBaseGraphTask>)param_1.PackedData;
}

// IsTaskFinished @ 1489f9cb0

bool __thiscall
FVirtualTextureTranscodeCache::IsTaskFinished
          (FVirtualTextureTranscodeCache *this,FVTTranscodeTileHandle param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uStackX_14;
  
  uVar7 = param_1._s_1.Index;
  if (uVar7 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskIndex >= LIST_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x12a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = 0;
  if ((int)uVar7 < (this->Tasks).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->Tasks).AllocatorInstance.Data;
  uStackX_14 = param_1._s_1.Magic;
  if (*(ushort *)(pFVar1 + (longlong)(int)uVar7 * 0x40 + 0x38) != uStackX_14) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskEntry.Magic == InHandle.Magic",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,300,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar2 = *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x40 + 8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xd0) == '\0')) {
    return false;
  }
  return true;
}

// RemoveFromList @ 148a09760

void __thiscall
FVirtualTextureTranscodeCache::RemoveFromList(FVirtualTextureTranscodeCache *this,int param_1)

{
  short sVar1;
  undefined2 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1 < (this->Tasks).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Tasks).AllocatorInstance.Data;
  if (param_1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= LIST_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.h"
                       ,0x76,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  sVar1 = *(short *)(pFVar3 + (longlong)param_1 * 0x40 + 0x3e);
  uVar2 = *(undefined2 *)(pFVar3 + (longlong)param_1 * 0x40 + 0x3c);
  uVar6 = 0;
  if ((int)sVar1 < (this->Tasks).ArrayNum) {
    uVar6 = (uint)~(int)sVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined2 *)((this->Tasks).AllocatorInstance.Data + (longlong)sVar1 * 0x40 + 0x3c) = uVar2;
  sVar1 = *(short *)(pFVar3 + (longlong)param_1 * 0x40 + 0x3c);
  uVar2 = *(undefined2 *)(pFVar3 + (longlong)param_1 * 0x40 + 0x3e);
  uVar6 = 0;
  if ((int)sVar1 < (this->Tasks).ArrayNum) {
    uVar6 = (uint)~(int)sVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined2 *)((this->Tasks).AllocatorInstance.Data + (longlong)sVar1 * 0x40 + 0x3e) = uVar2;
  *(short *)(pFVar3 + (longlong)param_1 * 0x40 + 0x3e) = (short)param_1;
  *(short *)(pFVar3 + (longlong)param_1 * 0x40 + 0x3c) = (short)param_1;
  return;
}

// RetireOldTasks @ 148a0fce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureTranscodeCache::RetireOldTasks
          (FVirtualTextureTranscodeCache *this,FRHICommandListBase *param_1,
          FVirtualTextureUploadCache *param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined2 uVar4;
  FName FVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  uint *puVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VTP_NumTranscodeRetired> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FVTUploadTileHandle local_res8 [2];
  FRHICommandListBase *local_res10;
  FVirtualTextureUploadCache *local_res18;
  uint local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_58;
  
  uVar10 = GFrameNumberRenderThread;
  local_res10 = param_1;
  local_res18 = param_2;
  if (((this->Tasks).ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar12 = (int)*(short *)((this->Tasks).AllocatorInstance.Data + 0x7c);
joined_r0x000148a0fd51:
  do {
    do {
      uVar16 = uVar12;
      if (uVar16 == 1) {
        return;
      }
      uVar12 = 0;
      if ((int)uVar16 < (this->Tasks).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar19 = (longlong)(int)uVar16;
      pFVar20 = (this->Tasks).AllocatorInstance.Data + lVar19 * 0x40;
      local_res20 = (uint)*(short *)(pFVar20 + 0x3c);
      if ((uVar10 < *(uint *)(pFVar20 + 0x34)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentFrame >= TaskEntry.FrameSubmitted",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                              ,0x1dd,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (uVar10 - *(int *)(pFVar20 + 0x34) < (uint)TranscodeRetireAge) {
        return;
      }
      if ((*(ulonglong *)(pFVar20 + 8) != 0) &&
         (*(char *)(*(ulonglong *)(pFVar20 + 8) + 0xd0) == '\0')) {
        return;
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar15 = StatPtr_STAT_VTP_NumTranscodeRetired;
        if (StatPtr_STAT_VTP_NumTranscodeRetired ==
            (FThreadSafeStaticStat<FStat_STAT_VTP_NumTranscodeRetired>)0x0) {
          pFVar14 = ::FName::FName(&local_60,"STAT_VTP_NumTranscodeRetired");
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_VTP_NumTranscodeRetired>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VTP_NumTranscodeRetired,
                              *pFVar14,L"Num transcodes retired","STATGROUP_VTP","STATCAT_Advanced",
                              L"Virtual Texturing Paging",true,true,ST_int64,false,false,MCR_Invalid
                             );
        }
        FVar5 = *(FName *)FVar15;
        param_1 = local_res10;
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_58.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
          local_58.StatData.Pad[0] = '\x01';
          local_58.StatData.Pad[1] = '\0';
          local_58.StatData.Pad[2] = '\0';
          local_58.StatData.Pad[3] = '\0';
          local_58.StatData.Pad[4] = '\0';
          local_58.StatData.Pad[5] = '\0';
          local_58.StatData.Pad[6] = '\0';
          local_58.StatData.Pad[7] = '\0';
          local_68 = FVar5;
          local_58.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,&local_58);
          FStatsTrace::Add(&local_68,1);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
            param_1 = local_res10;
            param_2 = local_res18;
          }
          else {
            param_1 = local_res10;
            param_2 = local_res18;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
              param_1 = local_res10;
              param_2 = local_res18;
            }
          }
        }
      }
      *(short *)(pFVar20 + 0x38) = *(short *)(pFVar20 + 0x38) + 1;
      puVar6 = *(undefined8 **)(pFVar20 + 8);
      if (puVar6 != (undefined8 *)0x0) {
        *(ulonglong *)(pFVar20 + 8) = 0;
        LOCK();
        piVar1 = (int *)(puVar6 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar6)();
        }
      }
      local_res8[0].Index = *(uint *)(pFVar20 + 0x10);
      uVar17 = *(ulonglong *)pFVar20 >> 0x3c;
      if ((uVar17 & 1) != 0) {
        FVirtualTextureUploadCache::CancelTile(param_2,param_1,local_res8);
      }
      local_res8[0].Index = *(uint *)(pFVar20 + 0x14);
      if ((uVar17 & 2) != 0) {
        FVirtualTextureUploadCache::CancelTile(param_2,param_1,local_res8);
      }
      local_res8[0].Index = *(uint *)(pFVar20 + 0x18);
      if ((uVar17 & 4) != 0) {
        FVirtualTextureUploadCache::CancelTile(param_2,param_1,local_res8);
      }
      local_res8[0].Index = *(uint *)(pFVar20 + 0x1c);
      if ((uVar17 & 8) != 0) {
        FVirtualTextureUploadCache::CancelTile(param_2,param_1,local_res8);
      }
      local_res8[0].Index = *(uint *)(pFVar20 + 0x2c);
      uVar12 = 0;
      if ((int)uVar16 < (this->Tasks).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (this->Tasks).AllocatorInstance.Data;
      if (((int)uVar16 < 2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= LIST_COUNT",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.h"
                              ,0x76,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      sVar3 = *(short *)(pFVar7 + lVar19 * 0x40 + 0x3e);
      uVar4 = *(undefined2 *)(pFVar7 + lVar19 * 0x40 + 0x3c);
      uVar12 = 0;
      if ((int)sVar3 < (this->Tasks).ArrayNum) {
        uVar12 = (uint)~(int)sVar3 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(undefined2 *)((this->Tasks).AllocatorInstance.Data + (longlong)sVar3 * 0x40 + 0x3c) = uVar4;
      sVar3 = *(short *)(pFVar7 + lVar19 * 0x40 + 0x3c);
      uVar4 = *(undefined2 *)(pFVar7 + lVar19 * 0x40 + 0x3e);
      uVar12 = 0;
      if ((int)sVar3 < (this->Tasks).ArrayNum) {
        uVar12 = (uint)~(int)sVar3 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(undefined2 *)((this->Tasks).AllocatorInstance.Data + (longlong)sVar3 * 0x40 + 0x3e) = uVar4;
      *(short *)(pFVar7 + lVar19 * 0x40 + 0x3e) = (short)uVar16;
      *(short *)(pFVar7 + lVar19 * 0x40 + 0x3c) = (short)uVar16;
      AddToList(this,0,uVar16);
      if (uVar16 < (this->TileIDToTaskIndex).IndexSize) {
        uVar17 = (ulonglong)*(ushort *)(pFVar20 + 0x3a) &
                 (ulonglong)(this->TileIDToTaskIndex).HashMask;
        puVar8 = (this->TileIDToTaskIndex).Hash;
        puVar18 = puVar8 + uVar17;
        uVar12 = puVar8[uVar17];
        if (uVar12 == uVar16) {
          uVar12 = (this->TileIDToTaskIndex).NextIndex[uVar16];
LAB_148a101fc:
          *puVar18 = uVar12;
        }
        else if (uVar12 != 0xffffffff) {
          puVar8 = (this->TileIDToTaskIndex).NextIndex;
          do {
            puVar18 = puVar8 + uVar12;
            uVar12 = puVar8[uVar12];
            if (uVar12 == uVar16) {
              uVar12 = puVar8[uVar16];
              goto LAB_148a101fc;
            }
          } while (uVar12 != 0xffffffff);
        }
      }
      uVar12 = (*(uint *)(pFVar20 + 0x30) >> 0x10 ^ *(uint *)(pFVar20 + 0x30)) * -0x7a143595;
      uVar13 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar12 = local_res20;
      param_2 = local_res18;
    } while ((this->ProducerToTaskIndex).IndexSize <= uVar16);
    uVar13 = (uVar13 >> 0x10 ^ uVar13) & (this->ProducerToTaskIndex).HashMask;
    puVar8 = (this->ProducerToTaskIndex).Hash;
    puVar18 = puVar8 + uVar13;
    uVar13 = puVar8[uVar13];
    if (uVar13 == uVar16) {
      uVar16 = (this->ProducerToTaskIndex).NextIndex[uVar16];
LAB_148a1026c:
      *puVar18 = uVar16;
      goto joined_r0x000148a0fd51;
    }
    if (uVar13 != 0xffffffff) {
      puVar8 = (this->ProducerToTaskIndex).NextIndex;
      do {
        puVar18 = puVar8 + uVar13;
        uVar13 = puVar8[uVar13];
        if (uVar13 == uVar16) {
          uVar16 = puVar8[uVar16];
          goto LAB_148a1026c;
        }
      } while (uVar13 != 0xffffffff);
    }
  } while( true );
}

// SubmitTask @ 148a19220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FVTTranscodeTileHandle __thiscall
FVirtualTextureTranscodeCache::SubmitTask
          (FVirtualTextureTranscodeCache *this,FRHICommandListBase *param_1,
          FVirtualTextureUploadCache *param_2,FVTTranscodeKey *param_3,
          FVirtualTextureProducerHandle *param_4,FVTTranscodeParams *param_5,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_6)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  FThreadSafeCounter *pFVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  int iVar5;
  atomic<unsigned_int> aVar6;
  uchar uVar7;
  short sVar8;
  ushort uVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  code *pcVar12;
  FVTTranscodeParams *pFVar13;
  bool bVar14;
  uint uVar15;
  FVTUploadTileHandle FVar16;
  FVTTranscodeTileHandle FVar17;
  undefined4 extraout_var;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar18;
  uint uVar19;
  ulonglong uVar20;
  char cVar21;
  FVirtualTextureBuiltData *this_01;
  longlong lVar22;
  longlong lVar23;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> in_stack_00000040;
  undefined1 auStackY_208 [32];
  longlong in_stack_fffffffffffffe18;
  char local_1d8;
  EExtendedTaskPriority local_1d7;
  ETaskPriority local_1d6 [2];
  uint local_1d4;
  FVTTranscodeParams *local_1d0;
  int local_1c8;
  undefined1 local_1c4 [44];
  FScriptContainerElement local_198 [16];
  FTranscodeTask local_188;
  FVTUploadTileBuffer local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1d0 = param_5;
  local_1c4._12_8_ = param_2;
  local_1c4._20_8_ = param_3;
  local_1c4._36_8_ = param_1;
  if ((this->Tasks).ArrayNum < 1) {
    in_stack_fffffffffffffe18 = 0;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      FVar17.PackedData = (*pcVar12)();
      return (FVTTranscodeTileHandle)FVar17.PackedData;
    }
  }
  sVar8 = *(short *)((this->Tasks).AllocatorInstance.Data + 0x3c);
  uVar19 = (uint)sVar8;
  if (sVar8 == 0) {
    uVar19 = (this->Tasks).ArrayNum;
    piVar1 = &(this->Tasks).ArrayMax;
    if (uVar19 == *piVar1) {
      local_1d4 = uVar19;
      uVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,(ForAnyElementType *)this,piVar1);
    }
    lVar23 = (longlong)(int)uVar19;
    (this->Tasks).ArrayNum = uVar19 + 1;
    lVar22 = lVar23 * 0x40;
    local_1d4 = uVar19;
    DefaultConstructItems<FVirtualTextureTranscodeCache::FTaskEntry,int>
              ((this->Tasks).AllocatorInstance.Data + lVar22,1);
    uVar15 = 0;
    if ((int)uVar19 < (this->Tasks).ArrayNum) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       in_stack_fffffffffffffe18 = lVar23, bVar14)) {
      pcVar12 = (code *)swi(3);
      FVar17.PackedData = (*pcVar12)();
      return (FVTTranscodeTileHandle)FVar17.PackedData;
    }
    pFVar10 = (this->Tasks).AllocatorInstance.Data;
    *(short *)(pFVar10 + lVar22 + 0x3e) = (short)uVar19;
    *(short *)(pFVar10 + lVar22 + 0x3c) = (short)uVar19;
    param_5 = local_1d0;
  }
  else {
    local_1d4 = uVar19;
    RemoveFromList(this,uVar19);
  }
  AddToList(this,1,uVar19);
  FHashTable::Add(&this->TileIDToTaskIndex,(uint)*(ushort *)(param_4 + 2),uVar19);
  uVar15 = (*(uint *)&(param_5->Data).Reference >> 0x10 ^ *(uint *)&(param_5->Data).Reference) *
           -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  FHashTable::Add(&this->ProducerToTaskIndex,uVar15 >> 0x10 ^ uVar15,uVar19);
  uVar15 = 0;
  if ((int)uVar19 < (this->Tasks).ArrayNum) {
    uVar15 = ~uVar19 >> 0x1f;
  }
  if (uVar15 == 0) {
    in_stack_fffffffffffffe18 = (longlong)(int)uVar19;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      FVar17.PackedData = (*pcVar12)();
      return (FVTTranscodeTileHandle)FVar17.PackedData;
    }
  }
  local_1d0 = (FVTTranscodeParams *)
              ((this->Tasks).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x40);
  pFVar10 = (FScriptContainerElement *)((longlong)local_1d0 + 8);
  *(undefined8 *)local_1d0 = *(undefined8 *)param_4;
  *(undefined4 *)((longlong)local_1d0 + 0x30) = *(undefined4 *)&(param_5->Data).Reference;
  *(undefined2 *)((longlong)local_1d0 + 0x3a) = *(undefined2 *)(param_4 + 2);
  *(uint *)((longlong)local_1d0 + 0x34) = GFrameNumberRenderThread;
  *(undefined8 *)((longlong)local_1d0 + 0x10) = 0;
  *(undefined8 *)((longlong)local_1d0 + 0x18) = 0;
  *(undefined8 *)((longlong)local_1d0 + 0x20) = 0;
  *(undefined8 *)((longlong)local_1d0 + 0x28) = 0;
  local_1c4._28_8_ = pFVar10;
  if (((*(longlong *)pFVar10 != 0) && (*(char *)(*(longlong *)pFVar10 + 0xd0) == '\0')) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!TaskEntry.GraphEvent || TaskEntry.GraphEvent->IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                          ,0x18c,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    FVar17.PackedData = (*pcVar12)();
    return (FVTTranscodeTileHandle)FVar17.PackedData;
  }
  puVar11 = *(undefined8 **)pFVar10;
  if (puVar11 != (undefined8 *)0x0) {
    *(longlong *)pFVar10 = 0;
    LOCK();
    piVar1 = (int *)(puVar11 + 6);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  if (in_stack_00000040 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    iVar5 = *(int *)((longlong)in_stack_00000040 + 0x28);
    FVar18 = in_stack_00000040;
    if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)in_stack_00000040 + 0x20) !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar18 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)
                ((longlong)in_stack_00000040 + 0x20);
    }
    FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar18 + (longlong)iVar5 * 8);
    while( true ) {
      if (*(int *)((longlong)in_stack_00000040 + 0x28) != iVar5) {
        local_1d8 = '\0';
        `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1d8);
      }
      if (FVar18 == FVar4) break;
      if (*(char *)(*(longlong *)FVar18 + 0xd0) == '\0') goto LAB_148a1951a;
      FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar18 + 8);
    }
    in_stack_00000040 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  }
LAB_148a1951a:
  uVar20 = 0;
  uVar19 = *(uint *)&(param_6->AllocatorInstance).SecondaryData;
  lVar22 = *(longlong *)((param_6->AllocatorInstance).InlineData + 0x10);
  uVar15 = 0;
  if ((int)uVar19 < *(int *)(lVar22 + 0xb0)) {
    uVar15 = ~uVar19 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (in_stack_fffffffffffffe18 = (longlong)(int)uVar19,
     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    FVar17.PackedData = (*pcVar12)();
    return (FVTTranscodeTileHandle)FVar17.PackedData;
  }
  pFVar13 = local_1d0;
  this_01 = *(FVirtualTextureBuiltData **)((param_6->AllocatorInstance).InlineData + 0x10);
  cVar21 = '\0';
  lVar22 = *(longlong *)(lVar22 + 0xa8);
  local_1d8 = '\0';
  local_d8.Memory = (void *)0x0;
  local_d8.MemorySize = 0;
  local_d8.Stride = 0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  local_1c8 = this_01->TileSize + this_01->TileBorderSize * 2;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60 = 0;
  if (this_01->NumLayers != 0) {
    do {
      uVar15 = (uint)uVar20;
      if ((*(byte *)((longlong)&param_6->ArrayNum + 1) & (byte)(1 << ((byte)uVar20 & 0x1f))) != 0) {
        uVar7 = this_01->LayerTypes[uVar20].Value;
        FVirtualTextureBuiltData::GetTileOffset
                  (this_01,(uint)(byte)param_6->ArrayNum,
                   *(uint *)&(param_6->AllocatorInstance).SecondaryData.field_0x4,uVar15);
        FVirtualTextureBuiltData::GetTileOffset
                  (*(FVirtualTextureBuiltData **)((param_6->AllocatorInstance).InlineData + 0x10),
                   (uint)(byte)param_6->ArrayNum,
                   *(uint *)&(param_6->AllocatorInstance).SecondaryData.field_0x4,uVar15 + 1);
        in_stack_fffffffffffffe18 =
             CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe18 >> 8),uVar7);
        FVar16 = FVirtualTextureUploadCache::PrepareTileForUpload
                           ((FVirtualTextureUploadCache *)local_1c4._20_8_,
                            (FRHICommandListBase *)local_1c4,(FVTUploadTileBuffer *)local_1c4._12_8_
                            ,(char)&local_d8 + (char)(uVar20 << 4),(uint)in_stack_fffffffffffffe18);
        *(undefined4 *)((longlong)pFVar13 + uVar20 * 4 + 0x10) =
             *(undefined4 *)CONCAT44(extraout_var,FVar16.Index);
        if ((in_stack_00000040 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) ||
           (cVar21 = local_1d8,
           *(char *)((longlong)(int)uVar19 * 0x90 + lVar22 + 0x84 + uVar20) != '\x04')) {
          local_1d8 = '\x01';
          cVar21 = '\x01';
        }
      }
      this_01 = *(FVirtualTextureBuiltData **)((param_6->AllocatorInstance).InlineData + 0x10);
      uVar20 = (ulonglong)(uVar15 + 1);
    } while (uVar15 + 1 < this_01->NumLayers);
    if (cVar21 != '\0') {
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x188,8);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)in_stack_00000040);
        this_00->_padding_ = (longlong)&___7__TGraphTask_UFTranscodeTask____6B_;
      }
      FTranscodeTask::FTranscodeTask
                ((FTranscodeTask *)(this_00 + 1),&local_d8,(FVTTranscodeParams *)param_6);
      UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_1d6,&local_1d7);
      UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_1d6[0],local_1d7,None);
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x188);
      if ((FScriptContainerElement *)local_1c4._28_8_ == local_198) {
        if (this_00 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &this_00->RefCount;
          aVar6 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar6 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_00->_padding_)(this_00,1);
          }
        }
      }
      else {
        puVar11 = *(undefined8 **)local_1c4._28_8_;
        *(FTaskBase **)local_1c4._28_8_ = this_00;
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar11 + 6);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
      }
      goto LAB_148a19809;
    }
  }
  FTranscodeTask::FTranscodeTask(&local_188,&local_d8,(FVTTranscodeParams *)param_6);
  FTranscodeTask::DoTask(&local_188,false);
  if (local_188.Params.Codec != (FVirtualTextureCodec *)0x0) {
    LOCK();
    (local_188.Params.Codec)->TaskRefs =
         (atomic<unsigned_int>)((int)(local_188.Params.Codec)->TaskRefs + -1);
    UNLOCK();
  }
  if (local_188.Params.Data.Reference != (IMemoryReadStream *)0x0) {
    LOCK();
    pFVar3 = &(local_188.Params.Data.Reference)->NumRefs;
    iVar5 = pFVar3->Counter;
    pFVar3->Counter = pFVar3->Counter + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)((local_188.Params.Data.Reference)->_padding_ + 0x20))
                (local_188.Params.Data.Reference,1);
    }
  }
LAB_148a19809:
  uVar9 = *(ushort *)((longlong)local_1d0 + 0x38);
  *(uint *)&((FMemStackBase *)local_1c4._36_8_)->Top = local_1d4;
  *(uint *)((longlong)&((FMemStackBase *)local_1c4._36_8_)->Top + 4) = (uint)uVar9;
  return (FVTTranscodeTileHandle)local_1c4._36_8_;
}

// WaitTaskFinished @ 148a21010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualTextureTranscodeCache::WaitTaskFinished
          (FVirtualTextureTranscodeCache *this,FVTTranscodeTileHandle param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTaskGraphInterface *this_00;
  uint uVar5;
  uint uStackX_14;
  
  uVar5 = param_1._s_1.Index;
  if (uVar5 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskIndex >= LIST_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x133,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if ((int)uVar5 < (this->Tasks).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Tasks).AllocatorInstance.Data;
  uStackX_14 = param_1._s_1.Magic;
  if (*(ushort *)(pFVar1 + (longlong)(int)uVar5 * 0x40 + 0x38) != uStackX_14) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskEntry.Magic == InHandle.Magic",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x135,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(pFVar1 + (longlong)(int)uVar5 * 0x40 + 8) != 0) {
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (this_00,(TRefCountPtr<FBaseGraphTask> *)(pFVar1 + (longlong)(int)uVar5 * 0x40 + 8),
               (Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local);
  }
  return;
}

