// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 27

// Game_CreateInstance @ 143123250

FTransformHandle * __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_CreateInstance
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTransformHandle *__return_storage_ptr__,FTransformStaticState *param_1,
          FTransformDynamicState *param_2)

{
  TStateStreamStore<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance>
  *this_00;
  ForAnyElementType *pFVar1;
  long64 *plVar2;
  uint *puVar3;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FTransformHandle *pFVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  FInstance *pFVar14;
  FTransformDynamicState *this_01;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint local_res8 [2];
  
  if (((this->CurrentTickLock).Mutex.Mutex.Ptr == (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x9b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FTransformHandle *)(*pcVar7)();
    return pFVar10;
  }
  pvVar4 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  this_00 = &this->Instances;
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  uVar17 = (uint)(this->Instances).Array.Buckets[0x14];
  if (uVar17 == 0xffffffff) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    LOCK();
    uVar17 = *(uint *)&(this_00->Lock).Mutex.Mutex.Ptr;
    *(int *)&(this_00->Lock).Mutex.Mutex.Ptr = *(int *)&(this_00->Lock).Mutex.Mutex.Ptr + 1;
    UNLOCK();
    uVar9 = (uVar17 >> 4) + 1;
    uVar16 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> uVar16 == 0; uVar16 = uVar16 - 1) {
      }
    }
    pvVar12 = (void *)(this_00->Array).Buckets[(ulonglong)uVar16 - 1];
    plVar2 = (this_00->Array).Buckets + ((ulonglong)uVar16 - 1);
    if (pvVar12 == (void *)0x0) {
      uVar9 = 1 << ((byte)uVar16 + 4 & 0x1f);
      uVar11 = (ulonglong)uVar9;
      if (uVar9 < 0x10) {
        uVar11 = 0x10;
      }
      pvVar12 = FMemory::Malloc(uVar11 * 0xd0,0x10);
      if (((ulonglong)plVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      pvVar13 = (void *)*plVar2;
      bVar8 = pvVar13 == (void *)0x0;
      if (bVar8) {
        *plVar2 = (long64)pvVar12;
        pvVar13 = (void *)0x0;
      }
      UNLOCK();
      if (!bVar8) {
        FMemory::Free(pvVar12);
        pvVar12 = pvVar13;
      }
    }
    if (uVar16 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = (0x10 << ((byte)uVar16 & 0x1f)) + -0x10;
    }
    pFVar14 = (FInstance *)((ulonglong)(uVar17 - iVar15) * 0xd0 + (longlong)pvVar12);
  }
  else {
    pFVar14 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                              *)this_00,uVar17);
    *(uint *)((this->Instances).Array.Buckets + 0x14) = (pFVar14->StaticState).ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    pFVar14 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                              *)this_00,uVar17);
  }
  uVar16 = *(uint *)((longlong)pvVar4 + 0x48);
  (pFVar14->StaticState).ModifiedFlags = param_1->ModifiedFlags;
  pFVar14->CreateTick = uVar16;
  pFVar14->RefCount = 1;
  pFVar14->DeleteTick = 0xffffffff;
  (pFVar14->RendDynamicState).bIsSet = false;
  pFVar14->UserData = (FTransformObject *)0x0;
  this_01 = TStateStreamStore<FTransformDynamicState>::AddUninitialized
                      ((TStateStreamStore<FTransformDynamicState> *)&this->NewestAvailableTick,
                       local_res8);
  FTransformDynamicState::FTransformDynamicState(this_01,param_2);
  AcquireSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  pFVar5 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  uVar16 = *(uint *)&pFVar5[1].Data;
  pFVar1 = pFVar5 + 1;
  if (uVar16 <= uVar17) {
    uVar9 = uVar17 + 1;
    if ((int)uVar16 < (int)uVar9) {
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar9 - uVar16,pFVar5,(int *)pFVar1,
                          (int *)((longlong)&pFVar5[1].Data + 4));
      memset(pFVar5->Data + (longlong)iVar15 * 4,0,(longlong)(int)(uVar9 - uVar16) << 2);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < (int)uVar16) {
        uVar16 = uVar16 - uVar9;
        if (((int)(uVar16 | uVar9) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FTransformHandle *)(*pcVar7)();
          return pFVar10;
        }
        if (uVar16 != 0) {
          iVar15 = (*(int *)&pFVar1->Data - uVar16) - uVar9;
          if (iVar15 != 0) {
            memmove(pFVar5->Data + (longlong)(int)uVar9 * 4,
                    pFVar5->Data + (longlong)(int)uVar9 * 4 + (longlong)(int)uVar16 * 4,
                    (longlong)iVar15 << 2);
          }
          *(uint *)&pFVar1->Data = *(int *)&pFVar1->Data - uVar16;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,pFVar5,*(int *)&pFVar1->Data,(int *)((longlong)&pFVar5[1].Data + 4));
        }
      }
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)(this->CurrentTickLock).Mutex.Mutex.Ptr + 0x10),uVar9,false);
  }
  pvVar4 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((((int)uVar17 < 0) || (*(int *)((longlong)pvVar4 + 0x28) <= (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FTransformHandle *)(*pcVar7)();
    return pFVar10;
  }
  lVar18 = *(longlong *)((longlong)pvVar4 + 0x20);
  if (*(longlong *)((longlong)pvVar4 + 0x20) == 0) {
    lVar18 = (longlong)pvVar4 + 0x10;
  }
  puVar3 = (uint *)(lVar18 + (longlong)((int)(uVar17 + ((int)uVar17 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar17 & 0x1f);
  plVar6 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  uVar16 = 0;
  if ((int)uVar17 < (int)plVar6[1]) {
    uVar16 = ~uVar17 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FTransformHandle *)(*pcVar7)();
    return pFVar10;
  }
  *(uint *)(*plVar6 + (longlong)(int)uVar17 * 4) = local_res8[0];
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  *(longlong **)__return_storage_ptr__ = &this->_padding_;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar17 + 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// Game_AddRef @ 143123650

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_AddRef
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstance *pFVar3;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                           *)&this->_padding_,param_1 - 1);
  if (pFVar3->RefCount == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3->RefCount = pFVar3->RefCount + 1;
    return;
  }
  pFVar3->RefCount = pFVar3->RefCount + 1;
  return;
}

// Game_Release @ 143123720

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_Release
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInstance *pFVar7;
  FTransformDynamicState *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = param_1 - 1;
  pFVar7 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                           *)&this->_padding_,uVar9);
  if (pFVar7->RefCount == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = &pFVar7->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    pFVar7->DeleteTick = *(uint *)(*(longlong *)&(this->Instances).FirstFreeIndex + 0x48);
    AcquireSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    lVar2 = *(longlong *)&(this->Instances).FirstFreeIndex;
    if (((int)uVar9 < 0) || (*(int *)(lVar2 + 0x28) <= (int)uVar9)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar10 = *(longlong *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      lVar10 = lVar2 + 0x10;
    }
    puVar1 = (uint *)(lVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    plVar3 = *(longlong **)&(this->Instances).FirstFreeIndex;
    uVar6 = 0;
    if ((int)uVar9 < (int)plVar3[1]) {
      uVar6 = ~uVar9 >> 0x1f;
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
    uVar9 = *(uint *)(*plVar3 + (longlong)(int)uVar9 * 4);
    ReleaseSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    pFVar8 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
                       ((FPow2ChunkedArray<FTransformDynamicState,16,16777216> *)
                        &this->NewestAvailableTick,uVar9);
    plVar3 = *(longlong **)&pFVar8->Parent;
    if ((plVar3 != (longlong *)0x0) && (*(int *)&(pFVar8->Parent).field_0x8 == 0)) {
      (**(code **)(*plVar3 + 8))(plVar3,*(undefined4 *)&(pFVar8->Parent).field_0xc);
    }
    *(undefined4 *)&(pFVar8->Parent).field_0x8 = 1;
  }
  return;
}

// Game_Update @ 143123910

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_Update
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          uint param_1,void *param_2,double param_3,ulong64 param_4)

{
  FTransformDynamicState *this_00;
  FStateStreamCopyContext local_res8 [8];
  
  this_00 = Edit((TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *)
                 &this[-1].DeferredDestroys,param_1,param_3);
  FTransformDynamicState::Apply(this_00,local_res8,param_2);
  return;
}

// Game_Edit @ 143123940

void * __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_Edit
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          uint param_1,double param_2,ulong64 param_3)

{
  FTransformDynamicState *pFVar1;
  
  pFVar1 = Edit((TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *)
                &this[-1].DeferredDestroys,param_1,param_2);
  return pFVar1;
}

// Render_GetUserData @ 143123950

void * __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_GetUserData
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FInstance *pFVar4;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pFVar4 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                           *)&this->_padding_,param_1 - 1);
  return pFVar4->UserData;
}

// Game_BeginTick @ 1431239b0

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_BeginTick
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  bool bVar7;
  FTick *pFVar8;
  FTick *pFVar9;
  
  if ((this->CurrentTick != (FTick *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x12d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = ::operator_new(0x50);
  pFVar9 = (FTick *)0x0;
  if (pFVar8 != (FTick *)0x0) {
    (pFVar8->ModifiedInstances).AllocatorInstance.InlineData[0] = '\0';
    (pFVar8->ModifiedInstances).AllocatorInstance.InlineData[1] = '\0';
    (pFVar8->ModifiedInstances).AllocatorInstance.InlineData[2] = '\0';
    (pFVar8->ModifiedInstances).AllocatorInstance.InlineData[3] = '\0';
    (pFVar8->ModifiedInstances).AllocatorInstance.InlineData[4] = '\0';
    (pFVar8->ModifiedInstances).AllocatorInstance.InlineData[5] = '\0';
    (pFVar8->ModifiedInstances).AllocatorInstance.InlineData[6] = '\0';
    (pFVar8->ModifiedInstances).AllocatorInstance.InlineData[7] = '\0';
    pTVar6 = &pFVar8->ModifiedInstances;
    (pTVar6->AllocatorInstance).InlineData[8] = '\0';
    (pTVar6->AllocatorInstance).InlineData[9] = '\0';
    (pTVar6->AllocatorInstance).InlineData[10] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xf] = '\0';
    *(undefined8 *)&pFVar8->Index = 0;
    (pFVar8->DynamicStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->DynamicStates).ArrayNum = 0;
    (pFVar8->DynamicStates).ArrayMax = 0;
    (pFVar8->ModifiedInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (pFVar8->ModifiedInstances).NumBits = 0;
    (pFVar8->ModifiedInstances).MaxBits = 0x80;
    pFVar8->PrevTick = (FTick *)0x0;
    pFVar8->NextTick = (FTick *)0x0;
    pFVar8->Time = 0.0;
    pFVar9 = pFVar8;
  }
  uVar2 = this->TickCounter;
  this->CurrentTick = pFVar9;
  this->TickCounter = uVar2 + 1;
  pFVar9->Index = uVar2;
  pFVar9 = this->NewestAvailableTick;
  if (pFVar9 != (FTick *)0x0) {
    pFVar8 = this->CurrentTick;
    if (pFVar8 != pFVar9) {
      iVar3 = (pFVar8->DynamicStates).ArrayMax;
      piVar1 = &(pFVar8->DynamicStates).ArrayMax;
      _Src = (pFVar9->DynamicStates).AllocatorInstance.Data;
      iVar4 = (pFVar9->DynamicStates).ArrayNum;
      (pFVar8->DynamicStates).ArrayNum = iVar4;
      if ((iVar4 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar4,iVar3,(ForAnyElementType *)pFVar8,iVar4,piVar1);
        if (iVar4 != 0) {
          memcpy((pFVar8->DynamicStates).AllocatorInstance.Data,_Src,(longlong)iVar4 << 2);
        }
      }
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              (&this->CurrentTick->ModifiedInstances,(this->CurrentTick->DynamicStates).ArrayNum,
               false);
  }
  return;
}

// Game_EndTick @ 143123b00

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_EndTick
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick == (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentTick->Time = param_1;
  this->CurrentTick->PrevTick = this->NewestAvailableTick;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    this->OldestAvailableTick = this->CurrentTick;
  }
  else {
    if (param_1 < this->NewestAvailableTick->Time) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewestAvailableTick->Time <= AbsoluteTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x140,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NewestAvailableTick->NextTick = this->CurrentTick;
  }
  this->NewestAvailableTick = this->CurrentTick;
  this->CurrentTick = (FTick *)0x0;
  return;
}

// Game_Exit @ 143123bf0

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_Exit
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick != (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x14f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Game_GetVoidPointer @ 143123c30

void * __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Game_GetVoidPointer
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  return plVar1;
}

// GetId @ 143123c50

uint __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::GetId
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  return 1;
}

// Render_Update @ 143123c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_Update
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          double param_1)

{
  double dVar1;
  FTick *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTick *pFVar6;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  uint uVar7;
  double dVar8;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [8];
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  if (param_1 == this->RendTime) {
    return;
  }
  if ((param_1 <= this->RendTime) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AbsoluteTime > RendTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x169,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = this->RendTick;
  uVar7 = 0;
  bVar4 = pFVar6 == (FTick *)0x0;
  if (bVar4) {
    pFVar6 = this->OldestAvailableTick;
    this->RendTick = pFVar6;
  }
  else {
    uVar7 = pFVar6->Index;
  }
  dVar1 = this->RendTime;
  this->RendTime = param_1;
  if (param_1 <= pFVar6->Time) {
LAB_143123d51:
    ApplyChanges(this,pFVar6,param_1,uVar7,dVar1,&pFVar6->ModifiedInstances);
  }
  else {
    if (dVar1 == pFVar6->Time) {
      pFVar2 = pFVar6->NextTick;
      if (pFVar2 == (FTick *)0x0) {
        this->RendTime = dVar1;
        return;
      }
      if (!bVar4) {
        this->RendTick = pFVar2;
        pFVar6 = pFVar2;
      }
      if (param_1 < pFVar6->Time || param_1 == pFVar6->Time) goto LAB_143123d51;
    }
    local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50.MaxBits = 0;
    local_50.NumBits = 0;
    uVar5 = (pFVar6->ModifiedInstances).NumBits + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar5) {
      local_50.MaxBits = 0x80;
      if (0x80 < (int)uVar5) {
        local_50.MaxBits = uVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    local_50.NumBits = (pFVar6->ModifiedInstances).NumBits;
    if (local_50.NumBits != 0) {
      _Src = (pFVar6->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (_Src == (ForElementType<unsigned_int>)0x0) {
        _Src = (ForElementType<unsigned_int>)&pFVar6->ModifiedInstances;
      }
      _Dst = (ForElementType<unsigned_int>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_50.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
    }
    pFVar6 = this->RendTick;
    dVar8 = this->RendTime;
    if (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time) {
      do {
        pFVar2 = pFVar6->NextTick;
        if (pFVar2 == (FTick *)0x0) {
          dVar8 = pFVar6->Time;
          this->RendTime = dVar8;
          break;
        }
        this->RendTick = pFVar2;
        UE::Core::Private::
        BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  (&pFVar2->ModifiedInstances,&local_50,MaxSize,local_58);
        pFVar6 = this->RendTick;
        dVar8 = this->RendTime;
      } while (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time);
    }
    ApplyChanges(this,pFVar6,dVar8,uVar7,dVar1,&local_50);
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Render_PostUpdate @ 143123ec0

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_PostUpdate
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  int *piVar1;
  TArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->DeferredDestroys;
  iVar4 = (this->DeferredDestroys).ArrayNum;
  piVar1 = &(this->DeferredDestroys).ArrayNum;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar3) break;
    lVar5 = *(longlong *)pFVar10;
    if (*(char *)(lVar5 + 0xb0) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x70))(this,lVar5,lVar5 + 0x10,lVar5 + 0xc0);
    if (*(char *)(lVar5 + 0xb0) != '\0') {
      plVar6 = *(longlong **)(lVar5 + 0x90);
      if ((plVar6 != (longlong *)0x0) && (*(int *)(lVar5 + 0x98) == 0)) {
        (**(code **)(*plVar6 + 8))(plVar6,*(undefined4 *)(lVar5 + 0x9c));
      }
      if (*(void **)(lVar5 + 0x80) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar5 + 0x80));
      }
      *(undefined1 *)(lVar5 + 0xb0) = 0;
    }
    pFVar10 = pFVar10 + 8;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar4,&pTVar2->AllocatorInstance,piVar1,
                       &(this->DeferredDestroys).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8,0,(longlong)-iVar4 << 3);
    return;
  }
  if (0 < iVar4) {
    *piVar1 = *piVar1 - iVar4;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->DeferredDestroys).ArrayMax);
  }
  return;
}

// Render_Exit @ 143124050

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_Exit
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  if (this->NewestAvailableTick != (FTick *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143124065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,__real_7fefffffffffffff);
    return;
  }
  return;
}

// Render_GarbageCollect @ 143124070

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_GarbageCollect
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  ulonglong uVar1;
  int iVar2;
  FTick *pFVar3;
  FTick *pFVar4;
  ForElementType<unsigned_int> FVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FInstance *pFVar13;
  FTransformDynamicState *pFVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ForElementType<unsigned_int> FVar19;
  uint uVar20;
  FTick *local_68;
  
  pFVar3 = this->OldestAvailableTick;
  if (pFVar3 != (FTick *)0x0) {
    local_68 = this->RendTick;
    if (((local_68 != (FTick *)0x0) && (this->RendTime != local_68->Time)) &&
       (local_68->PrevTick != (FTick *)0x0)) {
      local_68 = local_68->PrevTick;
    }
    while (pFVar3 != local_68) {
      pFVar4 = pFVar3->NextTick;
      if ((pFVar4 == (FTick *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                             ,0x1cf,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar2 = (pFVar4->ModifiedInstances).NumBits;
      iVar16 = 0;
      iVar18 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar19 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar19 = FVar5;
        }
        uVar10 = *(uint *)FVar19;
        while (uVar10 == 0) {
          lVar15 = (longlong)iVar16;
          iVar18 = iVar18 + 0x20;
          iVar16 = iVar16 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_143124359;
          uVar10 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar15 * 4);
        }
        uVar10 = -uVar10 & uVar10;
        uVar1 = (ulonglong)uVar10 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar17 = (int)lVar15 + -1 + iVar18;
        if ((int)uVar17 < iVar2) {
          uVar20 = 0xffffffff;
          do {
            if (((uVar17 < (uint)(pFVar3->DynamicStates).ArrayNum) &&
                (pFVar13 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                           ::GetElementAt(&(this->Instances).Array,uVar17),
                pFVar13->DeleteTick != pFVar3->Index)) && (pFVar13->CreateTick != pFVar4->Index)) {
              uVar11 = 0;
              if ((int)uVar17 < (pFVar3->DynamicStates).ArrayNum) {
                uVar11 = ~uVar17 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar11 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar17 * 4);
              uVar12 = 0;
              if ((int)uVar17 < (pFVar4->DynamicStates).ArrayNum) {
                uVar12 = ~uVar17 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (uVar11 != *(uint *)((pFVar4->DynamicStates).AllocatorInstance.Data +
                                     (longlong)(int)uVar17 * 4)) {
                TStateStreamStore<FTransformDynamicState>::Remove(&this->DynamicStates,uVar11);
              }
            }
            FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar4->ModifiedInstances).NumBits;
            uVar20 = ~uVar10 & uVar20;
            FVar19 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar19 = FVar5;
            }
            uVar10 = uVar20 & *(uint *)((longlong)FVar19 + (longlong)iVar16 * 4);
            while (uVar10 == 0) {
              lVar15 = (longlong)iVar16;
              iVar18 = iVar18 + 0x20;
              iVar16 = iVar16 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16)
              goto LAB_143124359;
              uVar20 = 0xffffffff;
              uVar10 = *(uint *)((longlong)FVar19 + 4 + lVar15 * 4);
            }
            uVar10 = -uVar10 & uVar10;
            uVar1 = (ulonglong)uVar10 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar17 = (int)lVar15 + -1 + iVar18;
          } while (((int)uVar17 <= iVar2) && ((int)uVar17 < iVar2));
        }
      }
LAB_143124359:
      iVar2 = (pFVar3->ModifiedInstances).NumBits;
      iVar16 = 0;
      iVar18 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar19 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar19 = FVar5;
        }
        uVar10 = *(uint *)FVar19;
        while (uVar10 == 0) {
          lVar15 = (longlong)iVar16;
          iVar18 = iVar18 + 0x20;
          iVar16 = iVar16 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_143124645;
          uVar10 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar15 * 4);
        }
        uVar10 = -uVar10 & uVar10;
        uVar1 = (ulonglong)uVar10 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar17 = (int)lVar15 + -1 + iVar18;
        if ((int)uVar17 < iVar2) {
          uVar20 = 0xffffffff;
          do {
            pFVar13 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                      ::GetElementAt(&(this->Instances).Array,uVar17);
            if (pFVar13->DeleteTick == pFVar3->Index) {
              uVar11 = 0;
              if ((int)uVar17 < (pFVar3->DynamicStates).ArrayNum) {
                uVar11 = ~uVar17 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar11 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar17 * 4);
              pFVar14 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,uVar11);
              plVar6 = *(longlong **)&pFVar14->Parent;
              if ((plVar6 != (longlong *)0x0) && (*(int *)&(pFVar14->Parent).field_0x8 == 0)) {
                (**(code **)(*plVar6 + 8))(plVar6,*(undefined4 *)&(pFVar14->Parent).field_0xc);
              }
              pFVar7 = (pFVar14->BoneTransforms).AllocatorInstance.Data;
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar7);
              }
              AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              pFVar14->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
              (this->DynamicStates).FirstFreeIndex = uVar11;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              if ((pFVar13->RendDynamicState).bIsSet != false) {
                plVar6 = *(longlong **)&(pFVar13->RendDynamicState).TypedValue.Parent;
                if ((plVar6 != (longlong *)0x0) &&
                   (*(int *)&(pFVar13->RendDynamicState).TypedValue.Parent.field_0x8 == 0)) {
                  (**(code **)(*plVar6 + 8))
                            (plVar6,*(undefined4 *)
                                     &(pFVar13->RendDynamicState).TypedValue.Parent.field_0xc);
                }
                pFVar7 = (pFVar13->RendDynamicState).TypedValue.BoneTransforms.AllocatorInstance.
                         Data;
                if (pFVar7 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar7);
                }
                (pFVar13->RendDynamicState).bIsSet = false;
              }
              pFVar13 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                        ::GetElementAt(&(this->Instances).Array,uVar17);
              if ((pFVar13->RendDynamicState).bIsSet != false) {
                plVar6 = *(longlong **)&(pFVar13->RendDynamicState).TypedValue.Parent;
                if ((plVar6 != (longlong *)0x0) &&
                   (*(int *)&(pFVar13->RendDynamicState).TypedValue.Parent.field_0x8 == 0)) {
                  (**(code **)(*plVar6 + 8))
                            (plVar6,*(undefined4 *)
                                     &(pFVar13->RendDynamicState).TypedValue.Parent.field_0xc);
                }
                pFVar7 = (pFVar13->RendDynamicState).TypedValue.BoneTransforms.AllocatorInstance.
                         Data;
                if (pFVar7 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar7);
                }
              }
              AcquireSRWLockExclusive((PSRWLOCK)&this->Instances);
              (pFVar13->StaticState).ModifiedFlags = (this->Instances).FirstFreeIndex;
              (this->Instances).FirstFreeIndex = uVar17;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->Instances);
            }
            FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar3->ModifiedInstances).NumBits;
            uVar20 = ~uVar10 & uVar20;
            FVar19 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar19 = FVar5;
            }
            uVar10 = uVar20 & *(uint *)((longlong)FVar19 + (longlong)iVar16 * 4);
            while (uVar10 == 0) {
              lVar15 = (longlong)iVar16;
              iVar18 = iVar18 + 0x20;
              iVar16 = iVar16 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16)
              goto LAB_143124645;
              uVar20 = 0xffffffff;
              uVar10 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar15 * 4);
            }
            uVar10 = -uVar10 & uVar10;
            uVar1 = (ulonglong)uVar10 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar17 = (int)lVar15 + -1 + iVar18;
          } while (((int)uVar17 <= iVar2) && ((int)uVar17 < iVar2));
        }
      }
LAB_143124645:
      FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      pFVar7 = (pFVar3->DynamicStates).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      ::operator_delete(pFVar3,0x50);
      pFVar3 = pFVar4;
    }
    this->OldestAvailableTick = pFVar3;
  }
  return;
}

// GetDebugName @ 1431246e0

wchar_t * __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::GetDebugName
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  return L"Transform";
}

// DebugRender @ 1431246f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::DebugRender
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          IStateStreamDebugRenderer *param_1)

{
  uint *puVar1;
  FTick *pFVar2;
  code *pcVar3;
  int iVar4;
  FInstance *pFVar5;
  size_t sVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 auStack_8a8 [32];
  uint local_888;
  IStateStreamDebugRenderer *local_878;
  uint local_870;
  TStringBuilderBase<wchar_t> local_868;
  IStateStreamDebugRenderer local_848 [256];
  ulonglong local_48 [2];
  ulonglong uVar10;
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_868.Base = (wchar_t *)local_848;
  uVar10 = 0;
  local_868.CurPos = (wchar_t *)local_848;
  local_868.End = (wchar_t *)local_48;
  uVar11 = 0;
  pFVar2 = this->NewestAvailableTick;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  uVar9 = uVar11;
  if (pFVar2 != (FTick *)0x0) {
    FVar14 = (pFVar2->ModifiedInstances).AllocatorInstance.SecondaryData;
    uVar12 = (pFVar2->ModifiedInstances).NumBits;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)&pFVar2->ModifiedInstances;
    }
    iVar4 = uVar12 + 0x1f;
    iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
    uVar12 = uVar12 & 0x8000001f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
    }
    uVar8 = 0xffffffff >> ((byte)(0x20 - uVar12) & 0x1f);
    if (0x1f < (int)(0x20 - uVar12)) {
      uVar8 = 0xffffffff;
    }
    uVar12 = 0xffffffff;
    if (iVar4 == 1) {
      uVar12 = uVar8;
    }
    uVar7 = uVar10;
    if (0 < iVar4) {
      do {
        puVar1 = (uint *)((longlong)FVar14 + uVar7 * 4);
        if (uVar12 == 0xffffffff) {
          uVar12 = *puVar1;
        }
        else {
          uVar12 = *puVar1 & uVar12;
        }
        uVar13 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar12 - ((ulonglong)(uVar12 >> 1) & 0x5555555555555555);
        uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
        uVar9 = (int)uVar10 +
                (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
        ;
        uVar10 = (ulonglong)uVar9;
        uVar12 = 0xffffffff;
        if (uVar13 == iVar4 - 1U) {
          uVar12 = uVar8;
        }
        uVar7 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar4);
    }
  }
  uVar12 = (this->Instances).FirstFreeIndex;
  local_878 = param_1;
  while (uVar12 != 0xffffffff) {
    pFVar5 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
             ::GetElementAt(&(this->Instances).Array,uVar12);
    uVar12 = (pFVar5->StaticState).ModifiedFlags;
  }
  (**(code **)(this->_padding_ + 0x48))(this);
  local_888 = uVar9;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"%s   Num: %u  Changed: %u");
  pcVar3 = *(code **)*param_1;
  if (local_868.End < (undefined1 *)((longlong)local_868.CurPos + 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = 0;
  local_878 = (IStateStreamDebugRenderer *)local_868.Base;
  if ((IStateStreamDebugRenderer *)local_868.Base != (IStateStreamDebugRenderer *)0x0) {
    sVar6 = wcslen(local_868.Base);
    uVar11 = (uint)sVar6;
  }
  local_870 = uVar11;
  (*pcVar3)(param_1,&local_878);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return;
}

// Render_OnCreate @ 143124960

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_OnCreate
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTransformStaticState *param_1,FTransformDynamicState *param_2,FTransformObject **param_3,
          bool param_4)

{
  return;
}

// Render_OnUpdate @ 143124970

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_OnUpdate
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTransformStaticState *param_1,FTransformDynamicState *param_2,FTransformObject **param_3)

{
  return;
}

// Render_OnDestroy @ 143124980

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_OnDestroy
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTransformStaticState *param_1,FTransformDynamicState *param_2,FTransformObject **param_3)

{
  return;
}

// MakeInternal<FTransformDynamicState> @ 1431253f0

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::
MakeInternal<FTransformDynamicState>
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTransformDynamicState *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&param_1->Parent;
  if ((plVar1 != (longlong *)0x0) && (*(int *)&(param_1->Parent).field_0x8 == 0)) {
    (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)&(param_1->Parent).field_0xc);
    *(undefined4 *)&(param_1->Parent).field_0x8 = 1;
    return;
  }
  *(undefined4 *)&(param_1->Parent).field_0x8 = 1;
  return;
}

// MakeInternal<FTransformStaticState> @ 143125440

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::
MakeInternal<FTransformStaticState>
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTransformStaticState *param_1)

{
  return;
}

// ~TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> @ 143125940

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::
~TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  pFVar1 = (this->DeferredDestroys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TStateStreamStore<FTransformDynamicState>::~TStateStreamStore<FTransformDynamicState>
            (&this->DynamicStates);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  }
  TStateStreamStore<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance>
  ::
  ~TStateStreamStore<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance>
            (&this->Instances);
  this->_padding_ = (longlong)&___7IStateStream__6B_;
  return;
}

// ApplyChanges @ 1431268e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::ApplyChanges
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTick *param_1,double param_2,uint param_3,double param_4,
          TBitArray<FDefaultBitArrayAllocator> *param_5)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  TArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FScriptContainerElement FVar5;
  ForElementType<unsigned_int> FVar6;
  longlong *plVar7;
  FTick *pFVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FInstance *pFVar19;
  FTransformDynamicState *pFVar20;
  FTransformDynamicState *pFVar21;
  ulonglong uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  ulonglong uVar28;
  ForAnyElementType FVar29;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined1 local_f4 [4];
  uint local_f0;
  uint local_ec;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  uint local_b8;
  FInstance *local_b0;
  FInstance *local_a8;
  FInstance *local_a0;
  uint local_98;
  FStateStreamCopyContext local_94;
  uint local_90;
  uint local_8c;
  ulonglong local_88;
  FInstance *local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  int local_70;
  int local_6c;
  FStateStreamInterpolateContext local_68 [3];
  
  uVar22 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iVar18 = param_5->NumBits;
  local_f0 = 0;
  local_ec = 0;
  uVar28 = uVar22;
  if (iVar18 != 0) {
    FVar6 = (param_5->AllocatorInstance).SecondaryData;
    FVar27 = (ForElementType<unsigned_int>)param_5;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FVar27 = FVar6;
    }
    uVar23 = *(uint *)FVar27;
    uVar26 = uVar22;
    while (uVar28 = 0, uVar23 == 0) {
      local_ec = (int)uVar22 + 0x20;
      uVar22 = (ulonglong)local_ec;
      iVar25 = (int)uVar26;
      local_f0 = iVar25 + 1;
      uVar26 = (ulonglong)local_f0;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_f0)
      goto LAB_143127267;
      uVar23 = *(uint *)((uchar *)((longlong)FVar27 + 4) + (longlong)iVar25 * 4);
    }
    local_88 = (ulonglong)(-uVar23 & uVar23);
    uVar3 = local_88 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_70 = (int)lVar11;
    uVar23 = local_70 + -1 + (int)uVar22;
    if ((int)uVar23 < iVar18) {
      local_b8 = 0xffffffff;
      do {
        pFVar19 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
                  ::GetElementAt(&(this->Instances).Array,uVar23);
        local_90 = pFVar19->DeleteTick;
        if (param_3 < local_90) {
          uVar17 = pFVar19->CreateTick;
          if ((param_3 < uVar17) && (uVar17 <= param_1->Index)) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          local_8c = param_1->Index;
          bVar15 = local_90 <= local_8c;
          if (bVar16) {
            if (((pFVar19->RendDynamicState).bIsSet != false) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!Instance.RendDynamicState.IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                                    ,0x245,L""), bVar14)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar17 = 0;
            if ((int)uVar23 < (param_1->DynamicStates).ArrayNum) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar20 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
                                (&(this->DynamicStates).Array,
                                 *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                          (longlong)(int)uVar23 * 4));
            if ((pFVar19->RendDynamicState).bIsSet != false) {
              plVar7 = *(longlong **)&(pFVar19->RendDynamicState).TypedValue.Parent;
              if ((plVar7 != (longlong *)0x0) &&
                 (*(int *)&(pFVar19->RendDynamicState).TypedValue.Parent.field_0x8 == 0)) {
                (**(code **)(*plVar7 + 8))
                          (plVar7,*(undefined4 *)
                                   &(pFVar19->RendDynamicState).TypedValue.Parent.field_0xc);
              }
              pFVar24 = (pFVar19->RendDynamicState).TypedValue.BoneTransforms.AllocatorInstance.Data
              ;
              if (pFVar24 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar24);
              }
            }
            pTVar2 = &(pFVar19->RendDynamicState).TypedValue.BoneTransforms;
            (pFVar19->RendDynamicState).TypedValue.ModifiedFlags = pFVar20->ModifiedFlags;
            piVar1 = &(pFVar19->RendDynamicState).TypedValue.BoneTransforms.ArrayMax;
            dVar13 = (pFVar20->LocalTransform).Rotation.XY.m128d_f64[1];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Rotation.XY.m128d_f64[0] =
                 (pFVar20->LocalTransform).Rotation.XY.m128d_f64[0];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Rotation.XY.m128d_f64[1] = dVar13;
            dVar13 = (pFVar20->LocalTransform).Rotation.ZW.m128d_f64[1];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Rotation.ZW.m128d_f64[0] =
                 (pFVar20->LocalTransform).Rotation.ZW.m128d_f64[0];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Rotation.ZW.m128d_f64[1] = dVar13;
            dVar13 = (pFVar20->LocalTransform).Translation.XY.m128d_f64[1];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Translation.XY.m128d_f64[0] =
                 (pFVar20->LocalTransform).Translation.XY.m128d_f64[0];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Translation.XY.m128d_f64[1] =
                 dVar13;
            dVar13 = (pFVar20->LocalTransform).Translation.ZW.m128d_f64[1];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Translation.ZW.m128d_f64[0] =
                 (pFVar20->LocalTransform).Translation.ZW.m128d_f64[0];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Translation.ZW.m128d_f64[1] =
                 dVar13;
            dVar13 = (pFVar20->LocalTransform).Scale3D.XY.m128d_f64[1];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Scale3D.XY.m128d_f64[0] =
                 (pFVar20->LocalTransform).Scale3D.XY.m128d_f64[0];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Scale3D.XY.m128d_f64[1] = dVar13;
            dVar13 = (pFVar20->LocalTransform).Scale3D.ZW.m128d_f64[1];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Scale3D.ZW.m128d_f64[0] =
                 (pFVar20->LocalTransform).Scale3D.ZW.m128d_f64[0];
            (pFVar19->RendDynamicState).TypedValue.LocalTransform.Scale3D.ZW.m128d_f64[1] = dVar13;
            (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar18 = (pFVar20->BoneTransforms).ArrayNum;
            pFVar24 = (pFVar20->BoneTransforms).AllocatorInstance.Data;
            (pFVar19->RendDynamicState).TypedValue.BoneTransforms.ArrayNum = iVar18;
            if (iVar18 == 0) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,0x10,iVar18,0,&pTVar2->AllocatorInstance,iVar18,piVar1);
              memcpy((pTVar2->AllocatorInstance).Data,pFVar24,(longlong)iVar18 * 0x60);
            }
            *(undefined8 *)&(pFVar19->RendDynamicState).TypedValue.Parent =
                 *(undefined8 *)&pFVar20->Parent;
            *(undefined4 *)&(pFVar19->RendDynamicState).TypedValue.Parent.field_0x8 = 1;
            *(undefined4 *)&(pFVar19->RendDynamicState).TypedValue.Parent.field_0xc =
                 *(undefined4 *)&(pFVar20->Parent).field_0xc;
            (pFVar19->RendDynamicState).TypedValue.bVisible = pFVar20->bVisible;
            (pFVar19->RendDynamicState).bIsSet = true;
          }
          else if (uVar17 == local_8c) goto LAB_1431271c1;
          if (((pFVar19->RendDynamicState).bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((param_2 == param_1->Time) || (pFVar8 = param_1->PrevTick, pFVar8 == (FTick *)0x0)) {
            if (bVar16) goto LAB_143126ee9;
            local_94.IsInternal = 1;
            uVar17 = 0;
            if ((int)uVar23 < (param_1->DynamicStates).ArrayNum) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar20 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
                                (&(this->DynamicStates).Array,
                                 *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                          (longlong)(int)uVar23 * 4));
            FTransformDynamicState::Apply(&(pFVar19->RendDynamicState).TypedValue,&local_94,pFVar20)
            ;
          }
          else {
            uVar17 = 0;
            if ((int)uVar23 < (pFVar8->DynamicStates).ArrayNum) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_98 = *(uint *)((pFVar8->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar23 * 4);
            uVar17 = 0;
            if ((int)uVar23 < (param_1->DynamicStates).ArrayNum) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            dVar13 = (param_2 - pFVar8->Time) / (param_1->Time - pFVar8->Time);
            uVar23 = *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                              (longlong)(int)uVar23 * 4);
            pFVar20 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
                                (&(this->DynamicStates).Array,local_98);
            pFVar21 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
                                (&(this->DynamicStates).Array,uVar23);
            (pFVar19->RendDynamicState).TypedValue.ModifiedFlags = 0;
            local_68[0]._padding_._0_4_ = 1;
            local_68[0].Factor = dVar13;
            if ((pFVar21->ModifiedFlags & 1) != 0) {
              (pFVar19->RendDynamicState).TypedValue.ModifiedFlags = 1;
              UE::Math::TTransform<double>::Blend
                        (&(pFVar19->RendDynamicState).TypedValue.LocalTransform,
                         &pFVar20->LocalTransform,&pFVar21->LocalTransform,(float)dVar13);
            }
            if ((pFVar21->ModifiedFlags & 2) != 0) {
              (pFVar19->RendDynamicState).TypedValue.ModifiedFlags =
                   (pFVar19->RendDynamicState).TypedValue.ModifiedFlags | 2;
              StateStreamInterpolate
                        (local_68,&(pFVar19->RendDynamicState).TypedValue.BoneTransforms,
                         &pFVar20->BoneTransforms,&pFVar21->BoneTransforms);
            }
            if ((pFVar21->ModifiedFlags & 4) != 0) {
              (pFVar19->RendDynamicState).TypedValue.ModifiedFlags =
                   (pFVar19->RendDynamicState).TypedValue.ModifiedFlags | 4;
              if (*(int *)&(pFVar19->RendDynamicState).TypedValue.Parent.field_0x8 == 0) {
                if ((*(int *)&(pFVar21->Parent).field_0x8 != 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Other.IsInternal",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamHandle.cpp"
                                        ,0x5a,L""), bVar14)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                puVar9 = *(undefined8 **)&pFVar21->Parent;
                if (puVar9 != (undefined8 *)0x0) {
                  (**(code **)*puVar9)(puVar9,*(undefined4 *)&(pFVar21->Parent).field_0xc);
                }
                plVar7 = *(longlong **)&(pFVar19->RendDynamicState).TypedValue.Parent;
                if (plVar7 != (longlong *)0x0) {
                  (**(code **)(*plVar7 + 8))
                            (plVar7,*(undefined4 *)
                                     &(pFVar19->RendDynamicState).TypedValue.Parent.field_0xc);
                }
              }
              *(undefined8 *)&(pFVar19->RendDynamicState).TypedValue.Parent =
                   *(undefined8 *)&pFVar21->Parent;
              *(undefined4 *)&(pFVar19->RendDynamicState).TypedValue.Parent.field_0xc =
                   *(undefined4 *)&(pFVar21->Parent).field_0xc;
            }
            if ((pFVar21->ModifiedFlags & 8) != 0) {
              (pFVar19->RendDynamicState).TypedValue.ModifiedFlags =
                   (pFVar19->RendDynamicState).TypedValue.ModifiedFlags | 8;
              (pFVar19->RendDynamicState).TypedValue.bVisible = pFVar21->bVisible;
            }
            if (bVar16) {
LAB_143126ee9:
              local_80 = pFVar19;
              uStack_78 = bVar15;
              if (((local_c8.Data <= (FScriptContainerElement *)&local_80) &&
                  ((FScriptContainerElement *)&local_80 <
                   local_c8.Data + (longlong)local_c0._4_4_ * 0x10)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar18 = (int)local_c0;
              if ((int)local_c0 == local_c0._4_4_) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
              }
              local_c0 = CONCAT44(local_c0._4_4_,iVar18 + 1);
              *(FInstance **)(local_c8.Data + (longlong)iVar18 * 0x10) = local_80;
              *(ulonglong *)(local_c8.Data + (longlong)iVar18 * 0x10 + 8) =
                   CONCAT71(uStack_77,uStack_78);
            }
          }
          if (local_8c < local_90) {
            if (!bVar16) {
              local_a0 = pFVar19;
              if (((local_d8.Data <= (FScriptContainerElement *)&local_a0) &&
                  ((FScriptContainerElement *)&local_a0 <
                   local_d8.Data + (longlong)local_d0._4_4_ * 8)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar18 = (int)local_d0;
              if ((int)local_d0 == local_d0._4_4_) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
              }
              local_d0 = CONCAT44(local_d0._4_4_,iVar18 + 1);
              pFVar19 = local_a0;
              FVar29.Data = local_d8.Data;
              goto LAB_1431271b5;
            }
          }
          else if (bVar16) {
            pTVar4 = &this->DeferredDestroys;
            pFVar24 = (pTVar4->AllocatorInstance).Data;
            local_b0 = pFVar19;
            if (((pFVar24 <= (FScriptContainerElement *)&local_b0) &&
                ((FScriptContainerElement *)&local_b0 <
                 pFVar24 + (longlong)(this->DeferredDestroys).ArrayMax * 8)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar18 = (this->DeferredDestroys).ArrayNum;
            piVar1 = &(this->DeferredDestroys).ArrayMax;
            if (iVar18 == *piVar1) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar4->AllocatorInstance,piVar1);
            }
            (this->DeferredDestroys).ArrayNum = iVar18 + 1;
            *(FInstance **)((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_b0;
          }
          else {
            local_a8 = pFVar19;
            if (((local_e8.Data <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < local_e8.Data + (longlong)local_e0._4_4_ * 8
                )) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar16)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar18 = (int)local_e0;
            if ((int)local_e0 == local_e0._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_e8,(int *)((longlong)&local_e0 + 4));
            }
            local_e0 = CONCAT44(local_e0._4_4_,iVar18 + 1);
            pFVar19 = local_a8;
            FVar29.Data = local_e8.Data;
LAB_1431271b5:
            *(FInstance **)(FVar29.Data + (longlong)iVar18 * 8) = pFVar19;
          }
          uVar22 = (ulonglong)local_ec;
          uVar26 = (ulonglong)local_f0;
        }
LAB_1431271c1:
        local_b8 = ~(uint)local_88 & local_b8;
        FVar6 = (param_5->AllocatorInstance).SecondaryData;
        uVar17 = param_5->NumBits;
        FVar27 = (ForElementType<unsigned_int>)param_5;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar27 = FVar6;
        }
        uVar23 = local_b8 & *(uint *)((longlong)FVar27 + (longlong)(int)uVar26 * 4);
        while (uVar23 == 0) {
          local_ec = (int)uVar22 + 0x20;
          uVar22 = (ulonglong)local_ec;
          iVar18 = (int)uVar26;
          local_f0 = iVar18 + 1;
          uVar26 = (ulonglong)local_f0;
          uVar23 = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f0)
          goto LAB_143127248;
          uVar23 = *(uint *)((uchar *)((longlong)FVar27 + 4) + (longlong)iVar18 * 4);
          local_b8 = 0xffffffff;
        }
        local_88 = CONCAT44(local_88._4_4_,-uVar23 & uVar23);
        uVar28 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_6c = (int)lVar11;
        uVar23 = local_6c + -1 + (int)uVar22;
        if ((int)uVar17 < (int)uVar23) {
          uVar23 = uVar17;
        }
LAB_143127248:
      } while ((int)uVar23 < param_5->NumBits);
      uVar28 = local_c0 & 0xffffffff;
    }
  }
LAB_143127267:
  iVar18 = (int)uVar28;
  pFVar24 = local_c8.Data + (longlong)iVar18 * 0x10;
  FVar29.Data = local_c8.Data;
  while( true ) {
    if ((int)uVar28 != iVar18) {
      local_f6 = 0;
      `TCheckedPointerIterator<`TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::ApplyChanges'::__l2::FCreateInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_f6);
    }
    if (FVar29.Data == pFVar24) break;
    pFVar19 = *(FInstance **)FVar29.Data;
    FVar5 = FVar29.Data[8];
    if (((pFVar19->RendDynamicState).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (**(code **)(this->_padding_ + 0x60))
              (this,pFVar19,&pFVar19->RendDynamicState,&pFVar19->UserData,FVar5);
    uVar28 = local_c0 & 0xffffffff;
    FVar29.Data = FVar29.Data + 0x10;
  }
  iVar18 = (int)local_d0;
  uVar22 = (ulonglong)(int)local_d0;
  pFVar24 = local_d8.Data + uVar22 * 8;
  FVar29.Data = local_d8.Data;
  while( true ) {
    if ((int)uVar22 != iVar18) {
      local_f5 = 0;
      `TCheckedPointerIterator<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_f5);
    }
    if (FVar29.Data == pFVar24) break;
    pFVar19 = *(FInstance **)FVar29.Data;
    if (((pFVar19->RendDynamicState).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (**(code **)(this->_padding_ + 0x68))
              (this,pFVar19,&pFVar19->RendDynamicState,&pFVar19->UserData);
    uVar22 = local_d0 & 0xffffffff;
    FVar29.Data = FVar29.Data + 8;
  }
  iVar18 = (int)local_e0;
  uVar22 = (ulonglong)(int)local_e0;
  pFVar24 = local_e8.Data + uVar22 * 8;
  FVar29.Data = local_e8.Data;
  while( true ) {
    if ((int)uVar22 != iVar18) {
      local_f4[0] = 0;
      `TCheckedPointerIterator<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_f4);
    }
    if (FVar29.Data == pFVar24) break;
    pFVar19 = *(FInstance **)FVar29.Data;
    if (((pFVar19->RendDynamicState).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (**(code **)(this->_padding_ + 0x70))
              (this,pFVar19,&pFVar19->RendDynamicState,&pFVar19->UserData);
    if ((pFVar19->RendDynamicState).bIsSet != false) {
      plVar7 = *(longlong **)&(pFVar19->RendDynamicState).TypedValue.Parent;
      if ((plVar7 != (longlong *)0x0) &&
         (*(int *)&(pFVar19->RendDynamicState).TypedValue.Parent.field_0x8 == 0)) {
        (**(code **)(*plVar7 + 8))
                  (plVar7,*(undefined4 *)&(pFVar19->RendDynamicState).TypedValue.Parent.field_0xc);
      }
      pFVar10 = (pFVar19->RendDynamicState).TypedValue.BoneTransforms.AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pFVar19->RendDynamicState).bIsSet = false;
    }
    uVar22 = local_e0 & 0xffffffff;
    FVar29.Data = FVar29.Data + 8;
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// Edit @ 143127510

FTransformDynamicState * __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Edit
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          uint param_1,double param_2)

{
  FPlatformRWLock *SRWLock;
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  FTick *pFVar4;
  FTick *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FTransformDynamicState *pFVar11;
  ForElementType<unsigned_int> FVar12;
  FTransformDynamicState *pFVar13;
  uint uVar14;
  uint uVar15;
  uint local_res10 [2];
  
  if (param_1 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xe8,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FTransformDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  uVar14 = param_1 - 1;
  if (this->CurrentTick == (FTick *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FTransformDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  if ((uint)(this->CurrentTick->DynamicStates).ArrayNum <= uVar14) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceIndex < uint32(CurrentTick->DynamicStates.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xec,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FTransformDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  SRWLock = &this->CurrentTickLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar4 = this->CurrentTick;
  if (((int)uVar14 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar14)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FTransformDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  FVar12 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  pFVar5 = this->CurrentTick;
  uVar15 = 1 << ((byte)uVar14 & 0x1f);
  lVar2 = (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  iVar3 = (pFVar5->DynamicStates).ArrayNum;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  if ((*(uint *)((longlong)FVar12 + lVar2) & uVar15) != 0) {
    uVar15 = 0;
    if ((int)uVar14 < iVar3) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar11 = (FTransformDynamicState *)(*pcVar8)();
        return pFVar11;
      }
    }
    uVar14 = *(uint *)((pFVar5->DynamicStates).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    pFVar11 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
                        (&(this->DynamicStates).Array,uVar14);
    return pFVar11;
  }
  uVar10 = 0;
  if ((int)uVar14 < iVar3) {
    uVar10 = ~uVar14 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FTransformDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  pFVar6 = (pFVar5->DynamicStates).AllocatorInstance.Data;
  pFVar4 = this->CurrentTick;
  uVar10 = *(uint *)(pFVar6 + (longlong)(int)uVar14 * 4);
  if (((int)uVar14 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar14)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FTransformDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  FVar12 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  puVar1 = (uint *)((longlong)FVar12 + lVar2);
  *puVar1 = *puVar1 | uVar15;
  pFVar11 = TStateStreamStore<FTransformDynamicState>::AddUninitialized
                      (&this->DynamicStates,local_res10);
  *(uint *)(pFVar6 + (longlong)(int)uVar14 * 4) = local_res10[0];
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  pFVar13 = FPow2ChunkedArray<FTransformDynamicState,16,16777216>::operator[]
                      (&(this->DynamicStates).Array,uVar10);
  pFVar11 = FTransformDynamicState::FTransformDynamicState(pFVar11,pFVar13);
  plVar7 = *(longlong **)&pFVar13->Parent;
  if ((plVar7 != (longlong *)0x0) && (*(int *)&(pFVar13->Parent).field_0x8 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7,*(undefined4 *)&(pFVar13->Parent).field_0xc);
  }
  *(undefined4 *)&(pFVar13->Parent).field_0x8 = 1;
  return pFVar11;
}

// Render_GetDynamicState @ 143128180

FTransformDynamicState * __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_GetDynamicState
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTransformHandle *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTransformDynamicState *pFVar4;
  FInstance *pFVar5;
  
  iVar1 = *(int *)&param_1->field_0xc;
  if (iVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Id",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x221,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTransformDynamicState *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar5 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
           ::GetElementAt(&(this->Instances).Array,iVar1 - 1);
  if ((pFVar5->RendDynamicState).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTransformDynamicState *)(*pcVar2)();
      return pFVar4;
    }
  }
  return &(pFVar5->RendDynamicState).TypedValue;
}

// Render_GetUserData @ 1431282b0

FTransformObject ** __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::Render_GetUserData
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          FTransformHandle *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTransformObject **ppFVar4;
  FInstance *pFVar5;
  
  iVar1 = *(int *)&param_1->field_0xc;
  if (iVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Id",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x218,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      ppFVar4 = (FTransformObject **)(*pcVar2)();
      return ppFVar4;
    }
  }
  pFVar5 = FPow2ChunkedArray<TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::FInstance,16,16777216>
           ::GetElementAt(&(this->Instances).Array,iVar1 - 1);
  return &pFVar5->UserData;
}

