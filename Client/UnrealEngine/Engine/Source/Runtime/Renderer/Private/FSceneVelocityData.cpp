// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetComponentPreviousLocalToWorld @ 14543d020

bool __thiscall
FSceneVelocityData::GetComponentPreviousLocalToWorld
          (FSceneVelocityData *this,FPrimitiveComponentId param_1,TMatrix<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  
  if (*(int *)&(this->ComponentData).field_0x8 != *(int *)&(this->ComponentData).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ComponentData).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ComponentData).field_0x38;
    }
    uVar5 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->ComponentData).field_0x48 - 1U & param_1.PrimIDValue
                               ) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar5 * 0x150 + *(longlong *)&this->ComponentData);
        if (*puVar6 == param_1.PrimIDValue) {
          puVar7 = puVar6 + 4;
          if (puVar6 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 == (uint *)0x0) {
            return false;
          }
          if (*(longlong *)puVar7 == 0) {
            return false;
          }
          if (((char)puVar7[0x48] == '\0') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("VelocityData->bPreviousLocalToWorldValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                                 ,0x9e8,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          dVar2 = *(double *)(puVar7 + 0x26);
          *(ulong64 *)(puVar7 + 0x44) = this->InternalFrameIndex;
          param_2->M[0][0] = *(double *)(puVar7 + 0x24);
          param_2->M[0][1] = dVar2;
          dVar2 = *(double *)(puVar7 + 0x2a);
          param_2->M[0][2] = *(double *)(puVar7 + 0x28);
          param_2->M[0][3] = dVar2;
          dVar2 = *(double *)(puVar7 + 0x2e);
          param_2->M[1][0] = *(double *)(puVar7 + 0x2c);
          param_2->M[1][1] = dVar2;
          dVar2 = *(double *)(puVar7 + 0x32);
          param_2->M[1][2] = *(double *)(puVar7 + 0x30);
          param_2->M[1][3] = dVar2;
          dVar2 = *(double *)(puVar7 + 0x36);
          param_2->M[2][0] = *(double *)(puVar7 + 0x34);
          param_2->M[2][1] = dVar2;
          dVar2 = *(double *)(puVar7 + 0x3a);
          param_2->M[2][2] = *(double *)(puVar7 + 0x38);
          param_2->M[2][3] = dVar2;
          dVar2 = *(double *)(puVar7 + 0x3e);
          param_2->M[3][0] = *(double *)(puVar7 + 0x3c);
          param_2->M[3][1] = dVar2;
          dVar2 = *(double *)(puVar7 + 0x42);
          param_2->M[3][2] = *(double *)(puVar7 + 0x40);
          param_2->M[3][3] = dVar2;
          return true;
        }
        uVar5 = puVar6[0x50];
      } while (uVar5 != 0xffffffff);
    }
  }
  return false;
}

// StartFrame @ 1454507d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneVelocityData::StartFrame(FSceneVelocityData *this,FScene *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  FPrimitiveSceneInfo *this_00;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  this->InternalFrameIndex = this->InternalFrameIndex + 1;
  uVar3 = this->InternalFrameIndex;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar3;
  lVar11 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar5,8);
  TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
              *)&this->ComponentData);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar12 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
              *)&this->ComponentData;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lVar13 = (longlong)(int)uVar12 * 0x150;
      lVar4 = *local_58;
      puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar4);
      uVar6 = puVar1[1];
      *(undefined1 *)(lVar13 + 0x130 + lVar4) = 1;
      puVar2 = (undefined8 *)(lVar13 + 0x30 + lVar4);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      puVar2 = (undefined8 *)(lVar13 + 0xa0 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar4);
      uVar6 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0xb0 + lVar4);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1 = (undefined8 *)(lVar13 + 0x50 + lVar4);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0xc0 + lVar4);
      *puVar1 = uVar6;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)(lVar13 + 0x60 + lVar4);
      uVar6 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0xd0 + lVar4);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1 = (undefined8 *)(lVar13 + 0x70 + lVar4);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0xe0 + lVar4);
      *puVar1 = uVar6;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)(lVar13 + 0x80 + lVar4);
      uVar6 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0xf0 + lVar4);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1 = (undefined8 *)(lVar13 + 0x90 + lVar4);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x100 + lVar4);
      *puVar1 = uVar6;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)(lVar13 + 0x110 + lVar4);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      if ((this->InternalFrameIndex - *(longlong *)(lVar13 + 0x128 + lVar4) == 1) &&
         (this_00 = *(FPrimitiveSceneInfo **)(lVar13 + 0x10 + lVar4),
         this_00 != (FPrimitiveSceneInfo *)0x0)) {
        FPrimitiveSceneInfo::RequestUniformBufferUpdate(this_00);
        FPrimitiveSceneInfo::RequestGPUSceneUpdate(this_00,ChangedTransform);
      }
      if ((uVar3 + ((uVar3 - lVar11 >> 1) + lVar11 >> 6) * -100 == 0) &&
         (10 < this->InternalFrameIndex - *(longlong *)(lVar13 + 0x120 + lVar4))) {
        lVar4 = *(longlong *)(lVar13 + 0x10 + lVar4);
        if (lVar4 != 0) {
          FGPUScene::AddPrimitiveToUpdate
                    (&param_1->GPUScene,(FPersistentPrimitiveIndex)*(int *)(lVar4 + 0x18c),
                     ChangedOther);
        }
        TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_30,(int)uVar12);
        local_20 = '\x01';
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar12 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar14 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar14 < 4) {
        iVar10 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_28->HashSize < iVar10)) || (iVar10 < local_28->HashSize)) {
        local_28->HashSize = iVar10;
        TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// UpdateTransform @ 145463940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSceneVelocityData::UpdateTransform
          (FSceneVelocityData *this,FPrimitiveSceneInfo *param_1,TMatrix<double> *param_2,
          TMatrix<double> *param_3)

{
  uchar uVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FComponentVelocityData *pFVar5;
  
  uVar1 = (param_1->Proxy->Mobility).Value;
  if (((uVar1 != '\x02') && (uVar1 != '\x01')) && (param_1->Proxy->bIsBeingMovedByEditor == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimitiveSceneInfo->Proxy->HasDynamicTransform()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                       ,0x9f6,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = TMapBase<FPrimitiveComponentId,FComponentVelocityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>_>
           ::FindOrAddImpl<FPrimitiveComponentId_const_&>
                     ((TMapBase<FPrimitiveComponentId,FComponentVelocityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>_>
                       *)&this->ComponentData,(param_1->PrimitiveComponentId).PrimIDValue,
                      &param_1->PrimitiveComponentId);
  dVar3 = param_2->M[0][1];
  (pFVar5->LocalToWorld).M[0][0] = param_2->M[0][0];
  (pFVar5->LocalToWorld).M[0][1] = dVar3;
  bVar4 = pFVar5->bPreviousLocalToWorldValid;
  dVar3 = param_2->M[0][3];
  (pFVar5->LocalToWorld).M[0][2] = param_2->M[0][2];
  (pFVar5->LocalToWorld).M[0][3] = dVar3;
  dVar3 = param_2->M[1][1];
  (pFVar5->LocalToWorld).M[1][0] = param_2->M[1][0];
  (pFVar5->LocalToWorld).M[1][1] = dVar3;
  dVar3 = param_2->M[1][3];
  (pFVar5->LocalToWorld).M[1][2] = param_2->M[1][2];
  (pFVar5->LocalToWorld).M[1][3] = dVar3;
  dVar3 = param_2->M[2][1];
  (pFVar5->LocalToWorld).M[2][0] = param_2->M[2][0];
  (pFVar5->LocalToWorld).M[2][1] = dVar3;
  dVar3 = param_2->M[2][3];
  (pFVar5->LocalToWorld).M[2][2] = param_2->M[2][2];
  (pFVar5->LocalToWorld).M[2][3] = dVar3;
  dVar3 = param_2->M[3][1];
  (pFVar5->LocalToWorld).M[3][0] = param_2->M[3][0];
  (pFVar5->LocalToWorld).M[3][1] = dVar3;
  dVar3 = param_2->M[3][3];
  (pFVar5->LocalToWorld).M[3][2] = param_2->M[3][2];
  (pFVar5->LocalToWorld).M[3][3] = dVar3;
  pFVar5->LastFrameUsed = this->InternalFrameIndex;
  pFVar5->LastFrameUpdated = this->InternalFrameIndex;
  pFVar5->PrimitiveSceneInfo = param_1;
  if (bVar4 == false) {
    dVar3 = param_3->M[0][1];
    (pFVar5->PreviousLocalToWorld).M[0][0] = param_3->M[0][0];
    (pFVar5->PreviousLocalToWorld).M[0][1] = dVar3;
    dVar3 = param_3->M[0][3];
    (pFVar5->PreviousLocalToWorld).M[0][2] = param_3->M[0][2];
    (pFVar5->PreviousLocalToWorld).M[0][3] = dVar3;
    dVar3 = param_3->M[1][1];
    (pFVar5->PreviousLocalToWorld).M[1][0] = param_3->M[1][0];
    (pFVar5->PreviousLocalToWorld).M[1][1] = dVar3;
    dVar3 = param_3->M[1][3];
    (pFVar5->PreviousLocalToWorld).M[1][2] = param_3->M[1][2];
    (pFVar5->PreviousLocalToWorld).M[1][3] = dVar3;
    dVar3 = param_3->M[2][1];
    (pFVar5->PreviousLocalToWorld).M[2][0] = param_3->M[2][0];
    (pFVar5->PreviousLocalToWorld).M[2][1] = dVar3;
    dVar3 = param_3->M[2][3];
    (pFVar5->PreviousLocalToWorld).M[2][2] = param_3->M[2][2];
    (pFVar5->PreviousLocalToWorld).M[2][3] = dVar3;
    dVar3 = param_3->M[3][1];
    (pFVar5->PreviousLocalToWorld).M[3][0] = param_3->M[3][0];
    (pFVar5->PreviousLocalToWorld).M[3][1] = dVar3;
    dVar3 = param_3->M[3][3];
    (pFVar5->PreviousLocalToWorld).M[3][2] = param_3->M[3][2];
    (pFVar5->PreviousLocalToWorld).M[3][3] = dVar3;
    pFVar5->bPreviousLocalToWorldValid = true;
  }
  return;
}

