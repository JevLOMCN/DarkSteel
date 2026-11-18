// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 1468327c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FScheduleCombineBlendsForProperties::ForEachAllocation
          (FScheduleCombineBlendsForProperties *this,FEntityAllocationProxy *param_1,
          FMovieSceneBlendChannelID *param_2,FReadErasedOptional *param_3)

{
  ushort uVar1;
  FAccumulationBuffers *this_00;
  FEntityAllocationWriteContext FVar2;
  code *pcVar3;
  longlong lVar4;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *pTVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  FEntityAllocation *this_01;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar10;
  FAdditiveFromBaseBuffer *pFVar11;
  FAdditiveAndOverrideBuffer *pFVar12;
  FPropertyCompositeDefinition *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FBlendResult *pFVar21;
  FBlendResult *pFVar22;
  FBlendResult *pFVar23;
  FBlendResult *pFVar24;
  FBlendResult *pFVar25;
  FComponentTypeID local_128 [4];
  uint local_120;
  uint local_11c;
  uint local_118;
  longlong local_110;
  FBlendResult *local_108;
  FEntityAllocation *local_100;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *local_f8;
  FBlendResult *local_f0;
  FBlendResult *pFStack_e8;
  FBlendResult *local_e0;
  FBlendResult *pFStack_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  undefined8 uStack_c0;
  FComponentMask *local_b8;
  TComponentLock<UE::MovieScene::TWrite<double>_> local_b0;
  FAccumulationResult local_88 [2];
  
  local_b8 = FEntityAllocationProxy::GetAllocationType(param_1);
  this_01 = FEntityAllocationProxy::GetAllocation(param_1);
  local_120 = 0;
  if (0 < (this->Composites).ArrayNum) {
    local_f8 = &this->Composites;
    local_11c = 1;
    local_110 = 0;
    local_100 = this_01;
    do {
      pTVar5 = local_f8;
      lVar4 = local_110;
      uVar17 = local_120;
      local_118 = local_11c & this->DoubleCompositeMask;
      uVar15 = ~local_120;
      this_00 = this->AccumulationBuffers;
      uVar9 = 0;
      if ((int)local_120 < local_f8->ArrayNum) {
        uVar9 = uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar22 = (FBlendResult *)0x0;
      pFVar23 = (FBlendResult *)0x0;
      pFVar25 = (FBlendResult *)0x0;
      local_f0 = (FBlendResult *)0x0;
      pFStack_e8 = (FBlendResult *)0x0;
      local_128[0].Value = *(ushort *)((longlong)&(pTVar5->DataPtr->ComponentTypeID).Value + lVar4);
      local_e0 = (FBlendResult *)0x0;
      pFStack_d8 = (FBlendResult *)0x0;
      local_c8 = (FScriptContainerElement *)0x0;
      local_d0 = (FScriptContainerElement *)0x0;
      pTVar10 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->Absolute,local_128);
      if (pTVar10 == (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
        local_108 = (FBlendResult *)0x0;
      }
      else {
        local_108 = (FBlendResult *)(pTVar10->AllocatorInstance).Data;
        pFVar22 = pFStack_e8;
        local_f0 = local_108;
      }
      pFVar21 = local_108;
      pTVar10 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->Relative,local_128);
      if (pTVar10 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar22 = (FBlendResult *)(pTVar10->AllocatorInstance).Data;
        pFVar21 = local_f0;
        pFStack_e8 = pFVar22;
      }
      pTVar10 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->Additive,local_128);
      if (pTVar10 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar23 = (FBlendResult *)(pTVar10->AllocatorInstance).Data;
        pFVar25 = pFStack_d8;
        local_e0 = pFVar23;
      }
      pFVar11 = TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->AdditiveFromBase,local_128);
      pFVar24 = pFVar23;
      if (pFVar11 != (FAdditiveFromBaseBuffer *)0x0) {
        pFVar25 = (FBlendResult *)(pFVar11->Buffer).AllocatorInstance.Data;
        pFVar24 = local_e0;
        pFStack_d8 = pFVar25;
      }
      pFVar12 = TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->AdditiveAndOverrides,local_128);
      pFVar20 = local_c8;
      if (pFVar12 != (FAdditiveAndOverrideBuffer *)0x0) {
        local_d0 = (pFVar12->Values).AllocatorInstance.Data;
        pFVar20 = local_d0;
      }
      if (local_118 != 0) {
        uVar9 = 0;
        if ((int)uVar17 < (this->Composites).ArrayNum) {
          uVar9 = uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(ushort *)
                 ((longlong)&(((this->Composites).DataPtr)->ComponentTypeID).Value + local_110);
        if ((((uVar1 != 0xffff) && ((int)(uint)uVar1 < (local_b8->Bits).NumBits)) &&
            ((*(uint *)(local_b8->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
              (uVar1 & 0x1f) & 1) != 0)) &&
           (((local_108 != (FBlendResult *)0x0 || (pFVar22 != (FBlendResult *)0x0)) ||
            ((pFVar23 != (FBlendResult *)0x0 ||
             ((pFVar25 != (FBlendResult *)0x0 || (pFVar20 != (FScriptContainerElement *)0x0))))))))
        {
          FVar2.SystemSerial = (this->WriteContext).SystemSerial;
          pFVar13 = TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>::operator[]
                              (local_f8,uVar17);
          FEntityAllocation::WriteComponents<double>
                    (this_01,&local_b0,(TComponentTypeID<double>)(pFVar13->ComponentTypeID).Value,
                     FVar2);
          pFVar13 = TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>::operator[]
                              (local_f8,uVar17);
          uVar7 = local_b0._24_8_;
          uVar1 = pFVar13->CompositeOffset;
          local_88[0].Overrides = (FAdditiveAndOverrides *)local_d0;
          pFVar20 = *(FScriptContainerElement **)param_3;
          uStack_c0 = *(undefined8 *)&param_3->field_0x8;
          local_c8 = pFVar20;
          local_88[0].Absolutes = pFVar21;
          local_88[0].Relatives = pFVar22;
          local_88[0].Additives = pFVar24;
          local_88[0].AdditivesFromBase = pFVar25;
          if (pFVar20 == (FScriptContainerElement *)0x0) {
            iVar16 = 0;
            if (this_01->Size != 0) {
              puVar18 = &param_2->ChannelID;
              do {
                BlendResults(local_88,*puVar18,(double *)(uVar7 + (longlong)iVar16 * 8));
                puVar18 = puVar18 + 2;
                iVar16 = iVar16 + 1;
                uVar17 = local_120;
              } while (iVar16 < (int)(uint)this_01->Size);
            }
          }
          else {
            iVar16 = 0;
            if (this_01->Size != 0) {
              puVar18 = &param_2->ChannelID;
              iVar6 = (int)uStack_c0;
              iVar19 = 0;
              do {
                BlendResultsWithInitial
                          (local_88,*puVar18,
                           *(double *)(pFVar20 + (longlong)iVar19 + (ulonglong)uVar1),
                           (double *)(uVar7 + (longlong)iVar16 * 8));
                puVar18 = puVar18 + 2;
                iVar16 = iVar16 + 1;
                iVar19 = iVar19 + iVar6;
                this_01 = local_100;
                uVar17 = local_120;
              } while (iVar16 < (int)(uint)local_100->Size);
            }
          }
          if (local_b0._0_8_ != 0) {
            uVar14 = local_b0._8_8_;
            if ((ulonglong)local_b0._8_8_ < *(ulonglong *)(local_b0._0_8_ + 0x28)) {
              uVar14 = *(ulonglong *)(local_b0._0_8_ + 0x28);
            }
            *(ulonglong *)(local_b0._0_8_ + 0x28) = uVar14;
            LOCK();
            *(int *)(local_b0._0_8_ + 0x30) = *(int *)(local_b0._0_8_ + 0x30) + -1;
            UNLOCK();
            if (local_b0._16_4_ == 1) {
              ReleaseSRWLockExclusive((PSRWLOCK)(local_b0._0_8_ + 0x20));
            }
          }
        }
      }
      local_120 = uVar17 + 1;
      local_110 = local_110 + 4;
      local_11c = local_11c << 1 | (uint)((int)local_11c < 0);
    } while ((int)local_120 < (this->Composites).ArrayNum);
  }
  return;
}

