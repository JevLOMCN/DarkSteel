// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// ~FSkinWeightAttributeGenerator @ 14c7b77e0

void __thiscall
UniformTessellateLocals::FSkinWeightAttributeGenerator::~FSkinWeightAttributeGenerator
          (FSkinWeightAttributeGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSkinWeightAttributeGenerator_UniformTessellateLocals__6B_;
  DestructItems<UE::AnimationCore::FBoneWeights,int>
            ((FBoneWeights *)(this->VertexBoneWeights).AllocatorInstance.Data,
             (this->VertexBoneWeights).ArrayNum);
  pFVar1 = (this->VertexBoneWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// operator() @ 14c7beb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FSkinWeightAttributeGenerator::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar11;
  uint uVar12;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar13;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar14;
  uint uVar15;
  double dVar16;
  undefined1 auStackY_1d8 [32];
  FBoneWeightsSettings local_198;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_188;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_180;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_178 [2];
  uchar local_168 [8];
  uchar auStack_160 [8];
  uchar local_158 [8];
  uchar auStack_150 [8];
  uchar local_148 [8];
  uchar auStack_140 [8];
  ForElementType<UE::AnimationCore::FBoneWeight> local_138;
  int local_130;
  int local_12c;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_128;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_e8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  cVar7 = (**(code **)(**(longlong **)this + 8))();
  if (cVar7 == '\0') {
    uVar4 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x1c0) +
               (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0xc;
    local_e8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0xc;
    FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x20) +
               ((uVar4 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar4 & 0x1ff) * 0x40);
    if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_a8 != FVar11) {
      iVar2 = *(int *)((longlong)FVar11 + 0x38);
      FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar11 + 0x30);
      if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar11 + 0x30) ==
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar13 = FVar11;
      }
      local_a8.ArrayNum = iVar2;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                (4,2,iVar2,0xc,&local_a8.AllocatorInstance,iVar2,&local_a8.ArrayMax);
      FVar11 = local_a8.AllocatorInstance.SecondaryData;
      if (local_a8.AllocatorInstance.SecondaryData ==
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_a8;
      }
      if (iVar2 != 0) {
        memcpy((void *)FVar11,(void *)FVar13,(longlong)iVar2 << 2);
      }
    }
    FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x20) + (uVar4 >> 0x29) * 8)
             + (ulonglong)((uint)(uVar4 >> 0x20) & 0x1ff) * 0x40);
    if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_e8 != FVar11) {
      iVar2 = *(int *)((longlong)FVar11 + 0x38);
      FVar14 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar11 + 0x30);
      if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar11 + 0x30) ==
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar14 = FVar11;
      }
      local_e8.ArrayNum = iVar2;
      if ((iVar2 != 0) || (local_e8.ArrayMax != 0)) {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                  (4,2,iVar2,local_e8.ArrayMax,&local_e8.AllocatorInstance,iVar2,&local_e8.ArrayMax)
        ;
        FVar11 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_e8;
        if (local_e8.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar11 = local_e8.AllocatorInstance.SecondaryData;
        }
        if (iVar2 != 0) {
          memcpy((void *)FVar11,(void *)FVar14,(longlong)iVar2 << 2);
        }
      }
    }
    dVar6 = __real_3ff0000000000000;
    lVar10 = *(longlong *)this;
    local_130 = 0;
    local_12c = 0xc;
    FVar11 = FVar13;
    FVar14 = FVar13;
    if (0 < *(int *)(lVar10 + 0x10)) {
      do {
        uVar15 = FVar13._0_4_ + 1;
        local_178[0].Container = &local_128;
        local_198.bHasDefaultBoneIndex = false;
        local_198.bBlendZeroInfluence = true;
        local_198._14_2_ = 0;
        local_180.Container = &local_a8;
        local_198.NormalizeType = Always;
        local_188.Container = &local_e8;
        local_198.MaxWeightCount = 0xc;
        local_198.WeightThreshold = 1;
        local_198.DefaultBoneIndex = 0;
        local_128.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        local_128.ArrayNum = 0;
        local_128.ArrayMax = 0xc;
        dVar16 = (double)(int)uVar15 / (double)(*(int *)(lVar10 + 0x10) + 1);
        if (dVar6 <= dVar16) {
          dVar16 = dVar6;
        }
        if (dVar16 <= 0.0) {
          dVar16 = 0.0;
        }
        UE::AnimationCore::
        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
        ::
        Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                  (local_178,&local_180,&local_188,(float)dVar16,&local_198);
        if (local_128.AllocatorInstance.SecondaryData ==
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          local_168[0] = local_128.AllocatorInstance.InlineData[0];
          local_168[1] = local_128.AllocatorInstance.InlineData[1];
          local_168[2] = local_128.AllocatorInstance.InlineData[2];
          local_168[3] = local_128.AllocatorInstance.InlineData[3];
          local_168[4] = local_128.AllocatorInstance.InlineData[4];
          local_168[5] = local_128.AllocatorInstance.InlineData[5];
          local_168[6] = local_128.AllocatorInstance.InlineData[6];
          local_168[7] = local_128.AllocatorInstance.InlineData[7];
          auStack_160[0] = local_128.AllocatorInstance.InlineData[8];
          auStack_160[1] = local_128.AllocatorInstance.InlineData[9];
          auStack_160[2] = local_128.AllocatorInstance.InlineData[10];
          auStack_160[3] = local_128.AllocatorInstance.InlineData[0xb];
          auStack_160[4] = local_128.AllocatorInstance.InlineData[0xc];
          auStack_160[5] = local_128.AllocatorInstance.InlineData[0xd];
          auStack_160[6] = local_128.AllocatorInstance.InlineData[0xe];
          auStack_160[7] = local_128.AllocatorInstance.InlineData[0xf];
          local_148[0] = local_128.AllocatorInstance.InlineData[0x20];
          local_148[1] = local_128.AllocatorInstance.InlineData[0x21];
          local_148[2] = local_128.AllocatorInstance.InlineData[0x22];
          local_148[3] = local_128.AllocatorInstance.InlineData[0x23];
          local_148[4] = local_128.AllocatorInstance.InlineData[0x24];
          local_148[5] = local_128.AllocatorInstance.InlineData[0x25];
          local_148[6] = local_128.AllocatorInstance.InlineData[0x26];
          local_148[7] = local_128.AllocatorInstance.InlineData[0x27];
          auStack_140[0] = local_128.AllocatorInstance.InlineData[0x28];
          auStack_140[1] = local_128.AllocatorInstance.InlineData[0x29];
          auStack_140[2] = local_128.AllocatorInstance.InlineData[0x2a];
          auStack_140[3] = local_128.AllocatorInstance.InlineData[0x2b];
          auStack_140[4] = local_128.AllocatorInstance.InlineData[0x2c];
          auStack_140[5] = local_128.AllocatorInstance.InlineData[0x2d];
          auStack_140[6] = local_128.AllocatorInstance.InlineData[0x2e];
          auStack_140[7] = local_128.AllocatorInstance.InlineData[0x2f];
          local_158[0] = local_128.AllocatorInstance.InlineData[0x10];
          local_158[1] = local_128.AllocatorInstance.InlineData[0x11];
          local_158[2] = local_128.AllocatorInstance.InlineData[0x12];
          local_158[3] = local_128.AllocatorInstance.InlineData[0x13];
          local_158[4] = local_128.AllocatorInstance.InlineData[0x14];
          local_158[5] = local_128.AllocatorInstance.InlineData[0x15];
          local_158[6] = local_128.AllocatorInstance.InlineData[0x16];
          local_158[7] = local_128.AllocatorInstance.InlineData[0x17];
          auStack_150[0] = local_128.AllocatorInstance.InlineData[0x18];
          auStack_150[1] = local_128.AllocatorInstance.InlineData[0x19];
          auStack_150[2] = local_128.AllocatorInstance.InlineData[0x1a];
          auStack_150[3] = local_128.AllocatorInstance.InlineData[0x1b];
          auStack_150[4] = local_128.AllocatorInstance.InlineData[0x1c];
          auStack_150[5] = local_128.AllocatorInstance.InlineData[0x1d];
          auStack_150[6] = local_128.AllocatorInstance.InlineData[0x1e];
          auStack_150[7] = local_128.AllocatorInstance.InlineData[0x1f];
        }
        FVar11 = local_128.AllocatorInstance.SecondaryData;
        if (FVar14 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)FVar14);
          FVar11 = local_128.AllocatorInstance.SecondaryData;
        }
        iVar2 = local_128.ArrayNum;
        local_12c = local_128.ArrayMax;
        local_128.ArrayNum = 0;
        local_128.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        lVar10 = *(longlong *)this;
        local_130 = iVar2;
        local_128.ArrayMax = 0xc;
        uVar12 = FVar13._0_4_ + param_1 * *(int *)(lVar10 + 0x10) + *(int *)(lVar10 + 0x28);
        uVar9 = 0;
        if ((int)uVar12 < *(int *)(lVar10 + 0x40)) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        local_138 = FVar11;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                 ((longlong)(int)uVar12 * 0x40 + *(longlong *)(lVar10 + 0x38));
        if (FVar13 != (ForElementType<UE::AnimationCore::FBoneWeight>)local_168) {
          iVar3 = *(int *)((longlong)FVar13 + 0x3c);
          *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar13 + 0x38))->
                  InlineData = iVar2;
          puVar1 = (uchar *)((longlong)FVar13 + 0x3c);
          FVar14 = (ForElementType<UE::AnimationCore::FBoneWeight>)local_168;
          if (FVar11 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar14 = FVar11;
          }
          if ((iVar2 == 0) && (iVar3 == 0)) {
            puVar1[0] = '\f';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,iVar2,iVar3,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar13,
                       iVar2,(int *)puVar1);
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar13 + 0x30) !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar13 + 0x30);
            }
            if (iVar2 != 0) {
              memcpy((void *)FVar13,(void *)FVar14,(longlong)iVar2 << 2);
            }
          }
        }
        lVar10 = *(longlong *)this;
        FVar13._4_4_ = 0;
        FVar13._0_4_ = uVar15;
        FVar14 = FVar11;
      } while ((int)uVar15 < *(int *)(lVar10 + 0x10));
    }
    if (FVar11 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)FVar11);
    }
    if (local_e8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
    }
    if (local_a8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// operator() @ 14c7c0bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FSkinWeightAttributeGenerator::GenerateTriangleElements'::__l2::<lambda_1>
::operator()(void *this,int param_1)

{
  uchar *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar13;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar18;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  int iVar19;
  bool bVar20;
  bool bVar21;
  double dVar22;
  undefined1 auStackY_218 [32];
  FBoneWeightsSettings local_1d0;
  undefined8 local_1c0;
  uint local_1b8;
  longlong *local_1b0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_1a8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_1a0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_198;
  undefined8 local_190;
  undefined4 local_188;
  uchar local_178 [8];
  uchar auStack_170 [8];
  uchar local_168 [8];
  uchar auStack_160 [8];
  uchar local_158 [8];
  uchar auStack_150 [8];
  ForElementType<UE::AnimationCore::FBoneWeight> local_148;
  int local_140;
  int local_13c;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_138;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_f8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1b0 = this;
  cVar7 = (**(code **)(**(longlong **)this + 8))();
  dVar6 = __real_3ff0000000000000;
  if (cVar7 == '\0') {
    lVar12 = *(longlong *)this;
    uVar10 = (ulonglong)(param_1 & 0x1ff);
    lVar3 = *(longlong *)(lVar12 + 8);
    iVar19 = 1;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_190 = *(undefined8 *)(lVar4 + uVar10 * 0xc);
    local_188 = *(undefined4 *)(lVar4 + 8 + uVar10 * 0xc);
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_1b8 = *(uint *)(lVar4 + 8 + uVar10 * 0xc);
    local_1c0 = *(undefined8 *)(lVar4 + uVar10 * 0xc);
    bVar20 = *(int *)(*(longlong *)
                       (*(longlong *)(lVar3 + 0x1c0) + (ulonglong)((uint)local_1c0 >> 9) * 8) +
                     (ulonglong)((uint)local_1c0 & 0x1ff) * 0x10) != (int)local_190;
    bVar21 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (ulonglong)(local_1b8 >> 9) * 8)
                     + (ulonglong)(local_1b8 & 0x1ff) * 0x10) != (int)local_190;
    iVar17 = 0;
    if (1 < *(int *)(lVar12 + 0x10)) {
      do {
        iVar11 = iVar19;
        if (bVar20) {
          iVar11 = (*(int *)(lVar12 + 0x10) - iVar19) + -1;
        }
        iVar2 = *(int *)(lVar12 + 0x10);
        uVar16 = iVar2 * (uint)local_1c0 + *(int *)(lVar12 + 0x28) + iVar11;
        iVar11 = iVar19;
        if (bVar21) {
          iVar11 = (iVar2 - iVar19) + -1;
        }
        uVar15 = local_1b8 * iVar2 + iVar11 + *(int *)(lVar12 + 0x28);
        local_b8.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        local_b8.ArrayNum = 0;
        local_b8.ArrayMax = 0xc;
        local_f8.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0xc;
        uVar9 = 0;
        if ((int)uVar16 < *(int *)(lVar12 + 0x40)) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                 (*(longlong *)(lVar12 + 0x38) + (longlong)(int)uVar16 * 0x40);
        if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_b8 != FVar13) {
          iVar11 = *(int *)((longlong)FVar13 + 0x38);
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar13 + 0x30) !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar13 + 0x30);
          }
          local_b8.ArrayNum = iVar11;
          if ((iVar11 == 0) && (local_b8.ArrayMax == 0)) {
            local_b8.ArrayMax = 0xc;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,iVar11,local_b8.ArrayMax,&local_b8.AllocatorInstance,iVar11,
                       &local_b8.ArrayMax);
            FVar14 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_b8;
            if (local_b8.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar14 = local_b8.AllocatorInstance.SecondaryData;
            }
            if (iVar11 != 0) {
              memcpy((void *)FVar14,(void *)FVar13,(longlong)iVar11 << 2);
            }
          }
        }
        lVar3 = *(longlong *)this;
        uVar16 = 0;
        if ((int)uVar15 < *(int *)(lVar3 + 0x40)) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                 (*(longlong *)(lVar3 + 0x38) + (longlong)(int)uVar15 * 0x40);
        if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_f8 != FVar13) {
          iVar11 = *(int *)((longlong)FVar13 + 0x38);
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar13 + 0x30) !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar13 + 0x30);
          }
          local_f8.ArrayNum = iVar11;
          if ((iVar11 == 0) && (local_f8.ArrayMax == 0)) {
            local_f8.ArrayMax = 0xc;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,iVar11,local_f8.ArrayMax,&local_f8.AllocatorInstance,iVar11,
                       &local_f8.ArrayMax);
            FVar14 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_f8;
            if (local_f8.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar14 = local_f8.AllocatorInstance.SecondaryData;
            }
            if (iVar11 != 0) {
              memcpy((void *)FVar14,(void *)FVar13,(longlong)iVar11 << 2);
            }
          }
        }
        FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        if (0 < iVar19) {
          FVar14 = FVar13;
          FVar18 = FVar13;
          do {
            local_198.Container = &local_138;
            local_1d0.bHasDefaultBoneIndex = false;
            local_1d0.bBlendZeroInfluence = true;
            local_1d0._14_2_ = 0;
            local_1a0.Container = &local_b8;
            local_1d0.NormalizeType = Always;
            local_1a8.Container = &local_f8;
            local_1d0.MaxWeightCount = 0xc;
            uVar16 = FVar18._0_4_ + 1;
            local_1d0.WeightThreshold = 1;
            local_1d0.DefaultBoneIndex = 0;
            FVar18._4_4_ = 0;
            FVar18._0_4_ = uVar16;
            local_138.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
            local_138.ArrayNum = 0;
            local_138.ArrayMax = 0xc;
            dVar22 = (double)(int)uVar16 * (dVar6 / (double)(iVar19 + 1));
            if (dVar6 <= dVar22) {
              dVar22 = dVar6;
            }
            if (dVar22 <= 0.0) {
              dVar22 = 0.0;
            }
            UE::AnimationCore::
            TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
            ::
            Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                      (&local_198,&local_1a0,&local_1a8,(float)dVar22,&local_1d0);
            if (local_138.AllocatorInstance.SecondaryData ==
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              local_178[0] = local_138.AllocatorInstance.InlineData[0];
              local_178[1] = local_138.AllocatorInstance.InlineData[1];
              local_178[2] = local_138.AllocatorInstance.InlineData[2];
              local_178[3] = local_138.AllocatorInstance.InlineData[3];
              local_178[4] = local_138.AllocatorInstance.InlineData[4];
              local_178[5] = local_138.AllocatorInstance.InlineData[5];
              local_178[6] = local_138.AllocatorInstance.InlineData[6];
              local_178[7] = local_138.AllocatorInstance.InlineData[7];
              auStack_170[0] = local_138.AllocatorInstance.InlineData[8];
              auStack_170[1] = local_138.AllocatorInstance.InlineData[9];
              auStack_170[2] = local_138.AllocatorInstance.InlineData[10];
              auStack_170[3] = local_138.AllocatorInstance.InlineData[0xb];
              auStack_170[4] = local_138.AllocatorInstance.InlineData[0xc];
              auStack_170[5] = local_138.AllocatorInstance.InlineData[0xd];
              auStack_170[6] = local_138.AllocatorInstance.InlineData[0xe];
              auStack_170[7] = local_138.AllocatorInstance.InlineData[0xf];
              local_158[0] = local_138.AllocatorInstance.InlineData[0x20];
              local_158[1] = local_138.AllocatorInstance.InlineData[0x21];
              local_158[2] = local_138.AllocatorInstance.InlineData[0x22];
              local_158[3] = local_138.AllocatorInstance.InlineData[0x23];
              local_158[4] = local_138.AllocatorInstance.InlineData[0x24];
              local_158[5] = local_138.AllocatorInstance.InlineData[0x25];
              local_158[6] = local_138.AllocatorInstance.InlineData[0x26];
              local_158[7] = local_138.AllocatorInstance.InlineData[0x27];
              auStack_150[0] = local_138.AllocatorInstance.InlineData[0x28];
              auStack_150[1] = local_138.AllocatorInstance.InlineData[0x29];
              auStack_150[2] = local_138.AllocatorInstance.InlineData[0x2a];
              auStack_150[3] = local_138.AllocatorInstance.InlineData[0x2b];
              auStack_150[4] = local_138.AllocatorInstance.InlineData[0x2c];
              auStack_150[5] = local_138.AllocatorInstance.InlineData[0x2d];
              auStack_150[6] = local_138.AllocatorInstance.InlineData[0x2e];
              auStack_150[7] = local_138.AllocatorInstance.InlineData[0x2f];
              local_168[0] = local_138.AllocatorInstance.InlineData[0x10];
              local_168[1] = local_138.AllocatorInstance.InlineData[0x11];
              local_168[2] = local_138.AllocatorInstance.InlineData[0x12];
              local_168[3] = local_138.AllocatorInstance.InlineData[0x13];
              local_168[4] = local_138.AllocatorInstance.InlineData[0x14];
              local_168[5] = local_138.AllocatorInstance.InlineData[0x15];
              local_168[6] = local_138.AllocatorInstance.InlineData[0x16];
              local_168[7] = local_138.AllocatorInstance.InlineData[0x17];
              auStack_160[0] = local_138.AllocatorInstance.InlineData[0x18];
              auStack_160[1] = local_138.AllocatorInstance.InlineData[0x19];
              auStack_160[2] = local_138.AllocatorInstance.InlineData[0x1a];
              auStack_160[3] = local_138.AllocatorInstance.InlineData[0x1b];
              auStack_160[4] = local_138.AllocatorInstance.InlineData[0x1c];
              auStack_160[5] = local_138.AllocatorInstance.InlineData[0x1d];
              auStack_160[6] = local_138.AllocatorInstance.InlineData[0x1e];
              auStack_160[7] = local_138.AllocatorInstance.InlineData[0x1f];
            }
            FVar13 = local_138.AllocatorInstance.SecondaryData;
            if (FVar14 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FMemory::Free((void *)FVar14);
              FVar13 = local_138.AllocatorInstance.SecondaryData;
            }
            iVar11 = local_138.ArrayNum;
            local_13c = local_138.ArrayMax;
            local_138.ArrayNum = 0;
            local_138.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
            lVar3 = *(longlong *)this;
            local_140 = iVar11;
            local_138.ArrayMax = 0xc;
            uVar15 = param_1 * *(int *)(lVar3 + 0x34) + *(int *)(lVar3 + 0x30) +
                     *(int *)(lVar3 + 0x28) + iVar17;
            uVar9 = 0;
            if ((int)uVar15 < *(int *)(lVar3 + 0x40)) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            local_148 = FVar13;
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar14 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                     (*(longlong *)(lVar3 + 0x38) + (longlong)(int)uVar15 * 0x40);
            if (FVar14 != (ForElementType<UE::AnimationCore::FBoneWeight>)local_178) {
              iVar2 = *(int *)((longlong)FVar14 + 0x3c);
              *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar14 + 0x38))
                      ->InlineData = iVar11;
              puVar1 = (uchar *)((longlong)FVar14 + 0x3c);
              _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)local_178;
              if (FVar13 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                _Src = FVar13;
              }
              if ((iVar11 == 0) && (iVar2 == 0)) {
                puVar1[0] = '\f';
                puVar1[1] = '\0';
                puVar1[2] = '\0';
                puVar1[3] = '\0';
              }
              else {
                UE::Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                          (4,2,iVar11,iVar2,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar14
                           ,iVar11,(int *)puVar1);
                if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar14 + 0x30) !=
                    (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FVar14 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)
                            ((longlong)FVar14 + 0x30);
                }
                if (iVar11 != 0) {
                  memcpy((void *)FVar14,(void *)_Src,(longlong)iVar11 << 2);
                }
              }
            }
            iVar17 = iVar17 + 1;
            FVar14 = FVar13;
            this = local_1b0;
          } while ((int)uVar16 < iVar19);
        }
        if (FVar13 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)FVar13);
        }
        if (local_f8.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_f8.AllocatorInstance.SecondaryData);
        }
        if (local_b8.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
        }
        lVar12 = *(longlong *)this;
        iVar19 = iVar19 + 1;
      } while (iVar19 < *(int *)(lVar12 + 0x10));
    }
  }
  return;
}

// CopyToAttribute @ 14c7fb9b0

void __thiscall
UniformTessellateLocals::FSkinWeightAttributeGenerator::CopyToAttribute
          (FSkinWeightAttributeGenerator *this,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < (this->VertexBoneWeights).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->VertexBoneWeights).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UE::AnimationCore::FBoneWeights::operator=
                ((FBoneWeights *)
                 ((ulonglong)(uVar4 & 0x1ff) * 0x40 +
                 *(longlong *)
                  ((param_1->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar4 >> 9) * 8)),
                 (FBoneWeights *)
                 ((this->VertexBoneWeights).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x40));
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->VertexBoneWeights).ArrayNum);
  }
  return;
}

// Generate @ 14c80a710

bool __thiscall
UniformTessellateLocals::FSkinWeightAttributeGenerator::Generate
          (FSkinWeightAttributeGenerator *this)

{
  longlong lVar1;
  <lambda_1> <Var2;
  char cVar3;
  FSkinWeightAttributeGenerator *local_res8;
  undefined1 local_28 [12];
  uint uStack_1c;
  undefined1 local_18 [16];
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    Initialize(this);
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UniformTessellateLocals::FSkinWeightAttributeGenerator::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
         ::Call;
    local_18._8_8_ = &local_res8;
    local_28._0_8_ = (void **)0x0;
    stack0xffffffffffffffe0 = (FSkinWeightAttributeGenerator **)((ulonglong)uStack_1c << 0x20);
    local_res8._0_1_ = SUB81(this,0);
    <Var2 = local_res8._0_1_;
    local_res8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
               (TFunctionRef<void___cdecl(int)> *)local_18,<Var2,
               (uint)((char)this->_padding_ == '\0'),(TArrayView<std::nullptr_t,int> *)local_28);
    cVar3 = (**(code **)(this->_padding_ + 8))(this);
    if (cVar3 == '\0') {
      if (1 < (int)this->_padding_) {
        local_28._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FSkinWeightAttributeGenerator::GenerateTriangleElements'::__l2::<lambda_1>,void,int>
             ::Call;
        unique0x00009c00 = &local_res8;
        local_18._0_8_ = (void **)0x0;
        local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
        local_res8 = this;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",
                   *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
                   (TFunctionRef<void___cdecl(int)> *)local_28,<Var2,
                   (uint)((char)this->_padding_ == '\0'),(TArrayView<std::nullptr_t,int> *)local_18)
        ;
        cVar3 = (**(code **)(this->_padding_ + 8))(this);
        if (cVar3 != '\0') {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// Initialize @ 14c816a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UniformTessellateLocals::FSkinWeightAttributeGenerator::Initialize
          (FSkinWeightAttributeGenerator *this)

{
  int *piVar1;
  uchar *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar7;
  ulonglong uVar8;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_b8 [32];
  ForElementType<UE::AnimationCore::FBoneWeight> local_78;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  iVar3 = (this->VertexBoneWeights).ArrayNum;
  piVar1 = &(this->VertexBoneWeights).ArrayNum;
  uVar10 = this->OutWeightCount;
  if (iVar3 < (int)uVar10) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,uVar10 - iVar3,&(this->VertexBoneWeights).AllocatorInstance,piVar1,
                       &(this->VertexBoneWeights).ArrayMax);
    DefaultConstructItems<UE::AnimationCore::FBoneWeights,int>
              ((this->VertexBoneWeights).AllocatorInstance.Data + (longlong)iVar6 * 0x40,
               uVar10 - iVar3);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar3) {
      uVar11 = iVar3 - uVar10;
      if (((int)(uVar11 | uVar10) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar11 != 0) {
        TArray<UE::AnimationCore::FBoneWeights,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->VertexBoneWeights,uVar10,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&(this->VertexBoneWeights).AllocatorInstance,*piVar1,
                   &(this->VertexBoneWeights).ArrayMax);
      }
    }
  }
  uVar8 = 0;
  local_78.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_40 = 0;
  local_3c = 0xc;
  uVar13 = uVar8;
  uVar14 = uVar8;
  if (0 < *(int *)(this->_padding_ + 0x50)) {
    do {
      uVar10 = (uint)uVar8;
      FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)
              (*(longlong *)
                ((this->SkinWeightsAttribute->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                (uVar8 >> 9) * 8) + (ulonglong)((uint)uVar13 & 0x1ff) * 0x40);
      if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_78 != FVar9) {
        iVar3 = *(int *)((longlong)FVar9 + 0x38);
        if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30) !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar9 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30);
        }
        local_40 = iVar3;
        if ((iVar3 == 0) && (local_3c == 0)) {
          local_3c = 0xc;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                    (4,2,iVar3,local_3c,&local_78,iVar3,&local_3c);
          FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar7 = local_78.SecondaryData;
          }
          if (iVar3 != 0) {
            memcpy((void *)FVar7,(void *)FVar9,(longlong)iVar3 << 2);
          }
        }
      }
      uVar11 = 0;
      if ((int)uVar10 < (this->VertexBoneWeights).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = local_40;
      FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)
              ((longlong)(this->VertexBoneWeights).AllocatorInstance.Data + uVar14);
      if (FVar9 != (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78) {
        lVar12 = (longlong)local_40;
        puVar2 = (uchar *)((longlong)FVar9 + 0x3c);
        iVar6 = *(int *)puVar2;
        *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x38))->
                InlineData = local_40;
        FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
        if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar7 = local_78.SecondaryData;
        }
        if ((local_40 == 0) && (iVar6 == 0)) {
          puVar2[0] = '\f';
          puVar2[1] = '\0';
          puVar2[2] = '\0';
          puVar2[3] = '\0';
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                    (4,2,local_40,iVar6,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar9,
                     local_40,(int *)puVar2);
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30) !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar9 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30);
          }
          if (iVar3 != 0) {
            memcpy((void *)FVar9,(void *)FVar7,lVar12 << 2);
          }
        }
      }
      uVar8 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 0x40;
    } while ((int)(uVar10 + 1) < *(int *)(this->_padding_ + 0x50));
  }
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  return;
}

