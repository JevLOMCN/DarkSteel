// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 8

// Emplace<enum_EAudioMixerChannel::Type,float_const_&> @ 1464d3d40

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall
TMapBase<enum_EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>_>
::Emplace<enum_EAudioMixerChannel::Type,float_const_&>(void *this,Type *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x10);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<EAudioMixerChannel::Type,float>_> *)0x0) {
    *(Type *)local_28.Pointer = *param_1;
    *(float *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<enum_EAudioMixerChannel::Type,float>,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,float,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (float *)(*(longlong *)this + 4 + lVar6 * 0x10);
}

// FindOrAddImpl<unsigned_int_const_&> @ 1464d4da0

FDynamicChildSubmix * __thiscall
TMapBase<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FDynamicChildSubmix *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FDynamicChildSubmix>,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FDynamicChildSubmix *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1464d4e50

FSoundInstanceConnections * __thiscall
TMapBase<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FSoundInstanceConnections *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FSoundInstanceConnections *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 1464d4f00

void __thiscall
TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
           *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1464d4fd3;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_1464d4fd3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 1464fe670

TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_> *)
                   (puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_> *)
           &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_> *)
           (*pcVar1)();
  return pTVar4;
}

// FindRef @ 1464fe930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<Audio::FMixerSubmix,1> * __thiscall
TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
::FindRef(TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
          *this,TSharedPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          if (puVar3 != (uint *)0x0) {
            __return_storage_ptr__->Object = *(FMixerSubmix **)(puVar3 + 2);
            pTVar1 = *(TReferenceControllerBase<1> **)(puVar3 + 4);
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        uVar2 = puVar3[6];
      } while (uVar2 != 0xffffffff);
    }
  }
  __return_storage_ptr__->Object = (FMixerSubmix *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindOrAddImpl<FSoundfieldEncodingKey_const_&> @ 146539500

FSoundfieldData * __thiscall
TMapBase<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
::FindOrAddImpl<FSoundfieldEncodingKey_const_&>
          (TMapBase<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>_>
           *this,uint param_1,FSoundfieldEncodingKey *param_2)

{
  FName *pFVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FSoundfieldEncodingKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar1 = (FName *)((longlong)(int)uVar2 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar1 == param_2->SoundfieldFormat) &&
           (pFVar1[1].ComparisonIndex.Value == param_2->EncodingSettingsID)) {
          if ((uVar2 != 0xffffffff) && (pFVar1 != (FName *)0x0)) {
            return (FSoundfieldData *)(pFVar1 + 2);
          }
          break;
        }
        uVar2 = pFVar1[7].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData>,TDefaultMapHashableKeyFuncs<FSoundfieldEncodingKey,Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FSoundfieldEncodingKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FSoundfieldEncodingKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FSoundfieldData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// FindChecked @ 146553c50

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
* __thiscall
TMapBase<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,0>_>
::FindChecked(TMapBase<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
  *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
                    *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
            *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
            *)(*pcVar3)();
  return pTVar6;
}

