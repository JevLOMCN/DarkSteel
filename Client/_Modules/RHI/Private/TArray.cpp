// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 18

// TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_> @ 145c44a60

TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_> * __thiscall
TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_>::
TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_>
          (TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_> @ 145c46ed0

void __thiscall
TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_>::
~TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_>
          (TArray<RHIValidation::FOperation,TSizedDefaultAllocator<32>_> *this)

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

// AddZeroed @ 145c4efa0

int __thiscall
TArray<FVertexElement,TFixedAllocator<17>_>::AddZeroed
          (TArray<FVertexElement,TFixedAllocator<17>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                    (8,2,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).InlineData + iVar1,0,(longlong)param_1 << 3);
  return iVar1;
}

// Empty @ 145c563b0

void __thiscall
TArray<FVertexElement,TFixedAllocator<17>_>::Empty
          (TArray<FVertexElement,TFixedAllocator<17>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                (8,2,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// TArray<FRHIResourceCollectionMember,TSizedDefaultAllocator<32>_><FRHIResourceCollectionMember_const_,int> @ 145c7f3f0

TArray<FRHIResourceCollectionMember,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRHIResourceCollectionMember,TSizedDefaultAllocator<32>_>::
TArray<FRHIResourceCollectionMember,TSizedDefaultAllocator<32>_><FRHIResourceCollectionMember_const_,int>
          (TArray<FRHIResourceCollectionMember,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRHIResourceCollectionMember_const_,int> *param_1)

{
  int iVar1;
  FRHIResourceCollectionMember *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
  return this;
}

// TArray<FRHIUniformBufferResource,TSizedDefaultAllocator<32>_><FRHIUniformBufferResourceInitializer_const_,int> @ 145c7f480

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

TArray<FRHIUniformBufferResource,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRHIUniformBufferResource,TSizedDefaultAllocator<32>_>::
TArray<FRHIUniformBufferResource,TSizedDefaultAllocator<32>_><FRHIUniformBufferResourceInitializer_const_,int>
          (TArray<FRHIUniformBufferResource,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRHIUniformBufferResourceInitializer_const_,int> *param_1)

{
  int iVar1;
  FRHIUniformBufferResourceInitializer *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,2,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
  return this;
}

// operator=<FRHIShaderParameterResource,int> @ 145c7f510

TArray<FRHIShaderParameterResource,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRHIShaderParameterResource,TSizedDefaultAllocator<32>_>::
operator=<FRHIShaderParameterResource,int>
          (TArray<FRHIShaderParameterResource,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRHIShaderParameterResource,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRHIShaderParameterResource *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  }
  return this;
}

// RemoveAtImpl @ 145cbd300

void __thiscall
TArray<TSharedPtr<FRHIResourceStats,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FRHIResourceStats,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  TSharedPtr<FRHIResourceStats,1> *_Dst;
  
  _Dst = (TSharedPtr<FRHIResourceStats,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FRHIResourceStats,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 145cbd380

void __thiscall
TArray<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x70;
  DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>
            (*(FNameMap **)(_Dst + 0x30),*(int *)(_Dst + 0x38));
  if (*(void **)(_Dst + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x30));
  }
  if (*(void **)(_Dst + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x20));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x70,(longlong)iVar2 * 0x70);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 145cbd420

void __thiscall
TArray<FLockTracker::FLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtSwapImpl(TArray<FLockTracker::FLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *this,int param_1)

{
  ForElementType<FLockTracker::FLockParams> FVar1;
  int iVar2;
  ForElementType<FLockTracker::FLockParams> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FLockTracker::FLockParams>)this;
  if (FVar1 != (ForElementType<FLockTracker::FLockParams>)0x0) {
    FVar3 = FVar1;
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((void *)((longlong)param_1 * 0x20 + (longlong)FVar3),
            (void *)((longlong)(this->ArrayNum - iVar2) * 0x20 + (longlong)FVar3),
            (longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 145cbf990

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRHIUniformBuffer_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FRHIUniformBuffer_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FRHIUniformBuffer_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FRHIUniformBuffer_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
      this = (TArray<FRHIUniformBuffer_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *
             )FVar2;
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
        FVar7 = (ForElementType<FRHIUniformBuffer_*>)this;
        if (FVar2 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
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
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145cbfae0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *this,int param_1,
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

// SetNumZeroed @ 145cbfc20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> *this,int param_1,
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
                      (4,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar4 * 4),0,(longlong)(param_1 - iVar5) << 2);
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
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 4);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,2,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<FRHIRayTracingShader_*,int> @ 145cce270

TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_>::operator=<FRHIRayTracingShader_*,int>
          (TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRHIRayTracingShader_*,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRHIRayTracingShader **_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// AddUniqueImpl<enum_EShaderPlatform_const_&> @ 145cce440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
TArray<enum_EShaderPlatform,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<enum_EShaderPlatform_const_&>(void *this,EShaderPlatform *param_1)

{
  EShaderPlatform *pEVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EShaderPlatform *pEVar5;
  
  pEVar1 = *(EShaderPlatform **)this;
  if (pEVar1 != pEVar1 + *(int *)((longlong)this + 8)) {
    pEVar5 = pEVar1;
    do {
      if (*pEVar5 == *param_1) {
        iVar4 = (int)((longlong)pEVar5 - (longlong)pEVar1 >> 1);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pEVar5 = pEVar5 + 1;
    } while (pEVar5 != pEVar1 + *(int *)((longlong)this + 8));
  }
  if (((pEVar1 <= param_1) && (param_1 < pEVar1 + *(int *)((longlong)this + 0xc))) &&
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
                      (0x202,this,(int *)((longlong)this + 0xc));
    *(int *)((longlong)this + 8) = iVar4;
  }
  *(int *)((longlong)this + 8) = iVar4 + 1;
  *(EShaderPlatform *)(*(longlong *)this + (longlong)iVar4 * 2) = *param_1;
  return iVar4;
}

// AddUniqueImpl<enum_ERHIFeatureLevel::Type_const_&> @ 145cce540

int __thiscall
TArray<enum_ERHIFeatureLevel::Type,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<enum_ERHIFeatureLevel::Type_const_&>(void *this,Type *param_1)

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

// AddUniqueImpl<enum_EShaderPlatform> @ 145cce640

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
TArray<enum_EShaderPlatform,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EShaderPlatform>
          (void *this,EShaderPlatform *param_1)

{
  EShaderPlatform *pEVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EShaderPlatform *pEVar5;
  
  pEVar1 = *(EShaderPlatform **)this;
  if (pEVar1 != pEVar1 + *(int *)((longlong)this + 8)) {
    pEVar5 = pEVar1;
    do {
      if (*pEVar5 == *param_1) {
        iVar4 = (int)((longlong)pEVar5 - (longlong)pEVar1 >> 1);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pEVar5 = pEVar5 + 1;
    } while (pEVar5 != pEVar1 + *(int *)((longlong)this + 8));
  }
  if (((pEVar1 <= param_1) && (param_1 < pEVar1 + *(int *)((longlong)this + 0xc))) &&
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
                      (0x202,this,(int *)((longlong)this + 0xc));
    *(int *)((longlong)this + 8) = iVar4;
  }
  *(int *)((longlong)this + 8) = iVar4 + 1;
  *(EShaderPlatform *)(*(longlong *)this + (longlong)iVar4 * 2) = *param_1;
  return iVar4;
}

// RemoveAtSwapImpl @ 145cef5d0

void __thiscall
TArray<FRHIFrameFlipTrackingRunnable::FFramePair,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FRHIFrameFlipTrackingRunnable::FFramePair,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FFramePair *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FFramePair *)(pFVar1 + (longlong)param_1 * 0x10);
  FRHIFrameFlipTrackingRunnable::FFramePair::~FFramePair(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

