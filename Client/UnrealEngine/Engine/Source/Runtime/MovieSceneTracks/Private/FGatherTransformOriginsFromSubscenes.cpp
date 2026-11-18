// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// ForEachAllocation @ 146831ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FGatherTransformOriginsFromSubscenes::ForEachAllocation
          (FGatherTransformOriginsFromSubscenes *this,FEntityAllocation *param_1,
          TRead<UE::MovieScene::FRootInstanceHandle> param_2,TRead<FMovieSceneSequenceID> param_3,
          TReadOptional<double> param_4,TReadOptional<double> param_5,TReadOptional<double> param_6,
          TReadOptional<double> param_7,TReadOptional<double> param_8,TReadOptional<double> param_9)

{
  undefined8 uVar1;
  ushort uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TQuat<double> *pTVar12;
  FSparseArrayAllocationInfo *pFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ushort local_res10 [4];
  TReadOptional<double> local_148;
  longlong local_140;
  TRotator<double> local_108;
  FSparseArrayAllocationInfo local_f0;
  TQuat<double> local_d8 [5];
  
  dVar11 = _UNK_150689688;
  dVar10 = ___xmm_3ff00000000000003ff0000000000000;
  dVar9 = _UNK_150689518;
  dVar8 = ___xmm_00000000000000003ff0000000000000;
  uVar2 = param_1->Size;
  if ((ulonglong)uVar2 != 0) {
    local_140 = 0;
    local_148 = param_5;
    do {
      FSequenceInstance::FindSubInstance
                ((FSequenceInstance *)
                 ((ulonglong)*(ushort *)param_2 * 0x140 +
                 *(longlong *)&this->InstanceRegistry->Instances),
                 (FMovieSceneSequenceID)(uint)local_res10);
      if (local_res10[0] != 0xffff) {
        if (param_6 == (TReadOptional<double>)0x0) {
          uVar18 = 0;
          uVar19 = 0;
        }
        else {
          uVar1 = *(undefined8 *)(((longlong)param_6 - (longlong)param_5) + (longlong)local_148);
          uVar18 = (undefined4)uVar1;
          uVar19 = (undefined4)((ulonglong)uVar1 >> 0x20);
        }
        if (param_5 == (TReadOptional<double>)0x0) {
          uVar16 = 0;
          uVar17 = 0;
        }
        else {
          uVar16 = (undefined4)*(undefined8 *)local_148;
          uVar17 = (undefined4)((ulonglong)*(undefined8 *)local_148 >> 0x20);
        }
        if (param_4 == (TReadOptional<double>)0x0) {
          uVar14 = 0;
          uVar15 = 0;
        }
        else {
          uVar1 = *(undefined8 *)((longlong)local_148 + ((longlong)param_4 - (longlong)param_5));
          uVar14 = (undefined4)uVar1;
          uVar15 = (undefined4)((ulonglong)uVar1 >> 0x20);
        }
        if (param_7 == (TReadOptional<double>)0x0) {
          local_108.Roll = 0.0;
        }
        else {
          local_108.Roll =
               *(double *)((longlong)local_148 + ((longlong)param_7 - (longlong)param_5));
        }
        if (param_9 == (TReadOptional<double>)0x0) {
          local_108.Yaw = 0.0;
        }
        else {
          local_108.Yaw = *(double *)((longlong)local_148 + ((longlong)param_9 - (longlong)param_5))
          ;
        }
        if (param_8 == (TReadOptional<double>)0x0) {
          local_108.Pitch = 0.0;
        }
        else {
          local_108.Pitch =
               *(double *)((longlong)local_148 + ((longlong)param_8 - (longlong)param_5));
        }
        pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_108,local_d8);
        dVar4 = pTVar12->X;
        dVar5 = pTVar12->Y;
        dVar6 = pTVar12->Z;
        dVar7 = pTVar12->W;
        pFVar13 = TSparseArrayBase<96,16,FDefaultSparseArrayAllocator>::InsertUninitialized
                            ((TSparseArrayBase<96,16,FDefaultSparseArrayAllocator> *)
                             this->TransformOriginsByInstanceID,&local_f0,(uint)local_res10[0]);
        pdVar3 = pFVar13->Pointer;
        if (pdVar3 != (double *)0x0) {
          *pdVar3 = dVar4;
          pdVar3[1] = dVar5;
          pdVar3[2] = dVar6;
          pdVar3[3] = dVar7;
          *(undefined4 *)(pdVar3 + 4) = uVar14;
          *(undefined4 *)((longlong)pdVar3 + 0x24) = uVar15;
          *(undefined4 *)(pdVar3 + 5) = uVar16;
          *(undefined4 *)((longlong)pdVar3 + 0x2c) = uVar17;
          pdVar3[6] = (double)CONCAT44(uVar19,uVar18);
          pdVar3[7] = 0.0;
          pdVar3[8] = dVar10;
          pdVar3[9] = dVar11;
          pdVar3[10] = dVar8;
          pdVar3[0xb] = dVar9;
        }
      }
      param_2 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_2 + 4);
      local_148 = (TReadOptional<double>)((longlong)local_148 + 8);
      local_140 = local_140 + 1;
    } while (local_140 < (longlong)(ulonglong)uVar2);
  }
  return;
}

// PostTask @ 146853230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FGatherTransformOriginsFromSubscenes::PostTask
          (FGatherTransformOriginsFromSubscenes *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_> *pTVar4;
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  FSparseArrayAllocationInfo *pFVar22;
  TTransform<double> *pTVar23;
  longlong lVar24;
  undefined1 *puVar25;
  uint uVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  undefined1 local_res8 [8];
  FSparseArrayAllocationInfo local_38;
  
  pTVar4 = this->InstanceHandleToParentHandle;
  iVar3 = pTVar4->ArrayNum;
  pFVar28 = (pTVar4->AllocatorInstance).Data;
  pFVar1 = pFVar28 + (longlong)iVar3 * 0xc;
LAB_146853264:
  do {
    if (pTVar4->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstanceToParentPair,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar28 == pFVar1) {
      return;
    }
    uVar2 = *(ulonglong *)pFVar28;
    pTVar5 = this->TransformOriginsByInstanceID;
    uVar27 = uVar2 >> 0x20 & 0xffff;
    uVar26 = (uint)uVar27;
    if ((int)uVar26 < *(int *)&pTVar5->field_0x28) {
      if (*(int *)&pTVar5->field_0x28 <= (int)uVar26) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L"");
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      puVar25 = &pTVar5->field_0x10;
      if (*(undefined1 **)&pTVar5->field_0x20 != (undefined1 *)0x0) {
        puVar25 = *(undefined1 **)&pTVar5->field_0x20;
      }
      if ((*(uint *)(puVar25 + (uVar27 >> 5) * 4) >> (uVar26 & 0x1f) & 1) != 0) {
        pTVar5 = this->TransformOriginsByInstanceID;
        uVar26 = (uint)(uVar2 & 0xffff);
        if ((int)uVar26 < *(int *)&pTVar5->field_0x28) {
          if (*(int *)&pTVar5->field_0x28 <= (int)uVar26) {
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L"");
            if (bVar21) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          puVar25 = &pTVar5->field_0x10;
          if (*(undefined1 **)&pTVar5->field_0x20 != (undefined1 *)0x0) {
            puVar25 = *(undefined1 **)&pTVar5->field_0x20;
          }
          if ((*(uint *)(puVar25 + ((uVar2 & 0xffff) >> 5) * 4) >> (uVar26 & 0x1f) & 1) != 0) {
            pTVar23 = (TTransform<double> *)
                      ((uVar2 & 0xffff) * 0x60 + *(longlong *)this->TransformOriginsByInstanceID);
            UE::Math::TTransform<double>::Multiply
                      (pTVar23,pTVar23,
                       (TTransform<double> *)
                       ((uVar2 >> 0x20 & 0xffff) * 0x60 +
                       *(longlong *)this->TransformOriginsByInstanceID));
            pFVar28 = pFVar28 + 0xc;
            goto LAB_146853264;
          }
        }
        pFVar6 = (((TSparseArrayBase<96,16,FDefaultSparseArrayAllocator> *)
                  this->TransformOriginsByInstanceID)->Data).AllocatorInstance.Data;
        lVar24 = (uVar2 >> 0x20 & 0xffff) * 0x60;
        uVar9 = *(undefined8 *)(pFVar6 + lVar24);
        uVar10 = *(undefined8 *)(pFVar6 + lVar24 + 8);
        uVar11 = *(undefined8 *)(pFVar6 + lVar24 + 0x10);
        uVar12 = *(undefined8 *)(pFVar6 + lVar24 + 0x10 + 8);
        uVar13 = *(undefined8 *)(pFVar6 + lVar24 + 0x20);
        uVar14 = *(undefined8 *)(pFVar6 + lVar24 + 0x20 + 8);
        uVar15 = *(undefined8 *)(pFVar6 + lVar24 + 0x30);
        uVar16 = *(undefined8 *)(pFVar6 + lVar24 + 0x30 + 8);
        uVar17 = *(undefined8 *)(pFVar6 + lVar24 + 0x40);
        uVar18 = *(undefined8 *)(pFVar6 + lVar24 + 0x40 + 8);
        uVar19 = *(undefined8 *)(pFVar6 + lVar24 + 0x50);
        uVar20 = *(undefined8 *)(pFVar6 + lVar24 + 0x50 + 8);
        pFVar22 = TSparseArrayBase<96,16,FDefaultSparseArrayAllocator>::InsertUninitialized
                            ((TSparseArrayBase<96,16,FDefaultSparseArrayAllocator> *)
                             this->TransformOriginsByInstanceID,&local_38,(uint)uVar2 & 0xffff);
        puVar7 = pFVar22->Pointer;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = uVar9;
          puVar7[1] = uVar10;
          puVar7[2] = uVar11;
          puVar7[3] = uVar12;
          puVar7[4] = uVar13;
          puVar7[5] = uVar14;
          puVar7[6] = uVar15;
          puVar7[7] = uVar16;
          puVar7[8] = uVar17;
          puVar7[9] = uVar18;
          puVar7[10] = uVar19;
          puVar7[0xb] = uVar20;
        }
      }
    }
    pFVar28 = pFVar28 + 0xc;
  } while( true );
}

