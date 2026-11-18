// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 11

// FSimpleUpmixer @ 14f0b7830

FSimpleUpmixer * __thiscall
Audio::FSimpleUpmixer::FSimpleUpmixer
          (FSimpleUpmixer *this,
          TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<Audio::FBaseChannelFormatConverter::FChannelMixEntry_const_,int> *param_3,
          int param_4)

{
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FOutputFormat local_res8 [2];
  FInputFormat local_res10 [2];
  TArrayView<Audio::FBaseChannelFormatConverter::FChannelMixEntry_const_,int> local_48;
  
  local_res8[0].NumChannels = param_2->ArrayNum;
  local_48.DataPtr = param_3->DataPtr;
  local_48.ArrayNum = param_3->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_res10[0].NumChannels = param_1->ArrayNum;
  FBaseChannelFormatConverter::FBaseChannelFormatConverter
            ((FBaseChannelFormatConverter *)this,local_res10,local_res8,&local_48,param_4);
  pTVar1 = &this->InputChannelTypes;
  this->_padding_ = (longlong)&___7FSimpleUpmixer_Audio__6B_;
  piVar2 = &(this->InputChannelTypes).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->InputChannelTypes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &this->OutputChannelTypes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OutputChannelTypes).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->OutputChannelTypes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  (this->FrontChannelIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontChannelIndices).ArrayNum = 0;
  (this->FrontChannelIndices).ArrayMax = 0;
  (this->PairedRearChannelIndices).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PairedRearChannelIndices).Pairs.ArrayNum = 0;
  (this->PairedRearChannelIndices).Pairs.ArrayMax = 0;
  (this->PairedFlippedRearChannelIndices).Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PairedFlippedRearChannelIndices).Pairs.ArrayNum = 0;
  (this->PairedFlippedRearChannelIndices).Pairs.ArrayMax = 0;
  this->bDoRearChannelFlip = false;
  InitFrontChannelIndices(this,&this->FrontChannelIndices);
  pFVar6 = (this->FrontChannelIndices).AllocatorInstance.Data;
  iVar3 = (this->FrontChannelIndices).ArrayNum;
  pFVar4 = pFVar6 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->FrontChannelIndices).ArrayNum != iVar3) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar4) break;
    local_res8[0].NumChannels = *(int *)pFVar6;
    pTVar5 = TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
             ::Emplace<int_const_&>(&this->PairedRearChannelIndices,&local_res8[0].NumChannels);
    InitPairedRearChannelIndices(this,local_res8[0].NumChannels,false,pTVar5);
    pTVar5 = TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
             ::Emplace<int_const_&>
                       (&this->PairedFlippedRearChannelIndices,&local_res8[0].NumChannels);
    InitPairedRearChannelIndices(this,local_res8[0].NumChannels,true,pTVar5);
    pFVar6 = pFVar6 + 4;
  }
  return this;
}

// ~FSimpleUpmixer @ 14f0bf060

void __thiscall Audio::FSimpleUpmixer::~FSimpleUpmixer(FSimpleUpmixer *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             (this->PairedFlippedRearChannelIndices).Pairs.AllocatorInstance.Data,
             (this->PairedFlippedRearChannelIndices).Pairs.ArrayNum);
  pFVar1 = (this->PairedFlippedRearChannelIndices).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             (this->PairedRearChannelIndices).Pairs.AllocatorInstance.Data,
             (this->PairedRearChannelIndices).Pairs.ArrayNum);
  pFVar1 = (this->PairedRearChannelIndices).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontChannelIndices).AllocatorInstance.Data;
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
  }
  FBaseChannelFormatConverter::~FBaseChannelFormatConverter((FBaseChannelFormatConverter *)this);
  return;
}

// CreateSimpleUpmixer @ 14f0d3ac0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::FSimpleUpmixer,TDefaultDelete<Audio::FSimpleUpmixer>_> __cdecl
Audio::FSimpleUpmixer::CreateSimpleUpmixer
          (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FSimpleUpmixer *this;
  TUniquePtr<Audio::FSimpleUpmixer,TDefaultDelete<Audio::FSimpleUpmixer>_> TVar4;
  FSimpleUpmixer *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  undefined4 in_register_00000084;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar7;
  int in_R9D;
  TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_> local_48;
  FChannelMixEntry *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<Audio::FBaseChannelFormatConverter::FChannelMixEntry_const_,int> local_28;
  
  pTVar7 = (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)
           CONCAT44(in_register_00000084,param_3);
  if (param_2->ArrayNum < 1) {
    if ((byte)LogSynthesis._0_1_ < 2) goto LAB_14f0d3b3a;
    pFVar6 = &::LOG_Static;
  }
  else if (pTVar7->ArrayNum < 1) {
    if ((byte)LogSynthesis._0_1_ < 2) goto LAB_14f0d3b3a;
    pFVar6 = &::LOG_Static;
  }
  else {
    if (0 < in_R9D) {
      pFVar5 = (FSimpleUpmixer *)0x0;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      bVar3 = GetSimpleUpmixerStaticMixEntries(param_2,pTVar7,&local_48);
      if ((bVar3) && (this = ::operator_new(0x90), this != (FSimpleUpmixer *)0x0)) {
        iVar2 = local_48.ArrayNum;
        local_38 = (FChannelMixEntry *)local_48.AllocatorInstance.Data;
        if ((local_48.ArrayNum < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          TVar4.Ptr = (FSimpleUpmixer *)(*pcVar1)();
          return (TUniquePtr<Audio::FSimpleUpmixer,TDefaultDelete<Audio::FSimpleUpmixer>_>)TVar4.Ptr
          ;
        }
        iStack_30 = iVar2;
        local_28._12_4_ = uStack_2c;
        local_28.ArrayNum = iVar2;
        local_28.DataPtr = local_38;
        pFVar5 = FSimpleUpmixer(this,param_2,pTVar7,&local_28,in_R9D);
      }
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)pFVar5;
      if (local_48.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return (TUniquePtr<Audio::FSimpleUpmixer,TDefaultDelete<Audio::FSimpleUpmixer>_>)
               (FSimpleUpmixer *)param_1;
      }
      FMemory::Free(local_48.AllocatorInstance.Data);
      return (TUniquePtr<Audio::FSimpleUpmixer,TDefaultDelete<Audio::FSimpleUpmixer>_>)
             (FSimpleUpmixer *)param_1;
    }
    if ((byte)LogSynthesis._0_1_ < 2) goto LAB_14f0d3b3a;
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogSynthesis);
LAB_14f0d3b3a:
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  return (TUniquePtr<Audio::FSimpleUpmixer,TDefaultDelete<Audio::FSimpleUpmixer>_>)
         (FSimpleUpmixer *)param_1;
}

// GetPairedRearChannelIndices @ 14f0da5d0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FSimpleUpmixer::GetPairedRearChannelIndices(FSimpleUpmixer *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Audio::FSimpleUpmixer::GetPairedRearChannelIndices'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_00 = &this->PairedFlippedRearChannelIndices;
  if (this->bDoRearChannelFlip == false) {
    this_00 = &this->PairedRearChannelIndices;
  }
  pTVar1 = TSortedMap<int,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(this_00,param_1);
  pTVar2 = &::EmptyArray;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = pTVar1;
  }
  return pTVar2;
}

// GetRearChannelFlip @ 14f0dd9a0

bool __thiscall Audio::FSimpleUpmixer::GetRearChannelFlip(FSimpleUpmixer *this)

{
  return this->bDoRearChannelFlip;
}

// GetSimpleUpmixerStaticMixEntries @ 14f0de0b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Audio::FSimpleUpmixer::GetSimpleUpmixerStaticMixEntries
          (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FChannelMixEntry *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  ulonglong uVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  pFVar15 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar15 + (longlong)param_1->ArrayNum * 4;
  for (pFVar30 = pFVar15; pFVar17 = pFVar15, pFVar25 = pFVar15, pFVar33 = pFVar15, pFVar30 != pFVar1
      ; pFVar30 = pFVar30 + 4) {
    if (*(int *)pFVar30 == 9) {
      lVar31 = (longlong)pFVar30 - (longlong)pFVar15 >> 2;
      local_58 = lVar31;
      goto LAB_14f0de150;
    }
  }
  lVar31 = 0xffffffff;
  local_58 = 0xffffffff;
  for (; pFVar33 != pFVar1; pFVar33 = pFVar33 + 4) {
LAB_14f0de150:
    if (*(int *)pFVar33 == 10) {
      lVar34 = (longlong)pFVar33 - (longlong)pFVar15 >> 2;
      local_70 = lVar34;
      goto LAB_14f0de180;
    }
  }
  lVar34 = 0xffffffff;
  local_70 = 0xffffffff;
  for (; pFVar25 != pFVar1; pFVar25 = pFVar25 + 4) {
LAB_14f0de180:
    if (*(int *)pFVar25 == 4) {
      lVar26 = (longlong)pFVar25 - (longlong)pFVar15 >> 2;
      goto LAB_14f0de1a4;
    }
  }
  iVar24 = (int)lVar34;
  iVar12 = (int)lVar31;
  lVar26 = 0xffffffff;
  iVar11 = -1;
  for (; pFVar17 != pFVar1; pFVar17 = pFVar17 + 4) {
LAB_14f0de1a4:
    iVar24 = (int)lVar34;
    iVar12 = (int)lVar31;
    iVar11 = (int)lVar26;
    if (*(int *)pFVar17 == 5) {
      iVar16 = (int)((longlong)pFVar17 - (longlong)pFVar15 >> 2);
      goto LAB_14f0de1bb;
    }
  }
  iVar16 = -1;
LAB_14f0de1bb:
  pFVar30 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar30 + (longlong)param_2->ArrayNum * 4;
  for (pFVar33 = pFVar30; pFVar13 = pFVar30, pFVar20 = pFVar30, pFVar22 = pFVar30, pFVar25 = pFVar30
      , pFVar17 = pFVar30, pFVar33 != pFVar1; pFVar33 = pFVar33 + 4) {
    if (*(int *)pFVar33 == 0) {
      lVar31 = (longlong)pFVar33 - (longlong)pFVar30 >> 2;
      goto LAB_14f0de200;
    }
  }
  lVar31 = 0xffffffff;
  for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 4) {
LAB_14f0de200:
    if (*(int *)pFVar13 == 1) {
      lVar34 = (longlong)pFVar13 - (longlong)pFVar30 >> 2;
      goto LAB_14f0de225;
    }
  }
  lVar34 = 0xffffffff;
  for (; pFVar25 != pFVar1; pFVar25 = pFVar25 + 4) {
LAB_14f0de225:
    if (*(int *)pFVar25 == 9) {
      local_80 = (longlong)pFVar25 - (longlong)pFVar30 >> 2;
      goto LAB_14f0de250;
    }
  }
  local_80 = CONCAT44(local_80._4_4_,0xffffffff);
  for (; pFVar17 != pFVar1; pFVar17 = pFVar17 + 4) {
LAB_14f0de250:
    if (*(int *)pFVar17 == 10) {
      lVar26 = (longlong)pFVar17 - (longlong)pFVar30 >> 2;
      local_68 = lVar26;
      goto LAB_14f0de280;
    }
  }
  lVar26 = 0xffffffff;
  local_68 = 0xffffffff;
  for (; pFVar20 != pFVar1; pFVar20 = pFVar20 + 4) {
LAB_14f0de280:
    if (*(int *)pFVar20 == 4) {
      lVar21 = (longlong)pFVar20 - (longlong)pFVar30 >> 2;
      local_60 = lVar21;
      goto LAB_14f0de2a5;
    }
  }
  iVar27 = (int)lVar26;
  iVar9 = (int)lVar34;
  iVar18 = (int)lVar31;
  lVar21 = 0xffffffff;
  iVar19 = -1;
  local_60 = 0xffffffff;
  for (; pFVar22 != pFVar1; pFVar22 = pFVar22 + 4) {
LAB_14f0de2a5:
    iVar27 = (int)lVar26;
    iVar19 = (int)lVar21;
    iVar9 = (int)lVar34;
    iVar18 = (int)lVar31;
    if (*(int *)pFVar22 == 5) {
      local_78 = (longlong)pFVar22 - (longlong)pFVar30 >> 2;
      goto LAB_14f0de2bc;
    }
  }
  local_78 = 0xffffffff;
LAB_14f0de2bc:
  iVar23 = param_1->ArrayNum;
  if ((iVar23 == 1) && (*(int *)pFVar15 == 2)) {
    bVar3 = true;
    bVar7 = true;
    bVar6 = bVar7;
    if ((iVar18 == -1) && (iVar9 == -1)) goto LAB_14f0de3cc;
  }
  else {
    bVar3 = false;
LAB_14f0de3cc:
    bVar7 = false;
    bVar6 = bVar3;
  }
  if ((iVar12 == -1) && (iVar24 == -1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((iVar11 == -1) && (iVar16 == -1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((iVar19 == -1) && ((int)local_78 == -1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((!bVar3) || (bVar4)) || (bVar3 = true, !bVar5)) {
    bVar3 = false;
  }
  if (!bVar7) {
    if (0 < iVar23) {
      uVar28 = 0;
      uVar32 = uVar28;
      do {
        uVar29 = (uint)uVar32;
        uVar10 = 0;
        if ((int)uVar29 < iVar23) {
          uVar10 = ~uVar29 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (pFVar1 != pFVar1 + (longlong)param_2->ArrayNum * 4) {
          pFVar15 = pFVar1;
          do {
            if (*(int *)pFVar15 == *(int *)((param_1->AllocatorInstance).Data + uVar28 * 4)) {
              iVar24 = (int)((longlong)pFVar15 - (longlong)pFVar1 >> 2);
              if (iVar24 != -1) {
                iVar12 = param_3->ArrayNum;
                if (iVar12 == param_3->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
                }
                param_3->ArrayNum = iVar12 + 1;
                pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar12 * 0xc;
                DefaultConstructItems<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int>
                          (pFVar1,1);
                *(uint *)pFVar1 = uVar29;
                *(int *)(pFVar1 + 4) = iVar24;
                *(undefined4 *)(pFVar1 + 8) = 0x3f800000;
                goto LAB_14f0de65f;
              }
              break;
            }
            pFVar15 = pFVar15 + 4;
          } while (pFVar15 != pFVar1 + (longlong)param_2->ArrayNum * 4);
        }
        if (2 < (byte)LogSynthesis._0_1_) {
          uVar10 = 0;
          if ((int)uVar29 < param_1->ArrayNum) {
            uVar10 = ~uVar29 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          switch(*(undefined4 *)((param_1->AllocatorInstance).Data + uVar28 * 4)) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
            break;
          case 9:
            break;
          case 10:
            break;
          case 0xb:
            break;
          case 0xc:
            break;
          case 0xd:
            break;
          case 0xe:
            break;
          case 0xf:
            break;
          case 0x10:
            break;
          case 0x11:
            break;
          case 0x12:
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
        }
LAB_14f0de65f:
        iVar23 = param_1->ArrayNum;
        uVar32 = (ulonglong)(uVar29 + 1);
        uVar28 = uVar28 + 1;
      } while ((int)(uVar29 + 1) < iVar23);
      iVar24 = (int)local_70;
      iVar27 = (int)local_68;
      iVar19 = (int)local_60;
      iVar12 = (int)local_58;
    }
    lVar31 = local_78;
    if (!bVar3) {
      return true;
    }
    if ((iVar12 != -1) && (iVar19 != -1)) {
      iVar11 = param_3->ArrayNum;
      if (iVar11 == param_3->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar11 + 1;
      pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar11 * 0xc;
      DefaultConstructItems<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int>(pFVar1,1);
      *(int *)pFVar1 = iVar12;
      *(int *)(pFVar1 + 4) = iVar19;
      if ((int)local_80 == -1) {
        *(undefined4 *)(pFVar1 + 8) = 0x3f800000;
      }
      else {
        *(undefined4 *)(pFVar1 + 8) = 0x3f000000;
        iVar11 = param_3->ArrayNum;
        pFVar15 = (param_3->AllocatorInstance).Data;
        pFVar1 = pFVar15 + (longlong)iVar11 * 0xc;
        lVar34 = local_80;
        while( true ) {
          if (param_3->ArrayNum != iVar11) {
            `TCheckedPointerIterator<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res20);
            lVar34 = local_80;
          }
          if (pFVar15 == pFVar1) break;
          if ((*(int *)pFVar15 == iVar12) && (*(int *)(pFVar15 + 4) == (int)lVar34)) {
            *(int *)(pFVar15 + 8) = 0x3f000000;
          }
          pFVar15 = pFVar15 + 0xc;
        }
      }
    }
    if (iVar24 == -1) {
      return true;
    }
    if ((int)lVar31 == -1) {
      return true;
    }
    iVar12 = param_3->ArrayNum;
    if (iVar12 == param_3->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar12 + 1;
    pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar12 * 0xc;
    DefaultConstructItems<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int>(pFVar1,1);
    *(int *)pFVar1 = iVar24;
    *(int *)(pFVar1 + 4) = (int)lVar31;
    if (iVar27 != -1) {
      *(undefined4 *)(pFVar1 + 8) = 0x3f000000;
      iVar12 = param_3->ArrayNum;
      pFVar15 = (param_3->AllocatorInstance).Data;
      pFVar1 = pFVar15 + (longlong)iVar12 * 0xc;
      while( true ) {
        if (param_3->ArrayNum != iVar12) {
          `TCheckedPointerIterator<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_88);
        }
        if (pFVar15 == pFVar1) break;
        if ((*(int *)pFVar15 == iVar24) && (*(int *)(pFVar15 + 4) == iVar27)) {
          *(int *)(pFVar15 + 8) = 0x3f000000;
        }
        pFVar15 = pFVar15 + 0xc;
      }
      return true;
    }
    *(undefined4 *)(pFVar1 + 8) = 0x3f800000;
    return true;
  }
  if (((bVar6) && (iVar18 != -1)) && (iVar9 != -1)) {
    pFVar14 = TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_>
              ::AddDefaulted_GetRef(param_3);
    pFVar14->InputChannelIndex = 0;
    pFVar1 = (param_2->AllocatorInstance).Data;
    pFVar15 = pFVar1;
    do {
      if (pFVar15 == pFVar1 + (longlong)param_2->ArrayNum * 4) {
        iVar24 = -1;
LAB_14f0de852:
        pFVar14->OutputChannelIndex = iVar24;
        pFVar14->Gain = 0.707;
        pFVar14 = TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_>
                  ::AddDefaulted_GetRef(param_3);
        pFVar14->InputChannelIndex = 0;
        pFVar1 = (param_2->AllocatorInstance).Data;
        pFVar15 = pFVar1;
        while( true ) {
          if (pFVar15 == pFVar1 + (longlong)param_2->ArrayNum * 4) {
            pFVar14->Gain = 0.707;
            pFVar14->OutputChannelIndex = -1;
            return true;
          }
          if (*(int *)pFVar15 == 1) break;
          pFVar15 = pFVar15 + 4;
        }
        pFVar14->Gain = 0.707;
        pFVar14->OutputChannelIndex = (int)((longlong)pFVar15 - (longlong)pFVar1 >> 2);
        return true;
      }
      if (*(int *)pFVar15 == 0) {
        iVar24 = (int)((longlong)pFVar15 - (longlong)pFVar1 >> 2);
        goto LAB_14f0de852;
      }
      pFVar15 = pFVar15 + 4;
    } while( true );
  }
  pFVar14 = TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_>
            ::AddDefaulted_GetRef(param_3);
  pFVar14->InputChannelIndex = 0;
  pFVar14->Gain = 1.0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  pFVar15 = pFVar1;
  if (iVar18 == -1) {
    for (; pFVar15 != pFVar1 + (longlong)param_2->ArrayNum * 4; pFVar15 = pFVar15 + 4) {
      if (*(int *)pFVar15 == 1) goto LAB_14f0de940;
    }
  }
  else {
    for (; pFVar15 != pFVar1 + (longlong)param_2->ArrayNum * 4; pFVar15 = pFVar15 + 4) {
      if (*(int *)pFVar15 == 0) goto LAB_14f0de940;
    }
  }
  iVar24 = -1;
LAB_14f0de906:
  pFVar14->OutputChannelIndex = iVar24;
  return true;
LAB_14f0de940:
  iVar24 = (int)((longlong)pFVar15 - (longlong)pFVar1 >> 2);
  goto LAB_14f0de906;
}

// InitFrontChannelIndices @ 14f0e68e0

void __thiscall
Audio::FSimpleUpmixer::InitFrontChannelIndices
          (FSimpleUpmixer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint local_18 [4];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_18[0] = 0;
  if (0 < (this->InputChannelTypes).ArrayNum) {
    do {
      uVar2 = local_18[0];
      uVar6 = 0;
      if ((int)local_18[0] < (this->InputChannelTypes).ArrayNum) {
        uVar6 = ~local_18[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(uint *)((this->InputChannelTypes).AllocatorInstance.Data + (longlong)(int)uVar2 * 4)
      ;
      if (SubmixChannelFormatConverterPrivate::FrontChannels.Elements._8_4_ !=
          SubmixChannelFormatConverterPrivate::FrontChannels.Elements._52_4_) {
        FVar8 = (ForElementType<FSetElementId>)0x1553b3408;
        if (SubmixChannelFormatConverterPrivate::FrontChannels.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar8 = SubmixChannelFormatConverterPrivate::FrontChannels.Hash.SecondaryData;
        }
        for (iVar7 = *(int *)((longlong)FVar8 +
                             (ulonglong)
                             (SubmixChannelFormatConverterPrivate::FrontChannels.HashSize - 1U &
                             uVar2) * 4); iVar7 != -1;
            iVar7 = *(int *)(SubmixChannelFormatConverterPrivate::FrontChannels.Elements._0_8_ + 4 +
                            (longlong)iVar7 * 0xc)) {
          if (*(uint *)(SubmixChannelFormatConverterPrivate::FrontChannels.Elements._0_8_ +
                       (longlong)iVar7 * 0xc) == uVar2) {
            pFVar3 = (param_1->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
                ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = param_1->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_1->AllocatorInstance,piVar1);
            }
            param_1->ArrayNum = iVar7 + 1;
            *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
            break;
          }
        }
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < (this->InputChannelTypes).ArrayNum);
  }
  return;
}

// InitPairedRearChannelIndices @ 14f0e6ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FSimpleUpmixer::InitPairedRearChannelIndices
          (FSimpleUpmixer *this,int param_1,bool param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  Type TVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 *puVar11;
  TMap<EAudioMixerChannel::Type,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  uint local_18 [4];
  
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  uVar10 = 0;
  if (param_1 < (this->InputChannelTypes).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &SubmixChannelFormatConverterPrivate::PairedRearChannelTypes;
  TVar2 = *(Type *)((this->InputChannelTypes).AllocatorInstance.Data + (longlong)param_1 * 4);
  if (param_2) {
    this_00 = &SubmixChannelFormatConverterPrivate::PairedFlippedRearChannelTypes;
  }
  if (*(int *)&this_00->field_0x8 != *(int *)&this_00->field_0x34) {
    puVar11 = *(undefined1 **)&this_00->field_0x40;
    if (*(undefined1 **)&this_00->field_0x40 == (undefined1 *)0x0) {
      puVar11 = &this_00->field_0x38;
    }
    iVar7 = *(int *)(puVar11 + (ulonglong)(*(int *)&this_00->field_0x48 - FrontRight & TVar2) * 4);
    if (iVar7 != -1) {
      do {
        if (*(Type *)((longlong)iVar7 * 0x20 + *(longlong *)this_00) == TVar2) {
          pTVar8 = TMapBase<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(this_00,TVar2);
          local_18[0] = 0;
          if ((this->OutputChannelTypes).ArrayNum < 1) {
            return;
          }
          do {
            uVar10 = local_18[0];
            uVar6 = 0;
            if ((int)local_18[0] < (this->OutputChannelTypes).ArrayNum) {
              uVar6 = ~local_18[0] >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar9 = (pTVar8->AllocatorInstance).Data;
            pFVar3 = pFVar9 + (longlong)pTVar8->ArrayNum * 4;
            if (pFVar9 != pFVar3) {
              do {
                if (*(int *)pFVar9 ==
                    *(int *)((this->OutputChannelTypes).AllocatorInstance.Data +
                            (longlong)(int)uVar10 * 4)) {
                  pFVar3 = (param_3->AllocatorInstance).Data;
                  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
                      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 4)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar7 = param_3->ArrayNum;
                  if (iVar7 == *piVar1) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&param_3->AllocatorInstance,piVar1);
                  }
                  param_3->ArrayNum = iVar7 + 1;
                  *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
                  break;
                }
                pFVar9 = pFVar9 + 4;
              } while (pFVar9 != pFVar3);
            }
            local_18[0] = local_18[0] + 1;
            if ((this->OutputChannelTypes).ArrayNum <= (int)local_18[0]) {
              return;
            }
          } while( true );
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)this_00);
      } while (iVar7 != -1);
    }
  }
  return;
}

// SetRearChannelBleed @ 14f100480

void __thiscall
Audio::FSimpleUpmixer::SetRearChannelBleed(FSimpleUpmixer *this,float param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (this->FrontChannelIndices).AllocatorInstance.Data;
  uVar3 = (this->FrontChannelIndices).ArrayNum;
  uVar7 = (ulonglong)(int)uVar3;
  pFVar1 = pFVar9 + uVar7 * 4;
  while( true ) {
    if ((this->FrontChannelIndices).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    iVar4 = *(int *)pFVar9;
    pTVar6 = GetPairedRearChannelIndices(this,iVar4);
    pFVar8 = (pTVar6->AllocatorInstance).Data;
    iVar5 = pTVar6->ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar5 * 4;
    while( true ) {
      if (pTVar6->ArrayNum != iVar5) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar2) break;
      FBaseChannelFormatConverter::SetMixGain
                ((FBaseChannelFormatConverter *)this,iVar4,*(int *)pFVar8,param_1,param_2);
      pFVar8 = pFVar8 + 4;
    }
    uVar7 = (ulonglong)uVar3;
    pFVar9 = pFVar9 + 4;
  }
  UpdateOutputGain(this,param_2);
  return;
}

// SetRearChannelFlip @ 14f100590

void __thiscall
Audio::FSimpleUpmixer::SetRearChannelFlip(FSimpleUpmixer *this,bool param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 local_res20 [8];
  undefined1 local_98 [4];
  float local_94;
  uint local_90;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  TArray<int,TSizedDefaultAllocator<32>_> *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TArray<float,TSizedDefaultAllocator<32>_> local_68 [2];
  
  if (this->bDoRearChannelFlip != param_1) {
    pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)
              (this->FrontChannelIndices).AllocatorInstance.Data;
    local_90 = (this->FrontChannelIndices).ArrayNum;
    uVar11 = (ulonglong)(int)local_90;
    local_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((longlong)&(pTVar10->AllocatorInstance).Data + uVar11 * 4);
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    while( true ) {
      pTVar4 = local_80;
      local_88 = pTVar10;
      if ((this->FrontChannelIndices).ArrayNum != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pTVar10 == pTVar4) break;
      iVar8 = *(int *)&(pTVar10->AllocatorInstance).Data;
      pTVar10 = GetPairedRearChannelIndices(this,iVar8);
      local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68[0].ArrayNum = 0;
      local_68[0].ArrayMax = 0;
      pFVar13 = (pTVar10->AllocatorInstance).Data;
      iVar1 = pTVar10->ArrayNum;
      pFVar14 = pFVar13 + (longlong)iVar1 * 4;
      while( true ) {
        if (pTVar10->ArrayNum != iVar1) {
          local_98[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_98);
        }
        if (pFVar13 == pFVar14) break;
        iVar2 = *(int *)pFVar13;
        local_94 = FBaseChannelFormatConverter::GetTargetMixGain
                             ((FBaseChannelFormatConverter *)this,iVar8,iVar2);
        if (((local_68[0].AllocatorInstance.Data <= (FScriptContainerElement *)&local_94) &&
            ((FScriptContainerElement *)&local_94 <
             local_68[0].AllocatorInstance.Data + (longlong)local_68[0].ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_68[0].ArrayNum;
        if (local_68[0].ArrayNum == local_68[0].ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_68[0].AllocatorInstance,&local_68[0].ArrayMax);
        }
        local_68[0].ArrayNum = iVar7 + 1;
        *(float *)(local_68[0].AllocatorInstance.Data + (longlong)iVar7 * 4) = local_94;
        FBaseChannelFormatConverter::SetMixGain
                  ((FBaseChannelFormatConverter *)this,iVar8,iVar2,0.0,param_2);
        pFVar13 = pFVar13 + 4;
      }
      if (((local_78.Data <= local_68) &&
          (local_68 <
           (TArray<float,TSizedDefaultAllocator<32>_> *)
           (local_78.Data + (longlong)local_70._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (int)local_70;
      if ((int)local_70 == local_70._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_78,(int *)((longlong)&local_70 + 4));
      }
      FVar5.Data = local_68[0].AllocatorInstance.Data;
      pFVar14 = local_78.Data + (longlong)iVar8 * 0x10;
      local_70 = CONCAT44(local_70._4_4_,iVar8 + 1);
      *(FScriptContainerElement **)&pFVar14->field_0x0 = (FScriptContainerElement *)0x0;
      lVar16 = (longlong)local_68[0].ArrayNum;
      *(int *)(pFVar14 + 8) = local_68[0].ArrayNum;
      if (local_68[0].ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_68[0].ArrayNum,0,(ForAnyElementType *)pFVar14,local_68[0].ArrayNum,
                   (int *)(pFVar14 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar14->field_0x0,FVar5.Data,lVar16 << 2);
      }
      if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)local_90;
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((longlong)&(local_88->AllocatorInstance).Data + 4);
    }
    uVar15 = 0;
    this->bDoRearChannelFlip = param_1;
    if (0 < (int)local_70) {
      lVar16 = 0;
      local_88 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      do {
        pTVar10 = local_88;
        uVar12 = 0;
        if ((int)uVar15 < (this->FrontChannelIndices).ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_90 = *(uint *)((this->FrontChannelIndices).AllocatorInstance.Data +
                            (longlong)&(pTVar10->AllocatorInstance).Data);
        local_80 = GetPairedRearChannelIndices(this,local_90);
        uVar12 = 0;
        iVar8 = local_80->ArrayNum;
        if (0 < iVar8) {
          lVar17 = 0;
          do {
            pTVar10 = local_80;
            uVar9 = 0;
            if ((int)uVar12 < iVar8) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = *(int *)((pTVar10->AllocatorInstance).Data + lVar17);
            uVar9 = 0;
            if ((int)uVar15 < (int)local_70) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar5.Data = local_78.Data;
            uVar9 = 0;
            if ((int)uVar12 < *(int *)(local_78.Data + lVar16 + 8)) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FBaseChannelFormatConverter::SetMixGain
                      ((FBaseChannelFormatConverter *)this,local_90,iVar8,
                       *(float *)(*(longlong *)(FVar5.Data + lVar16) + lVar17),param_2);
            uVar12 = uVar12 + 1;
            lVar17 = lVar17 + 4;
            iVar8 = local_80->ArrayNum;
          } while ((int)uVar12 < iVar8);
        }
        uVar15 = uVar15 + 1;
        local_88 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((longlong)&(local_88->AllocatorInstance).Data + 4);
        lVar16 = lVar16 + 0x10;
      } while ((int)uVar15 < (int)local_70);
    }
    UpdateOutputGain(this,param_2);
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)local_78.Data,(int)local_70);
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)local_78.Data !=
        (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  return;
}

// UpdateOutputGain @ 14f108e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FSimpleUpmixer::UpdateOutputGain(FSimpleUpmixer *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res8 [8];
  bool local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pFVar8 = (this->FrontChannelIndices).AllocatorInstance.Data;
  local_res18 = (this->FrontChannelIndices).ArrayNum;
  uVar6 = (ulonglong)(int)local_res18;
  iVar9 = 0;
  fVar11 = 0.0;
  local_res20 = pFVar8 + uVar6 * 4;
  local_res10 = param_1;
  while( true ) {
    pFVar1 = local_res20;
    if ((this->FrontChannelIndices).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    iVar2 = *(int *)pFVar8;
    pTVar5 = GetPairedRearChannelIndices(this,iVar2);
    pFVar7 = (pTVar5->AllocatorInstance).Data;
    iVar3 = pTVar5->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar3 * 4;
    while( true ) {
      if (pTVar5->ArrayNum != iVar3) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar1) break;
      fVar11 = FBaseChannelFormatConverter::GetTargetMixGain
                         ((FBaseChannelFormatConverter *)this,iVar2,*(int *)pFVar7);
      iVar9 = iVar9 + 1;
      fVar11 = (float)((uint)fVar11 & uVar4);
      pFVar7 = pFVar7 + 4;
    }
    uVar6 = (ulonglong)local_res18;
    pFVar8 = pFVar8 + 4;
  }
  fVar10 = __real_3f800000;
  if (iVar9 != 0) {
    if (this->bDoRearChannelFlip == false) {
      fVar11 = fVar11 * __real_3eb4fdf4 + __real_3f800000;
      if (fVar11 <= __real_3f800000) {
        fVar11 = __real_3f800000;
      }
    }
    else {
      fVar11 = SQRT(fVar11 * __real_3f000000 * fVar11 * ___real_3e7fec36 + __real_3f800000);
    }
    fVar10 = __real_3f800000 / fVar11;
    if (__real_3f800000 <= __real_3f800000 / fVar11) {
      fVar10 = __real_3f800000;
    }
  }
  FBaseChannelFormatConverter::SetOutputGain((FBaseChannelFormatConverter *)this,fVar10,local_res10)
  ;
  return;
}

