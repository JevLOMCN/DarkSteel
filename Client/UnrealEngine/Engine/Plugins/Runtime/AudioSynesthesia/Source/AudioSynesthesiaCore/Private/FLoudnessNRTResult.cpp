// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 13

// FLoudnessNRTResult @ 14d7f73e0

FLoudnessNRTResult * __thiscall
Audio::FLoudnessNRTResult::FLoudnessNRTResult(FLoudnessNRTResult *this)

{
  this->_padding_ = (longlong)&___7FLoudnessNRTResult_Audio__6B_;
  *(undefined8 *)&this->ChannelLoudnessArrays = 0;
  *(undefined8 *)&(this->ChannelLoudnessArrays).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelLoudnessArrays).field_0x20 = 0;
  this->DurationInSeconds = 0.0;
  *(undefined4 *)&(this->ChannelLoudnessArrays).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelLoudnessArrays).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelLoudnessArrays).field_0x34 = 0;
  *(undefined4 *)&(this->ChannelLoudnessArrays).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChannelLoudnessArrays).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelLoudnessArrays).field_0x48 = 0;
  *(undefined8 *)&this->ChannelLoudnessIntervals = 0;
  *(undefined8 *)&(this->ChannelLoudnessIntervals).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelLoudnessIntervals).field_0x20 = 0;
  *(undefined4 *)&(this->ChannelLoudnessIntervals).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelLoudnessIntervals).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelLoudnessIntervals).field_0x34 = 0;
  *(undefined4 *)&(this->ChannelLoudnessIntervals).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChannelLoudnessIntervals).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelLoudnessIntervals).field_0x48 = 0;
  this->bIsSortedChronologically = false;
  return this;
}

// Add @ 14d7fb2f0

void __thiscall Audio::FLoudnessNRTResult::Add(FLoudnessNRTResult *this,FLoudnessDatum *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  FLoudnessDatum *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> *pTVar8;
  FFloatInterval *pFVar9;
  
  pTVar8 = TMapBase<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ChannelLoudnessArrays,param_1->Channel,&param_1->Channel);
  pFVar3 = (FLoudnessDatum *)(pTVar8->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + pTVar8->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = pTVar8->ArrayNum;
  if (iVar7 == pTVar8->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar7 + 1;
  uVar5 = *(undefined8 *)&param_1->Energy;
  pFVar1 = (pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar1 + 8) = uVar5;
  pFVar9 = TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                       *)&this->ChannelLoudnessIntervals,param_1->Channel,&param_1->Channel);
  fVar2 = param_1->Loudness;
  if (*(float *)pFVar9 <= *(float *)&pFVar9->field_0x4) {
    if (fVar2 < *(float *)pFVar9) {
      *(float *)pFVar9 = fVar2;
    }
    if (fVar2 <= *(float *)&pFVar9->field_0x4) goto LAB_14d7fb3e1;
  }
  else {
    *(float *)pFVar9 = fVar2;
  }
  *(float *)&pFVar9->field_0x4 = fVar2;
LAB_14d7fb3e1:
  this->bIsSortedChronologically = false;
  return;
}

// ContainsChannel @ 14d803320

bool __thiscall Audio::FLoudnessNRTResult::ContainsChannel(FLoudnessNRTResult *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->ChannelLoudnessArrays).field_0x8 !=
      *(int *)&(this->ChannelLoudnessArrays).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ChannelLoudnessArrays).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ChannelLoudnessArrays).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->ChannelLoudnessArrays).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ChannelLoudnessArrays) == param_1)
        goto LAB_14d80336c;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->ChannelLoudnessArrays);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14d80336c:
  return iVar1 != -1;
}

// GetChannelLoudnessArray @ 14d806a10

TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FLoudnessNRTResult::GetChannelLoudnessArray(FLoudnessNRTResult *this,int param_1)

{
  TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelLoudnessArrays,param_1);
  return pTVar1;
}

// GetChannelLoudnessRange @ 14d806a30

float __thiscall
Audio::FLoudnessNRTResult::GetChannelLoudnessRange
          (FLoudnessNRTResult *this,int param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_ff7fffff;
  fVar5 = __real_7f7fffff;
  if (*(int *)&(this->ChannelLoudnessIntervals).field_0x8 !=
      *(int *)&(this->ChannelLoudnessIntervals).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ChannelLoudnessIntervals).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ChannelLoudnessIntervals).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->ChannelLoudnessIntervals).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ChannelLoudnessIntervals + (longlong)iVar2 * 0x14;
        if (*(int *)(*(longlong *)&this->ChannelLoudnessIntervals + (longlong)iVar2 * 0x14) ==
            param_1) {
          if (lVar1 != 0) {
            fVar5 = *(float *)(lVar1 + 4);
            fVar4 = *(float *)(lVar1 + 8);
            if (((fVar5 <= fVar4) && (fVar5 <= param_2)) && (param_2 <= fVar4)) {
              return fVar4 - param_2;
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0xc);
      } while (iVar2 != -1);
    }
  }
  if (param_2 <= fVar4) {
    return fVar4 - fVar5;
  }
  return 0.0;
}

// GetChannels @ 14d806cc0

void __thiscall
Audio::FLoudnessNRTResult::GetChannels
          (FLoudnessNRTResult *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>_>
              *)&this->ChannelLoudnessArrays,param_1);
  return;
}

// GetDurationInSeconds @ 14d806d00

float __thiscall Audio::FLoudnessNRTResult::GetDurationInSeconds(FLoudnessNRTResult *this)

{
  return this->DurationInSeconds;
}

// GetLoudnessArray @ 14d8073f0

TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FLoudnessNRTResult::GetLoudnessArray(FLoudnessNRTResult *this)

{
  TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelLoudnessArrays,-1);
  return pTVar1;
}

// GetLoudnessRange @ 14d807430

float __thiscall Audio::FLoudnessNRTResult::GetLoudnessRange(FLoudnessNRTResult *this,float param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_ff7fffff;
  fVar5 = __real_7f7fffff;
  if (*(int *)&(this->ChannelLoudnessIntervals).field_0x8 !=
      *(int *)&(this->ChannelLoudnessIntervals).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ChannelLoudnessIntervals).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ChannelLoudnessIntervals).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->ChannelLoudnessIntervals).field_0x48 - 1)
                              * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ChannelLoudnessIntervals + (longlong)iVar2 * 0x14;
        if (*(int *)(*(longlong *)&this->ChannelLoudnessIntervals + (longlong)iVar2 * 0x14) == -1) {
          if (lVar1 != 0) {
            fVar5 = *(float *)(lVar1 + 4);
            fVar4 = *(float *)(lVar1 + 8);
            if (((fVar5 <= fVar4) && (fVar5 <= param_1)) && (param_1 <= fVar4)) {
              return fVar4 - param_1;
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0xc);
      } while (iVar2 != -1);
    }
  }
  if (param_1 <= fVar4) {
    return fVar4 - fVar5;
  }
  return 0.0;
}

// IsSortedChronologically @ 14d808020

bool __thiscall Audio::FLoudnessNRTResult::IsSortedChronologically(FLoudnessNRTResult *this)

{
  return this->bIsSortedChronologically;
}

// Serialize @ 14d80a310

void __thiscall Audio::FLoudnessNRTResult::Serialize(FLoudnessNRTResult *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAudioSynesthesiaCustomVersion::GUID);
  pfVar1 = &this->DurationInSeconds;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bIsSortedChronologically);
  TSetPrivateFriend::
  Serialize<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ChannelLoudnessArrays);
  TSetPrivateFriend::
  Serialize<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator>
                      *)&this->ChannelLoudnessIntervals);
  return;
}

// SetDurationInSeconds @ 14d80a530

void __thiscall
Audio::FLoudnessNRTResult::SetDurationInSeconds(FLoudnessNRTResult *this,float param_1)

{
  this->DurationInSeconds = param_1;
  return;
}

// SortChronologically @ 14d80aad0

void __thiscall Audio::FLoudnessNRTResult::SortChronologically(FLoudnessNRTResult *this)

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
  
  iVar3 = *(int *)&(this->ChannelLoudnessArrays).field_0x28;
  puVar1 = &(this->ChannelLoudnessArrays).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ChannelLoudnessArrays).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d80ab6d;
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
LAB_14d80ab6d:
  uVar10 = *(uint *)&(this->ChannelLoudnessArrays).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChannelLoudnessArrays).field_0x8 -
                       *(int *)&(this->ChannelLoudnessArrays).field_0x34);
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
  uVar6 = *(uint *)&(this->ChannelLoudnessArrays).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ChannelLoudnessArrays).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d80ac70;
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
LAB_14d80ac70:
  while( true ) {
    if (*(int *)&(this->ChannelLoudnessArrays).field_0x8 -
        *(int *)&(this->ChannelLoudnessArrays).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    AlgoImpl::
    IntroSortInternal<Audio::FLoudnessDatum,int,FIdentityFunctor,TDereferenceWrapper<Audio::FLoudnessDatum,_Audio::FLoudnessNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
              (*(FLoudnessDatum **)
                ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
                *(longlong *)&this->ChannelLoudnessArrays),
               *(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                       *(longlong *)&this->ChannelLoudnessArrays),local_res8[0],
               (<lambda_1> *)local_res10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->bIsSortedChronologically = true;
  return;
}

