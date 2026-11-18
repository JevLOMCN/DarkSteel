// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 1

// SetBoneWeights<Internal::FAttributesRefAdapterConst,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_> @ 1443c3920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::
SetBoneWeights<Internal::FAttributesRefAdapterConst,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
          (TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
           *this,TBoneWeights<Internal::FAttributesRefAdapterConst> *param_1,
          FBoneWeightsSettings *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TArrayView<int_const_,int> *pTVar5;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStackY_128 [32];
  undefined4 local_d8 [4];
  ForElementType<UE::AnimationCore::FBoneWeight> local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<int_const_,int> local_b8;
  TArrayView<UE::AnimationCore::FBoneWeight,int> local_a8;
  TArrayView<int_const_,int> local_98;
  TArrayView<int_const_,int> local_88;
  ForElementType<UE::AnimationCore::FBoneWeight> local_78;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_3c = 0xc;
  uVar10 = 0;
  local_78.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_40 = 0;
  pTVar5 = TAttributeArrayContainer<int>::Get
                     (param_1->Container->Array,&local_98,param_1->Container->Index);
  uVar9 = pTVar5->ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (local_3c < (int)uVar9) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,uVar9,&local_78,local_40,&local_3c);
  }
  pTVar5 = TAttributeArrayContainer<int>::Get
                     (param_1->Container->Array,&local_b8,param_1->Container->Index);
  uVar11 = uVar10;
  if (0 < pTVar5->ArrayNum) {
    do {
      pTVar5 = TAttributeArrayContainer<int>::Get
                         (param_1->Container->Array,&local_88,param_1->Container->Index);
      uVar1 = *(undefined4 *)(uVar11 + (longlong)pTVar5->DataPtr);
      uVar8 = (ushort)uVar1;
      local_d8[0] = CONCAT22(uVar8,(short)((uint)uVar1 >> 0x10));
      if (param_2->WeightThreshold <= uVar8) {
        FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
        if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar6 = local_78.SecondaryData;
        }
        if ((ulonglong)FVar6 <= local_d8) {
          FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar6 = local_78.SecondaryData;
          }
          if ((local_d8 < (undefined4 *)((longlong)FVar6 + (longlong)local_3c * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (local_40 == local_3c) {
          local_40 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                               (0x204,&local_78,&local_3c);
        }
        lVar7 = (longlong)local_40;
        FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
        if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar6 = local_78.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(undefined4 *)((longlong)FVar6 + lVar7 * 4) = local_d8[0];
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      pTVar5 = TAttributeArrayContainer<int>::Get
                         (param_1->Container->Array,&local_b8,param_1->Container->Index);
      uVar11 = uVar11 + 4;
    } while ((int)uVar9 < pTVar5->ArrayNum);
  }
  iVar3 = local_40;
  local_c8 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    local_c8 = local_78.SecondaryData;
  }
  if ((local_40 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_c0 = iVar3;
  local_a8._12_4_ = uStack_bc;
  local_a8.ArrayNum = iVar3;
  local_a8.DataPtr = (FBoneWeight *)local_c8;
  SetBoneWeightsInternal(this,&local_a8,param_2);
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  return;
}

