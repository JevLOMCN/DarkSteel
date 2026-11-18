// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 6

// FSimpleRouter @ 14f0b74c0

FSimpleRouter * __thiscall
Audio::FSimpleRouter::FSimpleRouter
          (FSimpleRouter *this,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FSimpleRouter *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined4 uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 uVar17;
  
  pTVar1 = &this->InputChannelTypes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->InputChannelTypes).ArrayMax;
  this->_padding_ = (longlong)&___7FSimpleRouter_Audio__6B_;
  this->InputFormat = 0;
  this->OutputFormat = 0;
  iVar9 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->InputChannelTypes).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,&pTVar1->AllocatorInstance,iVar9,piVar3);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar9 << 2);
  }
  pTVar2 = &this->OutputChannelTypes;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->OutputChannelTypes).ArrayMax;
  iVar9 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->OutputChannelTypes).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,&pTVar2->AllocatorInstance,iVar9,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar9 << 2);
  }
  (this->ChannelPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelPairs).ArrayNum = 0;
  (this->ChannelPairs).ArrayMax = 0;
  (this->InputFormat).NumChannels = (this->InputChannelTypes).ArrayNum;
  (this->OutputFormat).NumChannels = (this->OutputChannelTypes).ArrayNum;
  this->NumFramesPerCall = param_3;
  if ((param_3 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFramesPerCall > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixChannelFormatConverter.cpp"
                         ,0x110,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FSimpleRouter *)(*pcVar5)();
    return pFVar10;
  }
  uVar16 = 0;
  if (0 < (this->InputChannelTypes).ArrayNum) {
    lVar15 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar16 < (this->InputChannelTypes).ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FSimpleRouter *)(*pcVar5)();
        return pFVar10;
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      for (pFVar14 = pFVar4; pFVar14 != pFVar4 + (longlong)(this->OutputChannelTypes).ArrayNum * 4;
          pFVar14 = pFVar14 + 4) {
        if (*(int *)pFVar14 == *(int *)((pTVar1->AllocatorInstance).Data + lVar15)) {
          iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar4 >> 2);
          if (iVar9 != -1) {
            iVar8 = (this->ChannelPairs).ArrayNum;
            if (iVar8 == (this->ChannelPairs).ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&(this->ChannelPairs).AllocatorInstance,
                                 &(this->ChannelPairs).ArrayMax);
            }
            (this->ChannelPairs).ArrayNum = iVar8 + 1;
            pFVar4 = (this->ChannelPairs).AllocatorInstance.Data;
            *(uint *)(pFVar4 + (longlong)iVar8 * 8) = uVar16;
            *(int *)(pFVar4 + (longlong)iVar8 * 8 + 4) = iVar9;
          }
          break;
        }
      }
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 4;
    } while ((int)uVar16 < (this->InputChannelTypes).ArrayNum);
  }
  if ((param_1->ArrayNum == 1) && (*(int *)(param_1->AllocatorInstance).Data == 2)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  pFVar14 = (param_2->AllocatorInstance).Data;
  pFVar4 = pFVar14 + (longlong)param_2->ArrayNum * 4;
  for (pFVar12 = pFVar14; pFVar11 = pFVar14, pFVar12 != pFVar4; pFVar12 = pFVar12 + 4) {
    if (*(int *)pFVar12 == 2) {
      lVar15 = (longlong)pFVar12 - (longlong)pFVar14 >> 2;
      goto LAB_14f0b7725;
    }
  }
  lVar15 = 0xffffffff;
  iVar9 = -1;
  for (; pFVar11 != pFVar4; pFVar11 = pFVar11 + 4) {
LAB_14f0b7725:
    iVar9 = (int)lVar15;
    if (*(int *)pFVar11 == 0) {
      iVar8 = (int)((longlong)pFVar11 - (longlong)pFVar14 >> 2);
      goto LAB_14f0b773c;
    }
  }
  iVar8 = -1;
LAB_14f0b773c:
  if (((bVar6) && (iVar8 != -1)) && (pFVar12 = pFVar14, iVar9 == -1)) {
    for (; pFVar12 != pFVar4; pFVar12 = pFVar12 + 4) {
      if (*(int *)pFVar12 == 0) {
        uVar17 = (undefined4)((longlong)pFVar12 - (longlong)pFVar14 >> 2);
        goto LAB_14f0b7777;
      }
    }
    uVar17 = 0xffffffff;
LAB_14f0b7777:
    pFVar4 = (param_1->AllocatorInstance).Data;
    for (pFVar14 = pFVar4; pFVar14 != pFVar4 + (longlong)param_1->ArrayNum * 4;
        pFVar14 = pFVar14 + 4) {
      if (*(int *)pFVar14 == 2) {
        uVar13 = (undefined4)((longlong)pFVar14 - (longlong)pFVar4 >> 2);
        goto LAB_14f0b779d;
      }
    }
    uVar13 = 0xffffffff;
LAB_14f0b779d:
    iVar9 = (this->ChannelPairs).ArrayNum;
    if (iVar9 == (this->ChannelPairs).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->ChannelPairs).AllocatorInstance,
                         &(this->ChannelPairs).ArrayMax);
    }
    (this->ChannelPairs).ArrayNum = iVar9 + 1;
    pFVar4 = (this->ChannelPairs).AllocatorInstance.Data;
    *(undefined4 *)(pFVar4 + (longlong)iVar9 * 8) = uVar13;
    *(undefined4 *)(pFVar4 + (longlong)iVar9 * 8 + 4) = uVar17;
  }
  return this;
}

// ~FSimpleRouter @ 14f0bf010

void __thiscall Audio::FSimpleRouter::~FSimpleRouter(FSimpleRouter *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChannelPairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputChannelTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputChannelTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CreateSimpleRouter @ 14f0d31b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::FSimpleRouter,TDefaultDelete<Audio::FSimpleRouter>_> __cdecl
Audio::FSimpleRouter::CreateSimpleRouter
          (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  Type *pTVar1;
  uint *puVar2;
  longlong lVar3;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArrayView<EAudioMixerChannel::Type_const_,int> *pTVar9;
  ulonglong uVar10;
  FSimpleRouter *pFVar11;
  FSimpleRouter *pFVar12;
  byte bVar13;
  ForAnyElementType FVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 in_register_00000084;
  ulonglong uVar19;
  FSimpleRouter *pFVar20;
  int in_R9D;
  Type *pTVar21;
  undefined1 auStackY_1e8 [32];
  int local_1b8 [4];
  undefined1 local_1a8 [16];
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  int local_160;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *local_158;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *local_150;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_140;
  undefined1 local_120 [24];
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined4 local_88;
  int local_84;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_150 = (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)
              CONCAT44(in_register_00000084,param_3);
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_158 = param_2;
  if (in_R9D < 1) {
    if (1 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    return (TUniquePtr<Audio::FSimpleRouter,TDefaultDelete<Audio::FSimpleRouter>_>)
           (FSimpleRouter *)param_1;
  }
  local_160 = in_R9D;
  pTVar9 = TArrayView<enum_EAudioMixerChannel::Type_const_,int>::
           TArrayView<enum_EAudioMixerChannel::Type_const_,int><TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>
                     (local_120,param_2);
  pFVar12 = (FSimpleRouter *)0x0;
  pTVar21 = pTVar9->DataPtr;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (ForElementType<unsigned_int>)0x0;
  uVar16 = (uint)*(undefined8 *)&pTVar9->ArrayNum;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = -1;
  local_d4 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  TStack_180.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(TStack_180.Array._4_4_,TStack_180.Array._0_4_);
  if (uVar16 == 0) goto LAB_14f0d348f;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_108,uVar16);
  uVar17 = 1;
  if (3 < uVar16) {
    uVar19 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_c0 != 0) &&
     (TStack_180.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(TStack_180.Array._4_4_,TStack_180.Array._0_4_), (int)uVar17 <= (int)local_c0))
  goto LAB_14f0d348f;
  local_c0 = uVar17;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
  }
  if (uVar17 != 0) {
    uVar18 = uVar17;
    if (uVar17 < 2) {
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_14f0d32ee;
      }
    }
    else {
LAB_14f0d32ee:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar18,4);
    }
    if (0 < (int)uVar17) {
      uVar19 = (ulonglong)uVar17;
      pFVar11 = pFVar12;
      do {
        FVar14.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_c8.Data;
        }
        uVar10 = (ulonglong)pFVar11 & (longlong)(int)uVar17 - 1U;
        pFVar11 = (FSimpleRouter *)((longlong)&pFVar11->_padding_ + 1);
        *(undefined4 *)(FVar14.Data + uVar10 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  TStack_180.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(TStack_180.Array._4_4_,TStack_180.Array._0_4_);
  if (local_c0 != 0) {
    local_1a8._8_8_ = local_108 + 0x10;
    local_1a8._0_8_ = &DAT_100000000;
    uStack_194 = 0;
    uStack_190 = 0;
    pFVar11 = pFVar12;
    if (local_e0 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
      if (local_e8 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_e8;
      }
      uVar17 = *(uint *)FVar15;
      pFVar20 = pFVar12;
      while (uVar17 == 0) {
        uStack_190 = (int)pFVar20 + 0x20;
        pFVar20 = (FSimpleRouter *)(ulonglong)uStack_190;
        iVar7 = (int)pFVar11;
        uVar17 = iVar7 + 1;
        pFVar11 = (FSimpleRouter *)(ulonglong)uVar17;
        local_1a8._4_4_ = (undefined4)((ulonglong)local_1a8._0_8_ >> 0x20);
        local_1a8._0_4_ = uVar17;
        if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_14f0d33ef;
        uVar17 = ((uint *)((longlong)FVar15 + 4))[iVar7];
      }
      local_1a8._4_4_ = -uVar17 & uVar17;
      uVar19 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_194 = (uStack_190 - 1) + (int)lVar3;
      pFVar11 = (FSimpleRouter *)(ulonglong)uStack_194;
      if ((int)local_e0 < (int)uStack_194) {
LAB_14f0d33ef:
        pFVar11 = (FSimpleRouter *)(ulonglong)local_e0;
        uStack_194 = local_e0;
      }
    }
    local_198 = 0xffffffff;
    local_188 = (longlong *)local_108;
    TStack_180._28_4_ = uStack_18c;
    TStack_180.BaseBitIndex = uStack_190;
    TStack_180._padding_ = local_1a8._0_8_;
    TStack_180.UnvisitedBitMask = 0xffffffff;
    TStack_180.CurrentBitIndex = uStack_194;
    TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1a8._8_8_;
    if ((int)pFVar11 < (int)local_e0) {
      do {
        iVar7 = (int)pFVar11;
        uVar17 = local_c0 - 1 & *(uint *)(*local_188 + (longlong)iVar7 * 0xc);
        lVar3 = *local_188 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar3 + 8) = uVar17;
        FVar14.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_c8.Data;
        }
        uVar19 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar14.Data + uVar19 * 4);
        *(int *)(FVar14.Data + uVar19 * 4) = iVar7;
        TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
        pFVar11 = (FSimpleRouter *)(ulonglong)(uint)TStack_180.CurrentBitIndex;
      } while (TStack_180.CurrentBitIndex <
               ((TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)
               ((longlong)TStack_180.Array + 0x10))->ArrayNum);
    }
  }
LAB_14f0d348f:
  pTVar1 = pTVar21 + (int)uVar16;
  pTVar4 = local_158;
  pTVar5 = local_150;
  iVar7 = local_d8;
  do {
    local_158 = pTVar4;
    local_150 = pTVar5;
    local_d8 = iVar7;
    if (pTVar21 == pTVar1) {
      if (local_108._8_4_ - local_d4 == pTVar4->ArrayNum) {
        pTVar9 = TArrayView<enum_EAudioMixerChannel::Type_const_,int>::
                 TArrayView<enum_EAudioMixerChannel::Type_const_,int><TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>
                           (local_120,pTVar5);
        local_1a8._0_8_ = pTVar9->DataPtr;
        local_1a8._8_8_ = *(undefined8 *)&pTVar9->ArrayNum;
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = 0;
        local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_a8.NumBits = 0;
        local_a8.MaxBits = 0x80;
        local_88 = 0xffffffff;
        local_84 = 0;
        local_78 = (void *)0x0;
        local_70 = 0;
        TSet<enum_EAudioMixerChannel::Type,DefaultKeyFuncs<enum_EAudioMixerChannel::Type,0>,FDefaultSetAllocator>
        ::Append(&local_b8,(TArrayView<EAudioMixerChannel::Type_const_,int> *)local_1a8);
        if ((int)local_b0 - local_84 == pTVar5->ArrayNum) {
          pFVar11 = ::operator_new(0x48);
          if (pFVar11 != (FSimpleRouter *)0x0) {
            pFVar12 = FSimpleRouter(pFVar11,pTVar4,pTVar5,in_R9D);
          }
          (param_1->AllocatorInstance).Data = (FScriptContainerElement *)pFVar12;
        }
        else {
          if (1 < (byte)LogSynthesis._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
          }
          (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        }
        local_70 = 0;
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        uVar19 = local_b0 >> 0x20;
        local_b0 = local_b0 & 0xffffffff00000000;
        if ((int)uVar19 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&local_b8,0,(int *)((longlong)&local_b0 + 4));
        }
        local_a8.NumBits = 0;
        local_84 = 0;
        local_88 = 0xffffffff;
        if (0x80 < (uint)local_a8.MaxBits) {
          local_a8.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
        }
        if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
        }
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
        local_c0 = 0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        iVar7 = SUB84(local_108._8_8_,4);
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
        }
        local_e0 = 0;
        local_d4 = 0;
        local_d8 = -1;
        if (0x80 < local_dc) {
          local_dc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
        }
        if (local_e8 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_e8);
        }
      }
      else {
        if (1 < (byte)LogSynthesis._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
        }
        (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_c0 = 0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        iVar7 = SUB84(local_108._8_8_,4);
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
        }
        local_d8 = -1;
        local_d4 = 0;
        local_e0 = 0;
        if (0x80 < local_dc) {
          local_dc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
        }
        if (local_e8 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_e8);
        }
      }
      if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_108._0_8_);
      }
      return (TUniquePtr<Audio::FSimpleRouter,TDefaultDelete<Audio::FSimpleRouter>_>)
             (FSimpleRouter *)param_1;
    }
    if (local_d4 == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_108,(int *)(local_108 + 8),
                         (int *)(local_108 + 0xc));
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),1);
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
      if (local_e8 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_e8;
      }
      bVar13 = (byte)iVar8 & 0x1f;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
        bVar13 = bVar13 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar8 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar13 & 0x1f));
    }
    else {
      local_d4 = local_d4 + -1;
      local_d8 = *(int *)(local_108._0_8_ + (longlong)iVar7 * 0xc + 4);
      if (local_d4 != 0) {
        *(undefined4 *)(local_108._0_8_ + (longlong)local_d8 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_108,(FSparseArrayAllocationInfo *)local_1a8,iVar7);
    pFVar11 = pFVar12;
    if ((FSimpleRouter *)local_1a8._8_8_ != (FSimpleRouter *)0x0) {
      *(Type *)(longlong *)local_1a8._8_8_ = *pTVar21;
      *(undefined4 *)((longlong)(longlong *)local_1a8._8_8_ + 4) = 0xffffffff;
      pFVar11 = (FSimpleRouter *)local_1a8._8_8_;
    }
    uVar16 = (uint)pFVar11->_padding_;
    local_1b8[0] = local_1a8._0_4_;
    bVar6 = TSet<enum_EAudioMixerChannel::Type,DefaultKeyFuncs<enum_EAudioMixerChannel::Type,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      (local_108,uVar16,(TSparseSetElement<EAudioMixerChannel::Type> *)pFVar11,
                       local_1b8,(bool *)0x0);
    pFVar20 = (FSimpleRouter *)TStack_180.Array;
    if (!bVar6) {
      uVar18 = 1;
      uVar17 = local_108._8_4_ - local_d4;
      if (3 < uVar17) {
        uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((int)uVar17 < 1) || ((int)uVar18 <= (int)local_c0)) {
        uVar16 = local_c0 - 1 & uVar16;
        (pFVar11->InputFormat).NumChannels = uVar16;
        FVar14.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_c8.Data;
        }
        uVar19 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) =
             *(undefined4 *)(FVar14.Data + uVar19 * 4);
        *(int *)(FVar14.Data + uVar19 * 4) = local_1b8[0];
      }
      else {
        local_c0 = uVar18;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
        }
        if (uVar18 != 0) {
          uVar16 = uVar18;
          if (uVar18 < 2) {
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              uVar16 = 0;
              goto LAB_14f0d3619;
            }
          }
          else {
LAB_14f0d3619:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_c8,0,uVar16,4);
          }
          if (0 < (int)uVar18) {
            uVar19 = (ulonglong)uVar18;
            pFVar11 = pFVar12;
            do {
              FVar14.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_c8.Data;
              }
              uVar10 = (ulonglong)pFVar11 & (longlong)(int)uVar18 - 1U;
              pFVar11 = (FSimpleRouter *)((longlong)&pFVar11->_padding_ + 1);
              *(undefined4 *)(FVar14.Data + uVar10 * 4) = 0xffffffff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        pFVar20 = (FSimpleRouter *)TStack_180.Array;
        if (local_c0 != 0) {
          TStack_180._padding_ = (longlong)(local_108 + 0x10);
          local_188 = (longlong *)&DAT_100000000;
          TStack_180.Array._4_4_ = 0;
          TStack_180.UnvisitedBitMask = 0;
          pFVar11 = pFVar12;
          if (local_e0 != 0) {
            FVar15 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
            if (local_e8 != (ForElementType<unsigned_int>)0x0) {
              FVar15 = local_e8;
            }
            uVar16 = *(uint *)FVar15;
            pFVar20 = pFVar12;
            while (uVar16 == 0) {
              TStack_180.UnvisitedBitMask = (int)pFVar20 + 0x20;
              pFVar20 = (FSimpleRouter *)(ulonglong)TStack_180.UnvisitedBitMask;
              iVar7 = (int)pFVar11;
              uVar16 = iVar7 + 1;
              pFVar11 = (FSimpleRouter *)(ulonglong)uVar16;
              uVar19 = (ulonglong)local_188 >> 0x20;
              local_188 = (longlong *)CONCAT44((int)uVar19,uVar16);
              if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
              goto LAB_14f0d371f;
              uVar16 = ((uint *)((longlong)FVar15 + 4))[iVar7];
            }
            local_188 = (longlong *)CONCAT44(-uVar16 & uVar16,SUB84(local_188,0));
            uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            TStack_180.Array._4_4_ = (TStack_180.UnvisitedBitMask - 1) + (int)lVar3;
            pFVar11 = (FSimpleRouter *)(ulonglong)TStack_180.Array._4_4_;
            if ((int)local_e0 < (int)TStack_180.Array._4_4_) {
LAB_14f0d371f:
              pFVar11 = (FSimpleRouter *)(ulonglong)local_e0;
              TStack_180.Array._4_4_ = local_e0;
            }
          }
          TStack_180.Array._0_4_ = 0xffffffff;
          local_148 = (longlong *)local_108;
          local_140.CurrentBitIndex = TStack_180.Array._4_4_;
          local_140.UnvisitedBitMask = 0xffffffff;
          local_140._28_4_ = TStack_180.CurrentBitIndex;
          local_140.BaseBitIndex = TStack_180.UnvisitedBitMask;
          local_140._padding_ = (longlong)local_188;
          local_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)TStack_180._padding_;
          pFVar20 = (FSimpleRouter *)CONCAT44(TStack_180.Array._4_4_,0xffffffff);
          if ((int)pFVar11 < (int)local_e0) {
            do {
              iVar7 = (int)pFVar11;
              uVar16 = local_c0 - 1 & *(uint *)(*local_148 + (longlong)iVar7 * 0xc);
              lVar3 = *local_148 + (longlong)iVar7 * 0xc;
              *(uint *)(lVar3 + 8) = uVar16;
              FVar14.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_c8.Data;
              }
              uVar19 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar16;
              *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar14.Data + uVar19 * 4);
              *(int *)(FVar14.Data + uVar19 * 4) = iVar7;
              local_140.UnvisitedBitMask = local_140.UnvisitedBitMask & ~local_140._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_140);
              pFVar11 = (FSimpleRouter *)(ulonglong)(uint)local_140.CurrentBitIndex;
              pFVar20 = (FSimpleRouter *)CONCAT44(TStack_180.Array._4_4_,TStack_180.Array._0_4_);
            } while (local_140.CurrentBitIndex < (local_140.Array)->NumBits);
          }
        }
      }
    }
    pTVar21 = pTVar21 + 1;
    in_R9D = local_160;
    pTVar4 = local_158;
    pTVar5 = local_150;
    iVar7 = local_d8;
    TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFVar20;
  } while( true );
}

// GetInputFormat @ 14f0d95f0

FInputFormat * __thiscall Audio::FSimpleRouter::GetInputFormat(FSimpleRouter *this)

{
  return &this->InputFormat;
}

// GetOutputFormat @ 14f0da5a0

FOutputFormat * __thiscall Audio::FSimpleRouter::GetOutputFormat(FSimpleRouter *this)

{
  return &this->OutputFormat;
}

// ProcessAudio @ 14f0f1e90

void __thiscall
Audio::FSimpleRouter::ProcessAudio
          (FSimpleRouter *this,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *local_res10;
  
  local_res10 = param_1;
  if ((param_1->ArrayNum != (this->InputFormat).NumChannels) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInputBuffers.Num() == InputFormat.NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixChannelFormatConverter.cpp"
                         ,0xca,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  uVar9 = 0;
  iVar6 = (this->OutputFormat).NumChannels;
  if (iVar4 < iVar6) {
    do {
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar11 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar11 + (longlong)iVar4 * 0x10) = 0;
      *(undefined8 *)(pFVar11 + (longlong)iVar4 * 0x10 + 8) = 0;
      iVar4 = param_2->ArrayNum;
      iVar6 = (this->OutputFormat).NumChannels;
    } while (iVar4 < iVar6);
  }
  uVar12 = uVar9;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar9;
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (param_2->AllocatorInstance).Data + uVar12;
      iVar4 = *(int *)(pFVar11 + 0xc);
      *(undefined4 *)&pFVar11[8].field_0x0 = 0;
      if (iVar4 < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar11,0,(int *)(pFVar11 + 0xc));
      }
      uVar5 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (param_2->AllocatorInstance).Data + uVar12;
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,this->NumFramesPerCall,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 8),
                 (int *)(pFVar11 + 0xc));
      iVar4 = this->NumFramesPerCall;
      uVar5 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memset(*(void **)((param_2->AllocatorInstance).Data + uVar12),0,(longlong)iVar4 << 2);
      uVar9 = (ulonglong)(uVar8 + 1);
      param_1 = local_res10;
      uVar12 = uVar12 + 0x10;
    } while ((int)(uVar8 + 1) < (this->OutputFormat).NumChannels);
  }
  pFVar10 = (this->ChannelPairs).AllocatorInstance.Data;
  iVar4 = (this->ChannelPairs).ArrayNum;
  pFVar11 = pFVar10 + (longlong)iVar4 * 8;
  do {
    if ((this->ChannelPairs).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar11) {
      return;
    }
    iVar6 = *(int *)pFVar10;
    uVar5 = *(uint *)(pFVar10 + 4);
    if (iVar6 < param_1->ArrayNum) {
      iVar1 = this->NumFramesPerCall;
      if ((iVar6 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      _Src = *(void **)((local_res10->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
      uVar7 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memcpy(*(void **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10),_Src,
             (longlong)iVar1 << 2);
      param_1 = local_res10;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2019451682223554334>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixChannelFormatConverter.cpp"
                         ,0xe2,"InputIndex < InInputBuffers.Num()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

