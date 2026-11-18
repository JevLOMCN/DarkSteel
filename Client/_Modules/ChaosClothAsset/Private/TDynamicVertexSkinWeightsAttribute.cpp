// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 1

// GetValue<int,float> @ 14db30bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::GetValue<int,float>
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  undefined1 auStackY_e8 [32];
  ForElementType<UE::AnimationCore::FBoneWeight> local_a8;
  int local_70;
  int local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_70 = 0;
  local_6c = 0xc;
  FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)
          (*(longlong *)
            ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x40);
  if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_a8 != FVar7) {
    iVar2 = *(int *)((longlong)FVar7 + 0x38);
    _Src = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar7 + 0x30);
    if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar7 + 0x30) ==
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      _Src = FVar7;
    }
    local_70 = iVar2;
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,iVar2,0xc,&local_a8,iVar2,&local_6c);
    FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar7 = local_a8.SecondaryData;
    }
    if (iVar2 != 0) {
      memcpy((void *)FVar7,(void *)_Src,(longlong)iVar2 << 2);
    }
  }
  iVar2 = local_70;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_2,local_70,No);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar2,No);
  fVar4 = __real_37800080;
  uVar8 = 0;
  if (0 < iVar2) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < local_70) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar7 = local_a8.SecondaryData;
      }
      uVar1 = *(ushort *)((longlong)FVar7 + lVar9 * 4);
      uVar6 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((param_2->AllocatorInstance).Data + lVar9 * 4) = (uint)uVar1;
      uVar6 = 0;
      if ((int)uVar8 < local_70) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar7 = local_a8.SecondaryData;
      }
      uVar1 = *(ushort *)((uchar *)((longlong)FVar7 + 2) + lVar9 * 4);
      uVar6 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(float *)((param_3->AllocatorInstance).Data + lVar9 * 4) = (float)uVar1 * fVar4;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  if (local_a8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_a8.SecondaryData);
  }
  return;
}

