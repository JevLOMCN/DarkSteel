// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FRuntimeSkinWeightProfileData @ 1475a55f0

FRuntimeSkinWeightProfileData * __thiscall
FRuntimeSkinWeightProfileData::FRuntimeSkinWeightProfileData
          (FRuntimeSkinWeightProfileData *this,FRuntimeSkinWeightProfileData *param_1)

{
  (this->BoneIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIDs).AllocatorInstance.Data = (param_1->BoneIDs).AllocatorInstance.Data;
  (param_1->BoneIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIDs).ArrayNum = (param_1->BoneIDs).ArrayNum;
  (this->BoneIDs).ArrayMax = (param_1->BoneIDs).ArrayMax;
  (param_1->BoneIDs).ArrayNum = 0;
  (param_1->BoneIDs).ArrayMax = 0;
  (this->BoneWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneWeights).AllocatorInstance.Data = (param_1->BoneWeights).AllocatorInstance.Data;
  (param_1->BoneWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneWeights).ArrayNum = (param_1->BoneWeights).ArrayNum;
  (this->BoneWeights).ArrayMax = (param_1->BoneWeights).ArrayMax;
  (param_1->BoneWeights).ArrayNum = 0;
  (param_1->BoneWeights).ArrayMax = 0;
  *(undefined8 *)&(this->VertexIndexToInfluenceOffset).field_0x0 = 0;
  *(undefined8 *)&(this->VertexIndexToInfluenceOffset).field_0x8 = 0;
  *(undefined8 *)&(this->VertexIndexToInfluenceOffset).field_0x20 = 0;
  *(undefined4 *)&(this->VertexIndexToInfluenceOffset).field_0x28 = 0;
  *(undefined4 *)&(this->VertexIndexToInfluenceOffset).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexIndexToInfluenceOffset).field_0x34 = 0;
  *(undefined4 *)&(this->VertexIndexToInfluenceOffset).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VertexIndexToInfluenceOffset).field_0x40 = 0;
  *(undefined4 *)&(this->VertexIndexToInfluenceOffset).field_0x48 = 0;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->VertexIndexToInfluenceOffset,
             (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&param_1->VertexIndexToInfluenceOffset);
  this->NumWeightsPerVertex = param_1->NumWeightsPerVertex;
  this->b16BitBoneIndices = param_1->b16BitBoneIndices;
  return this;
}

// ApplyDefaultOverride @ 1475b3100

void __thiscall
FRuntimeSkinWeightProfileData::ApplyDefaultOverride
          (FRuntimeSkinWeightProfileData *this,FSkinWeightVertexBuffer *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 uVar4;
  code *pcVar5;
  uchar *puVar6;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uchar *_Dst;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int iVar17;
  undefined1 local_res10 [8];
  char local_res18;
  uint local_res20 [2];
  uint local_c8;
  byte local_c4;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  uchar *local_88;
  uint local_80;
  ulonglong local_78;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if ((param_1 != (FSkinWeightVertexBuffer *)0x0) && ((param_1->DataVertexBuffer).NumVertices != 0))
  {
    iVar17 = *(int *)&(this->VertexIndexToInfluenceOffset).field_0x28;
    local_c0 = &this->VertexIndexToInfluenceOffset;
    uStack_b4 = 1;
    puVar1 = &(this->VertexIndexToInfluenceOffset).field_0x10;
    local_88 = (param_1->DataVertexBuffer).Data;
    local_res18 = (param_1->DataVertexBuffer).bUse16BitBoneIndex;
    local_80 = (param_1->DataVertexBuffer).MaxBoneInfluences;
    iStack_b8 = 0;
    local_a0 = 0;
    local_c4 = (((param_1->DataVertexBuffer).bUse16BitBoneWeight != false) +
               ((bool)local_res18 != false) + '\x02') * (char)local_80;
    iStack_a4 = 0;
    if (iVar17 != 0) {
      puVar16 = *(uint **)&(this->VertexIndexToInfluenceOffset).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar13 = *puVar16;
      while (uVar13 == 0) {
        lVar9 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        iStack_a4 = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_1475b31fd;
        uVar13 = puVar16[lVar9 + 1];
      }
      uStack_b4 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_b4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_90 = (int)lVar9;
      iStack_a4 = local_90 + -1 + local_a0;
      if (iVar17 < iStack_a4) {
        iStack_a4 = iVar17;
      }
    }
LAB_1475b31fd:
    uVar13 = *(uint *)&(this->VertexIndexToInfluenceOffset).field_0x28;
    iStack_98 = *(int *)&(this->VertexIndexToInfluenceOffset).field_0x8 -
                *(int *)&(this->VertexIndexToInfluenceOffset).field_0x34;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uStack_b4,iStack_b8);
    uStack_a8 = 0xffffffff;
    TStack_68.CurrentBitIndex = iStack_a4;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar13 >> 5;
    TStack_68._28_4_ = iStack_a4;
    TStack_68.BaseBitIndex = local_a0;
    uStack_48 = CONCAT44(uStack_94,iStack_98);
    local_b0 = puVar1;
    iStack_9c = iStack_a4;
    local_70 = local_c0;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar17 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = *(uint *)&(this->VertexIndexToInfluenceOffset).field_0x28;
    if (uVar13 != uVar11) {
      puVar15 = *(undefined1 **)&(this->VertexIndexToInfluenceOffset).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar10;
        uVar12 = uVar12 + 0x20;
        iVar10 = iVar10 + 1;
        uVar13 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_1475b3300;
        uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_8c = (int)lVar9;
      uVar13 = local_8c + -1 + uVar12;
      if ((int)uVar11 < (int)uVar13) {
        uVar13 = uVar11;
      }
    }
LAB_1475b3300:
    while( true ) {
      pTVar7 = local_70;
      if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      puVar6 = local_88;
      if (((TStack_68.CurrentBitIndex == uVar13) &&
          (TStack_68.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->VertexIndexToInfluenceOffset).field_0x10)
          ) && (pTVar7 == &this->VertexIndexToInfluenceOffset)) break;
      local_c8 = 0;
      local_res20[0] = 0;
      uVar4 = *(undefined8 *)(*(longlong *)pTVar7 + (longlong)TStack_68.CurrentBitIndex * 0x10);
      uVar12 = (uint)uVar4;
      _Dst = local_88 + local_c4 * uVar12;
      local_78 = (ulonglong)(byte)(((local_res18 != '\0') + '\x01') * (char)local_80);
      FSkinWeightVertexBuffer::GetVertexInfluenceOffsetCount(param_1,uVar12,&local_c8,local_res20);
      if ((local_res20[0] < this->NumWeightsPerVertex) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumWeightsPerVertex <= VertexInfluenceCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                             ,0x38a,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((puVar6 + local_c8 != _Dst) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)(((uint8*)TargetSkinWeightData) + VertexOffset) == (void*)BoneData"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                             ,0x38b,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((this->b16BitBoneIndices != (param_1->DataVertexBuffer).bUse16BitBoneIndex) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("b16BitBoneIndices == Buffer->Use16BitBoneIndex()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                             ,0x38c,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar17 = (int)((ulonglong)uVar4 >> 0x20);
      uVar14 = (((param_1->DataVertexBuffer).bUse16BitBoneIndex != false) + 1) *
               (uint)this->NumWeightsPerVertex;
      uVar11 = iVar17 * uVar14;
      uVar12 = 0;
      if ((int)uVar11 < (this->BoneIDs).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      memcpy(_Dst,(this->BoneIDs).AllocatorInstance.Data + (int)uVar11,(ulonglong)uVar14);
      bVar3 = this->NumWeightsPerVertex;
      uVar11 = (uint)bVar3 * iVar17;
      uVar12 = 0;
      if ((int)uVar11 < (this->BoneWeights).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      memcpy(_Dst + local_78,(this->BoneWeights).AllocatorInstance.Data + (int)uVar11,
             (ulonglong)bVar3);
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return;
}

// ApplyOverrides @ 1475b36f0

void __thiscall
FRuntimeSkinWeightProfileData::ApplyOverrides
          (FRuntimeSkinWeightProfileData *this,FSkinWeightVertexBuffer *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uchar *puVar5;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *pTVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uchar *_Dst;
  undefined1 local_res10 [8];
  char local_res18;
  uint local_res20;
  uint local_c8;
  uint local_c4;
  byte local_c0;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  uchar *local_80;
  uint local_78;
  ulonglong local_70;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 != (FSkinWeightVertexBuffer *)0x0) {
    local_78 = (param_1->DataVertexBuffer).MaxBoneInfluences;
    iVar12 = *(int *)&(this->VertexIndexToInfluenceOffset).field_0x28;
    local_b8 = &this->VertexIndexToInfluenceOffset;
    uStack_ac = 1;
    puVar1 = &(this->VertexIndexToInfluenceOffset).field_0x10;
    local_80 = (param_1->DataVertexBuffer).Data;
    local_res18 = (param_1->DataVertexBuffer).bUse16BitBoneIndex;
    local_98 = 0;
    iStack_b0 = 0;
    local_c0 = (((param_1->DataVertexBuffer).bUse16BitBoneWeight != false) +
               ((bool)local_res18 != false) + '\x02') * (char)local_78;
    iStack_9c = 0;
    if (iVar12 != 0) {
      puVar16 = *(uint **)&(this->VertexIndexToInfluenceOffset).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar13 = *puVar16;
      while (uVar13 == 0) {
        lVar9 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar12;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_1475b37dd;
        uVar13 = puVar16[lVar9 + 1];
      }
      uStack_ac = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_88 = (int)lVar9;
      iStack_9c = local_88 + -1 + local_98;
      if (iVar12 < iStack_9c) {
        iStack_9c = iVar12;
      }
    }
LAB_1475b37dd:
    uVar13 = *(uint *)&(this->VertexIndexToInfluenceOffset).field_0x28;
    iStack_90 = *(int *)&(this->VertexIndexToInfluenceOffset).field_0x8 -
                *(int *)&(this->VertexIndexToInfluenceOffset).field_0x34;
    uVar11 = uVar13 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uStack_ac,iStack_b0);
    uStack_a0 = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_9c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iStack_9c;
    TStack_60.BaseBitIndex = local_98;
    uStack_40 = CONCAT44(uStack_8c,iStack_90);
    local_res20 = uVar13;
    local_a8 = puVar1;
    iStack_94 = iStack_9c;
    local_68 = local_b8;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar12 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar14 = *(uint *)&(this->VertexIndexToInfluenceOffset).field_0x28;
    if (uVar13 != uVar14) {
      puVar15 = *(undefined1 **)&(this->VertexIndexToInfluenceOffset).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar10;
        uVar11 = uVar11 + 0x20;
        iVar10 = iVar10 + 1;
        uVar13 = uVar14;
        local_res20 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_1475b38f0;
        uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_84 = (int)lVar9;
      uVar13 = local_84 + -1 + uVar11;
      local_res20 = uVar13;
      if ((int)uVar14 < (int)uVar13) {
        uVar13 = uVar14;
        local_res20 = uVar14;
      }
    }
LAB_1475b38f0:
    while( true ) {
      pTVar6 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      puVar5 = local_80;
      if (((TStack_60.CurrentBitIndex == uVar13) &&
          (TStack_60.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->VertexIndexToInfluenceOffset).field_0x10)
          ) && (pTVar6 == &this->VertexIndexToInfluenceOffset)) break;
      local_c4 = 0;
      local_c8 = 0;
      uVar3 = *(undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x10);
      uVar13 = (uint)uVar3;
      _Dst = local_80 + local_c0 * uVar13;
      local_70 = (ulonglong)(byte)(((local_res18 != '\0') + '\x01') * (char)local_78);
      FSkinWeightVertexBuffer::GetVertexInfluenceOffsetCount(param_1,uVar13,&local_c4,&local_c8);
      if ((local_c8 < this->NumWeightsPerVertex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumWeightsPerVertex <= VertexInfluenceCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                             ,0x365,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((puVar5 + local_c4 != _Dst) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)(((uint8*)TargetSkinWeightData) + VertexOffset) == (void*)BoneData"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                             ,0x366,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->b16BitBoneIndices != (param_1->DataVertexBuffer).bUse16BitBoneIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("b16BitBoneIndices == OverrideBuffer->Use16BitBoneIndex()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                             ,0x367,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar7 = (param_1->DataVertexBuffer).bUse16BitBoneWeight;
      iVar12 = (int)((ulonglong)uVar3 >> 0x20);
      uVar14 = (((param_1->DataVertexBuffer).bUse16BitBoneIndex != false) + 1) *
               (uint)this->NumWeightsPerVertex;
      uVar11 = iVar12 * uVar14;
      uVar13 = 0;
      if ((int)uVar11 < (this->BoneIDs).ArrayNum) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy(_Dst,(this->BoneIDs).AllocatorInstance.Data + (int)uVar11,(ulonglong)uVar14);
      uVar11 = (uint)this->NumWeightsPerVertex * ((bVar7 != false) + 1);
      uVar14 = iVar12 * uVar11;
      uVar13 = 0;
      if ((int)uVar14 < (this->BoneWeights).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy(_Dst + local_70,(this->BoneWeights).AllocatorInstance.Data + (int)uVar14,
             (ulonglong)uVar11);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar13 = local_res20;
    }
  }
  return;
}

