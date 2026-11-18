// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 4

// ~TStateStreamStore<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance> @ 1431259e0

void __thiscall
TStateStreamStore<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance>
::
~TStateStreamStore<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance>
          (TStateStreamStore<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance>
           *this)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  FInstance *_Dst;
  
  uVar1 = this->FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    _Dst = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
           ::GetElementAt(&this->Array,uVar1);
    this->FirstFreeIndex = (_Dst->StaticState).ModifiedFlags;
    memset(_Dst,0,0xd0);
    _Dst->DeleteTick = 0xffffffff;
    uVar1 = this->FirstFreeIndex;
  }
  FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
  ::
  ~FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
            (&this->Array);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143125a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ~TStateStreamStore<FTransformDynamicState> @ 143125aa0

void __thiscall
TStateStreamStore<FTransformDynamicState>::~TStateStreamStore<FTransformDynamicState>
          (TStateStreamStore<FTransformDynamicState> *this)

{
  undefined8 *puVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  BOOLEAN BVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  aVar2 = (atomic<unsigned_int>)this->FirstFreeIndex;
  while (aVar2 != (atomic<unsigned_int>)0xffffffff) {
    if (((uint)(this->Array).Size <= (uint)aVar2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                           ,0x77,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = ((uint)aVar2 >> 4) + 1;
    uVar4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    iVar9 = 0;
    if (uVar4 != 0) {
      iVar9 = (0x10 << ((byte)uVar4 & 0x1f)) + -0x10;
    }
    lVar3 = (this->Array).Buckets[uVar4];
    lVar10 = (ulonglong)(uint)((int)aVar2 - iVar9) * 0xa0;
    this->FirstFreeIndex = *(uint *)(lVar3 + lVar10);
    puVar1 = (undefined8 *)(lVar3 + 4 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x14 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x24 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x34 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x44 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x54 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 100 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x74 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x84 + lVar10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar3 + 0x94 + lVar10) = 0;
    *(undefined4 *)(lVar3 + 0x9c + lVar10) = 0;
    *(undefined4 *)(lVar3 + lVar10) = 0;
    *(double (*) [2])(lVar3 + 0x10 + lVar10) =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *(double (*) [2])(lVar3 + 0x20 + lVar10) =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *(double (*) [2])(lVar3 + 0x30 + lVar10) =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *(double (*) [2])(lVar3 + 0x40 + lVar10) =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *(double (*) [2])(lVar3 + 0x50 + lVar10) =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *(double (*) [2])(lVar3 + 0x60 + lVar10) =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    *(undefined8 *)(lVar3 + 0x70 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x78 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x80 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x88 + lVar10) = 0;
    *(undefined1 *)(lVar3 + 0x90 + lVar10) = 1;
    aVar2 = (atomic<unsigned_int>)this->FirstFreeIndex;
  }
  FPow2ChunkedArray<FTransformDynamicState,16,16777216>::
  ~FPow2ChunkedArray<FTransformDynamicState,16,16777216>(&this->Array);
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar7 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143125c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// AddUninitialized @ 1431265b0

void * __thiscall
TStateStreamStore<FTransformDynamicState>::AddUninitialized
          (TStateStreamStore<FTransformDynamicState> *this,uint *param_1)

{
  FPow2ChunkedArray<FTransformDynamicState,16,16777216> *this_00;
  long64 *plVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  FTransformDynamicState *pFVar7;
  int iVar8;
  bool bVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar3 = this->FirstFreeIndex;
  this_00 = &this->Array;
  if (uVar3 != 0xffffffff) {
    pFVar7 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[](this_00,uVar3);
    this->FirstFreeIndex = pFVar7->ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *param_1 = uVar3;
    pFVar7 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[](this_00,uVar3);
    return pFVar7;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  LOCK();
  aVar2 = this_00->Size;
  this_00->Size = (atomic<unsigned_int>)((int)this_00->Size + 1);
  UNLOCK();
  uVar4 = ((uint)aVar2 >> 4) + 1;
  uVar3 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  plVar1 = this_00->Buckets + uVar3;
  pvVar5 = (void *)this_00->Buckets[uVar3];
  if ((void *)this_00->Buckets[uVar3] == (void *)0x0) {
    uVar4 = 1 << ((byte)uVar3 + 4 & 0x1f);
    if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    pvVar5 = FMemory::Malloc((ulonglong)uVar4 * 0xa0,0x10);
    if (((ulonglong)plVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    pvVar6 = (void *)*plVar1;
    bVar9 = pvVar6 == (void *)0x0;
    if (bVar9) {
      *plVar1 = (long64)pvVar5;
      pvVar6 = (void *)0x0;
    }
    UNLOCK();
    if (!bVar9) {
      FMemory::Free(pvVar5);
      pvVar5 = pvVar6;
    }
  }
  if (uVar3 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (0x10 << ((byte)uVar3 & 0x1f)) + -0x10;
  }
  *param_1 = (uint)aVar2;
  return (void *)((ulonglong)(uint)((int)aVar2 - iVar8) * 0xa0 + (longlong)pvVar5);
}

// Remove @ 143127e10

void __thiscall
TStateStreamStore<FTransformDynamicState>::Remove
          (TStateStreamStore<FTransformDynamicState> *this,uint param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FTransformDynamicState *pFVar3;
  
  pFVar3 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[](&this->Array,param_1);
  plVar1 = *(longlong **)&pFVar3->Parent;
  if ((plVar1 != (longlong *)0x0) && (*(int *)&(pFVar3->Parent).field_0x8 == 0)) {
    (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)&(pFVar3->Parent).field_0xc);
  }
  pFVar2 = (pFVar3->BoneTransforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  pFVar3->ModifiedFlags = this->FirstFreeIndex;
  this->FirstFreeIndex = param_1;
                    /* WARNING: Could not recover jumptable at 0x000143127e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

