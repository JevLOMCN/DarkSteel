// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 15

// SerializeChaosBuffers<ChaosInterface::FOverlapHit> @ 1441460c0

void __thiscall
FSQCapture::SerializeChaosBuffers<ChaosInterface::FOverlapHit>
          (FSQCapture *this,FChaosArchive *param_1,int param_2,
          FSQHitBuffer<ChaosInterface::FOverlapHit> *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  TArray<ChaosInterface::FOverlapHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined8 *puVar4;
  double *pdVar5;
  ulonglong *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<ChaosInterface::FOverlapHit> FVar11;
  uint uVar12;
  longlong *plVar13;
  ForElementType<ChaosInterface::FOverlapHit> FVar14;
  uint uVar15;
  longlong *plVar16;
  char cVar17;
  uint local_res10 [2];
  uint local_res20 [2];
  FQueryHit local_e8;
  FQueryHit local_b0;
  FQueryHit local_78;
  
  puVar6 = (ulonglong *)param_1->_padding_;
  cVar17 = param_3->bHasBlockingHit;
  plVar16 = (longlong *)0x0;
  plVar1 = &param_1->_padding_;
  puVar2 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar2) {
    local_res20[0] = 0;
    if ((*plVar1 & 1) == 0) {
      local_res20[0] = (uint)((bool)cVar17 != false);
    }
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,4);
    if (1 < local_res20[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar15 = local_res20[0];
    if ((*plVar1 & 1) == 0) goto LAB_144146150;
  }
  else {
    uVar15 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar2;
  }
  cVar17 = uVar15 != 0;
LAB_144146150:
  if (cVar17 != '\0') {
    if ((*plVar1 & 1) == 0) {
      plVar13 = plVar16;
      if (param_3->bHasBlockingHit != false) {
        iVar9 = (param_3->Hits).ArrayNum;
        uVar12 = iVar9 - 1;
        uVar15 = 0;
        if ((int)uVar12 < iVar9) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar11 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
          FVar11 = (ForElementType<ChaosInterface::FOverlapHit>)&param_3->Hits;
        }
        plVar13 = (longlong *)((longlong)FVar11 + (longlong)((param_3->Hits).ArrayNum + -1) * 0x38);
      }
      local_78._padding_ = *plVar13;
      local_78._padding_ = plVar13[1];
      local_78._16_8_ = plVar13[2];
      local_78.FaceNormal.field0_0x0._s_0.X = (double)plVar13[3];
      local_78.FaceNormal.field0_0x0._s_0.Y = (double)plVar13[4];
      local_78.FaceNormal.field0_0x0._s_0.Z = (double)plVar13[5];
      local_78._48_8_ = plVar13[6];
      ChaosInterface::FQueryHit::Serialize(&local_78,param_1);
    }
    else {
      local_b0.FaceNormal.field0_0x0._s_0.Z = 0.0;
      local_b0.FaceIndex = -1;
      local_b0.ElementIndex = -1;
      local_b0.FaceNormal.field0_0x0._s_0.X = 0.0;
      local_b0.FaceNormal.field0_0x0._s_0.Y = 0.0;
      ChaosInterface::FQueryHit::Serialize(&local_b0,param_1);
      param_3->bHasBlockingHit = true;
      *(longlong *)&param_3->CurrentBlockingHit = local_b0._padding_;
      *(longlong *)&(param_3->CurrentBlockingHit).field_0x8 = local_b0._padding_;
      *(ulonglong *)&(param_3->CurrentBlockingHit).field_0x10 =
           CONCAT44(local_b0._20_4_,local_b0.FaceIndex);
      *(double *)&(param_3->CurrentBlockingHit).field_0x18 = local_b0.FaceNormal.field0_0x0._s_0.X;
      *(double *)&(param_3->CurrentBlockingHit).field_0x20 = local_b0.FaceNormal.field0_0x0._s_0.Y;
      *(double *)&(param_3->CurrentBlockingHit).field_0x28 = local_b0.FaceNormal.field0_0x0._s_0.Z;
      *(ulonglong *)&(param_3->CurrentBlockingHit).field_0x30 =
           CONCAT44(local_b0._52_4_,local_b0.ElementIndex);
    }
  }
  plVar13 = (longlong *)param_1->_padding_;
  local_res10[0] = (param_3->Hits).ArrayNum;
  if ((uint *)plVar13[1] < (uint *)*plVar13 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar13;
    *plVar13 = *plVar13 + 4;
  }
  if (0 < (int)local_res10[0]) {
    pTVar3 = &param_3->Hits;
    do {
      if ((*plVar1 & 1) == 0) {
        FVar11 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
          FVar11 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar3;
        }
        ChaosInterface::FQueryHit::Serialize
                  ((FQueryHit *)((longlong)FVar11 + (longlong)(int)plVar16 * 0x38),param_1);
      }
      else {
        local_e8.FaceNormal.field0_0x0._s_0.Z = 0.0;
        local_e8.FaceIndex = -1;
        local_e8.ElementIndex = -1;
        local_e8.FaceNormal.field0_0x0._s_0.X = 0.0;
        local_e8.FaceNormal.field0_0x0._s_0.Y = 0.0;
        ChaosInterface::FQueryHit::Serialize(&local_e8,param_1);
        FVar11 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
          FVar11 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar3;
        }
        if ((((ulonglong)FVar11 <= &local_e8) &&
            (&local_e8 < (FQueryHit *)((longlong)(param_3->Hits).ArrayMax * 0x38 + (longlong)FVar11)
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (param_3->Hits).ArrayNum;
        if (iVar9 == (param_3->Hits).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FOverlapHit>_>
                            (0x838,&pTVar3->AllocatorInstance,&(param_3->Hits).ArrayMax);
          (param_3->Hits).ArrayNum = iVar9;
        }
        (param_3->Hits).ArrayNum = iVar9 + 1;
        FVar11 = (param_3->Hits).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<ChaosInterface::FOverlapHit>)pTVar3;
        if (FVar11 != (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
          FVar14 = FVar11;
        }
        lVar10 = (longlong)iVar9 * 0x38;
        *(longlong *)(lVar10 + (longlong)FVar14) = local_e8._padding_;
        ((longlong *)(lVar10 + (longlong)FVar14))[1] = local_e8._padding_;
        puVar4 = (undefined8 *)(lVar10 + 0x10 + (longlong)FVar14);
        *puVar4 = CONCAT44(local_e8._20_4_,local_e8.FaceIndex);
        puVar4[1] = local_e8.FaceNormal.field0_0x0._s_0.X;
        pdVar5 = (double *)(lVar10 + 0x20 + (longlong)FVar14);
        *pdVar5 = local_e8.FaceNormal.field0_0x0._s_0.Y;
        pdVar5[1] = local_e8.FaceNormal.field0_0x0._s_0.Z;
        *(ulonglong *)(lVar10 + 0x30 + (longlong)FVar14) =
             CONCAT44(local_e8._52_4_,local_e8.ElementIndex);
      }
      uVar15 = (int)plVar16 + 1;
      plVar16 = (longlong *)(ulonglong)uVar15;
    } while ((int)uVar15 < (int)local_res10[0]);
  }
  return;
}

// SerializeChaosBuffers<ChaosInterface::FRaycastHit> @ 144146440

void __thiscall
FSQCapture::SerializeChaosBuffers<ChaosInterface::FRaycastHit>
          (FSQCapture *this,FChaosArchive *param_1,int param_2,
          FSQHitBuffer<ChaosInterface::FRaycastHit> *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  TArray<ChaosInterface::FRaycastHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ForElementType<ChaosInterface::FRaycastHit> FVar10;
  uint uVar11;
  longlong *plVar12;
  ForElementType<ChaosInterface::FRaycastHit> FVar13;
  longlong *plVar14;
  uint uVar15;
  char cVar16;
  uint local_res10 [4];
  uint local_res20 [2];
  FRaycastHit local_1c8;
  FRaycastHit local_148;
  FRaycastHit local_c8;
  
  puVar5 = (ulonglong *)param_1->_padding_;
  cVar16 = param_3->bHasBlockingHit;
  plVar14 = (longlong *)0x0;
  plVar1 = &param_1->_padding_;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res20[0] = 0;
    if ((*plVar1 & 1) == 0) {
      local_res20[0] = (uint)((bool)cVar16 != false);
    }
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,4);
    if (1 < local_res20[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar15 = local_res20[0];
    if ((*plVar1 & 1) == 0) goto LAB_1441464e8;
  }
  else {
    uVar15 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  cVar16 = uVar15 != 0;
LAB_1441464e8:
  if (cVar16 != '\0') {
    if ((*plVar1 & 1) == 0) {
      plVar12 = plVar14;
      if (param_3->bHasBlockingHit != false) {
        iVar8 = (param_3->Hits).ArrayNum;
        uVar11 = iVar8 - 1;
        uVar15 = 0;
        if ((int)uVar11 < iVar8) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar10 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
          FVar10 = (ForElementType<ChaosInterface::FRaycastHit>)&param_3->Hits;
        }
        plVar12 = (longlong *)((longlong)FVar10 + (longlong)((param_3->Hits).ArrayNum + -1) * 0x80);
      }
      local_c8._padding_ = *plVar12;
      local_c8._padding_ = plVar12[1];
      local_c8._padding_ = plVar12[2];
      local_c8._padding_ = plVar12[3];
      local_c8._padding_ = plVar12[4];
      local_c8._padding_ = plVar12[5];
      local_c8._padding_ = plVar12[6];
      local_c8._padding_ = plVar12[7];
      local_c8._padding_ = plVar12[8];
      local_c8._padding_ = plVar12[9];
      local_c8._padding_ = plVar12[10];
      local_c8._padding_ = plVar12[0xb];
      local_c8._padding_ = plVar12[0xc];
      local_c8._padding_ = plVar12[0xd];
      local_c8._padding_ = plVar12[0xe];
      local_c8._120_8_ = plVar12[0xf];
      ChaosInterface::FRaycastHit::Serialize(&local_c8,param_1);
    }
    else {
      local_148._padding_ = 0;
      local_148._padding_ = 0;
      local_148._padding_ = 0;
      local_148._padding_._0_4_ = 0xffffffff;
      local_148._padding_._0_4_ = 0xffffffff;
      local_148._padding_._0_2_ = 0;
      ChaosInterface::FRaycastHit::Serialize(&local_148,param_1);
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      param_3->bHasBlockingHit = true;
      (param_3->CurrentBlockingHit)._padding_ =
           CONCAT44(local_148._padding_._4_4_,(undefined4)local_148._padding_);
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ =
           CONCAT44(local_148._padding_._4_4_,(undefined4)local_148._padding_);
      (param_3->CurrentBlockingHit)._padding_ =
           CONCAT62(local_148._padding_._2_6_,(undefined2)local_148._padding_);
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit)._padding_ = local_148._padding_;
      (param_3->CurrentBlockingHit).U = local_148.U;
      (param_3->CurrentBlockingHit).V = local_148.V;
    }
  }
  plVar12 = (longlong *)param_1->_padding_;
  local_res10[0] = (param_3->Hits).ArrayNum;
  if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar12;
    *plVar12 = *plVar12 + 4;
  }
  if (0 < (int)local_res10[0]) {
    pTVar3 = &param_3->Hits;
    do {
      if ((*plVar1 & 1) == 0) {
        FVar10 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
          FVar10 = (ForElementType<ChaosInterface::FRaycastHit>)pTVar3;
        }
        ChaosInterface::FRaycastHit::Serialize
                  ((FRaycastHit *)((longlong)FVar10 + (longlong)(int)plVar14 * 0x80),param_1);
      }
      else {
        local_1c8._padding_ = 0;
        local_1c8._padding_ = 0;
        local_1c8._padding_ = 0;
        local_1c8._padding_._0_4_ = 0xffffffff;
        local_1c8._padding_._0_4_ = 0xffffffff;
        local_1c8._padding_._0_2_ = 0;
        ChaosInterface::FRaycastHit::Serialize(&local_1c8,param_1);
        FVar10 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
          FVar10 = (ForElementType<ChaosInterface::FRaycastHit>)pTVar3;
        }
        if ((((ulonglong)FVar10 <= &local_1c8) &&
            (&local_1c8 <
             (FRaycastHit *)((longlong)(param_3->Hits).ArrayMax * 0x80 + (longlong)FVar10))) &&
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
        iVar8 = (param_3->Hits).ArrayNum;
        if (iVar8 == (param_3->Hits).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FRaycastHit>_>
                            (0x880,&pTVar3->AllocatorInstance,&(param_3->Hits).ArrayMax);
          (param_3->Hits).ArrayNum = iVar8;
        }
        (param_3->Hits).ArrayNum = iVar8 + 1;
        FVar10 = (param_3->Hits).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<ChaosInterface::FRaycastHit>)pTVar3;
        if (FVar10 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
          FVar13 = FVar10;
        }
        lVar9 = (longlong)iVar8 * 0x80;
        *(longlong *)(lVar9 + (longlong)FVar13) = local_1c8._padding_;
        ((longlong *)(lVar9 + (longlong)FVar13))[1] = local_1c8._padding_;
        puVar4 = (undefined8 *)(lVar9 + 0x10 + (longlong)FVar13);
        *puVar4 = CONCAT44(local_1c8._padding_._4_4_,(undefined4)local_1c8._padding_);
        puVar4[1] = local_1c8._padding_;
        plVar12 = (longlong *)(lVar9 + 0x20 + (longlong)FVar13);
        *plVar12 = local_1c8._padding_;
        plVar12[1] = local_1c8._padding_;
        puVar4 = (undefined8 *)(lVar9 + 0x30 + (longlong)FVar13);
        *puVar4 = CONCAT44(local_1c8._padding_._4_4_,(undefined4)local_1c8._padding_);
        puVar4[1] = CONCAT62(local_1c8._padding_._2_6_,(undefined2)local_1c8._padding_);
        plVar12 = (longlong *)(lVar9 + 0x40 + (longlong)FVar13);
        *plVar12 = local_1c8._padding_;
        plVar12[1] = local_1c8._padding_;
        plVar12 = (longlong *)(lVar9 + 0x50 + (longlong)FVar13);
        *plVar12 = local_1c8._padding_;
        plVar12[1] = local_1c8._padding_;
        plVar12 = (longlong *)(lVar9 + 0x60 + (longlong)FVar13);
        *plVar12 = local_1c8._padding_;
        plVar12[1] = local_1c8._padding_;
        plVar12 = (longlong *)(lVar9 + 0x70 + (longlong)FVar13);
        *plVar12 = local_1c8._padding_;
        plVar12[1] = local_1c8._120_8_;
      }
      uVar15 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar15;
    } while ((int)uVar15 < (int)local_res10[0]);
  }
  return;
}

// SerializeChaosBuffers<ChaosInterface::FSweepHit> @ 144146870

void __thiscall
FSQCapture::SerializeChaosBuffers<ChaosInterface::FSweepHit>
          (FSQCapture *this,FChaosArchive *param_1,int param_2,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  TArray<ChaosInterface::FSweepHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined8 *puVar4;
  double *pdVar5;
  ulonglong *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<ChaosInterface::FSweepHit> FVar11;
  uint uVar12;
  longlong *plVar13;
  ForElementType<ChaosInterface::FSweepHit> FVar14;
  longlong *plVar15;
  uint uVar16;
  char cVar17;
  uint local_res10 [4];
  uint local_res20 [2];
  FLocationHit local_1c8;
  FLocationHit local_148;
  FLocationHit local_c8;
  
  puVar6 = (ulonglong *)param_1->_padding_;
  cVar17 = param_3->bHasBlockingHit;
  plVar15 = (longlong *)0x0;
  plVar1 = &param_1->_padding_;
  puVar2 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar2) {
    local_res20[0] = 0;
    if ((*plVar1 & 1) == 0) {
      local_res20[0] = (uint)((bool)cVar17 != false);
    }
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,4);
    if (1 < local_res20[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar16 = local_res20[0];
    if ((*plVar1 & 1) == 0) goto LAB_14414691a;
  }
  else {
    uVar16 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar2;
  }
  cVar17 = uVar16 != 0;
LAB_14414691a:
  if (cVar17 != '\0') {
    if ((*plVar1 & 1) == 0) {
      plVar13 = plVar15;
      if (param_3->bHasBlockingHit != false) {
        iVar9 = (param_3->Hits).ArrayNum;
        uVar12 = iVar9 - 1;
        uVar16 = 0;
        if ((int)uVar12 < iVar9) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar11 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
          FVar11 = (ForElementType<ChaosInterface::FSweepHit>)&param_3->Hits;
        }
        plVar13 = (longlong *)((longlong)FVar11 + (longlong)((param_3->Hits).ArrayNum + -1) * 0x78);
      }
      local_c8._padding_ = *plVar13;
      local_c8._padding_ = plVar13[1];
      local_c8._padding_ = plVar13[2];
      local_c8._padding_ = plVar13[3];
      local_c8._padding_ = plVar13[4];
      local_c8._padding_ = plVar13[5];
      local_c8._padding_ = plVar13[6];
      local_c8._56_8_ = plVar13[7];
      local_c8.WorldPosition.field0_0x0._s_0.X = (double)plVar13[8];
      local_c8.WorldPosition.field0_0x0._s_0.Y = (double)plVar13[9];
      local_c8.WorldPosition.field0_0x0._s_0.Z = (double)plVar13[10];
      local_c8.WorldNormal.field0_0x0._s_0.X = (double)plVar13[0xb];
      local_c8.WorldNormal.field0_0x0._s_0.Y = (double)plVar13[0xc];
      local_c8.WorldNormal.field0_0x0._s_0.Z = (double)plVar13[0xd];
      local_c8._112_8_ = plVar13[0xe];
      ChaosInterface::FLocationHit::Serialize(&local_c8,param_1);
    }
    else {
      local_148._padding_ = 0;
      local_148._padding_ = 0;
      local_148._padding_ = 0;
      local_148._padding_._0_4_ = 0xffffffff;
      local_148._padding_._0_4_ = 0xffffffff;
      local_148.Flags.HitFlags = None;
      ChaosInterface::FLocationHit::Serialize(&local_148,param_1);
      *(longlong *)&param_3->CurrentBlockingHit = local_148._padding_;
      *(longlong *)&(param_3->CurrentBlockingHit).field_0x8 = local_148._padding_;
      param_3->bHasBlockingHit = true;
      *(ulonglong *)&(param_3->CurrentBlockingHit).field_0x10 =
           CONCAT44(local_148._padding_._4_4_,(undefined4)local_148._padding_);
      *(longlong *)&(param_3->CurrentBlockingHit).field_0x18 = local_148._padding_;
      *(longlong *)&(param_3->CurrentBlockingHit).field_0x20 = local_148._padding_;
      *(longlong *)&(param_3->CurrentBlockingHit).field_0x28 = local_148._padding_;
      *(ulonglong *)&(param_3->CurrentBlockingHit).field_0x30 =
           CONCAT44(local_148._padding_._4_4_,(undefined4)local_148._padding_);
      *(ulonglong *)&(param_3->CurrentBlockingHit).field_0x38 =
           CONCAT62(local_148._58_6_,local_148.Flags.HitFlags);
      *(double *)&(param_3->CurrentBlockingHit).field_0x40 =
           local_148.WorldPosition.field0_0x0._s_0.X;
      *(double *)&(param_3->CurrentBlockingHit).field_0x48 =
           local_148.WorldPosition.field0_0x0._s_0.Y;
      *(double *)&(param_3->CurrentBlockingHit).field_0x50 =
           local_148.WorldPosition.field0_0x0._s_0.Z;
      *(double *)&(param_3->CurrentBlockingHit).field_0x58 = local_148.WorldNormal.field0_0x0._s_0.X
      ;
      *(double *)&(param_3->CurrentBlockingHit).field_0x60 = local_148.WorldNormal.field0_0x0._s_0.Y
      ;
      *(double *)&(param_3->CurrentBlockingHit).field_0x68 = local_148.WorldNormal.field0_0x0._s_0.Z
      ;
      *(float *)&(param_3->CurrentBlockingHit).field_0x70 = local_148.Distance;
      *(undefined4 *)&(param_3->CurrentBlockingHit).field_0x74 = local_148._116_4_;
    }
  }
  plVar13 = (longlong *)param_1->_padding_;
  local_res10[0] = (param_3->Hits).ArrayNum;
  if ((uint *)plVar13[1] < (uint *)*plVar13 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar13;
    *plVar13 = *plVar13 + 4;
  }
  if (0 < (int)local_res10[0]) {
    pTVar3 = &param_3->Hits;
    do {
      if ((*plVar1 & 1) == 0) {
        FVar11 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
          FVar11 = (ForElementType<ChaosInterface::FSweepHit>)pTVar3;
        }
        ChaosInterface::FLocationHit::Serialize
                  ((FLocationHit *)((longlong)FVar11 + (longlong)(int)plVar15 * 0x78),param_1);
      }
      else {
        local_1c8._padding_ = 0;
        local_1c8._padding_ = 0;
        local_1c8._padding_ = 0;
        local_1c8._padding_._0_4_ = 0xffffffff;
        local_1c8._padding_._0_4_ = 0xffffffff;
        local_1c8.Flags.HitFlags = None;
        ChaosInterface::FLocationHit::Serialize(&local_1c8,param_1);
        FVar11 = (param_3->Hits).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
          FVar11 = (ForElementType<ChaosInterface::FSweepHit>)pTVar3;
        }
        if ((((ulonglong)FVar11 <= &local_1c8) &&
            (&local_1c8 <
             (FLocationHit *)((longlong)(param_3->Hits).ArrayMax * 0x78 + (longlong)FVar11))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (param_3->Hits).ArrayNum;
        if (iVar9 == (param_3->Hits).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FSweepHit>_>
                            (0x878,&pTVar3->AllocatorInstance,&(param_3->Hits).ArrayMax);
          (param_3->Hits).ArrayNum = iVar9;
        }
        (param_3->Hits).ArrayNum = iVar9 + 1;
        FVar11 = (param_3->Hits).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<ChaosInterface::FSweepHit>)pTVar3;
        if (FVar11 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
          FVar14 = FVar11;
        }
        lVar10 = (longlong)iVar9 * 0x78;
        *(longlong *)(lVar10 + (longlong)FVar14) = local_1c8._padding_;
        ((longlong *)(lVar10 + (longlong)FVar14))[1] = local_1c8._padding_;
        puVar4 = (undefined8 *)(lVar10 + 0x10 + (longlong)FVar14);
        *puVar4 = CONCAT44(local_1c8._padding_._4_4_,(undefined4)local_1c8._padding_);
        puVar4[1] = local_1c8._padding_;
        plVar13 = (longlong *)(lVar10 + 0x20 + (longlong)FVar14);
        *plVar13 = local_1c8._padding_;
        plVar13[1] = local_1c8._padding_;
        puVar4 = (undefined8 *)(lVar10 + 0x30 + (longlong)FVar14);
        *puVar4 = CONCAT44(local_1c8._padding_._4_4_,(undefined4)local_1c8._padding_);
        puVar4[1] = CONCAT62(local_1c8._58_6_,local_1c8.Flags.HitFlags);
        pdVar5 = (double *)(lVar10 + 0x40 + (longlong)FVar14);
        *pdVar5 = local_1c8.WorldPosition.field0_0x0._s_0.X;
        pdVar5[1] = local_1c8.WorldPosition.field0_0x0._s_0.Y;
        pdVar5 = (double *)(lVar10 + 0x50 + (longlong)FVar14);
        *pdVar5 = local_1c8.WorldPosition.field0_0x0._s_0.Z;
        pdVar5[1] = local_1c8.WorldNormal.field0_0x0._s_0.X;
        pdVar5 = (double *)(lVar10 + 0x60 + (longlong)FVar14);
        *pdVar5 = local_1c8.WorldNormal.field0_0x0._s_0.Y;
        pdVar5[1] = local_1c8.WorldNormal.field0_0x0._s_0.Z;
        *(undefined8 *)(lVar10 + 0x70 + (longlong)FVar14) = local_1c8._112_8_;
      }
      uVar16 = (int)plVar15 + 1;
      plVar15 = (longlong *)(ulonglong)uVar16;
    } while ((int)uVar16 < (int)local_res10[0]);
  }
  return;
}

// FSQCapture @ 1441a07d0

FSQCapture * __thiscall FSQCapture::FSQCapture(FSQCapture *this,FPhysTestSerializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->StartTM).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->StartTM).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTM).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTM).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->StartTM).Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
  ;
  (this->StartTM).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTM).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTM).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->StartTM).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->StartTM).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTM).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTM).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->OutputFlags).HitFlags = None;
  (this->QueryFilterData).data.word2 = 0;
  (this->QueryFilterData).data.word3 = 0;
  (this->QueryFilterData).data.word0 = 0;
  (this->QueryFilterData).data.word1 = 0;
  (this->QueryFilterData).flags.mBits = 3;
  (this->QueryFilterData).clientId = '\0';
  (this->FilterCallback).Ptr = (ICollisionQueryFilterCallbackBase *)0x0;
  (this->ChaosImplicitGeometry).Reference = (FImplicitObject *)0x0;
  (this->ChaosSweepBuffer)._padding_ =
       (longlong)&___7__FSQHitBuffer_UFSweepHit_ChaosInterface___ChaosInterface__6B_;
  *(undefined4 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x10 = 0xffffffff;
  *(undefined4 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x30 = 0xffffffff;
  *(undefined2 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x38 = 0;
  (this->ChaosSweepBuffer).AcceleratorDepth = 0;
  (this->ChaosSweepBuffer).bHasBlockingHit = false;
  (this->ChaosSweepBuffer).bSingleResult = false;
  (this->ChaosSweepBuffer).Hits.AllocatorInstance.SecondaryData =
       (ForElementType<ChaosInterface::FSweepHit>)0x0;
  *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x18 = 0;
  *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x20 = 0;
  *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x28 = 0;
  (this->ChaosSweepBuffer).Hits.ArrayNum = 0;
  (this->ChaosSweepBuffer).Hits.ArrayMax = 0x80;
  (this->ChaosRaycastBuffer)._padding_ =
       (longlong)&___7__FSQHitBuffer_UFRaycastHit_ChaosInterface___ChaosInterface__6B_;
  (this->ChaosSweepTouches).ArrayNum = 0;
  (this->ChaosSweepTouches).ArrayMax = 0;
  *(undefined4 *)&(this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = 0xffffffff;
  *(undefined4 *)&(this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = 0xffffffff;
  *(undefined2 *)&(this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = 0;
  (this->ChaosRaycastBuffer).AcceleratorDepth = 0;
  (this->ChaosRaycastBuffer).bHasBlockingHit = false;
  (this->ChaosRaycastBuffer).bSingleResult = false;
  (this->ChaosSweepTouches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChaosRaycastBuffer).Hits.AllocatorInstance.SecondaryData =
       (ForElementType<ChaosInterface::FRaycastHit>)0x0;
  (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = 0;
  (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = 0;
  (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = 0;
  (this->ChaosRaycastBuffer).Hits.ArrayNum = 0;
  (this->ChaosRaycastBuffer).Hits.ArrayMax = 0x80;
  (this->ChaosOverlapBuffer)._padding_ =
       (longlong)&___7__FSQHitBuffer_UFOverlapHit_ChaosInterface___ChaosInterface__6B_;
  (this->ChaosRaycastTouches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChaosRaycastTouches).ArrayNum = 0;
  (this->ChaosRaycastTouches).ArrayMax = 0;
  *(undefined4 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x10 = 0xffffffff;
  *(undefined4 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x30 = 0xffffffff;
  (this->ChaosOverlapBuffer).AcceleratorDepth = 0;
  (this->ChaosOverlapBuffer).bHasBlockingHit = false;
  (this->ChaosOverlapBuffer).bSingleResult = false;
  (this->ChaosOverlapBuffer).Hits.AllocatorInstance.SecondaryData =
       (ForElementType<ChaosInterface::FOverlapHit>)0x0;
  *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x18 = 0;
  *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x20 = 0;
  *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x28 = 0;
  (this->ChaosOverlapBuffer).Hits.ArrayNum = 0;
  (this->ChaosOverlapBuffer).Hits.ArrayMax = 0x80;
  (this->ChaosOverlapTouches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChaosOverlapTouches).ArrayNum = 0;
  (this->ChaosOverlapTouches).ArrayMax = 0;
  (this->ChaosOwnerObject).Ptr = (FImplicitObject *)0x0;
  (this->SerializableChaosGeometry).Ptr = (FImplicitObject *)0x0;
  (this->GeomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeomData).ArrayNum = 0;
  (this->GeomData).ArrayMax = 0;
  (this->HitData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitData).ArrayNum = 0;
  (this->HitData).ArrayMax = 0;
  this->PhysSerializer = param_1;
  *(undefined8 *)&this->ChaosActorToShapeHitsArray = 0;
  *(undefined8 *)&(this->ChaosActorToShapeHitsArray).field_0x8 = 0;
  *(undefined8 *)&(this->ChaosActorToShapeHitsArray).field_0x20 = 0;
  *(undefined4 *)&(this->ChaosActorToShapeHitsArray).field_0x28 = 0;
  *(undefined4 *)&(this->ChaosActorToShapeHitsArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChaosActorToShapeHitsArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChaosActorToShapeHitsArray).field_0x34 = 0;
  *(undefined8 *)&(this->ChaosActorToShapeHitsArray).field_0x40 = 0;
  *(undefined4 *)&(this->ChaosActorToShapeHitsArray).field_0x48 = 0;
  this->bDiskDataIsChaos = false;
  this->bChaosDataReady = false;
  this->bPhysXDataReady = false;
  return this;
}

// ~FSQCapture @ 1441a1a50

void __thiscall FSQCapture::~FSQCapture(FSQCapture *this)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FImplicitObject *pFVar4;
  ForElementType<ChaosInterface::FOverlapHit> FVar5;
  ForElementType<ChaosInterface::FRaycastHit> FVar6;
  ForElementType<ChaosInterface::FSweepHit> FVar7;
  ICollisionQueryFilterCallbackBase *pIVar8;
  longlong lVar9;
  
  *(undefined4 *)&(this->ChaosActorToShapeHitsArray).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChaosActorToShapeHitsArray).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChaosActorToShapeHitsArray);
  pFVar3 = (this->HitData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->GeomData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->SerializableChaosGeometry).Ptr;
  if (pFVar4 != (FImplicitObject *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar4 = (this->ChaosOwnerObject).Ptr;
  if (pFVar4 != (FImplicitObject *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar3 = (this->ChaosOverlapTouches).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->ChaosOverlapBuffer)._padding_ =
       (longlong)&___7__FSQHitBuffer_UFOverlapHit_ChaosInterface___ChaosInterface__6B_;
  FVar5 = (this->ChaosOverlapBuffer).Hits.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  pFVar3 = (this->ChaosRaycastTouches).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->ChaosRaycastBuffer)._padding_ =
       (longlong)&___7__FSQHitBuffer_UFRaycastHit_ChaosInterface___ChaosInterface__6B_;
  FVar6 = (this->ChaosRaycastBuffer).Hits.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  pFVar3 = (this->ChaosSweepTouches).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->ChaosSweepBuffer)._padding_ =
       (longlong)&___7__FSQHitBuffer_UFSweepHit_ChaosInterface___ChaosInterface__6B_;
  FVar7 = (this->ChaosSweepBuffer).Hits.AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  pFVar4 = (this->ChaosImplicitGeometry).Reference;
  if (pFVar4 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar4->_padding_;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar9 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pIVar8 = (this->FilterCallback).Ptr;
  if (pIVar8 != (ICollisionQueryFilterCallbackBase *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  return;
}

// CaptureChaosFilterResults @ 1441a7280

void __thiscall
FSQCapture::CaptureChaosFilterResults
          (FSQCapture *this,FPBDRigidsEvolutionGBF *param_1,FCollisionFilterData *param_2,
          ICollisionQueryFilterCallbackBase *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  TGeometryParticle<double,3> *pTVar4;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar5;
  undefined8 uVar6;
  code *pcVar7;
  FCollisionFilterData *pFVar8;
  ICollisionQueryFilterCallbackBase *pIVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  FScriptContainerElement FVar13;
  uint uVar14;
  int iVar15;
  TGeometryParticle<double,3> **ppTVar16;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar17;
  undefined1 local_res10 [8];
  FCollisionFilterData *local_res18;
  ICollisionQueryFilterCallbackBase *local_res20;
  uint local_88;
  TGeometryParticle<double,3> *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
  local_60 [2];
  
  local_68 = param_1->_padding_;
  local_88 = 0;
  local_70 = (longlong)*(int *)(local_68 + 0x6e8);
  if (0 < local_70) {
    local_78 = 0;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      lVar11 = local_68;
      lVar10 = local_78;
      uVar14 = 0;
      if ((int)local_88 < *(int *)(local_68 + 0x700)) {
        uVar14 = ~local_88 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar3 = *(undefined8 **)(*(longlong *)(lVar11 + 0x6f8) + lVar10 * 8);
      ppTVar16 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                           ((TGeometryParticlesImp<double,3,0> *)*puVar3,*(int *)(puVar3 + 1));
      pTVar4 = *ppTVar16;
      FVar17 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )&pTVar4->MShapesArray;
      uVar14 = (pTVar4->MShapesArray).ArrayNum;
      piVar1 = &(pTVar4->MShapesArray).ArrayNum;
      local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60[0].ArrayNum = 0;
      local_60[0].ArrayMax = 0;
      local_80 = pTVar4;
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      if (0 < (int)uVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar14,&local_60[0].AllocatorInstance,0,&local_60[0].ArrayMax);
      }
      pIVar9 = local_res20;
      pFVar8 = local_res18;
      FVar5 = (pTVar4->MShapesArray).AllocatorInstance.SecondaryData;
      iVar2 = *piVar1;
      if (FVar5 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                    )0x0) {
        FVar17 = FVar5;
      }
      FVar5 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )((longlong)FVar17 + (longlong)iVar2 * 8);
      while( true ) {
        if (*piVar1 != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (FVar17 == FVar5) break;
        FVar13 = (FScriptContainerElement)
                 (**(code **)((longlong)*pIVar9 + 0x20))
                           (pIVar9,pFVar8,*(undefined8 *)FVar17,local_80);
        uVar6 = *(undefined8 *)FVar17;
        iVar15 = local_60[0].ArrayNum;
        if (local_60[0].ArrayNum == local_60[0].ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_60[0].AllocatorInstance,&local_60[0].ArrayMax);
        }
        local_60[0].ArrayNum = iVar15 + 1;
        FVar17 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )((longlong)FVar17 + 8);
        *(undefined8 *)(local_60[0].AllocatorInstance.Data + (longlong)iVar15 * 0x10) = uVar6;
        local_60[0].AllocatorInstance.Data[(longlong)iVar15 * 0x10 + 8] = FVar13;
      }
      TMapBase<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
      ::
      Emplace<Chaos::TGeometryParticle<double,3>_*_const_&,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&>
                (&this->ChaosActorToShapeHitsArray,&local_80,local_60);
      lVar10 = local_78;
      if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].AllocatorInstance.Data);
      }
      local_88 = local_88 + 1;
      local_78 = lVar10 + 1;
    } while (local_78 < local_70);
  }
  return;
}

// EndCaptureChaosOverlap @ 1441abb10

void __thiscall
FSQCapture::EndCaptureChaosOverlap
          (FSQCapture *this,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_1)

{
  TArray<ChaosInterface::FOverlapHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  ForElementType<ChaosInterface::FOverlapHit> _Dst;
  ForElementType<ChaosInterface::FOverlapHit> _Src;
  
  bVar7 = IsInGameThread();
  if (bVar7) {
    if ((this->SQType != Overlap) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SQType == ESQType::Overlap",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\SQCapture.cpp"
                           ,0x108,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x8;
    pTVar1 = &(this->ChaosOverlapBuffer).Hits;
    *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit =
         *(undefined8 *)&param_1->CurrentBlockingHit;
    *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x8 = uVar6;
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x18;
    *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x10 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x10;
    *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x18 = uVar6;
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x28;
    *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x20 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x20;
    *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x28 = uVar6;
    *(undefined8 *)&(this->ChaosOverlapBuffer).CurrentBlockingHit.field_0x30 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x30;
    (this->ChaosOverlapBuffer).AcceleratorDepth = param_1->AcceleratorDepth;
    (this->ChaosOverlapBuffer).bHasBlockingHit = param_1->bHasBlockingHit;
    (this->ChaosOverlapBuffer).bSingleResult = param_1->bSingleResult;
    if (pTVar1 != &param_1->Hits) {
      iVar3 = (param_1->Hits).ArrayNum;
      piVar2 = &(this->ChaosOverlapBuffer).Hits.ArrayMax;
      _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
      iVar4 = *piVar2;
      (this->ChaosOverlapBuffer).Hits.ArrayNum = iVar3;
      if (_Src == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
        _Src = (ForElementType<ChaosInterface::FOverlapHit>)&param_1->Hits;
      }
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0x80;
        return;
      }
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FOverlapHit>_>
                (0x38,8,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      _Dst = (this->ChaosOverlapBuffer).Hits.AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
          _Dst = (ForElementType<ChaosInterface::FOverlapHit>)pTVar1;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 * 0x38);
      }
    }
  }
  return;
}

// EndCaptureChaosRaycast @ 1441abc60

void __thiscall
FSQCapture::EndCaptureChaosRaycast
          (FSQCapture *this,FSQHitBuffer<ChaosInterface::FRaycastHit> *param_1)

{
  TArray<ChaosInterface::FRaycastHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  ForElementType<ChaosInterface::FRaycastHit> _Dst;
  ForElementType<ChaosInterface::FRaycastHit> _Src;
  
  bVar9 = IsInGameThread();
  if (bVar9) {
    if ((this->SQType != Raycast) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SQType == ESQType::Raycast",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\SQCapture.cpp"
                           ,0xf0,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar6 = (param_1->CurrentBlockingHit)._padding_;
    pTVar1 = &(this->ChaosRaycastBuffer).Hits;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ =
         (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = lVar6;
    lVar6 = (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ =
         (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = lVar6;
    lVar6 = (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ =
         (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = lVar6;
    lVar6 = (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ =
         (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = lVar6;
    lVar6 = (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ =
         (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = lVar6;
    lVar6 = (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ =
         (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = lVar6;
    lVar6 = (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ =
         (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ = lVar6;
    fVar7 = (param_1->CurrentBlockingHit).U;
    fVar8 = (param_1->CurrentBlockingHit).V;
    (this->ChaosRaycastBuffer).CurrentBlockingHit._padding_ =
         (param_1->CurrentBlockingHit)._padding_;
    (this->ChaosRaycastBuffer).CurrentBlockingHit.U = fVar7;
    (this->ChaosRaycastBuffer).CurrentBlockingHit.V = fVar8;
    (this->ChaosRaycastBuffer).AcceleratorDepth = param_1->AcceleratorDepth;
    (this->ChaosRaycastBuffer).bHasBlockingHit = param_1->bHasBlockingHit;
    (this->ChaosRaycastBuffer).bSingleResult = param_1->bSingleResult;
    if (pTVar1 != &param_1->Hits) {
      iVar3 = (param_1->Hits).ArrayNum;
      piVar2 = &(this->ChaosRaycastBuffer).Hits.ArrayMax;
      _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
      iVar4 = *piVar2;
      (this->ChaosRaycastBuffer).Hits.ArrayNum = iVar3;
      if (_Src == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
        _Src = (ForElementType<ChaosInterface::FRaycastHit>)&param_1->Hits;
      }
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0x80;
        return;
      }
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FRaycastHit>_>
                (0x80,8,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      _Dst = (this->ChaosRaycastBuffer).Hits.AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
          _Dst = (ForElementType<ChaosInterface::FRaycastHit>)pTVar1;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 7);
      }
    }
  }
  return;
}

// EndCaptureChaosSweep @ 1441abde0

void __thiscall
FSQCapture::EndCaptureChaosSweep(FSQCapture *this,FSQHitBuffer<ChaosInterface::FSweepHit> *param_1)

{
  TArray<ChaosInterface::FSweepHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  ForElementType<ChaosInterface::FSweepHit> _Dst;
  ForElementType<ChaosInterface::FSweepHit> _Src;
  
  bVar7 = IsInGameThread();
  if (bVar7) {
    if ((this->SQType != Sweep) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SQType == ESQType::Sweep",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\SQCapture.cpp"
                           ,0xd6,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x8;
    pTVar1 = &(this->ChaosSweepBuffer).Hits;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit =
         *(undefined8 *)&param_1->CurrentBlockingHit;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x8 = uVar6;
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x18;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x10 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x10;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x18 = uVar6;
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x28;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x20 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x20;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x28 = uVar6;
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x38;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x30 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x30;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x38 = uVar6;
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x48;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x40 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x40;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x48 = uVar6;
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x58;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x50 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x50;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x58 = uVar6;
    uVar6 = *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x68;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x60 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x60;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x68 = uVar6;
    *(undefined8 *)&(this->ChaosSweepBuffer).CurrentBlockingHit.field_0x70 =
         *(undefined8 *)&(param_1->CurrentBlockingHit).field_0x70;
    (this->ChaosSweepBuffer).AcceleratorDepth = param_1->AcceleratorDepth;
    (this->ChaosSweepBuffer).bHasBlockingHit = param_1->bHasBlockingHit;
    (this->ChaosSweepBuffer).bSingleResult = param_1->bSingleResult;
    if (pTVar1 != &param_1->Hits) {
      iVar3 = (param_1->Hits).ArrayNum;
      piVar2 = &(this->ChaosSweepBuffer).Hits.ArrayMax;
      _Src = (param_1->Hits).AllocatorInstance.SecondaryData;
      iVar4 = *piVar2;
      (this->ChaosSweepBuffer).Hits.ArrayNum = iVar3;
      if (_Src == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
        _Src = (ForElementType<ChaosInterface::FSweepHit>)&param_1->Hits;
      }
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0x80;
        return;
      }
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FSweepHit>_>
                (0x78,8,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      _Dst = (this->ChaosSweepBuffer).Hits.AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<ChaosInterface::FSweepHit>)0x0) {
          _Dst = (ForElementType<ChaosInterface::FSweepHit>)pTVar1;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 * 0x78);
      }
    }
  }
  return;
}

// GetFilterResult @ 1441ae020

ECollisionQueryHitType __thiscall
FSQCapture::GetFilterResult
          (FSQCapture *this,FPerShapeData *param_1,TGeometryParticle<double,3> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ECollisionQueryHitType EVar4;
  FScriptContainerElement FVar5;
  TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pTVar6 = TMapBase<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find(&this->ChaosActorToShapeHitsArray,param_2);
  if (pTVar6 == (TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
LAB_1441ae08a:
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<622209545644540210>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\SQCapture.cpp"
                       ,0x132,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    FVar5 = (FScriptContainerElement)0x0;
  }
  else {
    iVar1 = pTVar6->ArrayNum;
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (pTVar6->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) goto LAB_1441ae08a;
      if (*(FPerShapeData **)pFVar7 == param_1) break;
      pFVar7 = pFVar7 + 0x10;
    }
    FVar5 = pFVar7[8];
  }
  return (ECollisionQueryHitType)FVar5;
}

// Serialize @ 1441b5450

void __thiscall FSQCapture::Serialize(FSQCapture *this,FChaosArchive *param_1)

{
  FHitFlags *pFVar1;
  longlong *plVar2;
  ESQType *pEVar3;
  float *pfVar4;
  EHitFlags *pEVar5;
  ICollisionQueryFilterCallbackBase *pIVar6;
  FArchive *pFVar7;
  ICollisionQueryFilterCallbackBase *pIVar8;
  uint local_res8 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SQCaptureName,L"SQCapture");
      _Init_thread_footer(&::_TSS0);
    }
  }
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = 2;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  pEVar3 = *(ESQType **)param_1->_padding_;
  if ((ESQType *)((undefined8 *)param_1->_padding_)[1] < pEVar3 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,this,1);
  }
  else {
    this->SQType = *pEVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
  }
  ::operator<<((FArchive *)param_1,&this->bDiskDataIsChaos);
  pFVar7 = UE::Math::operator<<((FArchive *)param_1,&this->Dir);
  pFVar7 = UE::Math::operator<<(pFVar7,&this->StartTM);
  pfVar4 = (float *)**(undefined8 **)&pFVar7->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar7->field_0x8)[1] < pfVar4 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&this->DeltaMag,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)&this->DeltaMag);
    }
  }
  else {
    this->DeltaMag = *pfVar4;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  pFVar1 = &this->OutputFlags;
  pEVar5 = (EHitFlags *)**(undefined8 **)&pFVar7->field_0x8;
  if ((EHitFlags *)(*(undefined8 **)&pFVar7->field_0x8)[1] < pEVar5 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,&pFVar1->HitFlags);
    }
  }
  else {
    pFVar1->HitFlags = *pEVar5;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
  }
  Chaos::operator<<<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&this->GeomData);
  Chaos::operator<<<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&this->HitData);
  if (0 < (int)local_res8[0]) {
    UE::Math::operator<<((FArchive *)param_1,&this->StartPoint);
  }
  if (this->bDiskDataIsChaos == false) {
    if (0 < (int)local_res8[0]) {
      SerializeQueryFilterData((FArchive *)param_1,&this->QueryFilterData);
    }
    if (this->bDiskDataIsChaos == false) goto LAB_1441b56ad;
  }
  SerializeChaosBuffers<ChaosInterface::FSweepHit>
            (this,param_1,local_res8[0],&this->ChaosSweepBuffer);
  SerializeChaosBuffers<ChaosInterface::FRaycastHit>
            (this,param_1,local_res8[0],&this->ChaosRaycastBuffer);
  SerializeChaosBuffers<ChaosInterface::FOverlapHit>
            (this,param_1,local_res8[0],&this->ChaosOverlapBuffer);
  SerializeChaosActorToShapeHitsArray(this,param_1);
  SerializeQueryFilterData((FArchive *)param_1,&this->QueryFilterData);
  if (1 < (int)local_res8[0]) {
    Chaos::FChaosArchive::SerializePtr<Chaos::FImplicitObject>(param_1,&this->ChaosImplicitGeometry)
    ;
  }
LAB_1441b56ad:
  if (((param_1->_padding_ & 1) != 0) && (this->bDiskDataIsChaos != false)) {
    pIVar8 = ::operator_new(0x10);
    if (pIVar8 != (ICollisionQueryFilterCallbackBase *)0x0) {
      pIVar8[1] = (ICollisionQueryFilterCallbackBase)this;
      *pIVar8 = (ICollisionQueryFilterCallbackBase)&___7FSQCaptureFilterCallback__6B_;
    }
    pIVar6 = (this->FilterCallback).Ptr;
    (this->FilterCallback).Ptr = pIVar8;
    if (pIVar6 != (ICollisionQueryFilterCallbackBase *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
  }
  return;
}

// SerializeChaosActorToShapeHitsArray @ 1441b57f0

void __thiscall
FSQCapture::SerializeChaosActorToShapeHitsArray(FSQCapture *this,FChaosArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  byte *pbVar7;
  TMap<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  TGeometryParticle<double,3> *pTVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  TSerializablePtr<Chaos::TGeometryParticle<double,3>_> *pTVar19;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_f8;
  uint local_f4;
  TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_> local_f0
  ;
  TSerializablePtr<Chaos::FPerShapeData> local_e0;
  TSerializablePtr<Chaos::TGeometryParticle<double,3>_> local_d8;
  byte *local_d0;
  TMap<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  TGeometryParticle<double,3> *local_90;
  TMap<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
  *local_88;
  TMap<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  local_res20[0] =
       *(int *)&(this->ChaosActorToShapeHitsArray).field_0x8 -
       *(int *)&(this->ChaosActorToShapeHitsArray).field_0x34;
  plVar4 = (longlong *)param_1->_padding_;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  local_d0 = (byte *)((longlong)&param_1->_padding_ + 2);
  if ((param_1->_padding_ & 1) == 0) {
    if ((param_1->_padding_ & 4) != 0) {
      iStack_c0 = 0;
      local_c8 = &this->ChaosActorToShapeHitsArray;
      puVar1 = &(this->ChaosActorToShapeHitsArray).field_0x10;
      iVar17 = *(int *)&(this->ChaosActorToShapeHitsArray).field_0x28;
      uStack_bc = 1;
      local_a8 = 0;
      iStack_ac = 0;
      if (iVar17 != 0) {
        puVar16 = *(uint **)&(this->ChaosActorToShapeHitsArray).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puVar1;
        }
        uVar13 = *puVar16;
        while (uVar13 == 0) {
          lVar11 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
          goto LAB_1441b5a7d;
          uVar13 = puVar16[lVar11 + 1];
        }
        uStack_bc = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_bc * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_98 = (int)lVar11;
        iStack_ac = local_a8 + -1 + local_98;
        if (iVar17 < iStack_ac) {
          iStack_ac = iVar17;
        }
      }
LAB_1441b5a7d:
      uVar13 = *(uint *)&(this->ChaosActorToShapeHitsArray).field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
      iStack_a0 = *(int *)&(this->ChaosActorToShapeHitsArray).field_0x8 -
                  *(int *)&(this->ChaosActorToShapeHitsArray).field_0x34;
      uStack_b0 = 0xffffffff;
      TStack_78.CurrentBitIndex = iStack_ac;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar13 >> 5;
      TStack_78._28_4_ = iStack_ac;
      TStack_78.BaseBitIndex = local_a8;
      uStack_58 = CONCAT44(uStack_9c,iStack_a0);
      local_b8 = puVar1;
      iStack_a4 = iStack_ac;
      local_88 = local_c8;
      local_80 = local_c8;
      TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar17 < (int)uVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(uint *)&(this->ChaosActorToShapeHitsArray).field_0x28;
      if (uVar13 != uVar3) {
        puVar15 = *(undefined1 **)&(this->ChaosActorToShapeHitsArray).field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar12;
          uVar18 = uVar18 + 0x20;
          iVar12 = iVar12 + 1;
          uVar13 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_1441b5b80;
          uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar13 = (int)lVar11 + -1 + uVar18;
        if ((int)uVar3 < (int)uVar13) {
          uVar13 = uVar3;
        }
      }
LAB_1441b5b80:
      while( true ) {
        pTVar8 = local_80;
        if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
          `TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_78.CurrentBitIndex == uVar13) &&
            (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar8 == local_88)) break;
        pTVar19 = (TSerializablePtr<Chaos::TGeometryParticle<double,3>_> *)
                  ((longlong)TStack_78.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
        Chaos::FChaosArchive::SerializePtr<Chaos::TGeometryParticle<double,3>_>(param_1,pTVar19);
        plVar4 = (longlong *)param_1->_padding_;
        local_f4 = *(uint *)&pTVar19[2].Ptr;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((*local_d0 & 1) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_f4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&local_f4);
          }
        }
        else {
          local_f4 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        iVar17 = *(int *)&pTVar19[2].Ptr;
        pTVar14 = pTVar19[1].Ptr;
        pTVar6 = &pTVar14->MShapesArray;
        while( true ) {
          if (*(int *)&pTVar19[2].Ptr != iVar17) {
            `TCheckedPointerIterator<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (pTVar14 ==
              (TGeometryParticle<double,3> *)(&pTVar6->AllocatorInstance + (longlong)iVar17 + -8))
          break;
          Chaos::FChaosArchive::SerializePtr<Chaos::FPerShapeData>
                    (param_1,(TSerializablePtr<Chaos::FPerShapeData> *)pTVar14);
          puVar15 = *(undefined1 **)param_1->_padding_;
          if ((undefined1 *)((undefined8 *)param_1->_padding_)[1] < puVar15 + 1) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,&pTVar14->_padding_,1);
            pTVar14 = (TGeometryParticle<double,3> *)&pTVar14->Proxy;
          }
          else {
            *(undefined1 *)&pTVar14->_padding_ = *puVar15;
            *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
            pTVar14 = (TGeometryParticle<double,3> *)&pTVar14->Proxy;
          }
        }
        TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      }
    }
  }
  else {
    iVar17 = 0;
    if (0 < (int)local_res20[0]) {
      do {
        pbVar7 = local_d0;
        local_d8.Ptr = (TGeometryParticle<double,3> *)0x0;
        Chaos::FChaosArchive::SerializePtr<Chaos::TGeometryParticle<double,3>_>(param_1,&local_d8);
        plVar4 = (longlong *)param_1->_padding_;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((*pbVar7 & 1) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_f8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&local_f8);
          }
        }
        else {
          local_f8 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.ArrayNum = 0;
        local_f0.ArrayMax = 0;
        iVar12 = 0;
        if (0 < (int)local_f8) {
          do {
            local_e0.Ptr = (FPerShapeData *)0x0;
            Chaos::FChaosArchive::SerializePtr<Chaos::FPerShapeData>(param_1,&local_e0);
            plVar4 = (longlong *)param_1->_padding_;
            if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
              (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
            }
            else {
              local_res8[0] = *(FScriptContainerElement *)*plVar4;
              *plVar4 = *plVar4 + 1;
            }
            iVar10 = local_f0.ArrayNum;
            if (local_f0.ArrayNum == local_f0.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
            }
            iVar12 = iVar12 + 1;
            local_f0.ArrayNum = iVar10 + 1;
            *(FPerShapeData **)(local_f0.AllocatorInstance.Data + (longlong)iVar10 * 0x10) =
                 local_e0.Ptr;
            (local_f0.AllocatorInstance.Data + (longlong)iVar10 * 0x10)[8] = local_res8[0];
          } while (iVar12 < (int)local_f8);
        }
        local_90 = local_d8.Ptr;
        TMapBase<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
        ::
        Emplace<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>_const_&>
                  (&this->ChaosActorToShapeHitsArray,&local_90,&local_f0);
        if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.AllocatorInstance.Data);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)local_res20[0]);
    }
  }
  return;
}

// StartCaptureChaosOverlap @ 1441ba270

void __thiscall
FSQCapture::StartCaptureChaosOverlap
          (FSQCapture *this,FPBDRigidsEvolutionGBF *param_1,FImplicitObject *param_2,
          TTransform<double> *param_3,FChaosQueryFilterData *param_4,FCollisionFilterData *param_5,
          ICollisionQueryFilterCallbackBase *param_6)

{
  longlong *plVar1;
  int *piVar2;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar3;
  int iVar4;
  FImplicitObject *pFVar5;
  double dVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined8 *local_10;
  
  bVar11 = IsInGameThread();
  if (bVar11) {
    this->bDiskDataIsChaos = true;
    CaptureChaosFilterResults(this,param_1,param_5,param_6);
    puVar12 = (undefined8 *)(**(code **)(param_2->_padding_ + 0x38))(param_2,&local_10);
    pTVar3 = &this->ChaosImplicitGeometry;
    if (pTVar3 != (TRefCountPtr<Chaos::FImplicitObject> *)puVar12) {
      pFVar5 = pTVar3->Reference;
      pTVar3->Reference = (FImplicitObject *)*puVar12;
      *puVar12 = 0;
      if (pFVar5 != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &pFVar5->_padding_;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar7 == 1) && (*(int *)((longlong)&pFVar5->_padding_ + 4) == 0)) {
          (**(code **)pFVar5->_padding_)(pFVar5,1);
        }
      }
    }
    if (local_10 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_10 + 1);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (*(int *)((longlong)local_10 + 0xc) == 0)) {
        (**(code **)*local_10)(local_10,1);
      }
    }
    dVar6 = (param_3->Rotation).XY.m128d_f64[1];
    (this->StartTM).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    (this->StartTM).Rotation.XY.m128d_f64[1] = dVar6;
    dVar6 = (param_3->Rotation).ZW.m128d_f64[1];
    (this->StartTM).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    (this->StartTM).Rotation.ZW.m128d_f64[1] = dVar6;
    dVar6 = (param_3->Translation).XY.m128d_f64[1];
    (this->StartTM).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    (this->StartTM).Translation.XY.m128d_f64[1] = dVar6;
    dVar6 = (param_3->Translation).ZW.m128d_f64[1];
    (this->StartTM).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    (this->StartTM).Translation.ZW.m128d_f64[1] = dVar6;
    dVar6 = (param_3->Scale3D).XY.m128d_f64[1];
    (this->StartTM).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    (this->StartTM).Scale3D.XY.m128d_f64[1] = dVar6;
    dVar6 = (param_3->Scale3D).ZW.m128d_f64[1];
    (this->StartTM).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    (this->StartTM).Scale3D.ZW.m128d_f64[1] = dVar6;
    uVar8 = (param_4->data).word1;
    uVar9 = (param_4->data).word2;
    uVar10 = (param_4->data).word3;
    (this->QueryFilterData).data.word0 = (param_4->data).word0;
    (this->QueryFilterData).data.word1 = uVar8;
    (this->QueryFilterData).data.word2 = uVar9;
    (this->QueryFilterData).data.word3 = uVar10;
    (this->QueryFilterData).flags.mBits = (param_4->flags).mBits;
    (this->QueryFilterData).clientId = param_4->clientId;
    this->SQType = Overlap;
  }
  return;
}

// StartCaptureChaosRaycast @ 1441ba3b0

void __thiscall
FSQCapture::StartCaptureChaosRaycast
          (FSQCapture *this,FPBDRigidsEvolutionGBF *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4,FHitFlags param_5,FChaosQueryFilterData *param_6,
          FCollisionFilterData *param_7,ICollisionQueryFilterCallbackBase *param_8)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = IsInGameThread();
  if (bVar5) {
    this->bDiskDataIsChaos = true;
    CaptureChaosFilterResults(this,param_1,param_7,param_8);
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (this->StartPoint).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->StartPoint).field0_0x0._s_0.Y = dVar1;
    (this->StartPoint).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    (this->Dir).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    (this->Dir).field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_3->field0_0x0)._s_0.Z;
    this->DeltaMag = param_4;
    (this->Dir).field0_0x0._s_0.Z = dVar1;
    (this->OutputFlags).HitFlags = param_5.HitFlags;
    uVar2 = (param_6->data).word1;
    uVar3 = (param_6->data).word2;
    uVar4 = (param_6->data).word3;
    (this->QueryFilterData).data.word0 = (param_6->data).word0;
    (this->QueryFilterData).data.word1 = uVar2;
    (this->QueryFilterData).data.word2 = uVar3;
    (this->QueryFilterData).data.word3 = uVar4;
    (this->QueryFilterData).flags.mBits = (param_6->flags).mBits;
    (this->QueryFilterData).clientId = param_6->clientId;
    this->SQType = Raycast;
  }
  return;
}

// StartCaptureChaosSweep @ 1441ba480

void __thiscall
FSQCapture::StartCaptureChaosSweep
          (FSQCapture *this,FPBDRigidsEvolutionGBF *param_1,FImplicitObject *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,FHitFlags param_6,
          FChaosQueryFilterData *param_7,FCollisionFilterData *param_8,
          ICollisionQueryFilterCallbackBase *param_9)

{
  longlong *plVar1;
  int *piVar2;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar3;
  int iVar4;
  double dVar5;
  FImplicitObject *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined8 *local_10;
  
  bVar11 = IsInGameThread();
  if (bVar11) {
    this->bDiskDataIsChaos = true;
    CaptureChaosFilterResults(this,param_1,param_8,param_9);
    puVar12 = (undefined8 *)(**(code **)(param_2->_padding_ + 0x38))(param_2,&local_10);
    pTVar3 = &this->ChaosImplicitGeometry;
    if (pTVar3 != (TRefCountPtr<Chaos::FImplicitObject> *)puVar12) {
      pFVar6 = pTVar3->Reference;
      pTVar3->Reference = (FImplicitObject *)*puVar12;
      *puVar12 = 0;
      if (pFVar6 != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &pFVar6->_padding_;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar7 == 1) && (*(int *)((longlong)&pFVar6->_padding_ + 4) == 0)) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
    if (local_10 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_10 + 1);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (*(int *)((longlong)local_10 + 0xc) == 0)) {
        (**(code **)*local_10)(local_10,1);
      }
    }
    dVar5 = (param_3->Rotation).XY.m128d_f64[1];
    (this->StartTM).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    (this->StartTM).Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Rotation).ZW.m128d_f64[1];
    (this->StartTM).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    (this->StartTM).Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Translation).XY.m128d_f64[1];
    (this->StartTM).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    (this->StartTM).Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Translation).ZW.m128d_f64[1];
    (this->StartTM).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    (this->StartTM).Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Scale3D).XY.m128d_f64[1];
    (this->StartTM).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    (this->StartTM).Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Scale3D).ZW.m128d_f64[1];
    (this->StartTM).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    (this->StartTM).Scale3D.ZW.m128d_f64[1] = dVar5;
    dVar5 = (param_4->field0_0x0)._s_0.Y;
    (this->Dir).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    (this->Dir).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_4->field0_0x0)._s_0.Z;
    (this->OutputFlags).HitFlags = param_6.HitFlags;
    this->DeltaMag = param_5;
    (this->Dir).field0_0x0._s_0.Z = dVar5;
    uVar8 = (param_7->data).word1;
    uVar9 = (param_7->data).word2;
    uVar10 = (param_7->data).word3;
    (this->QueryFilterData).data.word0 = (param_7->data).word0;
    (this->QueryFilterData).data.word1 = uVar8;
    (this->QueryFilterData).data.word2 = uVar9;
    (this->QueryFilterData).data.word3 = uVar10;
    (this->QueryFilterData).flags.mBits = (param_7->flags).mBits;
    (this->QueryFilterData).clientId = param_7->clientId;
    this->SQType = Sweep;
  }
  return;
}

