// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// Create @ 14148ea40

FTable * __cdecl UE::ParkingLot::Private::FTable::Create(uint param_1)

{
  ulong64 _Size;
  FTable *_Dst;
  
  _Size = (ulonglong)param_1 * 8 + 8;
  _Dst = FMemory::Malloc(_Size,8);
  memset(_Dst,0,_Size);
  _Dst->BucketCount = param_1;
  return _Dst;
}

// CreateOrGet @ 14148f280

FTable * __cdecl UE::ParkingLot::Private::FTable::CreateOrGet(void)

{
  atomic<UE::ParkingLot::Private::FTable_*> aVar1;
  atomic<UE::ParkingLot::Private::FTable_*> aVar2;
  atomic<UE::ParkingLot::Private::FTable_*> aVar3;
  bool bVar4;
  
  aVar3 = GlobalTable;
  if (GlobalTable == (atomic<UE::ParkingLot::Private::FTable_*>)0x0) {
    aVar2 = (atomic<UE::ParkingLot::Private::FTable_*>)FMemory::Malloc(0x108,8);
    memset((undefined4 *)((longlong)aVar2 + 4),0,0x104);
    aVar3 = (atomic<UE::ParkingLot::Private::FTable_*>)0x0;
    *(undefined4 *)aVar2 = 0x20;
    LOCK();
    bVar4 = GlobalTable == (atomic<UE::ParkingLot::Private::FTable_*>)0x0;
    aVar1 = aVar2;
    if (!bVar4) {
      aVar3 = GlobalTable;
      aVar1 = GlobalTable;
    }
    GlobalTable = aVar1;
    UNLOCK();
    if (bVar4) {
      return (FTable *)aVar2;
    }
    FMemory::Free((void *)aVar2);
  }
  return (FTable *)aVar3;
}

// Destroy @ 141492180

void __cdecl UE::ParkingLot::Private::FTable::Destroy(FTable *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (FTable *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// FindBucket @ 141495410

FBucket * __cdecl
UE::ParkingLot::Private::FTable::FindBucket
          (void *param_1,TDynamicUniqueLock<UE::FWordMutex> *param_2)

{
  FBucket *this;
  atomic<UE::ParkingLot::Private::FTable_*> aVar1;
  
  aVar1 = GlobalTable;
  while( true ) {
    if ((aVar1 == (atomic<UE::ParkingLot::Private::FTable_*>)0x0) ||
       (this = *(FBucket **)
                ((uint *)((longlong)aVar1 + 8) +
                ((((ulonglong)param_1 >> 0x20) * -0x23d4e82362d043d7 + 0x5b12db9242bd7ce7 +
                  ((ulonglong)param_1 & 0xffffffff) * -0x34efebe6d34d3a04 >> 0x20) %
                (ulonglong)*(uint *)aVar1) * 2), this == (FBucket *)0x0)) {
      GlobalTable = aVar1;
      return (FBucket *)0x0;
    }
    GlobalTable = aVar1;
    FWordMutex::Lock(&this->Mutex);
    if (param_2->bLocked != false) {
      FWordMutex::Unlock(param_2->Mutex);
    }
    param_2->Mutex = &this->Mutex;
    param_2->bLocked = true;
    if (aVar1 == GlobalTable) break;
    if (param_2->bLocked != false) {
      FWordMutex::Unlock(param_2->Mutex);
    }
    param_2->Mutex = (FWordMutex *)0x0;
    param_2->bLocked = false;
    aVar1 = GlobalTable;
  }
  return this;
}

// FindOrCreateBucket @ 1414955b0

FBucket * __cdecl
UE::ParkingLot::Private::FTable::FindOrCreateBucket
          (void *param_1,TDynamicUniqueLock<UE::FWordMutex> *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  atomic<UE::ParkingLot::Private::FTable_*> aVar4;
  atomic<UE::ParkingLot::Private::FTable_*> aVar5;
  atomic<UE::ParkingLot::Private::FTable_*> aVar6;
  FBucket *pFVar7;
  FBucket *pFVar8;
  bool bVar9;
  
  while( true ) {
    aVar6 = GlobalTable;
    aVar5 = GlobalTable;
    if (GlobalTable == (atomic<UE::ParkingLot::Private::FTable_*>)0x0) {
      aVar5 = (atomic<UE::ParkingLot::Private::FTable_*>)FMemory::Malloc(0x108,8);
      memset((uint *)((longlong)aVar5 + 4),0,0x104);
      *(uint *)aVar5 = 0x20;
      LOCK();
      bVar9 = GlobalTable != (atomic<UE::ParkingLot::Private::FTable_*>)0x0;
      aVar4 = aVar5;
      if (bVar9) {
        aVar6 = GlobalTable;
        aVar4 = GlobalTable;
      }
      GlobalTable = aVar4;
      UNLOCK();
      if (bVar9) {
        FMemory::Free((void *)aVar5);
        aVar5 = aVar6;
      }
    }
    uVar2 = (((ulonglong)param_1 >> 0x20) * -0x23d4e82362d043d7 + 0x5b12db9242bd7ce7 +
             ((ulonglong)param_1 & 0xffffffff) * -0x34efebe6d34d3a04 >> 0x20) %
            (ulonglong)*(uint *)aVar5;
    pFVar8 = *(FBucket **)((uint *)((longlong)aVar5 + 8) + uVar2 * 2);
    if (*(FBucket **)((uint *)((longlong)aVar5 + 8) + uVar2 * 2) == (FBucket *)0x0) {
      pFVar7 = ::operator_new(0x40,0x40);
      pFVar8 = (FBucket *)0x0;
      if (pFVar7 != (FBucket *)0x0) {
        (pFVar7->Mutex).State = (atomic<unsigned___int64>)0x0;
        pFVar7->Head = (FThread *)0x0;
        pFVar7->Tail = (FThread *)0x0;
        pFVar8 = pFVar7;
      }
      puVar1 = (uint *)((longlong)aVar5 + uVar2 * 8) + 2;
      LOCK();
      pFVar7 = *(FBucket **)puVar1;
      bVar9 = pFVar7 == (FBucket *)0x0;
      if (bVar9) {
        *(FBucket **)puVar1 = pFVar8;
        pFVar7 = (FBucket *)0x0;
      }
      UNLOCK();
      if (!bVar9) {
        ::operator_delete(pFVar8,0x40,0x40);
        pFVar8 = pFVar7;
      }
    }
    FWordMutex::Lock(&pFVar8->Mutex);
    if (param_2->bLocked != false) {
      FWordMutex::Unlock(param_2->Mutex);
    }
    param_2->Mutex = &pFVar8->Mutex;
    param_2->bLocked = true;
    if (aVar5 == GlobalTable) break;
    if ((param_2->bLocked == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("bLocked",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\UniqueLock.h"
                           ,0x72,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FBucket *)(*pcVar3)();
      return pFVar8;
    }
    param_2->bLocked = false;
    FWordMutex::Unlock(param_2->Mutex);
  }
  return pFVar8;
}

// HashAddress @ 14149ade0

uint __cdecl UE::ParkingLot::Private::FTable::HashAddress(void *param_1)

{
  return (uint)(((ulonglong)param_1 >> 0x20) * -0x23d4e82362d043d7 + 0x5b12db9242bd7ce7 +
                ((ulonglong)param_1 & 0xffffffff) * -0x34efebe6d34d3a04 >> 0x20);
}

// Reserve @ 1414ae5b0

void __cdecl UE::ParkingLot::Private::FTable::Reserve(uint param_1)

{
  ulong64 _Size;
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FTable *pFVar6;
  atomic<UE::ParkingLot::Private::FTable_*> _Dst;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18;
  FScriptContainerElement *local_res20;
  undefined8 *local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  ForAnyElementType local_70;
  undefined8 local_68;
  TArray<UE::ParkingLot::Private::FBucket_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  uVar12 = 1;
  if (param_1 != 0) {
    uVar12 = param_1;
  }
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  uVar10 = (ulonglong)(uVar12 - 1) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_res18 = (undefined4)lVar13;
  uVar15 = 1 << ((byte)lVar13 & 0x1f);
  pFVar6 = CreateOrGet();
  uVar12 = pFVar6->BucketCount;
  while (uVar12 < uVar15) {
    bVar4 = TryLock(pFVar6,local_60);
    if (bVar4) {
      iVar3 = local_60[0].ArrayNum;
      uVar10 = (ulonglong)local_60[0].ArrayNum;
      pFVar14 = local_60[0].AllocatorInstance.Data + uVar10 * 8;
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      FVar16.Data = local_60[0].AllocatorInstance.Data;
      goto LAB_1414ae660;
    }
    pFVar6 = CreateOrGet();
    uVar12 = pFVar6->BucketCount;
  }
LAB_1414aeb0e:
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return;
LAB_1414ae660:
  if ((int)uVar10 != iVar3) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<UE::ParkingLot::Private::FBucket_*,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if (FVar16.Data != pFVar14) {
    lVar13 = *(longlong *)FVar16.Data;
    do {
      local_88 = *(undefined8 **)(lVar13 + 8);
      if (local_88 == (undefined8 *)0x0) {
LAB_1414ae6a3:
        if (local_88 == (undefined8 *)0x0) goto LAB_1414ae754;
      }
      else {
        *(undefined8 *)(lVar13 + 8) = *local_88;
        *local_88 = 0;
        if (*(undefined8 **)(lVar13 + 0x10) != local_88) goto LAB_1414ae6a3;
        *(undefined8 *)(lVar13 + 0x10) = 0;
      }
      if (((local_70.Data <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < local_70.Data + (longlong)local_68._4_4_ * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((int)local_68 == local_68._4_4_) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_70,(int *)((longlong)&local_68 + 4));
        local_68 = CONCAT44(local_68._4_4_,iVar5);
      }
      lVar11 = (longlong)(int)local_68;
      local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
      *(undefined8 **)(local_70.Data + lVar11 * 8) = local_88;
    } while( true );
  }
  _Size = (ulonglong)uVar15 * 8 + 8;
  _Dst = (atomic<UE::ParkingLot::Private::FTable_*>)FMemory::Malloc(_Size,8);
  memset((void *)_Dst,0,_Size);
  FVar16.Data = local_60[0].AllocatorInstance.Data;
  *(uint *)_Dst = uVar15;
  lVar13 = (longlong)local_60[0].ArrayNum;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = local_60[0].ArrayNum;
  if (local_60[0].ArrayNum == 0) {
    local_74 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_60[0].ArrayNum,0,&local_80,local_60[0].ArrayNum,&local_74);
    memcpy(local_80.Data,FVar16.Data,lVar13 << 3);
  }
  iVar3 = (int)local_68;
  uVar10 = (ulonglong)(int)local_68;
  pFVar14 = local_70.Data + uVar10 * 8;
  FVar16.Data = local_70.Data;
  local_res20 = pFVar14;
  while( true ) {
    if ((int)uVar10 != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::ParkingLot::Private::FThread_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar16.Data == pFVar14) break;
    puVar9 = *(undefined8 **)FVar16.Data;
    uVar10 = ((puVar9[1] & 0xffffffff) * -0x34efebe6d34d3a04 + 0x5b12db9242bd7ce7 +
              ((ulonglong)puVar9[1] >> 0x20) * -0x23d4e82362d043d7 >> 0x20) %
             (ulonglong)*(uint *)_Dst;
    puVar7 = *(undefined8 **)((uint *)((longlong)_Dst + 8) + uVar10 * 2);
    if (*(undefined8 **)((uint *)((longlong)_Dst + 8) + uVar10 * 2) == (undefined8 *)0x0) {
      if (local_78 == 0) {
        puVar7 = ::operator_new(0x40,0x40);
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
      }
      else {
        if ((local_78 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar12 = local_78 - 1;
        puVar7 = *(undefined8 **)(local_80.Data + (longlong)(int)uVar12 * 8);
        if (~uVar12 + local_78 != 0) {
          memmove(local_80.Data + (longlong)(int)uVar12 * 8,
                  local_80.Data + (longlong)(int)uVar12 * 8 + 8,
                  (longlong)(int)(~uVar12 + local_78) << 3);
        }
        local_78 = local_78 + -1;
      }
      puVar1 = (uint *)((longlong)_Dst + uVar10 * 8) + 2;
      LOCK();
      puVar8 = *(undefined8 **)puVar1;
      bVar4 = puVar8 == (undefined8 *)0x0;
      if (bVar4) {
        *(undefined8 **)puVar1 = puVar7;
        puVar8 = (undefined8 *)0x0;
      }
      UNLOCK();
      pFVar14 = local_res20;
      if (!bVar4) {
        ::operator_delete(puVar7,0x40,0x40);
        pFVar14 = local_res20;
        puVar7 = puVar8;
      }
    }
    if ((longlong *)puVar7[2] == (longlong *)0x0) {
      puVar7[1] = puVar9;
      FVar16.Data = FVar16.Data + 8;
      puVar7[2] = puVar9;
      uVar10 = local_68 & 0xffffffff;
    }
    else {
      *(longlong *)puVar7[2] = (longlong)puVar9;
      FVar16.Data = FVar16.Data + 8;
      puVar7[2] = puVar9;
      uVar10 = local_68 & 0xffffffff;
    }
  }
  FVar16.Data = local_60[0].AllocatorInstance.Data;
  for (uVar10 = 0;
      (local_60[0].AllocatorInstance.Data = FVar16.Data, local_78 != 0 &&
      ((uint)uVar10 < *(uint *)_Dst)); uVar10 = (ulonglong)((uint)uVar10 + 1)) {
    if (*(longlong *)((uint *)((longlong)_Dst + 8) + uVar10 * 2) == 0) {
      if (local_78 == 0) {
        puVar9 = ::operator_new(0x40,0x40);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
      }
      else {
        if ((local_78 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar12 = local_78 - 1;
        puVar9 = *(undefined8 **)(local_80.Data + (longlong)(int)uVar12 * 8);
        if (~uVar12 + local_78 != 0) {
          memmove(local_80.Data + (longlong)(int)uVar12 * 8,
                  local_80.Data + (longlong)(int)uVar12 * 8 + 8,
                  (longlong)(int)(~uVar12 + local_78) << 3);
        }
        local_78 = local_78 + -1;
      }
      puVar1 = (uint *)((longlong)_Dst + uVar10 * 8) + 2;
      LOCK();
      bVar4 = *(longlong *)puVar1 == 0;
      if (bVar4) {
        *(undefined8 **)puVar1 = puVar9;
      }
      UNLOCK();
      if (!bVar4) {
        ::operator_delete(puVar9,0x40,0x40);
      }
    }
    FVar16.Data = local_60[0].AllocatorInstance.Data;
  }
  LOCK();
  UNLOCK();
  lVar13 = (longlong)local_60[0].ArrayNum;
  GlobalTable = _Dst;
  if ((local_60[0].ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar14 = FVar16.Data + lVar13 * 8;
  for (; FVar16.Data != pFVar14; FVar16.Data = FVar16.Data + 8) {
    FWordMutex::Unlock(*(FWordMutex **)FVar16.Data);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  goto LAB_1414aeb0e;
LAB_1414ae754:
  uVar10 = local_60[0]._8_8_ & 0xffffffff;
  FVar16.Data = FVar16.Data + 8;
  local_88 = (undefined8 *)0x0;
  goto LAB_1414ae660;
}

// TryLock @ 1414b7080

bool __cdecl
UE::ParkingLot::Private::FTable::TryLock
          (FTable *param_1,
          TArray<UE::ParkingLot::Private::FBucket_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FTable *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  FTable FVar7;
  FTable FVar8;
  FTable FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FTable FVar12;
  FTable FVar13;
  bool bVar14;
  FIdentityFunctor local_res8 [8];
  FTable local_38 [2];
  
  uVar2 = param_1->BucketCount;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  FVar13.BucketCount = 0;
  FVar13._padding_ = 0;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&param_2->AllocatorInstance,0,piVar1);
  }
  FVar12 = FVar13;
  if (param_1->BucketCount != 0) {
    do {
      FVar9 = param_1[(longlong)FVar12 + 1];
      if (param_1[(longlong)FVar12 + 1] == (FTable)0x0) {
        FVar7 = (FTable)::operator_new(0x40,0x40);
        FVar9 = FVar13;
        if (FVar7 != (FTable)0x0) {
          *(undefined8 *)FVar7 = 0;
          *(undefined8 *)((longlong)FVar7 + 8) = 0;
          *(undefined8 *)((longlong)FVar7 + 0x10) = 0;
          FVar9 = FVar7;
        }
        FVar8.BucketCount = 0;
        FVar8._padding_ = 0;
        LOCK();
        FVar7 = param_1[(longlong)FVar12 + 1];
        bVar14 = FVar7 == (FTable)0x0;
        if (bVar14) {
          param_1[(longlong)FVar12 + 1] = FVar9;
          FVar7 = FVar8;
        }
        UNLOCK();
        if (!bVar14) {
          ::operator_delete((void *)FVar9,0x40,0x40);
          FVar9 = FVar7;
        }
      }
      pFVar3 = (FTable *)(param_2->AllocatorInstance).Data;
      local_38[0] = FVar9;
      if (((pFVar3 <= local_38) && (local_38 < pFVar3 + *piVar1)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      FVar12.BucketCount = FVar12.BucketCount + 1;
      FVar12._padding_ = 0;
      param_2->ArrayNum = iVar6 + 1;
      *(FTable *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_38[0];
    } while (FVar12.BucketCount < param_1->BucketCount);
  }
  AlgoImpl::IntroSortInternal<UE::ParkingLot::Private::FBucket_*,int,FIdentityFunctor,TLess<void>_>
            ((FBucket **)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_res8[0],
             (TLess<void>)local_res8[0]);
  pFVar10 = (param_2->AllocatorInstance).Data;
  iVar6 = param_2->ArrayNum;
  pFVar11 = pFVar10 + (longlong)iVar6 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar6) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<UE::ParkingLot::Private::FBucket_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    FWordMutex::Lock(*(FWordMutex **)pFVar10);
    pFVar10 = pFVar10 + 8;
  }
  if ((atomic<UE::ParkingLot::Private::FTable_*>)param_1 == GlobalTable) {
    bVar14 = true;
  }
  else {
    iVar6 = param_2->ArrayNum;
    pFVar11 = (param_2->AllocatorInstance).Data;
    if ((iVar6 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      uVar5 = (*pcVar4)();
      return (bool)uVar5;
    }
    pFVar10 = pFVar11 + (longlong)iVar6 * 8;
    for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 8) {
      FWordMutex::Unlock(*(FWordMutex **)pFVar11);
    }
    param_2->ArrayNum = 0;
    if (*piVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
    bVar14 = false;
  }
  return bVar14;
}

// Unlock @ 1414b84f0

void __cdecl
UE::ParkingLot::Private::FTable::Unlock
          (TArrayView<UE::ParkingLot::Private::FBucket_*_const,int> *param_1)

{
  FBucket **ppFVar1;
  FBucket **ppFVar2;
  
  ppFVar2 = param_1->DataPtr;
  ppFVar1 = ppFVar2 + param_1->ArrayNum;
  for (; ppFVar2 != ppFVar1; ppFVar2 = ppFVar2 + 1) {
    FWordMutex::Unlock(&(*ppFVar2)->Mutex);
  }
  return;
}

