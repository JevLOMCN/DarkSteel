// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 56

// Construct<FConstraintsInWorld> @ 14648d790

void __cdecl UE::CoreUObject::Private::Construct<FConstraintsInWorld>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FConstraintsInWorld> @ 14648d7b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintsInWorld>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FConstraintsInWorld> @ 14648d7d0

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintsInWorld>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FConstraintsInWorld> @ 14648d810

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintsInWorld>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    do {
      puVar8 = (undefined8 *)((longlong)puVar7 + ((longlong)param_2 - (longlong)param_1));
      pFVar1 = (ForAnyElementType *)(puVar7 + 1);
      *puVar7 = *puVar8;
      if (pFVar1 != (ForAnyElementType *)(puVar8 + 1)) {
        iVar3 = *(int *)(puVar8 + 2);
        piVar2 = (int *)((longlong)puVar7 + 0x14);
        _Src = ((ForAnyElementType *)(puVar8 + 1))->Data;
        *(int *)(puVar7 + 2) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      lVar4 = puVar8[4];
      uVar5 = puVar8[3];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar6 = (TReferenceControllerBase<1> *)puVar7[4];
      puVar7[3] = uVar5;
      puVar7[4] = lVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FConstraintTickFunction> @ 14648e460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FConstraintTickFunction>(void *param_1)

{
  FTickFunction::FTickFunction(param_1);
  *(undefined ***)param_1 = &___7FConstraintTickFunction__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 0x26;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FConstraintTickFunction> @ 14648e4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintTickFunction>(void *param_1)

{
  FTickFunction::FTickFunction(param_1);
  *(undefined ***)param_1 = &___7FConstraintTickFunction__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 0x26;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FConstraintTickFunction> @ 14648e4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintTickFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FConstraintTickFunction__6B_;
  DestructItems<TFunction<void___cdecl(void)>,int>
            (*(TFunction<void___cdecl(void)> **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  FTickFunction::~FTickFunction(param_1);
  return;
}

// Construct<FConstraintAndActiveChannel> @ 14648e660

void __cdecl UE::CoreUObject::Private::Construct<FConstraintAndActiveChannel>(void *param_1)

{
  FMovieSceneConstraintChannel::FMovieSceneConstraintChannel(param_1);
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  return;
}

// ConstructForTests<FConstraintAndActiveChannel> @ 14648e690

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintAndActiveChannel>(void *param_1)

{
  FMovieSceneConstraintChannel::FMovieSceneConstraintChannel(param_1);
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  return;
}

// Destruct<FConstraintAndActiveChannel> @ 14648e6c0

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintAndActiveChannel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xd0));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Copy<FConstraintAndActiveChannel> @ 14648e6d0

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintAndActiveChannel>(void *param_1,void *param_2,int param_3)

{
  FMovieSceneBoolChannel *pFVar1;
  FMovieSceneBoolChannel *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FMovieSceneBoolChannel *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FMovieSceneBoolChannel::operator=(this,pFVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar1[1]._padding_ != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar1[1]._padding_);
      }
      this[1]._padding_ = pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FMovieSceneBoolChannel *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneConstraintChannel> @ 14648e830

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneConstraintChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined2 *)((longlong)param_1 + 0x68) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneConstraintChannel__6B_;
  return;
}

// ConstructForTests<FMovieSceneConstraintChannel> @ 14648e840

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneConstraintChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined2 *)((longlong)param_1 + 0x68) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneConstraintChannel__6B_;
  return;
}

// Destruct<FMovieSceneConstraintChannel> @ 14648e850

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneConstraintChannel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xd0));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Copy<FMovieSceneConstraintChannel> @ 14648e860

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneConstraintChannel>
          (void *param_1,void *param_2,int param_3)

{
  FMovieSceneBoolChannel *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FMovieSceneBoolChannel::operator=
                (this,(FMovieSceneBoolChannel *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FMovieSceneConstraintChannel> @ 14648e8b0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneConstraintChannel>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FMovieSceneBoolChannel::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// DereferenceIfNecessary<UE::Anim::FAnimationEvaluator,UE::Anim::FAnimationEvaluator_*_&> @ 146491270

FAnimationEvaluator * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Anim::FAnimationEvaluator,UE::Anim::FAnimationEvaluator_*_&>
          (FAnimationEvaluator **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UConstraintSubsystem,UConstraintSubsystem_*_&> @ 146491290

UConstraintSubsystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UConstraintSubsystem,UConstraintSubsystem_*_&>
          (UConstraintSubsystem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UConstraintsManager,UConstraintsManager_*_&> @ 1464912b0

UConstraintsManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<UConstraintsManager,UConstraintsManager_*_&>
          (UConstraintsManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UTickableTransformConstraint,UTickableTransformConstraint_*_&> @ 1464912d0

UTickableTransformConstraint * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UTickableTransformConstraint,UTickableTransformConstraint_*_&>
          (UTickableTransformConstraint **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_> @ 14649c730

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
          (ushort param_1,ForElementType<USceneComponent_*> *param_2,int *param_3)

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
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_> @ 14649c800

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<USceneComponent_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 1464a06e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  UTransformableHandle *pUVar1;
  UTransformableHandle *pUVar2;
  UTransformableHandle *pUVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FWeakObjectPtr *this_00;
  UObject *pUVar11;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  pUVar9 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = UTickableTransformConstraint::StaticClass();
    iVar8 = (int)pUVar10->_padding_;
    if ((((iVar8 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar10->_padding_)) && (pUVar9 != *(UObject **)this)) &&
       (pUVar1 = *(UTransformableHandle **)&pUVar9[3].field_0x18,
       pUVar1 != (UTransformableHandle *)0x0)) {
      iVar8 = *(int *)((longlong)this + 0x10);
      iVar7 = (**(code **)(pUVar1->_padding_ + 0x328))(pUVar1);
      if (iVar7 == iVar8) {
        return true;
      }
      if ((*(char *)((longlong)this + 0x14) != '\0') && (*(longlong *)((longlong)this + 0x18) != 0))
      {
        this_00 = (FWeakObjectPtr *)(**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,&local_res10);
        pUVar11 = FWeakObjectPtr::Get(this_00);
        if ((pUVar11 == *(UObject **)((longlong)this + 0x18)) &&
           ((cVar5 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x338))
                               (*(longlong **)((longlong)this + 8),pUVar1), cVar5 == '\0' &&
            (bVar6 = UE::TransformConstraintUtil::Private::HasConstraintDependencyWith
                               (*(UWorld **)((longlong)this + 0x20),pUVar1,
                                *(UTransformableHandle **)((longlong)this + 8)), !bVar6)))) {
          pUVar2 = *(UTransformableHandle **)&pUVar9[3].field_0x20;
          if (pUVar2 == (UTransformableHandle *)0x0) {
            return true;
          }
          pUVar3 = *(UTransformableHandle **)(*(longlong *)this + 0x90);
          pcVar4 = *(code **)(pUVar2->_padding_ + 0x328);
          iVar8 = (**(code **)(pUVar3->_padding_ + 0x328))(pUVar3);
          iVar7 = (*pcVar4)();
          if (iVar7 != iVar8) {
            pUVar9 = *(UObject **)((longlong)this + 0x20);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar9);
            }
            local_res10.ObjectIndex = 0;
            local_res10.ObjectSerialNumber = 0;
            local_res18[0] = pUVar9;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar9);
            }
            FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
            bVar6 = FHandleDependencyChecker::HasDependency
                              ((FHandleDependencyChecker *)&local_res10,pUVar3,pUVar2);
            if ((!bVar6) &&
               (bVar6 = FHandleDependencyChecker::HasDependency
                                  ((FHandleDependencyChecker *)&local_res10,pUVar3,pUVar1), !bVar6))
            {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// AddConstraint @ 1464a32c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::TransformConstraintUtil::AddConstraint
          (UWorld *param_1,UTransformableHandle *param_2,UTransformableHandle *param_3,
          UTickableTransformConstraint *param_4,bool param_5,bool param_6)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  UTransformableHandle *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  UClass *pUVar10;
  FStaticBasicLogRecord *pFVar11;
  
  if ((param_2 == (UTransformableHandle *)0x0) ||
     (cVar7 = (**(code **)(param_2->_padding_ + 0x2b0))(param_2,1), cVar7 == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((param_3 == (UTransformableHandle *)0x0) ||
     (cVar7 = (**(code **)(param_3->_padding_ + 0x2b0))(param_3,1), cVar7 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((bVar8) && (bVar6)) {
    if (param_4 != (UTickableTransformConstraint *)0x0) {
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (UTransformableHandle *)0x0)) {
        GC::MarkAsReachable((UObject *)param_2);
      }
      (param_4->ParentTRSHandle).field0_0x0.DebugPtr = param_2;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (param_3 != (UTransformableHandle *)0x0)) {
        GC::MarkAsReachable((UObject *)param_3);
      }
      (param_4->ChildTRSHandle).field0_0x0.DebugPtr = param_3;
      ::Singleton.World = param_1;
      bVar8 = FConstraintsManagerController::AddConstraint
                        (&::Singleton,(UTickableConstraint *)param_4);
      if (bVar8) {
        cVar7 = !param_6;
        if (param_6) {
          pUVar10 = (UClass *)param_4->_padding_;
          if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar10);
          }
          pUVar2 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar10 = UTickableTransformConstraint::StaticClass();
          lVar3 = *(longlong *)&pUVar2->field_0x10;
          iVar1 = (int)pUVar10->_padding_;
          if (((*(int *)(lVar3 + 0x38) < iVar1) ||
              ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
               &pUVar10->_padding_)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret->IsA(T::StaticClass())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x1181,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          cVar7 = pUVar2[4].field_0xa;
        }
        else {
          param_4->bMaintainOffset = param_5;
        }
        if (((cVar7 != '\0') &&
            (pUVar4 = (param_4->ParentTRSHandle).field0_0x0.DebugPtr,
            pUVar4 != (UTransformableHandle *)0x0)) &&
           (((param_4->ChildTRSHandle).field0_0x0.DebugPtr != (UTransformableHandle *)0x0 &&
            ((cVar7 = (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,1), cVar7 != '\0' &&
             (pUVar4 = (param_4->ChildTRSHandle).field0_0x0.DebugPtr,
             cVar7 = (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,1), cVar7 != '\0')))))) {
          (**(code **)(param_4->_padding_ + 0x328))(param_4);
        }
        (**(code **)(param_4->_padding_ + 0x300))(param_4,param_1);
        return true;
      }
      (param_4->ParentTRSHandle).field0_0x0.DebugPtr = (UTransformableHandle *)0x0;
      (param_4->ChildTRSHandle).field0_0x0.DebugPtr = (UTransformableHandle *)0x0;
      return false;
    }
    if ((byte)LogTemp._0_1_ < 2) {
      return false;
    }
    pFVar11 = &::LOG_Static;
  }
  else {
    if ((byte)LogTemp._0_1_ < 2) {
      return false;
    }
    pFVar11 = &::LOG_Static;
  }
  Logging::Private::BasicLog<2>(pFVar11,(FLogCategoryBase *)&LogTemp);
  return false;
}

// AreHandlesConstrainable @ 1464a48e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::TransformConstraintUtil::Private::AreHandlesConstrainable
          (UWorld *param_1,UTransformableHandle *param_2,UTransformableHandle *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = *(code **)(param_2->_padding_ + 0x328);
  iVar4 = (**(code **)(param_3->_padding_ + 0x328))(param_3);
  iVar5 = (*pcVar1)(param_2);
  if (iVar4 == iVar5) {
    if (1 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    cVar2 = (**(code **)(param_2->_padding_ + 0x338))(param_2,param_3);
    if (cVar2 == '\0') {
      bVar3 = HasConstraintDependencyWith(param_1,param_2,param_3);
      return !bVar3;
    }
  }
  return false;
}

// BuildGraph @ 1464a79d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Constraints::Graph::BuildGraph
          (UWorld *param_1,
          TArrayView<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int> *param_2,
          TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FGraphBuildHelper local_28;
  
  DestructItems<FConstraintNode,int>
            ((FConstraintNode *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if (param_1 == (UWorld *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7515207077300535880>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                       ,0x248,"InWorld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2->ArrayNum != 0) {
    local_28.World = param_1;
    local_28.Constraints = param_2;
    local_28.Nodes = param_3;
    Private::FGraphBuildHelper::Build(&local_28);
  }
  return;
}

// ComputeRelativeTransform @ 1464aa200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
UE::TransformConstraintUtil::ComputeRelativeTransform
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2,TTransform<double> *param_3,
          UTickableTransformConstraint *param_4)

{
  __m128d *p_Var1;
  double dVar2;
  ETransformConstraintType EVar3;
  char cVar4;
  int iVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  UClass *pUVar20;
  TRotator<double> *pTVar21;
  TQuat<double> *pTVar22;
  char cVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar49;
  undefined4 uVar50;
  uint uVar51;
  undefined1 auStack_238 [32];
  TRotator<double> local_218;
  TQuat<double> local_1f8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TQuat<double> local_1b8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_238;
  if (param_4 == (UTickableTransformConstraint *)0x0) {
    UE::Math::TTransform<double>::GetRelativeTransform(param_2,__return_storage_ptr__,param_3);
  }
  else {
    EVar3 = param_4->Type;
    if (EVar3 == Translation) {
      local_1f8.Z = (param_3->Translation).ZW.m128d_f64[0];
      dVar13 = (param_1->Rotation).XY.m128d_f64[0];
      dVar14 = (param_1->Rotation).XY.m128d_f64[1];
      dVar10 = (param_2->Translation).XY.m128d_f64[0] - (param_3->Translation).XY.m128d_f64[0];
      dVar7 = (param_1->Rotation).ZW.m128d_f64[0];
      dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar16 = (param_1->Scale3D).XY.m128d_f64[0];
      dVar17 = (param_1->Scale3D).XY.m128d_f64[1];
      dVar12 = (param_1->Scale3D).ZW.m128d_f64[0];
      dVar9 = (param_1->Scale3D).ZW.m128d_f64[1];
      local_218.Roll = (param_2->Translation).ZW.m128d_f64[0] - local_1f8.Z;
      dVar2 = (param_2->Translation).XY.m128d_f64[1] - (param_3->Translation).XY.m128d_f64[1];
      pUVar20 = UTickableTranslationConstraint::StaticClass();
      iVar5 = (int)pUVar20->_padding_;
      if ((*(int *)(param_4->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_4->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar20->_padding_)) {
        param_4 = (UTickableTransformConstraint *)0x0;
      }
      if (param_4 != (UTickableTransformConstraint *)0x0) {
        if ((char)param_4[1]._padding_ == '\0') {
          dVar10 = (param_1->Translation).XY.m128d_f64[0];
        }
        if (*(char *)((longlong)&param_4[1]._padding_ + 1) == '\0') {
          dVar2 = (param_1->Translation).XY.m128d_f64[1];
        }
        if (*(char *)((longlong)&param_4[1]._padding_ + 2) == '\0') {
          local_218.Roll = (param_1->Translation).ZW.m128d_f64[0];
        }
      }
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = dVar13;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar14;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar7;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar8;
      auVar39._8_4_ = SUB84(dVar2,0);
      auVar39._0_8_ = dVar10;
      auVar39._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar39;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_218.Roll;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar16;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar17;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar12;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar9;
    }
    else if (EVar3 == Rotation) {
      dVar8 = (param_2->Rotation).ZW.m128d_f64[0];
      dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
      dVar16 = (param_2->Rotation).XY.m128d_f64[0];
      dVar17 = (param_2->Rotation).XY.m128d_f64[1];
      dVar13 = (param_3->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar14 = (param_3->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar2 = (param_3->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar10 = (param_3->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar50 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar12 = (param_1->Translation).XY.m128d_f64[0];
      dVar9 = (param_1->Translation).XY.m128d_f64[1];
      dVar18 = (param_1->Translation).ZW.m128d_f64[0];
      dVar19 = (param_1->Translation).ZW.m128d_f64[1];
      auVar40._8_4_ = SUB84(dVar10,0);
      auVar40._0_8_ = dVar2;
      auVar40._12_4_ = uVar50;
      dVar37 = auVar40._8_8_;
      auVar31._8_4_ = SUB84(dVar10,0);
      auVar31._0_8_ = dVar37;
      auVar31._12_4_ = uVar50;
      auVar48._0_8_ =
           dVar13 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar37 * dVar8;
      auVar48._8_8_ =
           dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar10 * dVar7;
      auVar32._8_4_ = SUB84(dVar14,0);
      auVar32._0_8_ = dVar14;
      auVar32._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      dVar10 = dVar17 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0] +
               dVar14 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar13 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar37 * dVar16;
      dVar13 = dVar16 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1] +
               auVar32._8_8_ * dVar7 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar13 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar31._8_8_ * dVar17;
      dVar7 = dVar7 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0] +
              dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              auVar48._0_8_;
      dVar2 = dVar8 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1] +
              dVar14 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              auVar48._8_8_;
      auVar41._8_4_ = SUB84(dVar13,0);
      auVar41._0_8_ = dVar10;
      auVar41._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dVar14 = (param_1->Scale3D).XY.m128d_f64[0];
      dVar8 = (param_1->Scale3D).XY.m128d_f64[1];
      auVar33._8_4_ = SUB84(dVar2,0);
      auVar33._0_8_ = dVar7;
      auVar33._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      dVar16 = (param_1->Scale3D).ZW.m128d_f64[0];
      dVar17 = (param_1->Scale3D).ZW.m128d_f64[1];
      dVar37 = dVar10 * dVar10 + dVar7 * dVar7;
      dVar43 = auVar41._8_8_ * dVar13 + auVar33._8_8_ * dVar2;
      auVar34._8_4_ = SUB84(dVar43,0);
      auVar34._0_8_ = dVar37;
      auVar34._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
      auVar35._0_8_ = auVar34._8_8_ + dVar37;
      auVar35._8_8_ = dVar37 + dVar43;
      auVar39 = sqrtpd(auVar48,auVar35);
      uVar24 = -(ulonglong)(__real_3e45798ee0000000 <= auVar35._0_8_);
      uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= auVar35._8_8_);
      uVar49 = (uint)(uVar24 >> 0x20);
      uVar51 = (uint)(uVar25 >> 0x20);
      auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
      auVar47._0_8_ = uVar24 & (ulonglong)(auVar44._0_8_ * dVar10);
      uVar15 = uVar25 & (ulonglong)(auVar44._8_8_ * dVar13);
      auVar47._8_4_ = (undefined4)uVar15;
      auVar47._12_4_ = (undefined4)(uVar15 >> 0x20);
      auVar36._0_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar36._4_4_ =
           ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar36._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar36._12_4_ =
           ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar42._0_8_ = (ulonglong)(auVar39._0_8_ * dVar7) & uVar24;
      uVar15 = (ulonglong)(auVar39._8_8_ * dVar2) & uVar25;
      auVar42._8_4_ = (undefined4)uVar15;
      auVar42._12_4_ = (undefined4)(uVar15 >> 0x20);
      auVar44._4_4_ =
           ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar44._0_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar44._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar44._12_4_ =
           ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_1d8 = auVar47 | auVar44;
      local_1c8 = auVar42 | auVar36;
      pUVar20 = UTickableRotationConstraint::StaticClass();
      iVar5 = (int)pUVar20->_padding_;
      if ((*(int *)(param_4->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_4->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar20->_padding_)) {
        param_4 = (UTickableTransformConstraint *)0x0;
      }
      if (param_4 == (UTickableTransformConstraint *)0x0) {
      }
      else {
        local_1b8.X = (param_1->Rotation).XY.m128d_f64[0];
        local_1b8.Y = (param_1->Rotation).XY.m128d_f64[1];
        local_1b8.Z = (param_1->Rotation).ZW.m128d_f64[0];
        local_1b8.W = (param_1->Rotation).ZW.m128d_f64[1];
        UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_1d8,&local_218);
        pTVar21 = UE::Math::TQuat<double>::Rotator(&local_1b8,(TRotator<double> *)&local_1f8);
        if ((char)param_4[1]._padding_ == '\0') {
          local_218.Roll = pTVar21->Roll;
        }
        if (*(char *)((longlong)&param_4[1]._padding_ + 1) == '\0') {
          local_218.Pitch = pTVar21->Pitch;
        }
        if (*(char *)((longlong)&param_4[1]._padding_ + 2) == '\0') {
          local_218.Yaw = pTVar21->Yaw;
        }
        pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_218,&local_1f8);
        local_1d8._0_8_ = pTVar22->X;
        local_1d8._8_8_ = pTVar22->Y;
        local_1c8._0_8_ = pTVar22->Z;
        local_1c8._8_8_ = pTVar22->W;
      }
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)local_1d8._0_8_;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)local_1d8._8_8_;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)local_1c8._0_8_;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)local_1c8._8_8_;
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar12;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar18;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar19;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar14;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar8;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar16;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar17;
    }
    else if (EVar3 == Scale) {
      local_1f8.Z = (param_3->Scale3D).ZW.m128d_f64[0];
      local_218.Roll = 0.0;
      auVar39 = *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64;
      local_218.Pitch = (param_2->Scale3D).XY.m128d_f64[0];
      local_218.Yaw = (param_2->Scale3D).XY.m128d_f64[1];
      dVar2 = (param_1->Rotation).XY.m128d_f64[0];
      dVar10 = (param_1->Rotation).XY.m128d_f64[1];
      dVar13 = (param_1->Rotation).ZW.m128d_f64[0];
      dVar14 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar7 = (param_1->Translation).XY.m128d_f64[0];
      dVar8 = (param_1->Translation).XY.m128d_f64[1];
      dVar16 = (param_1->Translation).ZW.m128d_f64[0];
      dVar17 = (param_1->Translation).ZW.m128d_f64[1];
      if ((double)CONCAT44(auVar39._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           auVar39._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000) {
        dVar12 = 0.0;
      }
      else {
        dVar12 = local_218.Pitch / auVar39._0_8_;
      }
      if ((double)CONCAT44(auVar39._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           auVar39._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000) {
        dVar9 = 0.0;
      }
      else {
        dVar9 = local_218.Yaw / auVar39._8_8_;
      }
      if (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)local_1f8.Z >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_1f8.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        local_218.Roll = (param_2->Scale3D).ZW.m128d_f64[0] / local_1f8.Z;
      }
      pUVar20 = UTickableScaleConstraint::StaticClass();
      iVar5 = (int)pUVar20->_padding_;
      if ((*(int *)(param_4->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_4->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar20->_padding_)) {
        param_4 = (UTickableTransformConstraint *)0x0;
      }
      if (param_4 != (UTickableTransformConstraint *)0x0) {
        if ((char)param_4[1]._padding_ == '\0') {
          dVar12 = (param_1->Scale3D).XY.m128d_f64[0];
        }
        if (*(char *)((longlong)&param_4[1]._padding_ + 1) == '\0') {
          dVar9 = (param_1->Scale3D).XY.m128d_f64[1];
        }
        if (*(char *)((longlong)&param_4[1]._padding_ + 2) == '\0') {
          local_218.Roll = (param_1->Scale3D).ZW.m128d_f64[0];
        }
      }
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = dVar2;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar13;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar14;
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar7;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar8;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar16;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar17;
      auVar11._8_4_ = SUB84(dVar9,0);
      auVar11._0_8_ = dVar12;
      auVar11._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar11;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_218.Roll;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    }
    else if (EVar3 == Parent) {
      pUVar20 = UTickableParentConstraint::StaticClass();
      iVar5 = (int)pUVar20->_padding_;
      if ((*(int *)(param_4->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_4->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar20->_padding_)) {
        local_188.Rotation.XY.m128d_f64 = *&(param_2->Rotation).XY.m128d_f64;
        local_188.Rotation.ZW.m128d_f64 = *&(param_2->Rotation).ZW.m128d_f64;
        local_188.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
        local_188.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
        cVar23 = '\x01';
        local_188.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
        local_188.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
        local_188.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
        local_188.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
        local_188.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
        local_188.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
        UE::Math::TTransform<double>::GetRelativeTransform(&local_188,&local_128,param_3);
        local_218.Pitch = local_128.Scale3D.XY.m128d_f64[0];
        local_218.Yaw = local_128.Scale3D.XY.m128d_f64[1];
      }
      else {
        local_188.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
        local_188.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
        local_188.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
        local_188.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
        dVar2 = (param_2->Rotation).XY.m128d_f64[0];
        dVar10 = (param_2->Rotation).XY.m128d_f64[1];
        local_188.Rotation.XY.m128d_f64 = *&(param_2->Rotation).XY.m128d_f64;
        p_Var1 = &(param_2->Rotation).ZW;
        dVar13 = p_Var1->m128d_f64[0];
        dVar14 = (param_2->Rotation).ZW.m128d_f64[1];
        local_188.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
        cVar23 = (char)param_4[1]._padding_;
        local_188.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
        local_188.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
        local_188.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
        local_188.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
        if (cVar23 == '\0') {
          local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          auVar38._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
          auVar38._0_8_ = auVar38._8_8_;
          local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          dVar7 = dVar13 * dVar13 + dVar2 * dVar2;
          dVar8 = dVar14 * dVar14 + dVar10 * dVar10;
          auVar28._8_4_ = SUB84(dVar8,0);
          auVar28._0_8_ = dVar7;
          auVar28._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          auVar29._0_8_ = auVar28._8_8_ + dVar7;
          auVar29._8_8_ = dVar7 + dVar8;
          auVar39 = sqrtpd(auVar38,auVar29);
          uVar24 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar29._0_8_);
          uVar26 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar29._8_8_);
          uVar25 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar29._0_8_);
          uVar27 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar29._8_8_);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
          auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
          auVar45._0_8_ = uVar24 & (ulonglong)(auVar44._0_8_ * dVar2);
          uVar15 = uVar26 & (ulonglong)(auVar44._8_8_ * dVar10);
          auVar45._8_4_ = (undefined4)uVar15;
          auVar45._12_4_ = (undefined4)(uVar15 >> 0x20);
          auVar30._0_8_ = (ulonglong)(auVar39._0_8_ * dVar13) & uVar25;
          uVar15 = uVar27 & (ulonglong)(auVar39._8_8_ * dVar14);
          auVar30._8_4_ = (undefined4)uVar15;
          auVar30._12_4_ = (undefined4)(uVar15 >> 0x20);
          auVar6._4_4_ = ~(uint)(uVar24 >> 0x20) &
                         GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar6._0_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar6._8_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar6._12_4_ =
               ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          local_188.Rotation.XY.m128d_f64 = (double  [2])(auVar45 | auVar6);
          auVar46._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar46._4_4_ =
               ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar46._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar46._12_4_ =
               ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          local_188.Rotation.ZW.m128d_f64 = (double  [2])(auVar30 | auVar46);
        }
        UE::Math::TTransform<double>::GetRelativeTransform(&local_188,&local_128,param_3);
        cVar4 = *(char *)((longlong)&param_4[1]._padding_ + 1);
        if (((cVar4 == '\0') || (*(char *)((longlong)&param_4[1]._padding_ + 2) == '\0')) ||
           (*(char *)((longlong)&param_4[1]._padding_ + 3) == '\0')) {
          local_218.Pitch = local_128.Translation.XY.m128d_f64[0];
          local_218.Yaw = local_128.Translation.XY.m128d_f64[1];
          local_1f8.Z = (param_1->Translation).ZW.m128d_f64[0];
          if (cVar4 == '\0') {
            local_218.Pitch = (param_1->Translation).XY.m128d_f64[0];
          }
          if (*(char *)((longlong)&param_4[1]._padding_ + 2) == '\0') {
            local_218.Yaw = (param_1->Translation).XY.m128d_f64[1];
          }
          if (*(char *)((longlong)&param_4[1]._padding_ + 3) == '\0') {
            local_128.Translation.ZW.m128d_f64[0] = local_1f8.Z;
            local_218.Roll = local_1f8.Z;
          }
          local_128.Translation.XY.m128d_f64[0] = local_218.Pitch;
          local_128.Translation.XY.m128d_f64[1] = local_218.Yaw;
          local_128.Translation.ZW.m128d_f64[1] = 0.0;
        }
        if (((*(char *)((longlong)&param_4[1]._padding_ + 4) == '\0') ||
            (*(char *)((longlong)&param_4[1]._padding_ + 5) == '\0')) ||
           (*(char *)((longlong)&param_4[1]._padding_ + 6) == '\0')) {
          local_1b8.Z = (param_1->Rotation).ZW.m128d_f64[0];
          local_1b8.W = (param_1->Rotation).ZW.m128d_f64[1];
          local_1b8.X = (param_1->Rotation).XY.m128d_f64[0];
          local_1b8.Y = (param_1->Rotation).XY.m128d_f64[1];
          UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_1d8,&local_218);
          pTVar21 = UE::Math::TQuat<double>::Rotator(&local_1b8,(TRotator<double> *)&local_1f8);
          if (*(char *)((longlong)&param_4[1]._padding_ + 4) == '\0') {
            local_218.Roll = pTVar21->Roll;
          }
          if (*(char *)((longlong)&param_4[1]._padding_ + 5) == '\0') {
            local_218.Pitch = pTVar21->Pitch;
          }
          if (*(char *)((longlong)&param_4[1]._padding_ + 6) == '\0') {
            local_218.Yaw = pTVar21->Yaw;
          }
          pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_218,&local_1f8);
          local_128.Rotation.XY.m128d_f64[0] = pTVar22->X;
          local_128.Rotation.XY.m128d_f64[1] = pTVar22->Y;
          local_128.Rotation.ZW.m128d_f64[0] = pTVar22->Z;
          local_128.Rotation.ZW.m128d_f64[1] = pTVar22->W;
        }
        cVar4 = *(char *)((longlong)&param_4[1]._padding_ + 7);
        if (((cVar4 == '\0') || ((char)param_4[1]._padding_ == '\0')) ||
           (local_218.Pitch = local_128.Scale3D.XY.m128d_f64[0],
           local_218.Yaw = local_128.Scale3D.XY.m128d_f64[1],
           *(char *)((longlong)&param_4[1]._padding_ + 1) == '\0')) {
          local_218.Pitch = local_128.Scale3D.XY.m128d_f64[0];
          local_218.Yaw = local_128.Scale3D.XY.m128d_f64[1];
          dVar2 = (param_1->Scale3D).ZW.m128d_f64[0];
          if (cVar4 == '\0') {
            local_218.Pitch = (param_1->Scale3D).XY.m128d_f64[0];
          }
          if ((char)param_4[1]._padding_ == '\0') {
            local_218.Yaw = (param_1->Scale3D).XY.m128d_f64[1];
          }
          if (*(char *)((longlong)&param_4[1]._padding_ + 1) == '\0') {
            local_128.Scale3D.ZW.m128d_f64[0]._0_4_ = SUB84(dVar2,0);
            local_128.Scale3D.ZW.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          local_128.Scale3D.ZW.m128d_f64[1]._0_4_ = 0;
          local_128.Scale3D.ZW.m128d_f64[1]._4_4_ = 0;
        }
      }
      if (cVar23 == '\0') {
        dVar2 = (param_1->Scale3D).ZW.m128d_f64[0];
        local_218.Pitch = (param_1->Scale3D).XY.m128d_f64[0];
        local_218.Yaw = (param_1->Scale3D).XY.m128d_f64[1];
        local_128.Scale3D.ZW.m128d_f64[0]._0_4_ = SUB84(dVar2,0);
        local_128.Scale3D.ZW.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_128.Scale3D.ZW.m128d_f64[1]._0_4_ = 0;
        local_128.Scale3D.ZW.m128d_f64[1]._4_4_ = 0;
      }
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_128.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_128.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_128.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_128.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_128.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_128.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_128.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_128.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_218.Pitch;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_218.Yaw;
      *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
           local_128.Scale3D.ZW.m128d_f64[0]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
           local_128.Scale3D.ZW.m128d_f64[0]._4_4_;
      *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
           local_128.Scale3D.ZW.m128d_f64[1]._0_4_;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
           local_128.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    else if (EVar3 == LookAt) {
      dVar2 = (param_1->Rotation).XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->Rotation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->Translation).XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->Translation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->Scale3D).ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
    }
    else {
      UE::Math::TTransform<double>::GetRelativeTransform(param_2,__return_storage_ptr__,param_3);
    }
  }
  return __return_storage_ptr__;
}

// CreateAndAddFromObjects @ 1464ab0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableTransformConstraint * __cdecl
UE::TransformConstraintUtil::CreateAndAddFromObjects
          (UWorld *param_1,UObject *param_2,FName *param_3,UObject *param_4,FName *param_5,
          ETransformConstraintType param_6,bool param_7,bool param_8,
          TFunction<void___cdecl(void)> *param_9)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UTransformableHandle *this;
  UTransformableHandle *this_00;
  UTickableTransformConstraint *this_01;
  
  if (((param_1 == (UWorld *)0x0) || (param_2 == (UObject *)0x0)) || (param_4 == (UObject *)0x0)) {
    if (1 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    this = Private::GetHandle(param_2,param_3);
    if ((this != (UTransformableHandle *)0x0) &&
       (this_00 = Private::GetHandle(param_4,param_5), this_00 != (UTransformableHandle *)0x0)) {
      pcVar1 = *(code **)(this_00->_padding_ + 0x328);
      iVar4 = (**(code **)(this->_padding_ + 0x328))(this);
      iVar5 = (*pcVar1)(this_00);
      if (iVar5 == iVar4) {
        if (1 < (byte)LogTemp._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
      }
      else {
        cVar2 = (**(code **)(this->_padding_ + 0x338))(this,this_00);
        if ((cVar2 == '\0') &&
           (bVar3 = Private::HasConstraintDependencyWith(param_1,this,this_00), !bVar3)) {
          if (*(longlong *)param_9 != 0) {
            Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
            operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                        *)param_9);
          }
          this_01 = CreateFromType(param_1,param_6,param_8);
          if (this_01 == (UTickableTransformConstraint *)0x0) {
            return (UTickableTransformConstraint *)0x0;
          }
          cVar2 = (**(code **)(this->_padding_ + 0x2b0))(this,1);
          if (cVar2 == '\0') {
            return this_01;
          }
          cVar2 = (**(code **)(this_00->_padding_ + 0x2b0))(this_00,1);
          if (cVar2 == '\0') {
            return this_01;
          }
          bVar3 = AddConstraint(param_1,this,this_00,this_01,param_7,param_8);
          if (bVar3) {
            return this_01;
          }
          UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_01);
          return (UTickableTransformConstraint *)0x0;
        }
      }
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
      return (UTickableTransformConstraint *)0x0;
    }
  }
  return (UTickableTransformConstraint *)0x0;
}

// CreateFromType @ 1464abd20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableTransformConstraint * __cdecl
UE::TransformConstraintUtil::CreateFromType
          (UWorld *param_1,ETransformConstraintType param_2,bool param_3)

{
  code *pcVar1;
  FNameEntryId FVar2;
  bool bVar3;
  UEnum *this;
  UTickableTransformConstraint *pUVar4;
  UClass *pUVar5;
  FName FVar6;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar7;
  UClass *pUVar8;
  UTickableParentConstraint *pUVar9;
  ForAnyElementType FVar10;
  UTickableParentConstraint *pUVar11;
  FName local_res8;
  FName local_res20;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_98;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_88;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_78;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_68;
  undefined1 local_58 [48];
  
  if (param_1 == (UWorld *)0x0) {
    if ((byte)LogTemp._0_1_ < 2) {
      return (UTickableTransformConstraint *)0x0;
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    return (UTickableTransformConstraint *)0x0;
  }
  this = StaticEnum<enum_ETransformConstraintType>();
  bVar3 = UEnum::IsValidEnumValue(this,(ulonglong)param_2);
  if (!bVar3) {
    if ((byte)LogTemp._0_1_ < 2) {
      return (UTickableTransformConstraint *)0x0;
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    return (UTickableTransformConstraint *)0x0;
  }
  UEnum::GetNameStringByValue(this,&local_b8,(ulonglong)param_2);
  ::FString::PrintfImpl(&local_c8,L"%sConstraint");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar10.Data = local_c8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar10.Data);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pUVar9 = (UTickableParentConstraint *)0x0;
  pUVar11 = (UTickableParentConstraint *)0x0;
  ::Singleton.World = param_1;
  if (param_2 == Translation) {
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = local_res8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableTranslationConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&local_d0,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)pUVar5,&local_68,::Singleton.World)
    ;
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableTranslationConstraint>_::__l2::<lambda_1>_>
                       (&local_68,(<lambda_1>)local_d0);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableTranslationConstraint::StaticClass();
      local_d0 = MakeUniqueObjectName
                           ((UObject *)(local_58 + 0x20),pUVar5,FVar6,
                            local_res8.ComparisonIndex.Value);
      local_d0 = *(FName *)local_d0;
    }
    if (param_3) {
      pUVar8 = UTickableTranslationConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = (UTickableParentConstraint *)
              NewObject<UTickableTranslationConstraint>
                        ((UObject *)pUVar5,local_d0,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
    local_a8.AllocatorInstance.Data = local_68.AllocatorInstance.Data;
  }
  else if (param_2 == Rotation) {
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = local_res8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableRotationConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&local_d8,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)pUVar5,&local_78,::Singleton.World)
    ;
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableRotationConstraint>_::__l2::<lambda_1>_>
                       (&local_78,(<lambda_1>)local_d8);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableRotationConstraint::StaticClass();
      local_d8 = MakeUniqueObjectName
                           ((UObject *)(local_58 + 0x18),pUVar5,FVar6,
                            local_res8.ComparisonIndex.Value);
      local_d8 = *(FName *)local_d8;
    }
    if (param_3) {
      pUVar8 = UTickableRotationConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = (UTickableParentConstraint *)
              NewObject<UTickableRotationConstraint>
                        ((UObject *)pUVar5,local_d8,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
    local_a8.AllocatorInstance.Data = local_78.AllocatorInstance.Data;
  }
  else if (param_2 == Scale) {
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = local_res8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableScaleConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&local_e0,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)pUVar5,&local_88,::Singleton.World)
    ;
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableScaleConstraint>_::__l2::<lambda_1>_>
                       (&local_88,(<lambda_1>)local_e0);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableScaleConstraint::StaticClass();
      local_e0 = MakeUniqueObjectName
                           ((UObject *)(local_58 + 0x10),pUVar5,FVar6,
                            local_res8.ComparisonIndex.Value);
      local_e0 = *(FName *)local_e0;
    }
    if (param_3) {
      pUVar8 = UTickableScaleConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = (UTickableParentConstraint *)
              NewObject<UTickableScaleConstraint>
                        ((UObject *)pUVar5,local_e0,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
    local_a8.AllocatorInstance.Data = local_88.AllocatorInstance.Data;
  }
  else if (param_2 == Parent) {
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = local_res8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableParentConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&local_e8,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)pUVar5,&local_98,::Singleton.World)
    ;
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableParentConstraint>_::__l2::<lambda_1>_>
                       (&local_98,(<lambda_1>)local_e8);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableParentConstraint::StaticClass();
      local_e8 = MakeUniqueObjectName
                           ((UObject *)(local_58 + 8),pUVar5,FVar6,local_res8.ComparisonIndex.Value)
      ;
      local_e8 = *(FName *)local_e8;
    }
    if (param_3) {
      pUVar8 = UTickableParentConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = NewObject<UTickableParentConstraint>
                        ((UObject *)pUVar5,local_e8,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
    local_a8.AllocatorInstance.Data = local_98.AllocatorInstance.Data;
  }
  else {
    pUVar11 = pUVar9;
    if (param_2 != LookAt) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6003528814179647138>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\TransformConstraintUtil.cpp"
                         ,0x15e,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UTickableTransformConstraint *)(*pcVar1)();
        return pUVar4;
      }
      goto LAB_1464ac26f;
    }
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = local_res8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableLookAtConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&local_res20,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)pUVar5,&local_a8,::Singleton.World)
    ;
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableLookAtConstraint>_::__l2::<lambda_1>_>
                       (&local_a8,(<lambda_1>)local_res20);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableLookAtConstraint::StaticClass();
      local_res20 = MakeUniqueObjectName
                              ((UObject *)local_58,pUVar5,FVar6,local_res8.ComparisonIndex.Value);
      local_res20 = *(FName *)local_res20;
    }
    if (param_3) {
      pUVar8 = UTickableLookAtConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = (UTickableParentConstraint *)
              NewObject<UTickableLookAtConstraint>
                        ((UObject *)pUVar5,local_res20,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
LAB_1464ac26f:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    return (UTickableTransformConstraint *)pUVar11;
  }
  return (UTickableTransformConstraint *)pUVar11;
}

// CreateHandleForSceneComponent @ 1464ac2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTransformableComponentHandle * __cdecl
UE::TransformConstraintUtil::CreateHandleForSceneComponent(USceneComponent *param_1,FName *param_2)

{
  FName FVar1;
  FName FVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UTransformableComponentHandle *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (USceneComponent *)0x0) {
    pUVar5 = (UTransformableComponentHandle *)0x0;
  }
  else {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = GetTransientPackage();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = UTransformableComponentHandle::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transactional;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = pUVar3;
    pUVar5 = (UTransformableComponentHandle *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    local_a8 = (FName)param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(pUVar5->Component).WeakPtr,(FObjectPtr)&local_a8);
    pUVar5->SocketName = *param_2;
    (**(code **)(param_1->_padding_ + 0x5f8))(param_1,2);
  }
  return pUVar5;
}

// EvaluateComponent @ 1464af010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAnimationEvaluator * __cdecl UE::Anim::EvaluateComponent(USceneComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FAnimationEvaluationCache *this;
  FAnimationEvaluator *pFVar3;
  
  if (param_1 != (USceneComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      this = FAnimationEvaluationCache::Get();
      pFVar3 = FAnimationEvaluationCache::GetEvaluator(this,(USkeletalMeshComponent *)param_1);
      return pFVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAnimationEvaluator::FAnimationEvaluator(&::Invalid,(USkeletalMeshComponent *)0x0);
      atexit(`UE::Anim::EvaluateComponent'::__l2::_dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetChildrenConstraints @ 1464b1810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::TransformConstraintUtil::GetChildrenConstraints
          (UWorld *param_1,UTickableTransformConstraint *param_2,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_3,bool param_4)

{
  UTransformableHandle *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FWeakObjectPtr *this;
  undefined1 local_res10 [8];
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_88;
  UTickableTransformConstraint *local_78;
  UTransformableHandle *pUStack_70;
  uint local_68;
  undefined4 uStack_64;
  UObject *pUStack_60;
  UWorld *local_58;
  <lambda_1> local_48;
  
  if ((param_2 != (UTickableTransformConstraint *)0x0) &&
     (cVar3 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2,1), cVar3 != '\0')) {
    pUVar1 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
    uVar5 = (**(code **)(pUVar1->_padding_ + 0x328))(pUVar1);
    this = (FWeakObjectPtr *)(**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,local_res10);
    uStack_64 = CONCAT31(uStack_64._1_3_,param_4);
    local_78 = param_2;
    pUStack_70 = pUVar1;
    local_68 = uVar5;
    pUStack_60 = FWeakObjectPtr::Get(this);
    local_48._20_4_ = uStack_64;
    local_48.ParentHash = local_68;
    local_48.InConstraint = local_78;
    local_48.Handle = pUStack_70;
    ::Singleton.World = param_1;
    local_58 = param_1;
    local_48.ParentTarget = pUStack_60;
    local_48.World = param_1;
    FConstraintsManagerController::
    GetConstraintsByPredicate<_UE::TransformConstraintUtil::GetChildrenConstraints_::__l2::<lambda_1>_>
              (&::Singleton,&local_88,&local_48,false);
    if ((param_3 == &local_88) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_88.ArrayNum != 0) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,local_88.ArrayNum,&param_3->AllocatorInstance,&param_3->ArrayNum,
                         &param_3->ArrayMax);
      memcpy((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8,local_88.AllocatorInstance.Data
             ,(longlong)local_88.ArrayNum << 3);
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  return;
}

// GetComponentName @ 1464b19b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
UE::Anim::GetComponentName(FString *__return_storage_ptr__,USceneComponent *param_1)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConfig @ 1464b19e0

UTickableTransformConstraint * __cdecl UE::TransformConstraintUtil::GetConfig(UClass *param_1)

{
  int iVar1;
  UConstraintSubsystem *this;
  UTickableTransformConstraint *pUVar2;
  UClass *pUVar3;
  
  this = UConstraintSubsystem::Get();
  if (((this != (UConstraintSubsystem *)0x0) && (param_1 != (UClass *)0x0)) &&
     (pUVar2 = (UTickableTransformConstraint *)UConstraintSubsystem::GetConfig(this,param_1),
     pUVar2 != (UTickableTransformConstraint *)0x0)) {
    pUVar3 = UTickableTransformConstraint::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTickableTransformConstraint *)0x0;
}

// GetConstrainableHash @ 1464b1c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl UE::Private::GetConstrainableHash(UObject *param_1)

{
  UClass *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
  *this;
  FTransformableInfo *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  UObject *local_50;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this = (TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
          *)FTransformableRegistry::Get();
  pUVar1 = *(UClass **)&param_1->field_0x10;
  if ((pUVar1 != (UClass *)0x0) &&
     ((pFVar5 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                ::Find(this,pUVar1), pFVar5 != (FTransformableInfo *)0x0 ||
      (pFVar5 = FTransformableRegistry::FindInfo
                          ((FTransformableRegistry *)this,(UClass *)pUVar1->_padding_),
      pFVar5 != (FTransformableInfo *)0x0)))) {
    local_48 = *(code **)&pFVar5->GetHashFunc;
    local_20 = (longlong *)0x0;
    if (local_48 != (code *)0x0) {
      puVar2 = *(undefined8 **)&(pFVar5->GetHashFunc).field_0x28;
      puVar7 = (undefined8 *)&(pFVar5->GetHashFunc).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar7 = puVar2;
      }
      (**(code **)*puVar7)(puVar7,local_38);
      if (local_48 != (code *)0x0) {
        local_58 = 0;
        local_50 = param_1;
        Core::Private::Function::CheckCallable(local_48);
        pcVar3 = local_48;
        plVar8 = local_38;
        if (local_20 != (longlong *)0x0) {
          plVar8 = local_20;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        uVar4 = (*pcVar3)(uVar6,&local_50,&local_58);
        if (local_48 == (code *)0x0) {
          return uVar4;
        }
        plVar8 = local_38;
        if (local_20 != (longlong *)0x0) {
          plVar8 = local_20;
        }
        (**(code **)(*plVar8 + 0x10))();
        return uVar4;
      }
    }
  }
  return 0;
}

// GetConstraintLabel @ 1464b2250

FString * __cdecl
UE::Private::GetConstraintLabel(FString *__return_storage_ptr__,UTickableConstraint *param_1)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConstraintsRelativeTransform @ 1464b27a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Math::TTransform<double>_> * __cdecl
UE::TransformConstraintUtil::GetConstraintsRelativeTransform
          (TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1,TTransform<double> *param_2,TTransform<double> *param_3)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  EMovieSceneTransformChannel EVar8;
  uint uVar9;
  UTickableTransformConstraint *pUVar10;
  UClass *pUVar11;
  TTransform<double> *pTVar12;
  TOptional<UE::Math::TTransform<double>_> *pTVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_308 [32];
  <lambda_1> local_2c8;
  FIdentityFunctor local_2c7 [3];
  int local_2c4;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_2c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (((param_1->ArrayNum == 0) ||
      (iVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               ::
               FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                         (param_1,local_2c8,param_1->ArrayNum), iVar7 < 0)) ||
     (param_1->ArrayNum <= iVar7)) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  pUVar10 = (UTickableTransformConstraint *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)
                                ((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8));
  if (pUVar10 != (UTickableTransformConstraint *)0x0) {
    pUVar11 = UTickableTransformConstraint::StaticClass();
    iVar7 = (int)pUVar11->_padding_;
    if ((iVar7 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar11->_padding_)) goto LAB_1464b284f;
  }
  pUVar10 = (UTickableTransformConstraint *)0x0;
LAB_1464b284f:
  EVar8 = UTickableTransformConstraint::GetChannelsToKey(pUVar10);
  if ((EVar8 & AllTransform) == AllTransform) {
    UTickableTransformConstraint::GetParentGlobalTransform(pUVar10,&local_1d8);
    pTVar12 = ComputeRelativeTransform(&local_118,param_2,param_3,&local_1d8,pUVar10);
    dVar5 = (pTVar12->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[0] =
         (pTVar12->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar12->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[0] =
         (pTVar12->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar12->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[0] =
         (pTVar12->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar12->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[0] =
         (pTVar12->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar12->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[0] =
         (pTVar12->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar12->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[0] =
         (pTVar12->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[1] = dVar5;
    __return_storage_ptr__->bIsSet = true;
  }
  else {
    local_2c0.ArrayNum = param_1->ArrayNum;
    lVar15 = (longlong)local_2c0.ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_2c0.ArrayNum == 0) {
      local_2c0.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_2c0.ArrayNum,0,&local_2c0.AllocatorInstance,local_2c0.ArrayNum,
                 &local_2c0.ArrayMax);
      memcpy(local_2c0.AllocatorInstance.Data,pFVar3,lVar15 << 3);
    }
    local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b0.ArrayNum = 0;
    local_2b0.ArrayMax = 0;
    local_2c4 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                ::
                FindLastByPredicate<__UE::TransformConstraintUtil::GetConstraintsRelativeTransform_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                          (&local_2c0,(<lambda_1>)0x7,local_2c0.ArrayNum);
    if ((-1 < local_2c4) && (local_2c4 < param_1->ArrayNum)) {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_2b0,&local_2c4);
    }
    local_2c4 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                ::
                FindLastByPredicate<__UE::TransformConstraintUtil::GetConstraintsRelativeTransform_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                          (&local_2c0,(<lambda_1>)0x38,local_2c0.ArrayNum);
    if ((-1 < local_2c4) && (local_2c4 < param_1->ArrayNum)) {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_2b0,&local_2c4);
    }
    local_2c4 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                ::
                FindLastByPredicate<__UE::TransformConstraintUtil::GetConstraintsRelativeTransform_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                          (&local_2c0,(<lambda_1>)0x1c0,local_2c0.ArrayNum);
    if ((-1 < local_2c4) && (local_2c4 < param_1->ArrayNum)) {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_2b0,&local_2c4);
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum,local_2c7[0],
               (TLess<void> *)local_2c7);
    iVar7 = local_2b0.ArrayNum;
    uVar14 = (ulonglong)local_2b0.ArrayNum;
    if (local_2b0.ArrayNum == 0) {
      __return_storage_ptr__->bIsSet = false;
    }
    else {
      local_298 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
      uStack_294 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
      uStack_290 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
      uStack_28c = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
      local_288 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
      uStack_284 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
      uStack_280 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
      uStack_27c = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
      local_278 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
      uStack_274 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
      uStack_270 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
      uStack_26c = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
      local_268 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
      uStack_264 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
      uStack_260 = *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
      uStack_25c = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
      local_258 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
      uStack_254 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
      uStack_250 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
      uStack_24c = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
      local_248 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
      uStack_244 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
      uStack_240 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
      uStack_23c = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
      pFVar3 = local_2b0.AllocatorInstance.Data + uVar14 * 4;
      FVar16.Data = local_2b0.AllocatorInstance.Data;
      while( true ) {
        local_238.Rotation.XY.m128d_f64[0]._0_4_ = local_298;
        local_238.Rotation.XY.m128d_f64[0]._4_4_ = uStack_294;
        local_238.Rotation.XY.m128d_f64[1]._0_4_ = uStack_290;
        local_238.Rotation.XY.m128d_f64[1]._4_4_ = uStack_28c;
        local_238.Rotation.ZW.m128d_f64[0]._0_4_ = local_288;
        local_238.Rotation.ZW.m128d_f64[0]._4_4_ = uStack_284;
        local_238.Rotation.ZW.m128d_f64[1]._0_4_ = uStack_280;
        local_238.Rotation.ZW.m128d_f64[1]._4_4_ = uStack_27c;
        local_238.Translation.XY.m128d_f64[0]._0_4_ = local_278;
        local_238.Translation.XY.m128d_f64[0]._4_4_ = uStack_274;
        local_238.Translation.XY.m128d_f64[1]._0_4_ = uStack_270;
        local_238.Translation.XY.m128d_f64[1]._4_4_ = uStack_26c;
        local_238.Translation.ZW.m128d_f64[0]._0_4_ = local_268;
        local_238.Translation.ZW.m128d_f64[0]._4_4_ = uStack_264;
        local_238.Translation.ZW.m128d_f64[1]._0_4_ = uStack_260;
        local_238.Translation.ZW.m128d_f64[1]._4_4_ = uStack_25c;
        local_238.Scale3D.XY.m128d_f64[0]._0_4_ = local_258;
        local_238.Scale3D.XY.m128d_f64[0]._4_4_ = uStack_254;
        local_238.Scale3D.XY.m128d_f64[1]._0_4_ = uStack_250;
        local_238.Scale3D.XY.m128d_f64[1]._4_4_ = uStack_24c;
        local_238.Scale3D.ZW.m128d_f64[0]._0_4_ = local_248;
        local_238.Scale3D.ZW.m128d_f64[0]._4_4_ = uStack_244;
        local_238.Scale3D.ZW.m128d_f64[1]._0_4_ = uStack_240;
        local_238.Scale3D.ZW.m128d_f64[1]._4_4_ = uStack_23c;
        if ((int)uVar14 != iVar7) {
          local_2c8 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2c8)
          ;
        }
        if (FVar16.Data == pFVar3) break;
        uVar1 = *(uint *)FVar16.Data;
        uVar9 = 0;
        if ((int)uVar1 < param_1->ArrayNum) {
          uVar9 = ~uVar1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar4)();
          return pTVar13;
        }
        pUVar10 = (UTickableTransformConstraint *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((param_1->AllocatorInstance).Data + (longlong)(int)uVar1 * 8)
                                     );
        if (pUVar10 == (UTickableTransformConstraint *)0x0) {
LAB_1464b2b2c:
          pUVar10 = (UTickableTransformConstraint *)0x0;
        }
        else {
          pUVar11 = UTickableTransformConstraint::StaticClass();
          iVar2 = (int)pUVar11->_padding_;
          if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar11->_padding_)) goto LAB_1464b2b2c;
        }
        UTickableTransformConstraint::GetParentGlobalTransform(pUVar10,&local_178);
        pTVar12 = ComputeRelativeTransform(&local_b8,&local_238,param_3,&local_178,pUVar10);
        uVar14 = local_2b0._8_8_ & 0xffffffff;
        FVar16.Data = FVar16.Data + 4;
        local_298 = *(undefined4 *)(pTVar12->Rotation).XY.m128d_f64;
        uStack_294 = *(undefined4 *)((longlong)(pTVar12->Rotation).XY.m128d_f64 + 4);
        uStack_290 = *(undefined4 *)((pTVar12->Rotation).XY.m128d_f64 + 1);
        uStack_28c = *(undefined4 *)((longlong)(pTVar12->Rotation).XY.m128d_f64 + 0xc);
        local_288 = *(undefined4 *)(pTVar12->Rotation).ZW.m128d_f64;
        uStack_284 = *(undefined4 *)((longlong)(pTVar12->Rotation).ZW.m128d_f64 + 4);
        uStack_280 = *(undefined4 *)((pTVar12->Rotation).ZW.m128d_f64 + 1);
        uStack_27c = *(undefined4 *)((longlong)(pTVar12->Rotation).ZW.m128d_f64 + 0xc);
        local_278 = *(undefined4 *)(pTVar12->Translation).XY.m128d_f64;
        uStack_274 = *(undefined4 *)((longlong)(pTVar12->Translation).XY.m128d_f64 + 4);
        uStack_270 = *(undefined4 *)((pTVar12->Translation).XY.m128d_f64 + 1);
        uStack_26c = *(undefined4 *)((longlong)(pTVar12->Translation).XY.m128d_f64 + 0xc);
        local_268 = *(undefined4 *)(pTVar12->Translation).ZW.m128d_f64;
        uStack_264 = *(undefined4 *)((longlong)(pTVar12->Translation).ZW.m128d_f64 + 4);
        uStack_260 = *(undefined4 *)((pTVar12->Translation).ZW.m128d_f64 + 1);
        uStack_25c = *(undefined4 *)((longlong)(pTVar12->Translation).ZW.m128d_f64 + 0xc);
        local_258 = *(undefined4 *)(pTVar12->Scale3D).XY.m128d_f64;
        uStack_254 = *(undefined4 *)((longlong)(pTVar12->Scale3D).XY.m128d_f64 + 4);
        uStack_250 = *(undefined4 *)((pTVar12->Scale3D).XY.m128d_f64 + 1);
        uStack_24c = *(undefined4 *)((longlong)(pTVar12->Scale3D).XY.m128d_f64 + 0xc);
        local_248 = *(undefined4 *)(pTVar12->Scale3D).ZW.m128d_f64;
        uStack_244 = *(undefined4 *)((longlong)(pTVar12->Scale3D).ZW.m128d_f64 + 4);
        uStack_240 = *(undefined4 *)((pTVar12->Scale3D).ZW.m128d_f64 + 1);
        uStack_23c = *(undefined4 *)((longlong)(pTVar12->Scale3D).ZW.m128d_f64 + 0xc);
      }
      *(undefined4 *)(__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64 = local_298;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64 + 4) =
           uStack_294;
      *(undefined4 *)((__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64 + 1) = uStack_290;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64 + 0xc) =
           uStack_28c;
      __return_storage_ptr__->bIsSet = true;
      *(undefined4 *)(__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64 = local_288;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64 + 4) =
           uStack_284;
      *(undefined4 *)((__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64 + 1) = uStack_280;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64 + 0xc) =
           uStack_27c;
      *(undefined4 *)(__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64 = local_278;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64 + 4) =
           uStack_274;
      *(undefined4 *)((__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64 + 1) =
           uStack_270;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64 + 0xc)
           = uStack_26c;
      *(undefined4 *)(__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64 = local_268;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64 + 4) =
           uStack_264;
      *(undefined4 *)((__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64 + 1) =
           uStack_260;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64 + 0xc)
           = uStack_25c;
      *(undefined4 *)(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 = local_258;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 + 4) =
           uStack_254;
      *(undefined4 *)((__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 + 1) = uStack_250;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 + 0xc) =
           uStack_24c;
      *(undefined4 *)(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 = local_248;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 + 4) =
           uStack_244;
      *(undefined4 *)((__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 + 1) = uStack_240;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 + 0xc) =
           uStack_23c;
    }
    if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.AllocatorInstance.Data);
    }
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetHandle @ 1464b3e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UTransformableHandle * __cdecl
UE::TransformConstraintUtil::Private::GetHandle(UObject *param_1,FName *param_2)

{
  UClass *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
  *this;
  FTransformableInfo *pFVar4;
  undefined8 uVar5;
  UTransformableHandle *pUVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  UObject *local_68 [2];
  code *local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  this = (TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
          *)FTransformableRegistry::Get();
  pUVar1 = *(UClass **)&param_1->field_0x10;
  if ((pUVar1 != (UClass *)0x0) &&
     ((pFVar4 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                ::Find(this,pUVar1), pFVar4 != (FTransformableInfo *)0x0 ||
      (pFVar4 = FTransformableRegistry::FindInfo
                          ((FTransformableRegistry *)this,(UClass *)pUVar1->_padding_),
      pFVar4 != (FTransformableInfo *)0x0)))) {
    local_58 = *(code **)&pFVar4->CreateHandleFunc;
    local_30 = (longlong *)0x0;
    if (local_58 != (code *)0x0) {
      puVar2 = *(undefined8 **)&(pFVar4->CreateHandleFunc).field_0x28;
      puVar7 = (undefined8 *)&(pFVar4->CreateHandleFunc).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar7 = puVar2;
      }
      (**(code **)*puVar7)(puVar7,local_48);
      if (local_58 != (code *)0x0) {
        local_68[0] = param_1;
        Core::Private::Function::CheckCallable(local_58);
        pcVar3 = local_58;
        plVar8 = local_48;
        if (local_30 != (longlong *)0x0) {
          plVar8 = local_30;
        }
        uVar5 = (**(code **)(*plVar8 + 8))();
        pUVar6 = (UTransformableHandle *)(*pcVar3)(uVar5,local_68,param_2);
        if (local_58 == (code *)0x0) {
          return pUVar6;
        }
        plVar8 = local_48;
        if (local_30 != (longlong *)0x0) {
          plVar8 = local_30;
        }
        (**(code **)(*plVar8 + 0x10))();
        return pUVar6;
      }
    }
  }
  return (UTransformableHandle *)0x0;
}

// GetHandle @ 1464b3f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UTransformableHandle * __cdecl UE::Private::GetHandle(UObject *param_1,FName *param_2)

{
  UClass *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
  *this;
  FTransformableInfo *pFVar4;
  undefined8 uVar5;
  UTransformableHandle *pUVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  UObject *local_68 [2];
  code *local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  this = (TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
          *)FTransformableRegistry::Get();
  pUVar1 = *(UClass **)&param_1->field_0x10;
  if ((pUVar1 != (UClass *)0x0) &&
     ((pFVar4 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                ::Find(this,pUVar1), pFVar4 != (FTransformableInfo *)0x0 ||
      (pFVar4 = FTransformableRegistry::FindInfo
                          ((FTransformableRegistry *)this,(UClass *)pUVar1->_padding_),
      pFVar4 != (FTransformableInfo *)0x0)))) {
    local_58 = *(code **)&pFVar4->CreateHandleFunc;
    local_30 = (longlong *)0x0;
    if (local_58 != (code *)0x0) {
      puVar2 = *(undefined8 **)&(pFVar4->CreateHandleFunc).field_0x28;
      puVar7 = (undefined8 *)&(pFVar4->CreateHandleFunc).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar7 = puVar2;
      }
      (**(code **)*puVar7)(puVar7,local_48);
      if (local_58 != (code *)0x0) {
        local_68[0] = param_1;
        Core::Private::Function::CheckCallable(local_58);
        pcVar3 = local_58;
        plVar8 = local_48;
        if (local_30 != (longlong *)0x0) {
          plVar8 = local_30;
        }
        uVar5 = (**(code **)(*plVar8 + 8))();
        pUVar6 = (UTransformableHandle *)(*pcVar3)(uVar5,local_68,param_2);
        if (local_58 == (code *)0x0) {
          return pUVar6;
        }
        plVar8 = local_48;
        if (local_30 != (longlong *)0x0) {
          plVar8 = local_30;
        }
        (**(code **)(*plVar8 + 0x10))();
        return pUVar6;
      }
    }
  }
  return (UTransformableHandle *)0x0;
}

// GetHandleHash @ 1464b4080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl UE::TransformConstraintUtil::Private::GetHandleHash(UObject *param_1,FName *param_2)

{
  UClass *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
  *this;
  FTransformableInfo *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  UObject *local_68 [2];
  code *local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1 != (UObject *)0x0) {
    this = (TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
            *)FTransformableRegistry::Get();
    pUVar1 = *(UClass **)&param_1->field_0x10;
    if ((pUVar1 != (UClass *)0x0) &&
       ((pFVar5 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                  ::Find(this,pUVar1), pFVar5 != (FTransformableInfo *)0x0 ||
        (pFVar5 = FTransformableRegistry::FindInfo
                            ((FTransformableRegistry *)this,(UClass *)pUVar1->_padding_),
        pFVar5 != (FTransformableInfo *)0x0)))) {
      local_58 = *(code **)&pFVar5->GetHashFunc;
      local_30 = (longlong *)0x0;
      if (local_58 != (code *)0x0) {
        puVar2 = *(undefined8 **)&(pFVar5->GetHashFunc).field_0x28;
        puVar7 = (undefined8 *)&(pFVar5->GetHashFunc).field_0x10;
        if (puVar2 != (undefined8 *)0x0) {
          puVar7 = puVar2;
        }
        (**(code **)*puVar7)(puVar7,local_48);
        if (local_58 != (code *)0x0) {
          local_68[0] = param_1;
          Core::Private::Function::CheckCallable(local_58);
          pcVar3 = local_58;
          plVar8 = local_48;
          if (local_30 != (longlong *)0x0) {
            plVar8 = local_30;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          uVar4 = (*pcVar3)(uVar6,local_68,param_2);
          if (local_58 == (code *)0x0) {
            return uVar4;
          }
          plVar8 = local_48;
          if (local_30 != (longlong *)0x0) {
            plVar8 = local_30;
          }
          (**(code **)(*plVar8 + 0x10))();
          return uVar4;
        }
      }
    }
  }
  return 0;
}

// GetHandleTarget @ 1464b4210

UObject * __cdecl UE::Private::GetHandleTarget(TObjectPtr<UTransformableHandle> *param_1)

{
  FWeakObjectPtr *this;
  UObject *pUVar1;
  undefined1 local_res8 [32];
  
  if (((param_1->field0_0x0).DebugPtr != (UTransformableHandle *)0x0) &&
     (((uint)((param_1->field0_0x0).DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
    this = (FWeakObjectPtr *)
           (**(code **)(((param_1->field0_0x0).DebugPtr)->_padding_ + 0x330))
                     ((param_1->field0_0x0).DebugPtr,local_res8);
    pUVar1 = FWeakObjectPtr::Get(this);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// GetLastActiveConstraintIndex @ 1464b43f0

int __cdecl
UE::TransformConstraintUtil::GetLastActiveConstraintIndex
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  int iVar1;
  <lambda_1> local_res8;
  
  iVar1 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                    (param_1,local_res8,param_1->ArrayNum);
  return iVar1;
}

// GetParentConstraints @ 1464b5160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::TransformConstraintUtil::GetParentConstraints
          (UWorld *param_1,AActor *param_2,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  FName local_res8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1 != (UWorld *)0x0) && (param_2 != (AActor *)0x0)) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    uVar4 = Private::GetHandleHash((UObject *)param_2,&local_res8);
    if (uVar4 != 0) {
      ::Singleton.World = param_1;
      pTVar6 = FConstraintsManagerController::GetParentConstraints
                         (&::Singleton,&local_18,uVar4,true);
      if ((param_3 == pTVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = pTVar6->ArrayNum;
      if (iVar1 != 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar1,&param_3->AllocatorInstance,&param_3->ArrayNum,
                           &param_3->ArrayMax);
        memmove((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8,
                (pTVar6->AllocatorInstance).Data,(longlong)iVar1 << 3);
        pTVar6->ArrayNum = 0;
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetRelativeTransform @ 1464b66c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TTransform<double>_> * __cdecl
UE::TransformConstraintUtil::GetRelativeTransform
          (TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,UWorld *param_1,
          uint param_2)

{
  int iVar1;
  UTickableTransformConstraint *this;
  UClass *pUVar2;
  undefined1 auStack_128 [48];
  <lambda_1> local_f8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_f0;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((param_1 == (UWorld *)0x0) || (param_2 == 0)) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  ::Singleton.World = param_1;
  FConstraintsManagerController::GetParentConstraints(&::Singleton,&local_f0,param_2,true);
  if (local_f0.ArrayNum != 0) {
    iVar1 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                      (&local_f0,local_f8,local_f0.ArrayNum);
    if ((-1 < iVar1) && (iVar1 < local_f0.ArrayNum)) {
      this = (UTickableTransformConstraint *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 (local_f0.AllocatorInstance.Data + (longlong)iVar1 * 8));
      if (this == (UTickableTransformConstraint *)0x0) {
LAB_1464b6781:
        this = (UTickableTransformConstraint *)0x0;
      }
      else {
        pUVar2 = UTickableTransformConstraint::StaticClass();
        iVar1 = (int)pUVar2->_padding_;
        if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar2->_padding_)) goto LAB_1464b6781;
      }
      UTickableTransformConstraint::GetChildLocalTransform(this,&local_d8);
      UTickableTransformConstraint::GetChildGlobalTransform(this,&local_78);
      GetConstraintsRelativeTransform(__return_storage_ptr__,&local_f0,&local_d8,&local_78);
      goto LAB_1464b67c2;
    }
  }
  __return_storage_ptr__->bIsSet = false;
LAB_1464b67c2:
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTarget @ 1464b6d70

UObject * __cdecl
UE::TransformConstraintUtil::Private::GetTarget(TObjectPtr<UTransformableHandle> *param_1)

{
  FWeakObjectPtr *this;
  UObject *pUVar1;
  undefined1 local_res8 [32];
  
  if (((param_1->field0_0x0).DebugPtr != (UTransformableHandle *)0x0) &&
     (((uint)((param_1->field0_0x0).DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
    this = (FWeakObjectPtr *)
           (**(code **)(((param_1->field0_0x0).DebugPtr)->_padding_ + 0x330))
                     ((param_1->field0_0x0).DebugPtr,local_res8);
    pUVar1 = FWeakObjectPtr::Get(this);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// HasConstraintDependencyWith @ 1464b7c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::TransformConstraintUtil::Private::HasConstraintDependencyWith
          (UWorld *param_1,UTransformableHandle *param_2,UTransformableHandle *param_3)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  if (((param_1 == (UWorld *)0x0) || (param_2 == (UTransformableHandle *)0x0)) ||
     (param_3 == (UTransformableHandle *)0x0)) {
    return false;
  }
  ::Singleton.World = param_1;
  uVar6 = (**(code **)(param_2->_padding_ + 0x328))(param_2);
  FConstraintsManagerController::GetParentConstraints(&::Singleton,&local_38,uVar6,false);
  iVar8 = local_38.ArrayNum;
  uVar11 = (ulonglong)local_38.ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + uVar11 * 8);
  FVar13.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar11 != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar13.Data == pFVar1) break;
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar13.Data);
    if (pUVar9 != (UObject *)0x0) {
      pUVar10 = UTickableTransformConstraint::StaticClass();
      iVar7 = (int)pUVar10->_padding_;
      if ((iVar7 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar10->_padding_)) {
        puVar12 = &pUVar9[3].field_0x18;
        if ((*(longlong *)puVar12 != 0) && ((*(uint *)(*(longlong *)puVar12 + 8) >> 0x1e & 1) == 0))
        {
          if (((local_48.Data <= puVar12) &&
              (puVar12 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar7 = (int)local_40;
          if ((int)local_40 == local_40._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_48,(int *)((longlong)&local_40 + 4));
          }
          local_40 = CONCAT44(local_40._4_4_,iVar7 + 1);
          pUVar9 = *(UObject **)puVar12;
          *(UObject **)(local_48.Data + (longlong)iVar7 * 8) = pUVar9;
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar9);
          }
        }
      }
    }
    uVar11 = (ulonglong)(uint)local_38.ArrayNum;
    FVar13.Data = FVar13.Data + 8;
  }
  iVar8 = (**(code **)(param_3->_padding_ + 0x328))(param_3);
  uVar11 = (ulonglong)(int)local_40;
  pFVar2 = local_48.Data + uVar11 * 8;
  FVar13.Data = local_48.Data;
  if (local_48.Data != pFVar2) {
    do {
      iVar7 = (**(code **)(**(longlong **)FVar13.Data + 0x328))();
      if (iVar7 == iVar8) goto LAB_1464b7eb4;
      FVar13.Data = FVar13.Data + 8;
    } while (FVar13.Data != pFVar2);
    uVar11 = local_40 & 0xffffffff;
  }
  iVar8 = (int)uVar11;
  pFVar2 = local_48.Data + (longlong)iVar8 * 8;
  FVar13.Data = local_48.Data;
  while( true ) {
    if ((int)uVar11 != iVar8) {
      `TCheckedPointerIterator<TObjectPtr<UTransformableHandle>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (FVar13.Data == pFVar2) break;
    bVar4 = HasConstraintDependencyWith(param_1,*(UTransformableHandle **)FVar13.Data,param_3);
    if (bVar4) {
LAB_1464b7eb4:
      bVar4 = true;
LAB_1464b7eba:
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return bVar4;
    }
    uVar11 = local_40 & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
  }
  bVar4 = false;
  goto LAB_1464b7eba;
}

// IsCaching @ 1464b9200

bool __cdecl UE::Anim::IsCaching(void)

{
  return 0 < CachingCount;
}

// MarkComponentForEvaluation @ 1464b9cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::Anim::MarkComponentForEvaluation(USceneComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FAnimationEvaluationCache *this;
  
  if (param_1 != (USceneComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      this = FAnimationEvaluationCache::Get();
      FAnimationEvaluationCache::MarkForEvaluation(this,(USkeletalMeshComponent *)param_1);
    }
  }
  return;
}

// PreEvaluateChild @ 1464bbad0

void __cdecl UE::Private::PreEvaluateChild(TObjectPtr<UTransformableHandle> *param_1)

{
  if (((!TransformableHandleUtils::bNewEvaluation) &&
      ((param_1->field0_0x0).DebugPtr != (UTransformableHandle *)0x0)) &&
     (((uint)((param_1->field0_0x0).DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001464bbaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(((param_1->field0_0x0).DebugPtr)->_padding_ + 0x2f8))
              ((param_1->field0_0x0).DebugPtr,0);
    return;
  }
  return;
}

// PreEvaluateParent @ 1464bbb00

void __cdecl UE::Private::PreEvaluateParent(TObjectPtr<UTransformableHandle> *param_1)

{
  if (((TransformableHandleUtils::bNewEvaluation) &&
      ((param_1->field0_0x0).DebugPtr != (UTransformableHandle *)0x0)) &&
     (((uint)((param_1->field0_0x0).DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001464bbb22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(((param_1->field0_0x0).DebugPtr)->_padding_ + 0x2f8))
              ((param_1->field0_0x0).DebugPtr,0);
    return;
  }
  return;
}

// ShouldForceChildDependency @ 1464c0fd0

bool __cdecl UE::Private::ShouldForceChildDependency(void)

{
  return TransformableHandleUtils::bNewEvaluation;
}

// ShouldForceParentDependency @ 1464c0fe0

bool __cdecl UE::Private::ShouldForceParentDependency(void)

{
  return !TransformableHandleUtils::bNewEvaluation;
}

// ShouldPreEvaluateChild @ 1464c1000

bool __cdecl UE::Private::ShouldPreEvaluateChild(void)

{
  return !TransformableHandleUtils::bNewEvaluation;
}

// ShouldPreEvaluateParent @ 1464c1020

bool __cdecl UE::Private::ShouldPreEvaluateParent(void)

{
  return TransformableHandleUtils::bNewEvaluation;
}

// SortConstraints @ 1464c1040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Constraints::Graph::SortConstraints
          (UWorld *param_1,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  TArray<FConstraintNode,TSizedDefaultAllocator<32>_> local_78;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArrayView<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int> local_58;
  FGraphBuildHelper local_48;
  
  local_58.DataPtr =
       (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)(param_2->AllocatorInstance).Data;
  uVar11 = 0;
  iVar8 = param_2->ArrayNum;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  if ((iVar8 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_58.ArrayNum = iVar8;
  DestructItems<FConstraintNode,int>
            ((FConstraintNode *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
  }
  if (param_1 == (UWorld *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7515207077300535880>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                       ,0x248,"InWorld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (local_58.ArrayNum != 0) {
    local_48.Constraints = &local_58;
    local_48.Nodes = &local_78;
    local_48.World = param_1;
    Private::FGraphBuildHelper::Build(&local_48);
  }
  iVar8 = 0;
  if (local_78.ArrayNum != 0) {
    local_60 = param_2->ArrayNum;
    lVar9 = (longlong)local_60;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,pFVar2,lVar9 << 3);
    }
    if (local_78.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_78.ArrayNum);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    iVar8 = local_78.ArrayNum;
    if (param_2->ArrayMax < local_78.ArrayNum) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_78.ArrayNum,&param_2->AllocatorInstance,0,piVar1);
      iVar8 = local_78.ArrayNum;
    }
    lVar9 = (longlong)iVar8;
    uVar12 = uVar11;
    if (0 < iVar8) {
      do {
        uVar10 = (uint)uVar11;
        uVar6 = 0;
        if ((int)uVar10 < iVar8) {
          uVar6 = ~uVar10 >> 0x1f;
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
          iVar8 = local_78.ArrayNum;
        }
        uVar6 = *(uint *)(local_78.AllocatorInstance.Data + uVar12 + 0x1c);
        if ((-1 < (int)uVar6) && ((int)uVar6 < local_60)) {
          uVar7 = 0;
          if ((int)uVar6 < local_60) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          pFVar3 = (param_2->AllocatorInstance).Data;
          pFVar2 = local_68.Data + (longlong)(int)uVar6 * 8;
          if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar8 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               *(undefined8 *)pFVar2;
          iVar8 = local_78.ArrayNum;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        lVar9 = lVar9 + -1;
        uVar12 = uVar12 + 200;
      } while (lVar9 != 0);
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
      iVar8 = local_78.ArrayNum;
    }
  }
  DestructItems<FConstraintNode,int>((FConstraintNode *)local_78.AllocatorInstance.Data,iVar8);
  if ((FConstraintNode *)local_78.AllocatorInstance.Data != (FConstraintNode *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// UpdateTransformBasedOnConstraint @ 1464c3fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::TransformConstraintUtil::UpdateTransformBasedOnConstraint
          (TTransform<double> *param_1,USceneComponent *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  UWorld *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  int iVar9;
  longlong lVar10;
  FWeakObjectPtr *this;
  undefined1 auStack_128 [32];
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_108;
  TOptional<UE::Math::TTransform<double>_> local_f8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  pAVar5 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar4);
  if (pAVar5 != (AActor *)0x0) {
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    pUVar6 = (UWorld *)param_2->_padding_;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_2);
    }
    GetParentConstraints(pUVar6,pAVar5,&local_108);
    lVar10 = (longlong)local_108.ArrayNum;
    if ((local_108.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count >= 0 && Count <= this->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x55b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar2.Data = local_108.AllocatorInstance.Data;
    this = (FWeakObjectPtr *)(local_108.AllocatorInstance.Data + lVar10 * 8);
    do {
      do {
        if (this == (FWeakObjectPtr *)FVar2.Data) goto LAB_1464c416a;
        this = this + -1;
        pUVar7 = FWeakObjectPtr::Get(this);
      } while (pUVar7 == (UObject *)0x0);
      pUVar4 = UTickableTransformConstraint::StaticClass();
      iVar9 = (int)pUVar4->_padding_;
    } while ((((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar9) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
               &pUVar4->_padding_)) ||
             (pUVar8 = FWeakObjectPtr::Get(this), *(char *)(pUVar8 + 1) == '\0')) ||
            (pUVar7[4].field_0x8 == '\0'));
    iVar9 = (int)((longlong)this - (longlong)FVar2.Data >> 3);
    if ((-1 < iVar9) && (iVar9 < local_108.ArrayNum)) {
      (**(code **)(param_2->_padding_ + 0x520))(param_2,&local_88,param_2->AttachSocketName,0);
      GetConstraintsRelativeTransform(&local_f8,&local_108,param_1,&local_88);
      if (local_f8.bIsSet != false) {
        (param_1->Rotation).XY.m128d_f64[0] = local_f8.TypedValue.Rotation.XY.m128d_f64[0];
        (param_1->Rotation).XY.m128d_f64[1] = local_f8.TypedValue.Rotation.XY.m128d_f64[1];
        (param_1->Rotation).ZW.m128d_f64[0] = local_f8.TypedValue.Rotation.ZW.m128d_f64[0];
        (param_1->Rotation).ZW.m128d_f64[1] = local_f8.TypedValue.Rotation.ZW.m128d_f64[1];
        (param_1->Translation).XY.m128d_f64[0] = local_f8.TypedValue.Translation.XY.m128d_f64[0];
        (param_1->Translation).XY.m128d_f64[1] = local_f8.TypedValue.Translation.XY.m128d_f64[1];
        (param_1->Translation).ZW.m128d_f64[0] = local_f8.TypedValue.Translation.ZW.m128d_f64[0];
        (param_1->Translation).ZW.m128d_f64[1] = local_f8.TypedValue.Translation.ZW.m128d_f64[1];
        (param_1->Scale3D).XY.m128d_f64[0] = local_f8.TypedValue.Scale3D.XY.m128d_f64[0];
        (param_1->Scale3D).XY.m128d_f64[1] = local_f8.TypedValue.Scale3D.XY.m128d_f64[1];
        (param_1->Scale3D).ZW.m128d_f64[0] = local_f8.TypedValue.Scale3D.ZW.m128d_f64[0];
        (param_1->Scale3D).ZW.m128d_f64[1] = local_f8.TypedValue.Scale3D.ZW.m128d_f64[1];
      }
    }
LAB_1464c416a:
    if ((FWeakObjectPtr *)local_108.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
  }
  return;
}

