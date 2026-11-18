// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// FD3D12GPUFence @ 1459ee320

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12GPUFence * __thiscall FD3D12GPUFence::FD3D12GPUFence(FD3D12GPUFence *this,FName param_1)

{
  TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar7;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_GPUFence);
  this->_padding_ = (longlong)&___7FRHIGPUFence__6B_;
  pTVar1 = &this->SyncPoints;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12GPUFence__6B_;
  piVar2 = &(this->SyncPoints).ArrayNum;
  *(FName *)((longlong)&this->_padding_ + 4) = param_1;
  piVar3 = &(this->SyncPoints).ArrayMax;
  (this->SyncPoints).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0;
  *piVar2 = 0;
  *piVar3 = 8;
  FVar7 = (this->SyncPoints).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    FVar7 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)pTVar1;
  }
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>((TRefCountPtr<FD3D12SyncPoint> *)FVar7,0);
  (this->SyncPoints).ArrayNum = 0;
  uVar4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar6 = (ulonglong)uVar4 - ((ulonglong)(uVar4 >> 1) & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar4 = (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_>
                    (8,8,uVar4,&pTVar1->AllocatorInstance,piVar2,piVar3);
  FVar7 = (this->SyncPoints).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    FVar7 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)pTVar1;
  }
  DefaultConstructItems<TRefCountPtr<FD3D12SyncPoint>,int>
            ((void *)((longlong)FVar7 + (longlong)iVar5 * 8),uVar4);
  return this;
}

// Clear @ 145a06f00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12GPUFence::Clear(FD3D12GPUFence *this)

{
  TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar7;
  
  pTVar1 = &this->SyncPoints;
  piVar2 = &(this->SyncPoints).ArrayMax;
  iVar5 = (this->SyncPoints).ArrayNum;
  piVar3 = &(this->SyncPoints).ArrayNum;
  FVar7 = (this->SyncPoints).AllocatorInstance.SecondaryData;
  if ((this->SyncPoints).ArrayMax < 0) {
    if (FVar7 == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)pTVar1;
    }
    DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>((TRefCountPtr<FD3D12SyncPoint> *)FVar7,iVar5);
    *piVar3 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_>
                (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    if (FVar7 == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)pTVar1;
    }
    DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>((TRefCountPtr<FD3D12SyncPoint> *)FVar7,iVar5);
    *piVar3 = 0;
  }
  uVar4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar6 = (ulonglong)uVar4 - ((ulonglong)(uVar4 >> 1) & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar4 = (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FD3D12SyncPoint>_>_>
                    (8,8,uVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  FVar7 = (this->SyncPoints).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    FVar7 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)pTVar1;
  }
  DefaultConstructItems<TRefCountPtr<FD3D12SyncPoint>,int>
            ((void *)((longlong)FVar7 + (longlong)iVar5 * 8),uVar4);
  return;
}

// Poll @ 145a205a0

/* WARNING: Removing unreachable block (ram,0x000145a205cf) */

bool __thiscall FD3D12GPUFence::Poll(FD3D12GPUFence *this,FRHIGPUMask param_1)

{
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar8;
  uint uVar9;
  
  bVar6 = false;
  uVar7 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  uVar9 = 0x20;
  if (param_1.GPUMask != 0) {
    uVar9 = uVar7;
  }
  if (param_1.GPUMask != 0) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->SyncPoints).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar1 = (this->SyncPoints).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)&this->SyncPoints;
      if (FVar1 != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
        FVar8 = FVar1;
      }
      if (*(longlong *)((longlong)(int)uVar9 * 8 + (longlong)FVar8) != 0) {
        uVar7 = 0;
        if ((int)uVar9 < (this->SyncPoints).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar1 = (this->SyncPoints).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)&this->SyncPoints;
        if (FVar1 != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
          FVar8 = FVar1;
        }
        lVar2 = *(longlong *)((longlong)(int)uVar9 * 8 + (longlong)FVar8);
        if ((*(longlong *)(lVar2 + 0x28) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GraphEvent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.h"
                               ,0x6d,
                               L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (*(char *)(*(longlong *)(lVar2 + 0x28) + 0xd0) == '\0') {
          return false;
        }
        bVar6 = true;
      }
      param_1.GPUMask = param_1.GPUMask & ~(1 << ((byte)uVar9 & 0x1f));
      uVar9 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
    } while (param_1.GPUMask != 0);
  }
  return bVar6;
}

// Poll @ 145a20740

bool __thiscall FD3D12GPUFence::Poll(FD3D12GPUFence *this)

{
  bool bVar1;
  
  bVar1 = Poll(this,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  return bVar1;
}

// Wait @ 145a37750

/* WARNING: Removing unreachable block (ram,0x000145a37772) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12GPUFence::Wait(FD3D12GPUFence *this,FRHICommandListImmediate *param_1,FRHIGPUMask param_2)

{
  TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar6 = 0;
  if (param_2.GPUMask != 0) {
    for (; (param_2.GPUMask >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  uVar8 = 0x20;
  if (param_2.GPUMask != 0) {
    uVar8 = uVar6;
  }
  if (param_2.GPUMask != 0) {
    pTVar1 = &this->SyncPoints;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->SyncPoints).ArrayNum) {
        uVar6 = uVar9;
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
      FVar2 = (this->SyncPoints).AllocatorInstance.SecondaryData;
      lVar10 = (longlong)(int)uVar8;
      FVar7 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)pTVar1;
      if (FVar2 != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
        FVar7 = FVar2;
      }
      if (*(longlong *)((longlong)FVar7 + lVar10 * 8) != 0) {
        uVar6 = 0;
        if ((int)uVar8 < (this->SyncPoints).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2 = (this->SyncPoints).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)pTVar1;
        if (FVar2 != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
          FVar7 = FVar2;
        }
        lVar3 = *(longlong *)((longlong)FVar7 + lVar10 * 8);
        if ((*(longlong *)(lVar3 + 0x28) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("GraphEvent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.h"
                               ,0x6d,
                               L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(char *)(*(longlong *)(lVar3 + 0x28) + 0xd0) == '\0') {
          uVar6 = 0;
          if ((int)uVar8 < (this->SyncPoints).ArrayNum) {
            uVar6 = uVar9;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = (this->SyncPoints).AllocatorInstance.SecondaryData;
          FVar7 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)pTVar1;
          if (FVar2 != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
            FVar7 = FVar2;
          }
          FD3D12SyncPoint::Wait(*(FD3D12SyncPoint **)((longlong)FVar7 + lVar10 * 8));
        }
      }
      param_2.GPUMask = param_2.GPUMask & ~(1 << ((byte)uVar8 & 0x1f));
      uVar8 = 0;
      if (param_2.GPUMask != 0) {
        for (; (param_2.GPUMask >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    } while (param_2.GPUMask != 0);
  }
  return;
}

