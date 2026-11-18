// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 12

// FOnsetNRTResult @ 14d7f7f20

FOnsetNRTResult * __thiscall Audio::FOnsetNRTResult::FOnsetNRTResult(FOnsetNRTResult *this)

{
  this->_padding_ = (longlong)&___7FOnsetNRTResult_Audio__6B_;
  *(undefined8 *)&this->ChannelOnsets = 0;
  *(undefined8 *)&(this->ChannelOnsets).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelOnsets).field_0x20 = 0;
  this->DurationInSeconds = 0.0;
  *(undefined4 *)&(this->ChannelOnsets).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelOnsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelOnsets).field_0x34 = 0;
  *(undefined4 *)&(this->ChannelOnsets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChannelOnsets).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelOnsets).field_0x48 = 0;
  *(undefined8 *)&this->ChannelOnsetStrengthIntervals = 0;
  *(undefined8 *)&(this->ChannelOnsetStrengthIntervals).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelOnsetStrengthIntervals).field_0x20 = 0;
  *(undefined4 *)&(this->ChannelOnsetStrengthIntervals).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelOnsetStrengthIntervals).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelOnsetStrengthIntervals).field_0x34 = 0;
  *(undefined4 *)&(this->ChannelOnsetStrengthIntervals).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChannelOnsetStrengthIntervals).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelOnsetStrengthIntervals).field_0x48 = 0;
  this->bIsSortedChronologically = false;
  return this;
}

// AddChannel @ 14d7fb700

void __thiscall Audio::FOnsetNRTResult::AddChannel(FOnsetNRTResult *this,int param_1)

{
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
  ::FindOrAddImpl<int_const_&>
            ((TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
              *)&this->ChannelOnsets,param_1,(int *)local_res10);
  TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
  ::FindOrAddImpl<int_const_&>
            ((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
              *)&this->ChannelOnsetStrengthIntervals,local_res10[0],(int *)local_res10);
  return;
}

// AddOnset @ 14d7fc000

void __thiscall
Audio::FOnsetNRTResult::AddOnset(FOnsetNRTResult *this,int param_1,float param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<Audio::FOnset,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  FFloatInterval *pFVar5;
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  pTVar3 = TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ChannelOnsets,param_1,(int *)local_res10);
  iVar2 = pTVar3->ArrayNum;
  if (iVar2 == pTVar3->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  lVar4 = (longlong)iVar2;
  pTVar3->ArrayNum = iVar2 + 1;
  pFVar1 = (pTVar3->AllocatorInstance).Data;
  *(float *)(pFVar1 + lVar4 * 0xc + 4) = param_2;
  *(float *)(pFVar1 + lVar4 * 0xc + 8) = param_3;
  *(uint *)(pFVar1 + lVar4 * 0xc) = local_res10[0];
  pFVar5 = TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                       *)&this->ChannelOnsetStrengthIntervals,local_res10[0],(int *)local_res10);
  if (*(float *)pFVar5 <= *(float *)&pFVar5->field_0x4) {
    if (param_3 < *(float *)pFVar5) {
      *(float *)pFVar5 = param_3;
    }
    if (param_3 <= *(float *)&pFVar5->field_0x4) goto LAB_14d7fc0a6;
  }
  else {
    *(float *)pFVar5 = param_3;
  }
  *(float *)&pFVar5->field_0x4 = param_3;
LAB_14d7fc0a6:
  this->bIsSortedChronologically = false;
  return;
}

// ContainsChannel @ 14d803380

bool __thiscall Audio::FOnsetNRTResult::ContainsChannel(FOnsetNRTResult *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->ChannelOnsets).field_0x8 != *(int *)&(this->ChannelOnsets).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ChannelOnsets).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ChannelOnsets).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(*(int *)&(this->ChannelOnsets).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ChannelOnsets) == param_1)
        goto LAB_14d8033cc;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->ChannelOnsets);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14d8033cc:
  return iVar1 != -1;
}

// GetChannelOnsetInterval @ 14d806b80

FFloatInterval __thiscall
Audio::FOnsetNRTResult::GetChannelOnsetInterval(FOnsetNRTResult *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FFloatInterval FVar4;
  FFloatInterval *pFVar5;
  undefined4 in_register_00000014;
  uint in_R8D;
  undefined1 *puVar6;
  
  FVar4._4_4_ = in_register_00000014;
  FVar4._0_4_ = param_1;
  if (*(int *)&(this->ChannelOnsets).field_0x8 != *(int *)&(this->ChannelOnsets).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ChannelOnsets).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ChannelOnsets).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ChannelOnsets).field_0x48 - 1U & in_R8D) *
                              4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)((longlong)iVar3 * 0x20 + *(longlong *)&this->ChannelOnsets) == in_R8D)
        goto LAB_14d806bff;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->ChannelOnsets);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ChannelOnsets.Contains(InChannelIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetNRTFactory.cpp"
                     ,0x4a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FFloatInterval)(*pcVar1)();
    return FVar4;
  }
LAB_14d806bff:
  pFVar5 = TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
           ::FindChecked((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                          *)&this->ChannelOnsetStrengthIntervals,in_R8D);
  *(FFloatInterval *)FVar4 = *pFVar5;
  return FVar4;
}

// GetChannels @ 14d806cd0

void __thiscall
Audio::FOnsetNRTResult::GetChannels
          (FOnsetNRTResult *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
              *)&this->ChannelOnsets,param_1);
  return;
}

// GetDurationInSeconds @ 14d806d10

float __thiscall Audio::FOnsetNRTResult::GetDurationInSeconds(FOnsetNRTResult *this)

{
  return this->DurationInSeconds;
}

// GetOnsetsForChannel @ 14d8079d0

TArray<Audio::FOnset,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FOnsetNRTResult::GetOnsetsForChannel(FOnsetNRTResult *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Audio::FOnset,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->ChannelOnsets).field_0x8 != *(int *)&(this->ChannelOnsets).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ChannelOnsets).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ChannelOnsets).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ChannelOnsets).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->ChannelOnsets;
      do {
        if (*(int *)((longlong)iVar4 * 0x20 + lVar1) == param_1) goto LAB_14d807a4a;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ChannelOnsets.Contains(InChannelIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetNRTFactory.cpp"
                     ,0x43,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<Audio::FOnset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14d807a4a:
  pTVar5 = TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ChannelOnsets,param_1);
  return pTVar5;
}

// IsSortedChronologically @ 14d808030

bool __thiscall Audio::FOnsetNRTResult::IsSortedChronologically(FOnsetNRTResult *this)

{
  return this->bIsSortedChronologically;
}

// Serialize @ 14d80a3b0

void __thiscall Audio::FOnsetNRTResult::Serialize(FOnsetNRTResult *this,FArchive *param_1)

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
  Serialize<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ChannelOnsets);
  TSetPrivateFriend::
  Serialize<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,FFloatInterval>,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>,FDefaultSetAllocator>
                      *)&this->ChannelOnsetStrengthIntervals);
  return;
}

// SetDurationInSeconds @ 14d80a540

void __thiscall Audio::FOnsetNRTResult::SetDurationInSeconds(FOnsetNRTResult *this,float param_1)

{
  this->DurationInSeconds = param_1;
  return;
}

// SortChronologically @ 14d80ad00

void __thiscall Audio::FOnsetNRTResult::SortChronologically(FOnsetNRTResult *this)

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
  
  iVar3 = *(int *)&(this->ChannelOnsets).field_0x28;
  puVar1 = &(this->ChannelOnsets).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ChannelOnsets).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d80ad9d;
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
LAB_14d80ad9d:
  uVar10 = *(uint *)&(this->ChannelOnsets).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChannelOnsets).field_0x8 -
                       *(int *)&(this->ChannelOnsets).field_0x34);
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
  uVar6 = *(uint *)&(this->ChannelOnsets).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ChannelOnsets).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d80aea0;
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
LAB_14d80aea0:
  while( true ) {
    if (*(int *)&(this->ChannelOnsets).field_0x8 - *(int *)&(this->ChannelOnsets).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    AlgoImpl::
    IntroSortInternal<Audio::FOnset,int,FIdentityFunctor,TDereferenceWrapper<Audio::FOnset,_Audio::FOnsetNRTResult::SortChronologically_::__l6::<lambda_1>_>_>
              (*(FOnset **)
                ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->ChannelOnsets)
               ,*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                        *(longlong *)&this->ChannelOnsets),local_res8[0],(<lambda_1> *)local_res10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->bIsSortedChronologically = true;
  return;
}

