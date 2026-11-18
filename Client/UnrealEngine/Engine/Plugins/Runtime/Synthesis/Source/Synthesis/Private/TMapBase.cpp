// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14f0ad430

void __thiscall
TMapBase<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (void *this,
          TArray<ESourceEffectMotionFilterModDestination,TSizedDefaultAllocator<32>_> *param_1)

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
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = TStack_40.Array;
    }
    uVar4 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14f0ad503;
      uVar4 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
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
LAB_14f0ad503:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)((longlong)this + 0x28)) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x50 + *(longlong *)this);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + *piVar1)) &&
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
                          (0x101,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      (param_1->AllocatorInstance).Data[iVar9] = *pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 14f0d71c0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar4;
  Type *pTVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    TVar3 = *(Type *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - FrontRight & param_1) *
                              4);
    if (TVar3 != ~DefaultChannel) {
      do {
        pTVar5 = (Type *)((longlong)(int)TVar3 * 0x20 + *(longlong *)this);
        if (*pTVar5 == param_1) {
          if (pTVar5 != (Type *)0x0) {
            return (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)(pTVar5 + 2);
          }
          break;
        }
        TVar3 = pTVar5[6];
      } while (TVar3 != ~DefaultChannel);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

