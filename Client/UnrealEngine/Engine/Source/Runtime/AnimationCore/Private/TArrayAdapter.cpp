// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 2

// Remove @ 142384a90

void __cdecl
UE::AnimationCore::FBoneWeights::
TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
::Remove(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
         *param_1,int param_2)

{
  void *_Dst;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar5;
  int iVar6;
  
  uVar4 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<UE::AnimationCore::FBoneWeight>)param_1;
  if (FVar1 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar5 = FVar1;
  }
  _Dst = (void *)((longlong)FVar5 + (longlong)param_2 * 4);
  iVar6 = param_1->ArrayNum + ~param_2;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
  }
  param_1->ArrayNum = param_1->ArrayNum + -1;
  Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
            (4,2,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
  return;
}

// SetNum @ 142385aa0

void __cdecl
UE::AnimationCore::FBoneWeights::
TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
::SetNum(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
         *param_1,int param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &param_1->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_2) {
    Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,param_2 - iVar5,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (param_2 < iVar5) {
    uVar6 = iVar5 - param_2;
    if (((int)(uVar6 | param_2) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar6 != 0) {
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        param_1 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar2;
      }
      _Dst = (void *)((longlong)param_1 + (longlong)param_2 * 4);
      iVar5 = (*piVar1 - uVar6) - param_2;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar6 * 4),(longlong)iVar5 << 2);
      }
      *piVar1 = *piVar1 - uVar6;
    }
  }
  return;
}

