// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 167

// AddUniqueImpl<IComputeSystem_*_const_&> @ 144704cd0

int __thiscall
TArray<IComputeSystem_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<IComputeSystem_*_const_&>
          (TArray<IComputeSystem_*,TSizedDefaultAllocator<32>_> *this,IComputeSystem **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(IComputeSystem **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(IComputeSystem **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 144728d60

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *
__thiscall
TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  (this->AllocatorInstance).Data = (FVisibleMeshDrawCommand *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 14472ebf0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
~TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  undefined1 *puVar1;
  int iVar2;
  FVisibleMeshDrawCommand *pFVar3;
  longlong lVar4;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar5;
  
  pFVar3 = (this->AllocatorInstance).Data;
  if (pFVar3 == (FVisibleMeshDrawCommand *)0x0) {
    return;
  }
  if (pFVar3 != (FVisibleMeshDrawCommand *)0x0) {
    puVar1 = &pFVar3[-1].field_0x40;
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar5 = (int *)(puVar1 + -(ulonglong)*(uint *)puVar1);
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar4 = *(longlong *)(piVar5 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar5,0,0);
      if (lVar4 - (longlong)piVar5 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar5);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar5);
      return;
    }
  }
  return;
}

// operator= @ 1447312e0

TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
          (void *this,
          TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<EPixelFormat> FVar2;
  int *piVar3;
  void *_Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = (int *)((longlong)this + 0x14);
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<EPixelFormat>)0x0) {
      param_1 = (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                FVar2;
    }
    *(int *)((longlong)this + 0x10) = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 1;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,iVar1,*piVar3,this,iVar1,piVar3);
    _Dst = this;
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      _Dst = *(void **)((longlong)this + 8);
    }
    if (iVar1 != 0) {
      memcpy(_Dst,param_1,(longlong)iVar1);
    }
  }
  return this;
}

// SetNum @ 14478e220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<`FSceneRenderer::RenderCustomDepthPass'::__l2::FTempViewParams,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::SetNum(void *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FTempViewParams *_Dst;
  uint uVar6;
  
  piVar1 = (int *)((longlong)this + 8);
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<_FSceneRenderer::RenderCustomDepthPass_::__l2::FTempViewParams>_>
                      (0x30,0x10,param_1 - iVar5,this,piVar1,(int *)((longlong)this + 0xc));
    DefaultConstructItems<_FSceneRenderer::RenderCustomDepthPass_::__l2::FTempViewParams,int>
              ((void *)((longlong)iVar4 * 0x30 + *(longlong *)this),param_1 - iVar5);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar5) {
    uVar6 = iVar5 - param_1;
    if (((int)(uVar6 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (FTempViewParams *)((longlong)param_1 * 0x30 + *(longlong *)this);
      DestructItems<_FSceneRenderer::RenderCustomDepthPass_::__l2::FTempViewParams,int>(_Dst,uVar6);
      iVar5 = (*piVar1 - uVar6) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 * 0x30);
      }
      iVar5 = *piVar1;
      *piVar1 = iVar5 - uVar6;
      if (param_2 == Default) {
        UE::Core::Private::
        ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<_FSceneRenderer::RenderCustomDepthPass_::__l2::FTempViewParams>_>
                  (0x30,0x10,this,iVar5 - uVar6,(int *)((longlong)this + 0xc));
      }
    }
  }
  return;
}

// ~TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> @ 1447f5e80

void __thiscall
TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
~TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          (TArray<FConvexVolume,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this)

{
  ForElementType<FConvexVolume> *pFVar1;
  ForElementType<FConvexVolume> FVar2;
  ForElementType<FConvexVolume> FVar3;
  
  pFVar1 = &(this->AllocatorInstance).SecondaryData;
  FVar2 = *pFVar1;
  FVar3 = (ForElementType<FConvexVolume>)this;
  if (FVar2 != (ForElementType<FConvexVolume>)0x0) {
    FVar3 = FVar2;
  }
  DestructItems<FConvexVolume,int>((FConvexVolume *)FVar3,this->ArrayNum);
  FVar2 = *pFVar1;
  if (FVar2 != (ForElementType<FConvexVolume>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}

// ~TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> @ 1447f5ec0

void __thiscall
TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
~TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  ForElementType<UE::Tasks::Private::FTaskHandle> FVar1;
  ForElementType<UE::Tasks::Private::FTaskHandle> FVar2;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar2 = (ForElementType<UE::Tasks::Private::FTaskHandle>)this;
  if (FVar1 != (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
    FVar2 = FVar1;
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)FVar2,this->ArrayNum);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
    FMemory::Free((void *)FVar1);
    return;
  }
  return;
}

// operator= @ 1447f8dc0

TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_> *this,
          TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 6);
    }
  }
  return this;
}

// SetNum @ 14482f0f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FColor,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FColor,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14482f220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FScreenPassTexture,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FScreenPassTexture,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this
          ,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FScreenPassTexture> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FScreenPassTexture> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>_>
                      (0x18,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FScreenPassTexture>)0x0) {
      this = (TArray<FScreenPassTexture,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    DefaultConstructItems<FScreenPassTexture,int>
              ((void *)((longlong)this + (longlong)iVar5 * 0x18),param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
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
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FScreenPassTexture>)this;
        if (FVar2 != (ForElementType<FScreenPassTexture>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 0x18),(longlong)iVar6 * 0x18
                 );
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>_>
                    (0x18,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14482f380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FFloat16Color,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FFloat16Color,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,2,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> @ 14485a530

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = param_1->ArrayNum;
  this->ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  return this;
}

// TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> @ 14485a560

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> @ 14485d8a0

void __thiscall
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// RemoveAtSwapImpl @ 1448911f0

void __thiscall
TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x50;
  FIoRequest::~FIoRequest((FIoRequest *)(_Dst + 0x38));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x50,(longlong)iVar2 * 0x50);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 1448a03c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_> @ 1448ec300

TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_>::
TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_>
          (TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_> @ 1448edb30

void __thiscall
TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_>::
~TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_>
          (TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddDefaulted_GetRef @ 1448fd2f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGlobalDistanceFieldPackedClipmap * __thiscall
TArray<FGlobalDistanceFieldPackedClipmap,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
AddDefaulted_GetRef(TArray<FGlobalDistanceFieldPackedClipmap,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
                    *this)

{
  ForElementType<FGlobalDistanceFieldPackedClipmap> FVar1;
  int iVar2;
  FGlobalDistanceFieldPackedClipmap *pFVar3;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FGlobalDistanceFieldPackedClipmap>_>
                      (0x390,0x10,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FGlobalDistanceFieldPackedClipmap>)0x0) {
    this = (TArray<FGlobalDistanceFieldPackedClipmap,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  pFVar3 = (FGlobalDistanceFieldPackedClipmap *)((longlong)this + (longlong)iVar2 * 0x390);
  DefaultConstructItems<FGlobalDistanceFieldPackedClipmap,int>(pFVar3,1);
  return pFVar3;
}

// AddZeroed @ 1448ffc40

int __thiscall
TArray<FGlobalDistanceFieldClipmap,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FGlobalDistanceFieldClipmap,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe68,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0xe68,0,(longlong)param_1 * 0xe68);
  return iVar1;
}

// AddZeroed @ 1448ffcb0

int __thiscall
TArray<enum_EPrimitiveDirtyState,TSizedDefaultAllocator<32>_>::AddZeroed(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  memset((void *)((longlong)iVar1 + *(longlong *)this),0,(longlong)param_1);
  return iVar1;
}

// SetNum @ 144930d10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<`UpdateGlobalDistanceFieldCache'::__l59::FPackedClipmapData,TSizedDefaultAllocator<32>_>::
SetNum(void *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  
  piVar1 = (int *)((longlong)this + 8);
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,param_1 - iVar4,this,piVar1,(int *)((longlong)this + 0xc));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (void *)((longlong)param_1 * 0x30 + *(longlong *)this);
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar5 * 0x30 + (longlong)_Dst),(longlong)iVar4 * 0x30
                 );
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,4,this,iVar4 - uVar5,(int *)((longlong)this + 0xc));
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 144930e50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FInstanceBatcher::FPrimitiveItemInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::SetNumUninitialized
          (TArray<FInstanceBatcher::FPrimitiveItemInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FPrimitiveItemInfo *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::
    ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceBatcher::FPrimitiveItemInfo>_>
              (8,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceBatcher::FPrimitiveItemInfo>_>
                    (8,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 144930f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPrimitiveUploadInfoHeader,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
SetNumUninitialized(TArray<FPrimitiveUploadInfoHeader,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPrimitiveUploadInfoHeader *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::
    ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveUploadInfoHeader>_>
              (0x30,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar4 * 0x30);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveUploadInfoHeader>_>
                    (0x30,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FIndirectLightingCacheAllocation_*_const_&> @ 144aee5d0

int __thiscall
TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FIndirectLightingCacheAllocation_*_const_&>
          (TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> *this,
          FIndirectLightingCacheAllocation **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FIndirectLightingCacheAllocation **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FIndirectLightingCacheAllocation **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// RemoveAtImpl @ 144b38270

void __thiscall
TArray<IESAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<IESAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FAtlasSlot *_Dst;
  int iVar1;
  
  _Dst = (FAtlasSlot *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<IESAtlas::FAtlasSlot,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 144b382f0

void __thiscall
TArray<FAsyncLumenIndirectLightingOutputs::FViewOutputs,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<FAsyncLumenIndirectLightingOutputs::FViewOutputs,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>)this;
  if (FVar1 != (ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x340 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0x340 + (longlong)_Dst),(longlong)iVar2 * 0x340);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_><int_const_,int> @ 144b7bbc0

TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
* __thiscall
TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::
TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_><int_const_,int>
          (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this,TArrayView<int_const_,int> *param_1)

{
  int iVar1;
  int *_Src;
  TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *_Dst;
  
  (this->AllocatorInstance).SecondaryData.Data = (int *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 6;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<int>_>
            (4,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  pTVar2 = (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  _Dst = this;
  if (pTVar2 != (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    _Dst = pTVar2;
  }
  memcpy(_Dst,_Src,(longlong)iVar1 << 2);
  return this;
}

// AddUniqueImpl<FPrimitiveSceneInfo_const_*_const_&> @ 144b81830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::AddUniqueImpl<FPrimitiveSceneInfo_const_*_const_&>
          (TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,FPrimitiveSceneInfo **param_1)

{
  FPrimitiveSceneInfo **ppFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPrimitiveSceneInfo **ppFVar5;
  
  ppFVar1 = (this->AllocatorInstance).Data;
  if (ppFVar1 != ppFVar1 + this->ArrayNum) {
    ppFVar5 = ppFVar1;
    do {
      if (*ppFVar5 == *param_1) {
        iVar4 = (int)((longlong)ppFVar5 - (longlong)ppFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      ppFVar5 = ppFVar5 + 1;
    } while (ppFVar5 != ppFVar1 + this->ArrayNum);
  }
  if (((ppFVar1 <= param_1) && (param_1 < ppFVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  ppFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  ppFVar1[iVar4] = *param_1;
  return iVar4;
}

// AddUniqueImpl<TRefCountPtr<IPooledRenderTarget>_const_&> @ 144b81930

int __thiscall
TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TRefCountPtr<IPooledRenderTarget>_const_&>
          (TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *this,
          TRefCountPtr<IPooledRenderTarget> *param_1)

{
  FScriptContainerElement *pFVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(IPooledRenderTarget **)&pFVar6->field_0x0 == param_1->Reference) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(undefined8 *)(pFVar1 + (longlong)iVar5 * 8) = 0;
  pIVar2 = param_1->Reference;
  *(IPooledRenderTarget **)(pFVar1 + (longlong)iVar5 * 8) = pIVar2;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x30))(pIVar2);
  }
  return iVar5;
}

// CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int> @ 144b8d170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
          (TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
           *this,FParameters **param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// RemoveAtImpl @ 144bd7310

void __thiscall
TArray<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::RemoveAtImpl(TArray<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + param_1;
  DestructItems<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 144bd7390

void __thiscall
TArray<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::RemoveAtImpl(TArray<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + param_1;
  DestructItems<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 144be1540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
::SetNum(TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 144be1680

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRDGTexture_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum
          (TArray<FRDGTexture_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FRDGTexture **_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// ~TArray<LumenRadianceCache::FRadianceCacheSetup,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 144c1e7d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TArray<LumenRadianceCache::FRadianceCacheSetup,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::
~TArray<LumenRadianceCache::FRadianceCacheSetup,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TArray<LumenRadianceCache::FRadianceCacheSetup,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  ForElementType<LumenRadianceCache::FRadianceCacheSetup> *pFVar1;
  ForElementType<LumenRadianceCache::FRadianceCacheSetup> FVar2;
  ForElementType<LumenRadianceCache::FRadianceCacheSetup> FVar3;
  
  pFVar1 = &(this->AllocatorInstance).SecondaryData;
  FVar2 = *pFVar1;
  FVar3 = (ForElementType<LumenRadianceCache::FRadianceCacheSetup>)this;
  if (FVar2 != (ForElementType<LumenRadianceCache::FRadianceCacheSetup>)0x0) {
    FVar3 = FVar2;
  }
  DestructItems<LumenRadianceCache::FRadianceCacheSetup,int>
            ((FRadianceCacheSetup *)FVar3,this->ArrayNum);
  FVar2 = *pFVar1;
  if (FVar2 != (ForElementType<LumenRadianceCache::FRadianceCacheSetup>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}

// operator= @ 144c1ead0

TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> * __thiscall
TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>::operator=
          (TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
           *this,TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
                 *param_1)

{
  ForElementType<FLightSceneInfoCompact> FVar1;
  
  if (this != param_1) {
    if ((param_1->AllocatorInstance).SecondaryData == (ForElementType<FLightSceneInfoCompact>)0x0) {
      memmove(this,param_1,0x400);
    }
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FLightSceneInfoCompact>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->AllocatorInstance).SecondaryData = (param_1->AllocatorInstance).SecondaryData;
    (param_1->AllocatorInstance).SecondaryData = (ForElementType<FLightSceneInfoCompact>)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0x10;
  }
  return this;
}

// operator= @ 144c1eb60

TArray<FRadianceCacheClipmap,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRadianceCacheClipmap,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRadianceCacheClipmap,TSizedDefaultAllocator<32>_> *this,
          TArray<FRadianceCacheClipmap,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x68);
    }
  }
  return this;
}

// RemoveAtSwapImpl @ 144c54ad0

void __thiscall
TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>::
RemoveAtSwapImpl(TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_>
                 *this,int param_1)

{
  ForElementType<FLightSceneInfoCompact> FVar1;
  int iVar2;
  ForElementType<FLightSceneInfoCompact> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FLightSceneInfoCompact>)this;
  if (FVar1 != (ForElementType<FLightSceneInfoCompact>)0x0) {
    FVar3 = FVar1;
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((void *)((longlong)param_1 * 0x40 + (longlong)FVar3),
            (void *)((longlong)(this->ArrayNum - iVar2) * 0x40 + (longlong)FVar3),
            (longlong)iVar2 << 6);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 144c5d630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FLumenCardBuildData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FLumenCardBuildData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FLumenCardBuildData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x40,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x40,(longlong)iVar5 << 6);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<FPerLightParameters,TSizedDefaultAllocator<32>_> @ 144d3d7a0

TArray<FPerLightParameters,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPerLightParameters,TSizedDefaultAllocator<32>_>::
TArray<FPerLightParameters,TSizedDefaultAllocator<32>_>
          (TArray<FPerLightParameters,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FPerLightParameters,TSizedDefaultAllocator<32>_> @ 144d42210

void __thiscall
TArray<FPerLightParameters,TSizedDefaultAllocator<32>_>::
~TArray<FPerLightParameters,TSizedDefaultAllocator<32>_>
          (TArray<FPerLightParameters,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 144d43710

TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
::operator=(TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
            *this,TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                  *param_1)

{
  int iVar1;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar2;
  int *piVar3;
  ForElementType<FSpanAllocator::FLinearAllocation> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      param_1 = (TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 10;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
              (8,4,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<FSpanAllocator::FLinearAllocation>)this;
    if (FVar2 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// RemoveAtImpl @ 144d93870

void __thiscall
TArray<FLumenPackedLight,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FLumenPackedLight,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this
          ,int param_1,int param_2)

{
  ForElementType<FLumenPackedLight> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<FLumenPackedLight> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FLumenPackedLight>)this;
  if (FVar1 != (ForElementType<FLumenPackedLight>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x90 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0x90 + (longlong)_Dst),(longlong)iVar2 * 0x90);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 144d938e0

void __thiscall
TArray<FViewBatchedLightParameters,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<FViewBatchedLightParameters,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  ForElementType<FViewBatchedLightParameters> FVar1;
  int iVar2;
  FViewBatchedLightParameters *_Dst;
  ForElementType<FViewBatchedLightParameters> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FViewBatchedLightParameters>)this;
  if (FVar1 != (ForElementType<FViewBatchedLightParameters>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FViewBatchedLightParameters *)((longlong)param_1 * 0x40 + (longlong)FVar3);
  DestructItems<FViewBatchedLightParameters,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 144d93960

void __thiscall
TArray<FLumenCard,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLumenCard,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FLumenCard *_Dst;
  
  _Dst = (FLumenCard *)((this->AllocatorInstance).Data + (longlong)param_1 * 400);
  DestructItems<FLumenCard,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 400);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 144d939e0

void __thiscall
TArray<FLumenMeshCards,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLumenMeshCards,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FLumenMeshCards *_Dst;
  
  _Dst = (FLumenMeshCards *)((this->AllocatorInstance).Data + (longlong)param_1 * 400);
  DestructItems<FLumenMeshCards,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 400);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 144d93a60

void __thiscall
TArray<FPrimitiveSceneInfo_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtSwapImpl(TArray<FPrimitiveSceneInfo_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *this,int param_1)

{
  ForElementType<FPrimitiveSceneInfo_*> FVar1;
  int iVar2;
  ForElementType<FPrimitiveSceneInfo_*> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FPrimitiveSceneInfo_*>)this;
  if (FVar1 != (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
    FVar3 = FVar1;
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((void *)((longlong)FVar3 + (longlong)param_1 * 8),
            (void *)((longlong)FVar3 + (longlong)(this->ArrayNum - iVar2) * 8),(longlong)iVar2 << 3)
    ;
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 144d93ac0

void __thiscall
TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 8,
            (longlong)iVar2 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 144d93b20

void __thiscall
TArray<FLumenSurfaceCacheAllocator::FPageBinAllocation,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwapImpl(TArray<FLumenSurfaceCacheAllocator::FPageBinAllocation,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1)

{
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> FVar1;
  int iVar2;
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)this;
  if (FVar1 != (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
    FVar3 = FVar1;
  }
  if (*(void **)((uchar *)((longlong)FVar3 + 0x30) + (longlong)param_1 * 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((uchar *)((longlong)FVar3 + 0x30) + (longlong)param_1 * 0x48));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((void *)((longlong)FVar3 + (longlong)param_1 * 0x48),
            (void *)((longlong)FVar3 + (longlong)(this->ArrayNum - iVar2) * 0x48),
            (longlong)iVar2 * 0x48);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 144d9a370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FLumenViewOrigin,TFixedAllocator<2>_>::SetNum
          (TArray<FLumenViewOrigin,TFixedAllocator<2>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTypeCompatibleBytes<FLumenViewOrigin> *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<2>::ForElementType<FLumenViewOrigin>_>
                      (0xf0,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FLumenViewOrigin,int>
              ((this->AllocatorInstance).InlineData + iVar4,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 * 0xf0);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TFixedAllocator<2>::ForElementType<FLumenViewOrigin>_>
                    (0xf0,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<enum_EMaterialCacheAttribute,TSizedDefaultAllocator<32>_><enum_EMaterialCacheAttribute,int> @ 144e5a770

TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EMaterialCacheAttribute,TSizedDefaultAllocator<32>_>::
TArray<enum_EMaterialCacheAttribute,TSizedDefaultAllocator<32>_><enum_EMaterialCacheAttribute,int>
          (void *this,TArrayView<EMaterialCacheAttribute,int> *param_1)

{
  int iVar1;
  EMaterialCacheAttribute *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1);
  return this;
}

// AddUniqueImpl<IAllocatedVirtualTexture_*_const_&> @ 144e63f60

int __thiscall
TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<IAllocatedVirtualTexture_*_const_&>
          (TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_> *this,
          IAllocatedVirtualTexture **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(IAllocatedVirtualTexture **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(IAllocatedVirtualTexture **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 144eec3b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *
__thiscall
TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  (this->AllocatorInstance).Data = (FStaticMeshBatch **)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<enum_EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 144eec3d0

/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */

TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
* __thiscall
TArray<enum_EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::
TArray<enum_EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  return this;
}

// ~TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 144eefa60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
~TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FStaticMeshBatch **ppFVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  ppFVar3 = (this->AllocatorInstance).Data;
  if (ppFVar3 == (FStaticMeshBatch **)0x0) {
    return;
  }
  if (ppFVar3 != (FStaticMeshBatch **)0x0) {
    ppFVar3 = ppFVar3 + -1;
    MemoryTrace_Free((ulong64)ppFVar3,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,ppFVar3,FMalloc,true);
    }
    piVar4 = (int *)((longlong)ppFVar3 - (ulonglong)*(uint *)ppFVar3);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar2 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

// ~TArray<enum_EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 144eefa80

void __thiscall
TArray<enum_EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::
~TArray<enum_EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (void *this)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  lVar3 = *(longlong *)this;
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    puVar1 = (uint *)(lVar3 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

// operator= @ 144ef1760

TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> * __thiscall
TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::operator=
          (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *param_1)

{
  int iVar1;
  uint *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
              (4,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// AddDefaulted @ 144ef6a80

int __thiscall
TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::AddDefaulted
          (TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  ForElementType<FRDGTexture_*> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FRDGTexture_*>)0x0) {
    this = (TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
  }
  memset((void *)((longlong)this + (longlong)iVar2 * 8),0,(longlong)param_1 << 3);
  return iVar2;
}

// RemoveAtImpl @ 144f22bb0

void __thiscall
TArray<FVisibleMeshDrawCommandStatsData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FVisibleMeshDrawCommandStatsData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FVisibleMeshDrawCommandStatsData *_Dst;
  int iVar1;
  
  _Dst = (FVisibleMeshDrawCommandStatsData *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x48);
  DestructItems<FVisibleMeshDrawCommandStatsData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x48);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 144f22c30

void __thiscall
TArray<FPrimitiveIdVertexBufferPoolEntry,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPrimitiveIdVertexBufferPoolEntry,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FRHIResource *this_00;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  this_00 = *(FRHIResource **)(_Dst + 8);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumZeroed @ 144fe3aa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNumZeroed
          (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  uint *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<FConvexVolume_const_,int> @ 14501e2f0

TArray<FConvexVolume,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> * __thiscall
TArray<FConvexVolume,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
operator=<FConvexVolume_const_,int>
          (TArray<FConvexVolume,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TArrayView<FConvexVolume_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FConvexVolume *pFVar3;
  
  DestructItems<FConvexVolume,int>((this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_>
            (0x200,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FConvexVolume,FConvexVolume,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// RemoveAtImpl @ 145073630

void __thiscall
TArray<Nanite::FRayTracingManager::FPendingBuild,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<Nanite::FRayTracingManager::FPendingBuild,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FPendingBuild *_Dst;
  
  _Dst = (FPendingBuild *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<Nanite::FRayTracingManager::FPendingBuild,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1450736b0

void __thiscall
TArray<Nanite::FRayTracingManager::FReadbackData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<Nanite::FRayTracingManager::FReadbackData,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FReadbackData *_Dst;
  
  _Dst = (FReadbackData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<Nanite::FRayTracingManager::FReadbackData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 145077850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAtomic<bool>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum
          (TArray<TAtomic<bool>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TAtomic<bool> *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAtomic<bool>,int>((this->AllocatorInstance).Data + iVar4,param_1 - iVar5)
    ;
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145077980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNaniteMaterialDebugViewInfo,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FNaniteMaterialDebugViewInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0xc,0,
           (longlong)(param_1 - iVar5) * 0xc);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0xc,(longlong)iVar5 * 0xc);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,2,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// CopyToEmpty<FTransferResourceFenceData_*,int> @ 1450aa010

void __thiscall
TArray<FTransferResourceFenceData_*,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FTransferResourceFenceData_*,int>
          (TArray<FTransferResourceFenceData_*,TSizedDefaultAllocator<32>_> *this,
          FTransferResourceFenceData **param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// SetNum @ 1450efb40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSortedIndexBuffer_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FSortedIndexBuffer_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 145194a50

TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
* __thiscall
TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::
TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  (this->AllocatorInstance).Data =
       (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
        *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 145195970

void __thiscall
TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::
~TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *pTVar1;
  
  DestructItems<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,int>
            ((this->AllocatorInstance).Data,this->ArrayNum);
  pTVar1 = (this->AllocatorInstance).Data;
  if (pTVar1 != (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                 *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar1);
    return;
  }
  return;
}

// TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_> @ 145293b30

TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_>::
TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_>
          (TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> @ 145293b50

TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_>::
TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_>
          (TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> @ 145293b70

TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_>::
TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_>
          (TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> @ 145293b90

TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_>::
TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_>
          (TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_> @ 145295ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_>::
~TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_>
          (TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNaniteMaterialListContext::FDeferredPipelines,int>
            ((FDeferredPipelines *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> @ 145295ee0

void __thiscall
TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_>::
~TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_>
          (TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> @ 145295f00

void __thiscall
TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_>::
~TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_>
          (TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> @ 145295f20

void __thiscall
TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_>::
~TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_>
          (TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_> @ 145295f40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_>::
~TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_>
          (TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FVisualizeBufferTile,int>
            ((FVisualizeBufferTile *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 145296830

TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<UE::Math::TIntRect<int>,UE::Math::TIntRect<int>,int>
              ((this->AllocatorInstance).Data,(TIntRect<int> *)pFVar2,iVar1);
  }
  return this;
}

// operator= @ 1452968c0

TArray<FViewMatrices,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FViewMatrices,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FViewMatrices,TSizedDefaultAllocator<32>_> *this,
          TArray<FViewMatrices,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x880,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x880);
    }
  }
  return this;
}

// operator= @ 145296960

TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *this,
          TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
              ((TRefCountPtr<IPooledRenderTarget> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<IPooledRenderTarget>,int>
              ((this->AllocatorInstance).Data,(TRefCountPtr<IPooledRenderTarget> *)pFVar3,iVar2);
  }
  return this;
}

// operator= @ 145296a00

TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *this,
          TArray<FPrimitiveSceneInfoCompact,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// RemoveAtImpl @ 1452cfea0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FVisualizeBufferTile *_Dst;
  
  _Dst = (FVisualizeBufferTile *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FVisualizeBufferTile,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1452cff20

void __thiscall
TArray<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> FVar1;
  int iVar2;
  ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>)
          this;
  if (FVar1 != (ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                )0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
         ((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
            (_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1452cffa0

void __thiscall
TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            ((TRefCountPtr<IPooledRenderTarget> *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSwap @ 1452d2340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *this,
          FPrimitiveSceneInfo **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(FPrimitiveSceneInfo **)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// SetNum @ 1452d34c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Math::TIntRect<int>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1452d3610

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FViewMatrices,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FViewMatrices,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x880,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FViewMatrices,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x880,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x880;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x880,(longlong)iVar5 * 0x880);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x880,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1452d3760

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FVisualizeBufferTile,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FVisualizeBufferTile,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x30,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1452d3890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TRefCountPtr<IPooledRenderTarget>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 8,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// operator=<RayTracing::FDynamicPrimitiveIndex_const_,int> @ 1452f16f0

TArray<RayTracing::FDynamicPrimitiveIndex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<RayTracing::FDynamicPrimitiveIndex,TSizedDefaultAllocator<32>_>::
operator=<RayTracing::FDynamicPrimitiveIndex_const_,int>
          (TArray<RayTracing::FDynamicPrimitiveIndex,TSizedDefaultAllocator<32>_> *this,
          TArrayView<RayTracing::FDynamicPrimitiveIndex_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FDynamicPrimitiveIndex *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// Append<TArrayView<FRayTracingShaderBindingData_const_,int>_const_&> @ 1452f64b0

void __thiscall
TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::Append<TArrayView<FRayTracingShaderBindingData_const_,int>_const_&>
          (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TArrayView<FRayTracingShaderBindingData_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::
          ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
                    (0x20,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + iVar4,param_1->DataPtr,(longlong)iVar1 << 5);
  return;
}

// Append<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> @ 1452f6560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>::
Append<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>
          (TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *this,
          TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FMeshComputeDispatchCommand,FMeshComputeDispatchCommand,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0xa8,
               (FMeshComputeDispatchCommand *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator=<FRayTracingShaderBindingData_const_,int> @ 1453506a0

TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
* __thiscall
TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::operator=<FRayTracingShaderBindingData_const_,int>
          (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TArrayView<FRayTracingShaderBindingData_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRayTracingShaderBindingData *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
            (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 5);
  }
  return this;
}

// RemoveAtImpl @ 1453a0730

void __thiscall
TArray<RectLightAtlas::FAtlasCopySlot,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<RectLightAtlas::FAtlasCopySlot,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FAtlasCopySlot *_Dst;
  int iVar1;
  
  _Dst = (FAtlasCopySlot *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<RectLightAtlas::FAtlasCopySlot,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1453a07b0

void __thiscall
TArray<RectLightAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<RectLightAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FAtlasSlot *_Dst;
  
  _Dst = (FAtlasSlot *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<RectLightAtlas::FAtlasSlot,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 1453a7a10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRayTracingLocalShaderBindingWriter_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::SetNum(TArray<FRayTracingLocalShaderBindingWriter_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FRayTracingLocalShaderBindingWriter **_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingLocalShaderBindingWriter_*>_>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingLocalShaderBindingWriter_*>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1453a7b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<RectLightAtlas::FAtlasCopySlot,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<RectLightAtlas::FAtlasCopySlot,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<RectLightAtlas::FAtlasCopySlot,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x28,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1453a7c80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<RectLightAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<RectLightAtlas::FAtlasSlot,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<RectLightAtlas::FAtlasSlot,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x50,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// AddZeroed @ 14541c830

int __thiscall
TArray<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::AddZeroed(TArray<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *this,int param_1)

{
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>_>
                    (0x50,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                )0x0) {
    this = (TArray<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  memset((void *)((longlong)iVar2 * 0x50 + (longlong)this),0,(longlong)param_1 * 0x50);
  return iVar2;
}

// Insert @ 145443670

int __thiscall
TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
          (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int *param_1,
          int param_2)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<int> FVar5;
  void *_Src;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<int>)this;
  if (FVar1 != (ForElementType<int>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<int>)this;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (int *)((longlong)FVar5 + (longlong)this->ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar4 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<int>)this;
  if (FVar1 != (ForElementType<int>)0x0) {
    FVar5 = FVar1;
  }
  _Src = (void *)((longlong)FVar5 + (longlong)param_2 * 4);
  memmove((void *)((longlong)_Src + 4),_Src,(longlong)(iVar4 - param_2) << 2);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    this = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
  }
  *(int *)((longlong)param_2 * 4 + (longlong)this) = *param_1;
  return param_2;
}

// Remove @ 145448990

int __thiscall
TArray<FWindSourceSceneProxy_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FWindSourceSceneProxy_*,TSizedDefaultAllocator<32>_> *this,
          FWindSourceSceneProxy **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(FWindSourceSceneProxy **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(FWindSourceSceneProxy **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAtImpl @ 1454494c0

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + param_1;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145449500

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 4,(longlong)iVar1 << 2);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145449550

void __thiscall
TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1454495a0

void __thiscall
TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPrimitiveSceneProxy_*,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1454495f0

void __thiscall
TArray<FPrimitiveFlagsCompact,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPrimitiveFlagsCompact,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + param_1;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145449630

void __thiscall
TArray<FScene::FPrimitiveRayTracingData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FScene::FPrimitiveRayTracingData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145449680

void __thiscall
TArray<FPrimitiveVisibilityId,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPrimitiveVisibilityId,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1454496d0

void __thiscall
TArray<Experimental::FHashElementId,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<Experimental::FHashElementId,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 4,(longlong)iVar1 << 2);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145449720

void __thiscall
TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 4,(longlong)iVar1 << 2);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145449770

void __thiscall
TArray<enum_ERayTracingPrimitiveFlags,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(int *)((longlong)this + 8) - param_1) - param_2;
  if (iVar1 != 0) {
    memmove((void *)((longlong)param_1 + *(longlong *)this),
            (void *)((longlong)param_1 + *(longlong *)this + (longlong)param_2),(longlong)iVar1);
  }
  *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) - param_2;
  return;
}

// SetNum @ 14544ebb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FScene::FPrimitiveUpdateParams,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FScene::FPrimitiveUpdateParams,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (400,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FScene::FPrimitiveUpdateParams,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 400,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 400;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 400,(longlong)iVar5 * 400);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (400,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14544ed00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPrimitiveComponentId,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<FPrimitiveComponentId,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FPrimitiveComponentId> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FPrimitiveComponentId> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_>
              (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
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
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<FPrimitiveComponentId>)this;
        if (FVar2 != (ForElementType<FPrimitiveComponentId>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 4);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<FRHICopyTextureInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_><FRHICopyTextureInfo_const_,int> @ 14546b1b0

TArray<FRHICopyTextureInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> * __thiscall
TArray<FRHICopyTextureInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
TArray<FRHICopyTextureInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_><FRHICopyTextureInfo_const_,int>
          (TArray<FRHICopyTextureInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *this,TArrayView<FRHICopyTextureInfo_const_,int> *param_1)

{
  int iVar1;
  FRHICopyTextureInfo *_Src;
  
  (this->AllocatorInstance).Data = (FRHICopyTextureInfo *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICopyTextureInfo>_>
            (0x3c,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x3c);
  return this;
}

// Append<TArrayView<unsigned_int_const_,int>_> @ 145470490

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::Append<TArrayView<unsigned_int_const_,int>_>
          (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this,TArrayView<unsigned_int_const_,int> *param_1)

{
  int iVar1;
  TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                    (4,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  pTVar2 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  if (pTVar2 != (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    this = pTVar2;
  }
  memcpy((this->AllocatorInstance).InlineData + (longlong)iVar5 * 4,param_1->DataPtr,
         (longlong)iVar1 << 2);
  return;
}

// Append<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_> @ 145470540

void __thiscall
TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
Append<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>
          (TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_> *this,
          TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
            (longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

// operator= @ 145479ae0

TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<ISceneViewExtension,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedRef<ISceneViewExtension,1>,int>
              ((TSharedRef<ISceneViewExtension,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedRef<ISceneViewExtension,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedRef<ISceneViewExtension,1>,TSharedRef<ISceneViewExtension,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// AddDefaulted @ 145491d50

int __thiscall
TArray<FSceneCullingBuilder::FTempCell,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::AddDefaulted(TArray<FSceneCullingBuilder::FTempCell,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
               *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneCullingBuilder::FTempCell>_>
                      (0x158,8,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FSceneCullingBuilder::FTempCell,int>
            ((this->AllocatorInstance).Data + iVar1,1);
  return iVar1;
}

// RemoveAtImpl @ 1454b52e0

void __thiscall
TArray<FSceneCulling::FPrimitiveState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FSceneCulling::FPrimitiveState,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FPrimitiveState *_Dst;
  int iVar1;
  
  _Dst = (FPrimitiveState *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FSceneCulling::FPrimitiveState,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 1454b6d30

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Reset
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetNum @ 1454b95d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSceneCulling::FPrimitiveState,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FSceneCulling::FPrimitiveState,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FSceneCulling::FPrimitiveState,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x28,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1454b9700

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::HLSL::FPackedCellHeader,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UE::HLSL::FPackedCellHeader,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1454b9830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FPrimitiveSceneInfo_*_const_&> @ 145513f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FPrimitiveSceneInfo_*_const_&>
          (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *this,
          FPrimitiveSceneInfo **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FPrimitiveSceneInfo **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FPrimitiveSceneInfo **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// Append<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 1455146e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
Append<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + iVar4,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// Append<FPrimitiveInstanceRange,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 145514780

void __thiscall
TArray<FPrimitiveInstanceRange,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
Append<FPrimitiveInstanceRange,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<FPrimitiveInstanceRange,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TArray<FPrimitiveInstanceRange,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_>
                      (0xc,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + iVar4,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 * 0xc);
  }
  return;
}

// Append<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 145514830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
Append<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TArray<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVolumetricMeshBatch>_>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + iVar4,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 4);
  }
  return;
}

// TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> @ 14551cfd0

TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_>::
TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_>
          (TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> @ 14551cff0

TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_>::
TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_>
          (TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<enum_EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_> @ 14551d010

TArray<EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_>::
TArray<enum_EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_>(void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  return this;
}

// ~TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> @ 14551fd00

void __thiscall
TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_>::
~TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_>
          (TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> @ 14551fd20

void __thiscall
TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_>::
~TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_>
          (TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<enum_EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_> @ 14551fd40

void __thiscall
TArray<enum_EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_>::
~TArray<enum_EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
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

// RemoveAtImpl @ 14554f370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<FDynamicMeshElementContext::FViewMeshArrays,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<FDynamicMeshElementContext::FViewMeshArrays,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<FDynamicMeshElementContext::FViewMeshArrays> FVar1;
  int iVar2;
  FViewMeshArrays *_Dst;
  ForElementType<FDynamicMeshElementContext::FViewMeshArrays> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)this;
  if (FVar1 != (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FViewMeshArrays *)((longlong)param_1 * 0x2c0 + (longlong)FVar3);
  DestructItems<FDynamicMeshElementContext::FViewMeshArrays,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x2c0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14554f400

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TArray<FViewCommands,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FViewCommands,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FViewCommands> FVar1;
  int iVar2;
  FViewCommands *_Dst;
  ForElementType<FViewCommands> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FViewCommands>)this;
  if (FVar1 != (ForElementType<FViewCommands>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FViewCommands *)((longlong)param_1 * 0x7f0 + (longlong)FVar3);
  DestructItems<FViewCommands,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x7f0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 145550fa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<`anonymous_namespace'::FSSDConvolutionMetaData,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
::SetNum(TArray<_anonymous_namespace_::FSSDConvolutionMetaData,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData> FVar7;
  uint uVar8;
  void *_Dst;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData>_>
                      (0xa0,0x10,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData>)0x0) {
      this = (TArray<_anonymous_namespace_::FSSDConvolutionMetaData,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    DefaultConstructItems<_anonymous_namespace_::FSSDConvolutionMetaData,int>
              ((void *)((longlong)iVar5 * 0xa0 + (longlong)this),param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
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
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData>)this;
        if (FVar2 != (ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0xa0 + (longlong)FVar7);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar8 * 0xa0 + (longlong)_Dst),(longlong)iVar6 * 0xa0
                 );
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<_anonymous_namespace_::FSSDConvolutionMetaData>_>
                    (0xa0,0x10,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1455c9fe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (2,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar4 * 2),0,(longlong)(param_1 - iVar5) * 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 2);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 2),(longlong)iVar5 * 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (2,2,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<enum_ERHIFeatureLevel::Type> @ 1455fdcc0

int __thiscall
TArray<enum_ERHIFeatureLevel::Type,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<enum_ERHIFeatureLevel::Type>(void *this,Type *param_1)

{
  Type *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  Type *pTVar5;
  
  pTVar1 = *(Type **)this;
  if (pTVar1 != pTVar1 + *(int *)((longlong)this + 8)) {
    pTVar5 = pTVar1;
    do {
      if (*pTVar5 == *param_1) {
        iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar1 + *(int *)((longlong)this + 8));
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + *(int *)((longlong)this + 0xc))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = *(int *)((longlong)this + 8);
  if (iVar4 == *(int *)((longlong)this + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,this,(int *)((longlong)this + 0xc));
    *(int *)((longlong)this + 8) = iVar4;
  }
  *(int *)((longlong)this + 8) = iVar4 + 1;
  *(Type *)(*(longlong *)this + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// Append<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 1455fe9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
Append<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + iVar4,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// operator= @ 14560b7a0

TArray<float,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<float,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
          (TArray<float,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<float,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<float> FVar2;
  int *piVar3;
  ForElementType<float> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<float>)0x0) {
      param_1 = (TArray<float,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 2;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<float>)this;
    if (FVar2 != (ForElementType<float>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// AddDefaulted @ 145611f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __thiscall
TArray<FSortedShadowMapAtlas,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
AddDefaulted(TArray<FSortedShadowMapAtlas,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
             *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedShadowMapAtlas>_>
                      (0x848,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FSortedShadowMapAtlas,int>((this->AllocatorInstance).Data + iVar1,1);
  return iVar1;
}

// AddDefaulted @ 145611f60

int __thiscall
TArray<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
AddDefaulted(TArray<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// RemoveAt @ 14563d9b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  void *_Dst;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar6;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FTextureLayout::FTextureLayoutNode>)this;
  if (FVar1 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar6 = FVar1;
  }
  _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 0x14);
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x14),(longlong)iVar5 * 0x14);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_>
              (0x14,4,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// operator= @ 145667480

TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// RemoveAtImpl @ 145691a70

void __thiscall
TArray<FSkyAtmospherePendingRDGResources::FViewRDGResources,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<FSkyAtmospherePendingRDGResources::FViewRDGResources,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)this;
  if (FVar1 != (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x10 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 145691ad0

void __thiscall
TArray<FSkinningTransformProvider::FTransformProvider,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FSkinningTransformProvider::FTransformProvider,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x30;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(_Dst + 0x10));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x30,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// AddUniqueImpl<unsigned_int> @ 1456c56b0

int __thiscall
TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
AddUniqueImpl<unsigned_int>
          (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,uint *param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  
  puVar1 = (this->AllocatorInstance).Data;
  if (puVar1 != puVar1 + this->ArrayNum) {
    puVar5 = puVar1;
    do {
      if (*puVar5 == *param_1) {
        iVar4 = (int)((longlong)puVar5 - (longlong)puVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1 + this->ArrayNum);
  }
  if (((puVar1 <= param_1) && (param_1 < puVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  puVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  puVar1[iVar4] = *param_1;
  return iVar4;
}

// operator= @ 1456df000

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar2,iVar1);
  }
  return this;
}

// RemoveAtImpl @ 145784570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TArray<FTranslucentLightInjectionCollector::FPerViewData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::RemoveAtImpl(TArray<FTranslucentLightInjectionCollector::FPerViewData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  FPerViewData *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + param_1;
  DestructItems<FTranslucentLightInjectionCollector::FPerViewData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1457845e0

void __thiscall
TArray<FSimpleLightArray,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
RemoveAtImpl(TArray<FSimpleLightArray,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FSimpleLightArray *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + param_1;
  DestructItems<FSimpleLightArray,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14578d1b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FRDGTexture_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FRDGTexture_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FRDGTexture_*>)0x0) {
      this = (TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2
      ;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
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
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FRDGTexture_*>)this;
        if (FVar2 != (ForElementType<FRDGTexture_*>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14578d300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
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
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FVirtualTextureProducer_*_const_&> @ 1458b6be0

int __thiscall
TArray<FVirtualTextureProducer_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FVirtualTextureProducer_*_const_&>
          (TArray<FVirtualTextureProducer_*,TSizedDefaultAllocator<32>_> *this,
          FVirtualTextureProducer **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FVirtualTextureProducer **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FVirtualTextureProducer **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<IVirtualTextureFinalizer_*_const_&> @ 1458b6ce0

int __thiscall
TArray<IVirtualTextureFinalizer_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<IVirtualTextureFinalizer_*_const_&>
          (TArray<IVirtualTextureFinalizer_*,TSizedDefaultAllocator<32>_> *this,
          IVirtualTextureFinalizer **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(IVirtualTextureFinalizer **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(IVirtualTextureFinalizer **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FVirtualTextureProducerHandle_const_&> @ 1458b6de0

int __thiscall
TArray<FVirtualTextureProducerHandle,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FVirtualTextureProducerHandle_const_&>
          (TArray<FVirtualTextureProducerHandle,TSizedDefaultAllocator<32>_> *this,
          FVirtualTextureProducerHandle *param_1)

{
  FVirtualTextureProducerHandle *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVirtualTextureProducerHandle *pFVar6;
  
  pFVar1 = (FVirtualTextureProducerHandle *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (pFVar6->PackedValue == param_1->PackedValue) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FVirtualTextureProducerHandle *)(pFVar2 + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FVirtualTexturePhysicalSpace_*> @ 1458b6ee0

int __thiscall
TArray<FVirtualTexturePhysicalSpace_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FVirtualTexturePhysicalSpace_*>
          (TArray<FVirtualTexturePhysicalSpace_*,TSizedDefaultAllocator<32>_> *this,
          FVirtualTexturePhysicalSpace **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FVirtualTexturePhysicalSpace **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FVirtualTexturePhysicalSpace **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> @ 1458ca500

TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_>::
TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_>
          (TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> @ 1458ceb40

void __thiscall
TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_>::
~TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_>
          (TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Remove @ 145918120

int __thiscall
TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *this,
          FVirtualTextureLocalTile *param_1)

{
  FVirtualTextureLocalTile *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  pFVar1 = (FVirtualTextureLocalTile *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar10 = 0;
  bVar4 = *(ulong64 *)pFVar2 != param_1->PackedValue;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar6) {
      do {
        if (bVar4 != (*(ulong64 *)(pFVar2 + lVar7 * 8) != param_1->PackedValue)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar6);
    }
    if (bVar4 != false) {
      if (iVar10 != iVar8) {
        memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                (longlong)(iVar9 - iVar8) << 3);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar8 = iVar9;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar10;
      return iVar5 - iVar10;
    }
  } while( true );
}

// RemoveAtImpl @ 145918750

void __thiscall
TArray<FVirtualTextureProducer::FPhysicalGroupDesc,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FVirtualTextureProducer::FPhysicalGroupDesc,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<FVirtualTextureProducer::FPhysicalGroupDesc,int>((FPhysicalGroupDesc *)_Dst,param_2)
  ;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSwap @ 145918d70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_> *this,
          IAllocatedVirtualTexture **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(IAllocatedVirtualTexture **)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// AddUniqueImpl<FRDGViewableResource_*> @ 14592e7a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TArray<FRDGViewableResource_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FRDGViewableResource_*>
          (TArray<FRDGViewableResource_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,FRDGViewableResource **param_1)

{
  ForElementType<FRDGViewableResource_*> FVar1;
  ForElementType<FRDGViewableResource_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FRDGViewableResource_*> FVar6;
  ForElementType<FRDGViewableResource_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FRDGViewableResource_*>)this;
  if (FVar2 != (ForElementType<FRDGViewableResource_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FRDGViewableResource_*>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FRDGViewableResource **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FRDGViewableResource_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FRDGViewableResource_*>)this;
  if (FVar2 != (ForElementType<FRDGViewableResource_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FRDGViewableResource_*>)this;
    if (FVar2 != (ForElementType<FRDGViewableResource_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FRDGViewableResource **)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGViewableResource_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FRDGViewableResource_*>)0x0) {
    this = (TArray<FRDGViewableResource_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  *(FRDGViewableResource **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// Contains<FString> @ 14592f430

bool __thiscall
TArray<wchar_t_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Contains<FString>
          (TArray<wchar_t_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          FString *param_1)

{
  ForElementType<wchar_t_const_*> FVar1;
  int iVar2;
  wchar_t *pwVar3;
  ForElementType<wchar_t_const_*> FVar4;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<wchar_t_const_*>)this;
  if (FVar1 != (ForElementType<wchar_t_const_*>)0x0) {
    FVar4 = FVar1;
  }
  FVar1 = (ForElementType<wchar_t_const_*>)((longlong)FVar4 + (longlong)this->ArrayNum * 8);
  while( true ) {
    if (FVar4 == FVar1) {
      return false;
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,*(wchar_t **)FVar4);
    if (iVar2 == 0) break;
    FVar4 = (ForElementType<wchar_t_const_*>)((longlong)FVar4 + 8);
  }
  return true;
}

// SetNum @ 145942840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<unsigned_int,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TArray<unsigned_int,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
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
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

