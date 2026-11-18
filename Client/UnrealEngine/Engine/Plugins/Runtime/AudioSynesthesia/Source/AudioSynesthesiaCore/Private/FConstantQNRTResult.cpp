// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 11

// FConstantQNRTResult @ 14d7f5490

FConstantQNRTResult * __thiscall
Audio::FConstantQNRTResult::FConstantQNRTResult(FConstantQNRTResult *this)

{
  this->_padding_ = (longlong)&___7FConstantQNRTResult_Audio__6B_;
  *(undefined8 *)&this->ChannelCQTFrames = 0;
  *(undefined8 *)&(this->ChannelCQTFrames).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelCQTFrames).field_0x20 = 0;
  this->DurationInSeconds = 0.0;
  *(undefined4 *)&(this->ChannelCQTFrames).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelCQTFrames).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelCQTFrames).field_0x34 = 0;
  *(undefined4 *)&(this->ChannelCQTFrames).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChannelCQTFrames).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelCQTFrames).field_0x48 = 0;
  *(undefined8 *)&this->ChannelCQTIntervals = 0;
  *(undefined8 *)&(this->ChannelCQTIntervals).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelCQTIntervals).field_0x20 = 0;
  *(undefined4 *)&(this->ChannelCQTIntervals).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelCQTIntervals).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelCQTIntervals).field_0x34 = 0;
  *(undefined4 *)&(this->ChannelCQTIntervals).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChannelCQTIntervals).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelCQTIntervals).field_0x48 = 0;
  this->bIsSortedChronologically = false;
  return this;
}

// AddFrame @ 14d7fbe70

void __thiscall
Audio::FConstantQNRTResult::AddFrame
          (FConstantQNRTResult *this,int param_1,float param_2,TArrayView<float_const_,int> *param_3
          )

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar4;
  FFloatInterval *pFVar5;
  float *pfVar6;
  float fVar7;
  uint local_res10 [2];
  TArrayView<float_const_,int> local_28 [2];
  
  local_res10[0] = param_1;
  pTVar4 = TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ChannelCQTFrames,param_1,(int *)local_res10);
  iVar3 = pTVar4->ArrayNum;
  if (iVar3 == pTVar4->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  local_28[0].DataPtr = param_3->DataPtr;
  local_28[0].ArrayNum = param_3->ArrayNum;
  local_28[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
  pTVar4->ArrayNum = iVar3 + 1;
  FConstantQFrame::FConstantQFrame
            ((FConstantQFrame *)((pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x18),
             local_res10[0],param_2,local_28);
  pFVar5 = TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                       *)&this->ChannelCQTIntervals,local_res10[0],(int *)local_res10);
  pfVar6 = param_3->DataPtr;
  pfVar1 = pfVar6 + param_3->ArrayNum;
  if (pfVar6 != pfVar1) {
    fVar7 = *(float *)&pFVar5->field_0x4;
    do {
      fVar2 = *pfVar6;
      if (*(float *)pFVar5 <= fVar7) {
        if (fVar2 < *(float *)pFVar5) {
          *(float *)pFVar5 = fVar2;
        }
        if (fVar7 < fVar2) goto LAB_14d7fbf31;
      }
      else {
        *(float *)pFVar5 = fVar2;
LAB_14d7fbf31:
        *(float *)&pFVar5->field_0x4 = fVar2;
        fVar7 = fVar2;
      }
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != pfVar1);
  }
  this->bIsSortedChronologically = false;
  return;
}

// ContainsChannel @ 14d803250

bool __thiscall Audio::FConstantQNRTResult::ContainsChannel(FConstantQNRTResult *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->ChannelCQTFrames).field_0x8 != *(int *)&(this->ChannelCQTFrames).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ChannelCQTFrames).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ChannelCQTFrames).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->ChannelCQTFrames).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ChannelCQTFrames) == param_1)
        goto LAB_14d80329c;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->ChannelCQTFrames);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14d80329c:
  return iVar1 != -1;
}

// GetChannelConstantQInterval @ 14d806910

FFloatInterval __thiscall
Audio::FConstantQNRTResult::GetChannelConstantQInterval(FConstantQNRTResult *this,int param_1)

{
  FFloatInterval *pFVar1;
  undefined4 in_register_00000014;
  FFloatInterval FVar2;
  int in_R8D;
  
  FVar2._4_4_ = in_register_00000014;
  FVar2._0_4_ = param_1;
  pFVar1 = TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
           ::FindChecked((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                          *)&this->ChannelCQTIntervals,in_R8D);
  *(FFloatInterval *)FVar2 = *pFVar1;
  return FVar2;
}

// GetChannels @ 14d806ca0

void __thiscall
Audio::FConstantQNRTResult::GetChannels
          (FConstantQNRTResult *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
              *)&this->ChannelCQTFrames,param_1);
  return;
}

// GetDurationInSeconds @ 14d806ce0

float __thiscall Audio::FConstantQNRTResult::GetDurationInSeconds(FConstantQNRTResult *this)

{
  return this->DurationInSeconds;
}

// GetFramesForChannel @ 14d807300

TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FConstantQNRTResult::GetFramesForChannel(FConstantQNRTResult *this,int param_1)

{
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelCQTFrames,param_1);
  return pTVar1;
}

// IsSortedChronologically @ 14d808000

bool __thiscall Audio::FConstantQNRTResult::IsSortedChronologically(FConstantQNRTResult *this)

{
  return this->bIsSortedChronologically;
}

// Serialize @ 14d80a210

void __thiscall Audio::FConstantQNRTResult::Serialize(FConstantQNRTResult *this,FArchive *param_1)

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
  Serialize<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ChannelCQTFrames);
  TSetPrivateFriend::
  Serialize<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator>
                      *)&this->ChannelCQTIntervals);
  return;
}

// SetDurationInSeconds @ 14d80a510

void __thiscall
Audio::FConstantQNRTResult::SetDurationInSeconds(FConstantQNRTResult *this,float param_1)

{
  this->DurationInSeconds = param_1;
  return;
}

// SortChronologically @ 14d80a670

void __thiscall Audio::FConstantQNRTResult::SortChronologically(FConstantQNRTResult *this)

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
  
  iVar3 = *(int *)&(this->ChannelCQTFrames).field_0x28;
  puVar1 = &(this->ChannelCQTFrames).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ChannelCQTFrames).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d80a70d;
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
LAB_14d80a70d:
  uVar10 = *(uint *)&(this->ChannelCQTFrames).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChannelCQTFrames).field_0x8 -
                       *(int *)&(this->ChannelCQTFrames).field_0x34);
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
  uVar6 = *(uint *)&(this->ChannelCQTFrames).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ChannelCQTFrames).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d80a810;
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
LAB_14d80a810:
  while( true ) {
    if (*(int *)&(this->ChannelCQTFrames).field_0x8 - *(int *)&(this->ChannelCQTFrames).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    AlgoImpl::
    IntroSortInternal<Audio::FConstantQFrame,int,FIdentityFunctor,TDereferenceWrapper<Audio::FConstantQFrame,_Audio::FConstantQNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
              (*(FConstantQFrame **)
                ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
                *(longlong *)&this->ChannelCQTFrames),
               *(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                       *(longlong *)&this->ChannelCQTFrames),local_res8[0],(<lambda_1> *)local_res10
              );
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->bIsSortedChronologically = true;
  return;
}

