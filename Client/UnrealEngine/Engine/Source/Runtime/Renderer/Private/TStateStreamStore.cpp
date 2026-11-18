// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 13

// Emplace<FSkinnedMeshStaticState_const_&,int,unsigned_int_&> @ 1456ca7c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance>::
Emplace<FSkinnedMeshStaticState_const_&,int,unsigned_int_&>
          (TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance> *this,
          FSkinnedMeshStaticState *param_1,int *param_2,uint *param_3)

{
  FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216> *this_00;
  long64 *plVar1;
  uint uVar2;
  ulong64 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  FInstance *pFVar8;
  int iVar9;
  atomic<unsigned_int> aVar10;
  bool bVar11;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  aVar10 = (atomic<unsigned_int>)this->FirstFreeIndex;
  this_00 = &this->Array;
  if (aVar10 == (atomic<unsigned_int>)0xffffffff) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    LOCK();
    aVar10 = this_00->Size;
    this_00->Size = (atomic<unsigned_int>)((int)this_00->Size + 1);
    UNLOCK();
    uVar5 = ((uint)aVar10 >> 4) + 1;
    uVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    plVar1 = this_00->Buckets + uVar2;
    pvVar6 = (void *)this_00->Buckets[uVar2];
    if ((void *)this_00->Buckets[uVar2] == (void *)0x0) {
      uVar5 = 1 << ((byte)uVar2 + 4 & 0x1f);
      if (uVar5 < 0x10) {
        uVar5 = 0x10;
      }
      pvVar6 = FMemory::Malloc((ulonglong)uVar5 * 0x60,8);
      if (((ulonglong)plVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      pvVar7 = (void *)*plVar1;
      bVar11 = pvVar7 == (void *)0x0;
      if (bVar11) {
        *plVar1 = (long64)pvVar6;
        pvVar7 = (void *)0x0;
      }
      UNLOCK();
      if (!bVar11) {
        FMemory::Free(pvVar6);
        pvVar6 = pvVar7;
      }
    }
    if (uVar2 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (0x10 << ((byte)uVar2 & 0x1f)) + -0x10;
    }
    pFVar8 = (FInstance *)((ulonglong)(uint)((int)aVar10 - iVar9) * 0x60 + (longlong)pvVar6);
  }
  else {
    pFVar8 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
             ::GetElementAt(this_00,(uint)aVar10);
    this->FirstFreeIndex = (pFVar8->StaticState).ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    pFVar8 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
             ::GetElementAt(this_00,(uint)aVar10);
  }
  uVar2 = *param_3;
  uVar5 = param_1->ModifiedFlags;
  uVar4 = *(undefined4 *)&param_1->field_0x4;
  uVar3 = param_1->MaterialRelevance;
  pFVar8->RefCount = *param_2;
  pFVar8->CreateTick = uVar2;
  (pFVar8->StaticState).ModifiedFlags = uVar5;
  *(undefined4 *)&(pFVar8->StaticState).field_0x4 = uVar4;
  (pFVar8->StaticState).MaterialRelevance = uVar3;
  (pFVar8->RendDynamicState).bIsSet = false;
  pFVar8->DeleteTick = 0xffffffff;
  pFVar8->UserData = (FSkinnedMeshObject *)0x0;
  return (uint)aVar10;
}

// ~TStateStreamStore<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance> @ 1456de020

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
TStateStreamStore<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance>::
~TStateStreamStore<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance>
          (TStateStreamStore<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance>
           *this)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  FInstance *pFVar5;
  
  uVar1 = this->FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    pFVar5 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
             ::GetElementAt(&this->Array,uVar1);
    this->FirstFreeIndex = (pFVar5->StaticState).ModifiedFlags;
    (pFVar5->RendDynamicState).TypedValue.ModifiedFlags = 0;
    (pFVar5->RendDynamicState).TypedValue._padding_ = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).TypedValue.Transform = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).TypedValue.Transform.field_0x8 = 0;
    (pFVar5->RendDynamicState).TypedValue.SystemAsset.field0_0x0.DebugPtr = (UFXSystemAsset *)0x0;
    *(undefined4 *)&(pFVar5->RendDynamicState).field_0x21 = 0;
    *(undefined2 *)&(pFVar5->RendDynamicState).field_0x25 = 0;
    (pFVar5->RendDynamicState).field_0x27 = 0;
    pFVar5->StaticState = 0;
    pFVar5->RefCount = 0;
    pFVar5->CreateTick = 0;
    pFVar5->DeleteTick = 0xffffffff;
    (pFVar5->RendDynamicState).bIsSet = false;
    pFVar5->UserData = (FParticleSystemObjectCascade *)0x0;
    uVar1 = this->FirstFreeIndex;
  }
  FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
  ::
  ~FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
            (&this->Array);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001456de0b6. Too many branches */
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

// ~TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance> @ 1456de0f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance>::
~TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance>
          (TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance> *this)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  FInstance *pFVar5;
  
  uVar1 = this->FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    pFVar5 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
             ::GetElementAt(&this->Array,uVar1);
    this->FirstFreeIndex = (pFVar5->StaticState).ModifiedFlags;
    *(undefined8 *)&pFVar5->StaticState = 0;
    (pFVar5->StaticState).MaterialRelevance = 0;
    pFVar5->RefCount = 0;
    pFVar5->CreateTick = 0;
    *(undefined8 *)&pFVar5->DeleteTick = 0;
    (pFVar5->RendDynamicState).TypedValue.ModifiedFlags = 0;
    (pFVar5->RendDynamicState).TypedValue._padding_ = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).TypedValue.Transform = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).TypedValue.Transform.field_0x8 = 0;
    (pFVar5->RendDynamicState).TypedValue.SkinnedAsset.field0_0x0.DebugPtr = (USkinnedAsset *)0x0;
    (pFVar5->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar5->RendDynamicState).TypedValue.OverrideMaterials.ArrayNum = 0;
    (pFVar5->RendDynamicState).TypedValue.OverrideMaterials.ArrayMax = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).bIsSet = 0;
    pFVar5->UserData = (FSkinnedMeshObject *)0x0;
    pFVar5->DeleteTick = 0xffffffff;
    uVar1 = this->FirstFreeIndex;
  }
  FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>::
  ~FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
            (&this->Array);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001456de172. Too many branches */
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

// ~TStateStreamStore<TStateStream<FStaticMeshStateStreamSettings>::FInstance> @ 1456de1b0

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
TStateStreamStore<TStateStream<FStaticMeshStateStreamSettings>::FInstance>::
~TStateStreamStore<TStateStream<FStaticMeshStateStreamSettings>::FInstance>
          (TStateStreamStore<TStateStream<FStaticMeshStateStreamSettings>::FInstance> *this)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  FInstance *pFVar5;
  
  uVar1 = this->FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    pFVar5 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
             ::GetElementAt(&this->Array,uVar1);
    this->FirstFreeIndex = (pFVar5->StaticState).ModifiedFlags;
    pFVar5->StaticState = 0;
    pFVar5->RefCount = 0;
    pFVar5->CreateTick = 0;
    pFVar5->DeleteTick = 0;
    (pFVar5->RendDynamicState).TypedValue.ModifiedFlags = 0;
    (pFVar5->RendDynamicState).TypedValue._padding_ = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).TypedValue.Transform = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).TypedValue.Transform.field_0x8 = 0;
    (pFVar5->RendDynamicState).TypedValue.Mesh.field0_0x0.DebugPtr = (UStaticMesh *)0x0;
    (pFVar5->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar5->RendDynamicState).TypedValue.OverrideMaterials.ArrayNum = 0;
    (pFVar5->RendDynamicState).TypedValue.OverrideMaterials.ArrayMax = 0;
    (pFVar5->RendDynamicState).TypedValue.Owners.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar5->RendDynamicState).TypedValue.Owners.ArrayNum = 0;
    (pFVar5->RendDynamicState).TypedValue.Owners.ArrayMax = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).TypedValue.field_0x40 = 0;
    *(undefined8 *)&(pFVar5->RendDynamicState).bIsSet = 0;
    pFVar5->UserData = (FStaticMeshObject *)0x0;
    pFVar5->DeleteTick = 0xffffffff;
    uVar1 = this->FirstFreeIndex;
  }
  FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>::
  ~FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
            (&this->Array);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001456de238. Too many branches */
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

// ~TStateStreamStore<FParticleSystemDynamicState> @ 1456de280

void __thiscall
TStateStreamStore<FParticleSystemDynamicState>::~TStateStreamStore<FParticleSystemDynamicState>
          (TStateStreamStore<FParticleSystemDynamicState> *this)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  BOOLEAN BVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  aVar1 = (atomic<unsigned_int>)this->FirstFreeIndex;
  while (aVar1 != (atomic<unsigned_int>)0xffffffff) {
    if (((uint)(this->Array).Size <= (uint)aVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                           ,0x77,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = ((uint)aVar1 >> 4) + 1;
    uVar2 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    if (uVar2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (0x10 << ((byte)uVar2 & 0x1f)) + -0x10;
    }
    puVar8 = (uint *)((ulonglong)(uint)((int)aVar1 - iVar7) * 0x20 + (this->Array).Buckets[uVar2]);
    this->FirstFreeIndex = *puVar8;
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    aVar1 = (atomic<unsigned_int>)this->FirstFreeIndex;
  }
  FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::
  ~FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>(&this->Array);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001456de35b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// ~TStateStreamStore<FSkinnedMeshDynamicState> @ 1456de3a0

void __thiscall
TStateStreamStore<FSkinnedMeshDynamicState>::~TStateStreamStore<FSkinnedMeshDynamicState>
          (TStateStreamStore<FSkinnedMeshDynamicState> *this)

{
  atomic<unsigned_int> aVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  BOOLEAN BVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  aVar1 = (atomic<unsigned_int>)this->FirstFreeIndex;
  while (aVar1 != (atomic<unsigned_int>)0xffffffff) {
    if (((uint)(this->Array).Size <= (uint)aVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\Pow2ChunkedArray.h"
                           ,0x77,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = ((uint)aVar1 >> 4) + 1;
    uVar3 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    if (uVar3 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (0x10 << ((byte)uVar3 & 0x1f)) + -0x10;
    }
    lVar2 = (this->Array).Buckets[uVar3];
    uVar9 = (ulonglong)(uint)((int)aVar1 - iVar8);
    this->FirstFreeIndex = *(uint *)(lVar2 + uVar9 * 0x30);
    *(undefined8 *)(lVar2 + uVar9 * 0x30) = 0;
    *(undefined8 *)(lVar2 + 8 + uVar9 * 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x10 + uVar9 * 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x18 + uVar9 * 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x20 + uVar9 * 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28 + uVar9 * 0x30) = 0;
    aVar1 = (atomic<unsigned_int>)this->FirstFreeIndex;
  }
  FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::
  ~FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>(&this->Array);
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar6 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001456de48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// ~TStateStreamStore<FStaticMeshDynamicState> @ 1456de4d0

void __thiscall
TStateStreamStore<FStaticMeshDynamicState>::~TStateStreamStore<FStaticMeshDynamicState>
          (TStateStreamStore<FStaticMeshDynamicState> *this)

{
  uint *puVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  BOOLEAN BVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  
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
    if (uVar4 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (0x10 << ((byte)uVar4 & 0x1f)) + -0x10;
    }
    lVar3 = (this->Array).Buckets[uVar4];
    uVar10 = (ulonglong)(uint)((int)aVar2 - iVar9);
    this->FirstFreeIndex = *(uint *)(lVar3 + uVar10 * 0x48);
    *(undefined8 *)(lVar3 + uVar10 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40 + uVar10 * 0x48) = 0;
    puVar1 = (uint *)(lVar3 + 0x40 + uVar10 * 0x48);
    *puVar1 = *puVar1 & 0xfffffffc;
    *(undefined8 *)(lVar3 + 8 + uVar10 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x10 + uVar10 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x18 + uVar10 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x20 + uVar10 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x28 + uVar10 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x30 + uVar10 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x38 + uVar10 * 0x48) = 0;
    aVar2 = (atomic<unsigned_int>)this->FirstFreeIndex;
  }
  FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::
  ~FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>(&this->Array);
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar7 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001456de5cd. Too many branches */
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

// AddUninitialized @ 1456f17d0

void * __thiscall
TStateStreamStore<FExponentialHeightFogDynamicState>::AddUninitialized
          (TStateStreamStore<FExponentialHeightFogDynamicState> *this,uint *param_1)

{
  FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216> *this_00;
  long64 *plVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  FExponentialHeightFogDynamicState *pFVar7;
  int iVar8;
  bool bVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar3 = this->FirstFreeIndex;
  this_00 = &this->Array;
  if (uVar3 != 0xffffffff) {
    pFVar7 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::operator[]
                       (this_00,uVar3);
    this->FirstFreeIndex = pFVar7->ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *param_1 = uVar3;
    pFVar7 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::operator[]
                       (this_00,uVar3);
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
  plVar1 = (this->Array).Buckets + uVar3;
  pvVar5 = (void *)(this->Array).Buckets[uVar3];
  if (pvVar5 == (void *)0x0) {
    uVar4 = 1 << ((byte)uVar3 + 4 & 0x1f);
    if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    pvVar5 = FMemory::Malloc((ulonglong)uVar4 * 0xc0,8);
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
  return (void *)((ulonglong)(uint)((int)aVar2 - iVar8) * 0xc0 + (longlong)pvVar5);
}

// AddUninitialized @ 1456f1910

void * __thiscall
TStateStreamStore<FParticleSystemDynamicState>::AddUninitialized
          (TStateStreamStore<FParticleSystemDynamicState> *this,uint *param_1)

{
  FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216> *this_00;
  long64 *plVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  FParticleSystemDynamicState *pFVar7;
  int iVar8;
  bool bVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar3 = this->FirstFreeIndex;
  this_00 = &this->Array;
  if (uVar3 != 0xffffffff) {
    pFVar7 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[](this_00,uVar3);
    this->FirstFreeIndex = pFVar7->ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *param_1 = uVar3;
    pFVar7 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[](this_00,uVar3);
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
  plVar1 = (this->Array).Buckets + uVar3;
  pvVar5 = (void *)(this->Array).Buckets[uVar3];
  if (pvVar5 == (void *)0x0) {
    uVar4 = 1 << ((byte)uVar3 + 4 & 0x1f);
    if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    pvVar5 = FMemory::Malloc((ulonglong)uVar4 << 5,8);
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
  return (void *)((ulonglong)(uint)((int)aVar2 - iVar8) * 0x20 + (longlong)pvVar5);
}

// AddUninitialized @ 1456f1a50

void * __thiscall
TStateStreamStore<FSkinnedMeshDynamicState>::AddUninitialized
          (TStateStreamStore<FSkinnedMeshDynamicState> *this,uint *param_1)

{
  FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216> *this_00;
  long64 *plVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  FSkinnedMeshDynamicState *pFVar7;
  int iVar8;
  bool bVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar3 = this->FirstFreeIndex;
  this_00 = &this->Array;
  if (uVar3 != 0xffffffff) {
    pFVar7 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[](this_00,uVar3);
    this->FirstFreeIndex = pFVar7->ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *param_1 = uVar3;
    pFVar7 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[](this_00,uVar3);
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
  plVar1 = (this->Array).Buckets + uVar3;
  pvVar5 = (void *)(this->Array).Buckets[uVar3];
  if (pvVar5 == (void *)0x0) {
    uVar4 = 1 << ((byte)uVar3 + 4 & 0x1f);
    if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    pvVar5 = FMemory::Malloc((ulonglong)uVar4 * 0x30,8);
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
  return (void *)((ulonglong)(uint)((int)aVar2 - iVar8) * 0x30 + (longlong)pvVar5);
}

// AddUninitialized @ 1456f1b90

void * __thiscall
TStateStreamStore<FSkyAtmosphereDynamicState>::AddUninitialized
          (TStateStreamStore<FSkyAtmosphereDynamicState> *this,uint *param_1)

{
  FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216> *this_00;
  long64 *plVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  FSkyAtmosphereDynamicState *pFVar7;
  int iVar8;
  bool bVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar3 = this->FirstFreeIndex;
  this_00 = &this->Array;
  if (uVar3 != 0xffffffff) {
    pFVar7 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[](this_00,uVar3);
    this->FirstFreeIndex = pFVar7->ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *param_1 = uVar3;
    pFVar7 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[](this_00,uVar3);
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
    pvVar5 = FMemory::Malloc((ulonglong)uVar4 * 0x160,0x10);
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
  return (void *)((ulonglong)(uint)((int)aVar2 - iVar8) * 0x160 + (longlong)pvVar5);
}

// AddUninitialized @ 1456f1cd0

void * __thiscall
TStateStreamStore<FStaticMeshDynamicState>::AddUninitialized
          (TStateStreamStore<FStaticMeshDynamicState> *this,uint *param_1)

{
  FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216> *this_00;
  long64 *plVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  FStaticMeshDynamicState *pFVar7;
  int iVar8;
  bool bVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar3 = this->FirstFreeIndex;
  this_00 = &this->Array;
  if (uVar3 != 0xffffffff) {
    pFVar7 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[](this_00,uVar3);
    this->FirstFreeIndex = pFVar7->ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *param_1 = uVar3;
    pFVar7 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[](this_00,uVar3);
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
  plVar1 = (this->Array).Buckets + uVar3;
  pvVar5 = (void *)(this->Array).Buckets[uVar3];
  if (pvVar5 == (void *)0x0) {
    uVar4 = 1 << ((byte)uVar3 + 4 & 0x1f);
    if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    pvVar5 = FMemory::Malloc((ulonglong)uVar4 * 0x48,8);
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
  return (void *)((longlong)pvVar5 + (ulonglong)(uint)((int)aVar2 - iVar8) * 0x48);
}

// Remove @ 14571aae0

void __thiscall
TStateStreamStore<FStaticMeshDynamicState>::Remove
          (TStateStreamStore<FStaticMeshDynamicState> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FStaticMeshDynamicState *pFVar2;
  
  pFVar2 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[](&this->Array,param_1);
  pFVar1 = (pFVar2->Owners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)&pFVar2->Transform);
  AcquireSRWLockExclusive((PSRWLOCK)this);
  pFVar2->ModifiedFlags = this->FirstFreeIndex;
  this->FirstFreeIndex = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014571ab4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

