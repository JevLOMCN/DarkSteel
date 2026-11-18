// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 15

// FLKFSNRTResult @ 14d7f6370

FLKFSNRTResult * __thiscall Audio::FLKFSNRTResult::FLKFSNRTResult(FLKFSNRTResult *this)

{
  (this->Data).bIsSortedChronologically = false;
  this->_padding_ = (longlong)&___7FLKFSNRTResult_Audio__6B_;
  (this->Data).DurationInSeconds = 0.0;
  *(undefined8 *)&(this->Data).ChannelData = 0;
  *(undefined8 *)&(this->Data).ChannelData.field_0x8 = 0;
  *(undefined8 *)&(this->Data).ChannelData.field_0x20 = 0;
  *(undefined4 *)&(this->Data).ChannelData.field_0x28 = 0;
  *(undefined4 *)&(this->Data).ChannelData.field_0x2c = 0x80;
  *(undefined4 *)&(this->Data).ChannelData.field_0x34 = 0;
  *(undefined4 *)&(this->Data).ChannelData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Data).ChannelData.field_0x40 = 0;
  *(undefined4 *)&(this->Data).ChannelData.field_0x48 = 0;
  return this;
}

// Add @ 14d7fb210

void __thiscall Audio::FLKFSNRTResult::Add(FLKFSNRTResult *this,FLKFSNRTResults *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FLKFSNRTResults *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FLKFSNRTChannelData *pFVar9;
  
  pFVar9 = TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
                       *)&(this->Data).ChannelData,param_1->Channel,&param_1->Channel);
  pFVar3 = (FLKFSNRTResults *)(pFVar9->LoudnessArray).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar9->LoudnessArray).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (pFVar9->LoudnessArray).ArrayNum;
  piVar1 = &(pFVar9->LoudnessArray).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&(pFVar9->LoudnessArray).AllocatorInstance,piVar1);
  }
  (pFVar9->LoudnessArray).ArrayNum = iVar8 + 1;
  uVar6 = *(undefined8 *)&param_1->Energy;
  pFVar4 = (pFVar9->LoudnessArray).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar8 * 0x14;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + 8) = uVar6;
  *(float *)(pFVar4 + (longlong)iVar8 * 0x14 + 0x10) = param_1->ShortTermLoudness;
  (this->Data).bIsSortedChronologically = false;
  return;
}

// AddChannel @ 14d7fb680

void __thiscall Audio::FLKFSNRTResult::AddChannel(FLKFSNRTResult *this,int param_1)

{
  TMap<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_res10 [6];
  
  this_00 = &(this->Data).ChannelData;
  if (*(int *)&(this->Data).ChannelData.field_0x8 != *(int *)&(this->Data).ChannelData.field_0x34) {
    puVar3 = *(undefined1 **)&(this->Data).ChannelData.field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Data).ChannelData.field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->Data).ChannelData.field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)this_00;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x30) == param_1) {
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
    }
  }
  local_res10[0] = param_1;
  TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
  ::Emplace<int_const_&>
            ((TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
              *)this_00,local_res10);
  return;
}

// ContainsChannel @ 14d8032b0

bool __thiscall Audio::FLKFSNRTResult::ContainsChannel(FLKFSNRTResult *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->Data).ChannelData.field_0x8 != *(int *)&(this->Data).ChannelData.field_0x34) {
    puVar3 = *(undefined1 **)&(this->Data).ChannelData.field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Data).ChannelData.field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->Data).ChannelData.field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Data).ChannelData;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x30) == param_1) goto LAB_14d80330f;
        iVar2 = *(int *)(lVar1 + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14d80330f:
  return iVar2 != -1;
}

// FindAggregateLoudnessStats @ 14d8062f0

FLKFSNRTAggregateStats * __thiscall
Audio::FLKFSNRTResult::FindAggregateLoudnessStats(FLKFSNRTResult *this,int param_1)

{
  int iVar1;
  FLKFSNRTAggregateStats *pFVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->Data).ChannelData.field_0x8 != *(int *)&(this->Data).ChannelData.field_0x34) {
    puVar4 = *(undefined1 **)&(this->Data).ChannelData.field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Data).ChannelData.field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->Data).ChannelData.field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Data).ChannelData);
        if (*piVar3 == param_1) {
          pFVar2 = (FLKFSNRTAggregateStats *)(piVar3 + 2);
          if (piVar3 == (int *)0x0) {
            pFVar2 = (FLKFSNRTAggregateStats *)0x0;
          }
          return pFVar2;
        }
        iVar1 = piVar3[10];
      } while (iVar1 != -1);
    }
  }
  return (FLKFSNRTAggregateStats *)0x0;
}

// GetChannelLoudnessArray @ 14d806940

TArrayView<FLKFSNRTResults_const_,int> * __thiscall
Audio::FLKFSNRTResult::GetChannelLoudnessArray
          (FLKFSNRTResult *this,TArrayView<FLKFSNRTResults_const_,int> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  TArrayView<FLKFSNRTResults_const_,int> *pTVar5;
  int *piVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->Data).ChannelData.field_0x8 != *(int *)&(this->Data).ChannelData.field_0x34) {
    puVar7 = *(undefined1 **)&(this->Data).ChannelData.field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Data).ChannelData.field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->Data).ChannelData.field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Data).ChannelData);
        if (*piVar4 == param_1) {
          piVar6 = piVar4 + 2;
          if (piVar4 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          if (piVar6 != (int *)0x0) {
            iVar3 = piVar6[4];
            __return_storage_ptr__->DataPtr = *(FLKFSNRTResults **)(piVar6 + 2);
            if (iVar3 < 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pTVar5 = (TArrayView<FLKFSNRTResults_const_,int> *)(*pcVar1)();
                return pTVar5;
              }
            }
            __return_storage_ptr__->ArrayNum = iVar3;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar3 = piVar4[10];
      } while (iVar3 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (FLKFSNRTResults *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetChannels @ 14d806cb0

void __thiscall
Audio::FLKFSNRTResult::GetChannels
          (FLKFSNRTResult *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
              *)&(this->Data).ChannelData,param_1);
  return;
}

// GetDurationInSeconds @ 14d806cf0

float __thiscall Audio::FLKFSNRTResult::GetDurationInSeconds(FLKFSNRTResult *this)

{
  return (this->Data).DurationInSeconds;
}

// GetLoudnessArray @ 14d807320

TArrayView<FLKFSNRTResults_const_,int> * __thiscall
Audio::FLKFSNRTResult::GetLoudnessArray
          (FLKFSNRTResult *this,TArrayView<FLKFSNRTResults_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  TArrayView<FLKFSNRTResults_const_,int> *pTVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->Data).ChannelData.field_0x8 != *(int *)&(this->Data).ChannelData.field_0x34) {
    puVar7 = *(undefined1 **)&(this->Data).ChannelData.field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Data).ChannelData.field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->Data).ChannelData.field_0x48 - 1) * 4);
    if (iVar5 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar5 * 0x30 + *(longlong *)&(this->Data).ChannelData);
        if (*piVar3 == -1) {
          piVar6 = piVar3 + 2;
          if (piVar3 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          if (piVar6 != (int *)0x0) {
            iVar5 = piVar6[4];
            __return_storage_ptr__->DataPtr = *(FLKFSNRTResults **)(piVar6 + 2);
            if (iVar5 < 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pTVar4 = (TArrayView<FLKFSNRTResults_const_,int> *)(*pcVar1)();
                return pTVar4;
              }
            }
            __return_storage_ptr__->ArrayNum = iVar5;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar5 = piVar3[10];
      } while (iVar5 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (FLKFSNRTResults *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMutableChannelLoudnessArray @ 14d807580

TArrayView<FLKFSNRTResults,int> * __thiscall
Audio::FLKFSNRTResult::GetMutableChannelLoudnessArray
          (FLKFSNRTResult *this,TArrayView<FLKFSNRTResults,int> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  TArrayView<FLKFSNRTResults,int> *pTVar5;
  int *piVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->Data).ChannelData.field_0x8 != *(int *)&(this->Data).ChannelData.field_0x34) {
    puVar7 = *(undefined1 **)&(this->Data).ChannelData.field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Data).ChannelData.field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->Data).ChannelData.field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Data).ChannelData);
        if (*piVar4 == param_1) {
          piVar6 = piVar4 + 2;
          if (piVar4 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          if (piVar6 != (int *)0x0) {
            iVar3 = piVar6[4];
            __return_storage_ptr__->DataPtr = *(FLKFSNRTResults **)(piVar6 + 2);
            if (iVar3 < 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pTVar5 = (TArrayView<FLKFSNRTResults,int> *)(*pcVar1)();
                return pTVar5;
              }
            }
            __return_storage_ptr__->ArrayNum = iVar3;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar3 = piVar4[10];
      } while (iVar3 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (FLKFSNRTResults *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// IsSortedChronologically @ 14d808010

bool __thiscall Audio::FLKFSNRTResult::IsSortedChronologically(FLKFSNRTResult *this)

{
  return (this->Data).bIsSortedChronologically;
}

// Serialize @ 14d80a2b0

void __thiscall Audio::FLKFSNRTResult::Serialize(FLKFSNRTResult *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesiaCore();
    Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLKFSNRTWaveData,(UObject *)pUVar1,
                         L"LKFSNRTWaveData");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.OuterSingleton,param_1,&this->Data,
             (void *)0x0);
  return;
}

// SetAggregateLoudnessStats @ 14d80a450

void __thiscall
Audio::FLKFSNRTResult::SetAggregateLoudnessStats
          (FLKFSNRTResult *this,int param_1,FLKFSNRTAggregateStats param_2)

{
  TMap<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
  *this_00;
  int iVar1;
  int *piVar2;
  FLKFSNRTChannelData *pFVar3;
  undefined1 *puVar4;
  int local_res10 [6];
  
  this_00 = &(this->Data).ChannelData;
  if (*(int *)&(this->Data).ChannelData.field_0x8 != *(int *)&(this->Data).ChannelData.field_0x34) {
    puVar4 = *(undefined1 **)&(this->Data).ChannelData.field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Data).ChannelData.field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->Data).ChannelData.field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)this_00);
        if (*piVar2 == param_1) {
          if (piVar2 != (int *)0x0) {
            *(FLKFSNRTAggregateStats *)(piVar2 + 2) = param_2;
            return;
          }
          break;
        }
        iVar1 = piVar2[10];
      } while (iVar1 != -1);
    }
  }
  local_res10[0] = param_1;
  pFVar3 = TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
           ::EmplaceByHash<int_const_&>
                     ((TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
                       *)this_00,param_1,local_res10);
  pFVar3->AggregateStats = param_2;
  return;
}

// SetDurationInSeconds @ 14d80a520

void __thiscall Audio::FLKFSNRTResult::SetDurationInSeconds(FLKFSNRTResult *this,float param_1)

{
  (this->Data).DurationInSeconds = param_1;
  return;
}

// SortChronologically @ 14d80a8a0

void __thiscall Audio::FLKFSNRTResult::SortChronologically(FLKFSNRTResult *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Data).ChannelData.field_0x28;
  puVar1 = &(this->Data).ChannelData.field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Data).ChannelData.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d80a93d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14d80a93d:
  uVar10 = *(uint *)&(this->Data).ChannelData.field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Data).ChannelData.field_0x8 -
                       *(int *)&(this->Data).ChannelData.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Data).ChannelData.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Data).ChannelData.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d80aa40;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14d80aa40:
  while( true ) {
    if (*(int *)&(this->Data).ChannelData.field_0x8 - *(int *)&(this->Data).ChannelData.field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)&(this->Data).ChannelData;
    AlgoImpl::
    IntroSortInternal<FLKFSNRTResults,int,FIdentityFunctor,TDereferenceWrapper<FLKFSNRTResults,_Audio::FLKFSNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
              (*(FLKFSNRTResults **)(lVar8 + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x30),
               *(int *)(lVar8 + 0x18 + (longlong)TStack_60.CurrentBitIndex * 0x30),local_res8[0],
               (<lambda_1> *)local_res10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  (this->Data).bIsSortedChronologically = true;
  return;
}

