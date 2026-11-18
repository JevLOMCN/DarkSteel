// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 23

// Construct<FSlatePostSettings> @ 145fd5a10

void __cdecl UE::CoreUObject::Private::Construct<FSlatePostSettings>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FSlatePostSettings> @ 145fd5a40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlatePostSettings>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FSlatePostSettings> @ 145fd5a70

void __cdecl UE::CoreUObject::Private::Destruct<FSlatePostSettings>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSlatePostSettings> @ 145fd5a90

bool __cdecl
UE::CoreUObject::Private::Copy<FSlatePostSettings>(void *param_1,void *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *pvVar3;
  ForAnyElementType *pFVar4;
  byte *pbVar5;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    pbVar5 = param_1;
    do {
      *pbVar5 = *pbVar5 ^ (*pbVar5 ^ pbVar5[(longlong)param_2 - (longlong)param_1]) & 1;
      pbVar5[1] = *(byte *)((longlong)pvVar3 + 1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar3 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar3 + 8));
      }
      pFVar4 = (ForAnyElementType *)(pbVar5 + 0x10);
      *(undefined8 *)(pbVar5 + 8) = *(undefined8 *)((longlong)pvVar3 + 8);
      if (pFVar4 != (ForAnyElementType *)((longlong)pvVar3 + 0x10)) {
        iVar2 = *(int *)((longlong)pvVar3 + 0x18);
        pbVar1 = pbVar5 + 0x1c;
        _Src = ((ForAnyElementType *)((longlong)pvVar3 + 0x10))->Data;
        *(int *)(pbVar5 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*(int *)pbVar1 == 0)) {
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,*(int *)pbVar1,pFVar4,iVar2,(int *)pbVar1);
          if (iVar2 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar3 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar3 + 0x20));
      }
      *(undefined8 *)(pbVar5 + 0x20) = *(undefined8 *)((longlong)pvVar3 + 0x20);
      pbVar5[0x28] = pbVar5[0x28] ^ (pbVar5[0x28] ^ *(byte *)((longlong)pvVar3 + 0x28)) & 1;
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x30);
      pbVar5 = pbVar5 + 0x30;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FSlateRHIResourceManager,FSlateRHIResourceManager_*_&> @ 145fdc620

FSlateRHIResourceManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateRHIResourceManager,FSlateRHIResourceManager_*_&>
          (FSlateRHIResourceManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<USlateFXSubsystem,USlateFXSubsystem_*_&> @ 145fdc640

USlateFXSubsystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<USlateFXSubsystem,USlateFXSubsystem_*_&>
          (USlateFXSubsystem **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_> @ 145fe42a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_>
          (ushort param_1,ForElementType<FSceneInterface_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_> @ 145fe4360

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_>
          (ushort param_1,ForElementType<TRefCountPtr<FRHITexture>_> *param_2,int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<FRHITexture>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateCachedElementData_*>_> @ 145fe4430

/* WARNING: Removing unreachable block (ram,0x000145fe4477) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateCachedElementData_*>_>
          (ushort param_1,ForElementType<FSlateCachedElementData_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FSlateCachedElementData_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateCachedFastPathRenderingData_*>_> @ 145fe44c0

/* WARNING: Removing unreachable block (ram,0x000145fe4507) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateCachedFastPathRenderingData_*>_>
          (ushort param_1,ForElementType<FSlateCachedFastPathRenderingData_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FSlateCachedFastPathRenderingData_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderThreadUpdateContext>_> @ 145fe4550

/* WARNING: Removing unreachable block (ram,0x000145fe4597) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderThreadUpdateContext>_>
          (ushort param_1,ForElementType<FRenderThreadUpdateContext> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FRenderThreadUpdateContext>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>_> @ 145fe45e0

/* WARNING: Removing unreachable block (ram,0x000145fe4627) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>_>
          (ushort param_1,ForElementType<FSlateDrawWindowPassInputs> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FSlateDrawWindowPassInputs>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>_> @ 145fe4670

/* WARNING: Removing unreachable block (ram,0x000145fe46b7) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>_>
          (ushort param_1,ForElementType<FSlateElementsBuffers> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntPoint<int>_>_> @ 145fe4820

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntPoint<int>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TIntPoint<int>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x100;
    uVar8 = (ulonglong)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x101) {
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
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TIntPoint<int>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<UE::Math::TVector4<float>_>_> @ 145fe4900

int __cdecl
UE::Core::Private::ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector4<float>_> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  TVector4<float> *_Src;
  uint uVar3;
  FRDGAllocator *this;
  TVector4<float> *_Dst;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_1;
  uVar1 = *param_5;
  iVar2 = *param_6;
  uVar3 = uVar1 + param_3;
  *param_5 = uVar3;
  if ((uint)param_3 <= iVar2 - uVar1) {
    return uVar1;
  }
  if ((int)uVar3 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (iVar2 == 0) {
    uVar4 = 4;
    if (4 < (ulonglong)(longlong)(int)uVar3) {
      uVar4 = uVar3;
    }
  }
  else {
    uVar4 = (int)((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10 + uVar3;
  }
  _Src = param_4->Data;
  if ((int)uVar4 < (int)uVar3) {
    uVar4 = 0x7fffffff;
  }
  else {
    if (uVar4 == 0) goto LAB_145fe49d1;
    if ((int)uVar4 < 0) goto LAB_145fe49ee;
  }
  if (0x7ffffffe < uVar5 - 1) {
LAB_145fe49ee:
                    /* WARNING: Subroutine does not return */
    RenderCore::Private::OnInvalidRDGAllocatorNum(uVar4,uVar5);
  }
  this = FRDGAllocator::GetTLS();
  _Dst = FMemStackBase::Alloc(&this->MemStack,(longlong)(int)(uVar4 * param_1),0x10);
  param_4->Data = _Dst;
  if ((_Src != (TVector4<float> *)0x0) && (uVar1 != 0)) {
    uVar3 = uVar1;
    if ((int)uVar4 < (int)uVar1) {
      uVar3 = uVar4;
    }
    memcpy(_Dst,_Src,(longlong)(int)uVar3 * uVar5);
  }
LAB_145fe49d1:
  *param_6 = uVar4;
  return uVar1;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>_> @ 145fe4a10

int __cdecl
UE::Core::Private::ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSlateSceneView> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntPoint<int>_>_> @ 145fe4ab0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntPoint<int>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TIntPoint<int>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x100;
  if (0x100 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TIntPoint<int>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>_> @ 145fe4b70

void __cdecl
UE::Core::Private::ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>_>
          (uint param_1,uint param_2,ForElementType<FSlateSceneView> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_> @ 145fe4be0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSceneInterface_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_> @ 145fe4c60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<TRefCountPtr<FRHITexture>_> *param_4
          ,int param_5,int *param_6)

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
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<FRHITexture>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderThreadUpdateContext>_> @ 145fe4ce0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderThreadUpdateContext>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRenderThreadUpdateContext> *param_4
          ,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FRenderThreadUpdateContext>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>_> @ 145fe4d10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSlateDrawWindowPassInputs> *param_4
          ,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FSlateDrawWindowPassInputs>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>_> @ 145fe4d40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSlateElementsBuffers> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

