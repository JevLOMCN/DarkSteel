// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FLumenCard @ 144c1dfd0

FLumenCard * __thiscall FLumenCard::FLumenCard(FLumenCard *this)

{
  undefined8 uVar1;
  FLumenSurfaceMipMap *pFVar2;
  longlong lVar3;
  
  this->bHeightfield = false;
  this->bAxisXFlipped = false;
  this->DilationMode = Disabled;
  this->MinAllocatedResLevel = 0xff;
  pFVar2 = this->SurfaceMipMaps;
  this->MaxAllocatedResLevel = '\0';
  this->DesiredLockedResLevel = '\0';
  lVar3 = 9;
  do {
    pFVar2->SizeInPagesX = '\0';
    pFVar2->SizeInPagesY = '\0';
    pFVar2->ResLevelX = '\0';
    pFVar2->ResLevelY = '\0';
    pFVar2->PageTableSpanOffset = -1;
    pFVar2->PageTableSpanSize = 0;
    pFVar2->bLocked = false;
    pFVar2 = pFVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  this->MeshCardsIndex = -1;
  this->IndexInMeshCards = -1;
  (this->CardSharingId).PackedValue = 0xffffffffffffffff;
  this->IndexInBuildData = 0xff;
  this->AxisAlignedDirectionIndex = 0xff;
  this->ResolutionScale = 1.0;
  this->CardAspect = 1.0;
  this->CardSharingListIndex = -1;
  this->bVisible = false;
  *(undefined8 *)&(this->LocalOBB).Origin.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->LocalOBB).Origin.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->LocalOBB).AxisX.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->LocalOBB).AxisX.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->LocalOBB).AxisY.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->LocalOBB).AxisY.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->LocalOBB).AxisZ.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->LocalOBB).AxisZ.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->LocalOBB).Extent.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->LocalOBB).Extent.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldOBB).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldOBB).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldOBB).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldOBB).AxisX.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->WorldOBB).AxisX.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldOBB).AxisX.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldOBB).AxisY.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->WorldOBB).AxisY.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldOBB).AxisY.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldOBB).AxisZ.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->WorldOBB).AxisZ.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldOBB).AxisZ.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldOBB).Extent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldOBB).Extent.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldOBB).Extent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->MeshCardsOBB).Origin.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->MeshCardsOBB).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->MeshCardsOBB).AxisX.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->MeshCardsOBB).AxisX.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->MeshCardsOBB).AxisY.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->MeshCardsOBB).AxisY.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->MeshCardsOBB).AxisZ.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->MeshCardsOBB).AxisZ.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->MeshCardsOBB).Extent.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->MeshCardsOBB).Extent.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->IndexInMeshCards = -1;
  return this;
}

// ~FLumenCard @ 144c1e9e0

void __thiscall FLumenCard::~FLumenCard(FLumenCard *this)

{
  code *pcVar1;
  bool bVar2;
  ushort *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar3 = &this->SurfaceMipMaps[0].PageTableSpanSize;
  do {
    if (*puVar3 != 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_874545965275544426>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                         ,0x496,"SurfaceMipMaps[MipIndex].PageTableSpanSize == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 6;
  } while (uVar4 < 9);
  return;
}

// GetMipMapDesc @ 144c460b0

void __thiscall FLumenCard::GetMipMapDesc(FLumenCard *this,int param_1,FLumenMipMapDesc *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  
  if ((8 < param_1 - 3U) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResLevel >= Lumen::MinResLevel && ResLevel <= Lumen::MaxResLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                         ,0x4e9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = this->CardAspect;
  if (fVar1 < __real_3f800000) {
    uVar5 = (int)ROUND(__real_40000000 / fVar1 + __real_3f000000) >> 1;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar7 = 0;
    iVar6 = 0;
    if (uVar5 != 0) {
      iVar6 = iVar8;
    }
  }
  else {
    uVar5 = (int)ROUND(fVar1 + fVar1 + __real_3f000000) >> 1;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0;
    iVar7 = 0;
    if (uVar5 != 0) {
      iVar7 = iVar8;
    }
  }
  uVar12 = 3;
  iVar8 = 8;
  if (iVar6 < 8) {
    iVar8 = iVar6;
  }
  iVar6 = 8;
  if (iVar7 < 8) {
    iVar6 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  iVar8 = 0xb;
  if (param_1 - iVar7 < 0xb) {
    iVar8 = param_1 - iVar7;
  }
  uVar11 = 3;
  if (3 < iVar8) {
    uVar11 = (ushort)iVar8;
  }
  param_2->ResLevelX = uVar11;
  iVar8 = 0;
  if (0 < iVar6) {
    iVar8 = iVar6;
  }
  iVar7 = 0xb;
  if (param_1 - iVar8 < 0xb) {
    iVar7 = param_1 - iVar8;
  }
  if (3 < iVar7) {
    uVar12 = (ushort)iVar7;
  }
  param_2->ResLevelY = uVar12;
  if ((uVar11 < 8) && (uVar12 < 8)) {
    iVar9 = 1;
    param_2->bSubAllocation = true;
    (param_2->SizeInPages).field0_0x0._s_0.X = 1;
    iVar10 = 1 << ((byte)uVar11 & 0x1f);
    iVar6 = 1 << ((byte)uVar12 & 0x1f);
    iVar8 = iVar10;
    iVar7 = iVar6;
  }
  else {
    param_2->bSubAllocation = false;
    uVar4 = 7;
    if (7 < uVar11) {
      uVar4 = uVar11;
    }
    param_2->ResLevelX = uVar4;
    uVar11 = 7;
    if (7 < uVar12) {
      uVar11 = uVar12;
    }
    param_2->ResLevelY = uVar11;
    iVar8 = 1 << ((char)uVar4 - 7U & 0x1f);
    (param_2->SizeInPages).field0_0x0._s_0.X = iVar8;
    iVar6 = 0x80;
    iVar9 = 1 << ((char)uVar11 - 7U & 0x1f);
    iVar10 = 0x80;
    iVar7 = iVar9 * 0x7f;
    iVar8 = iVar8 * 0x7f;
  }
  (param_2->SizeInPages).field0_0x0._s_0.Y = iVar9;
  (param_2->Resolution).field0_0x0._s_0.X = iVar8;
  (param_2->Resolution).field0_0x0._s_0.Y = iVar7;
  (param_2->PageResolution).field0_0x0._s_0.X = iVar10;
  (param_2->PageResolution).field0_0x0._s_0.Y = iVar6;
  return;
}

// GetSurfaceStats @ 144c50d10

void __thiscall
FLumenCard::GetSurfaceStats
          (FLumenCard *this,TSparseSpanArray<FLumenPageTableEntry> *param_1,FSurfaceStats *param_2)

{
  FLumenSurfaceMipMap *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  bVar2 = this->MinAllocatedResLevel;
  uVar13 = (uint)bVar2;
  if (bVar2 <= this->MaxAllocatedResLevel) {
    iVar12 = bVar2 - 3;
    do {
      uVar9 = (ulonglong)iVar12;
      if (((iVar12 < 0) || (8 < uVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                             ,0x162,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = this->SurfaceMipMaps + uVar9;
      if (this->SurfaceMipMaps[uVar9].PageTableSpanSize != 0) {
        iVar10 = 0;
        iVar14 = 0;
        iVar11 = 0;
        if ((uint)pFVar1->SizeInPagesX * (uint)pFVar1->SizeInPagesY != 0) {
          do {
            uVar8 = pFVar1->PageTableSpanOffset + iVar11;
            uVar5 = 0;
            if ((int)uVar8 < (param_1->Elements).ArrayNum) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar7 = (param_1->Elements).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x50;
            if ((*(int *)(pFVar7 + 0x40) < 0) && (*(int *)(pFVar7 + 0x44) < 0)) {
              iVar6 = 0x3f01;
            }
            else {
              iVar6 = *(int *)(pFVar7 + 0x40) * *(int *)(pFVar7 + 0x44);
            }
            iVar10 = iVar10 + iVar6;
            if ((*(int *)pFVar7 < 0) || (*(int *)(pFVar7 + 4) < 0)) {
              iVar6 = 0;
            }
            else {
              iVar6 = (*(int *)(pFVar7 + 0x14) - *(int *)(pFVar7 + 0xc)) *
                      (*(int *)(pFVar7 + 0x10) - *(int *)(pFVar7 + 8));
            }
            iVar14 = iVar14 + iVar6;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)((uint)pFVar1->SizeInPagesX * (uint)pFVar1->SizeInPagesY));
        }
        param_2->NumVirtualTexels = param_2->NumVirtualTexels + iVar10;
        param_2->NumPhysicalTexels = param_2->NumPhysicalTexels + iVar14;
        if (pFVar1->bLocked != false) {
          param_2->NumLockedVirtualTexels = param_2->NumLockedVirtualTexels + iVar10;
          param_2->NumLockedPhysicalTexels = param_2->NumLockedPhysicalTexels + iVar14;
        }
      }
      uVar13 = uVar13 + 1;
      iVar12 = iVar12 + 1;
    } while ((int)uVar13 <= (int)(uint)this->MaxAllocatedResLevel);
    if (this->MinAllocatedResLevel < this->DesiredLockedResLevel) {
      param_2->DroppedResLevels =
           param_2->DroppedResLevels +
           ((uint)this->DesiredLockedResLevel - (uint)this->MinAllocatedResLevel);
    }
  }
  return;
}

// Initialize @ 144c51cc0

void __thiscall
FLumenCard::Initialize
          (FLumenCard *this,float param_1,uint param_2,TMatrix<double> *param_3,
          FLumenMeshCards *param_4,FLumenCardBuildData *param_5,int param_6,int param_7,
          uchar param_8)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  FLumenCardId FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  if ((5 < param_5->AxisAlignedDirectionIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CardBuildData.AxisAlignedDirectionIndex < Lumen::NumAxisAlignedDirections"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                         ,0x4a4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = *(undefined8 *)((longlong)&(param_5->OBB).Origin.field0_0x0 + 8);
  *(undefined8 *)&(this->LocalOBB).Origin.field0_0x0 =
       *(undefined8 *)&(param_5->OBB).Origin.field0_0x0;
  *(undefined8 *)((longlong)&(this->LocalOBB).Origin.field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_5->OBB).AxisY.field0_0x0;
  *(undefined8 *)((longlong)&(this->LocalOBB).AxisX.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_5->OBB).AxisX.field0_0x0 + 4);
  *(undefined8 *)&(this->LocalOBB).AxisY.field0_0x0 = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(param_5->OBB).AxisZ.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->LocalOBB).AxisY.field0_0x0 + 8) =
       *(undefined8 *)((longlong)&(param_5->OBB).AxisY.field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->LocalOBB).AxisZ.field0_0x0 + 4) = uVar3;
  *(undefined8 *)&(this->LocalOBB).Extent.field0_0x0 =
       *(undefined8 *)&(param_5->OBB).Extent.field0_0x0;
  (this->LocalOBB).Extent.field0_0x0._s_0.Z = (param_5->OBB).Extent.field0_0x0._s_0.Z;
  this->IndexInMeshCards = param_6;
  this->MeshCardsIndex = param_7;
  this->IndexInBuildData = param_8;
  this->ResolutionScale = param_1;
  this->AxisAlignedDirectionIndex = param_5->AxisAlignedDirectionIndex;
  this->bHeightfield = param_4->bHeightfield;
  this->DilationMode = param_5->DilationMode;
  SetTransform(this,param_3,param_4);
  fVar10 = (float)((this->WorldOBB).Extent.field0_0x0._s_0.X /
                  (this->WorldOBB).Extent.field0_0x0._s_0.Y);
  this->CardAspect = fVar10;
  if (param_2 != 0xffffffff) {
    if (fVar10 < __real_3f800000) {
      uVar6 = (int)ROUND(__real_40000000 / fVar10 + __real_3f000000) >> 1;
      uVar8 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      uVar9 = 0;
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar8;
      }
    }
    else {
      uVar6 = (int)ROUND(fVar10 + fVar10 + __real_3f000000) >> 1;
      uVar8 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      uVar7 = 0;
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar8;
      }
    }
    bVar1 = this->AxisAlignedDirectionIndex;
    uVar8 = 8;
    if ((int)uVar7 < 8) {
      uVar8 = uVar7;
    }
    uVar6 = 0;
    if (0 < (int)uVar8) {
      uVar6 = uVar8 & 0xff;
    }
    uVar8 = 8;
    if ((int)uVar9 < 8) {
      uVar8 = uVar9;
    }
    uVar9 = 0;
    if (0 < (int)uVar8) {
      uVar9 = uVar8 & 0xff;
    }
    if ((((7 < bVar1) || (0xf < (byte)uVar6)) || (0xf < (byte)uVar9)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InAxisAlignedDirectionIndex <= 7u && InResLevelBiasX <= 15u && InResLevelBiasY <= 15u"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                           ,0x6f,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar4._s_1.CustomId = param_2;
    FVar4.PackedValue._0_4_ = ((bVar1 & 7) << 4 | uVar9 & 0xf) << 4 | uVar6 & 0xf;
    this->CardSharingId = FVar4;
  }
  return;
}

// ResLevelToResLevelXYBias @ 144c5c2e0

TIntPoint<int> __thiscall FLumenCard::ResLevelToResLevelXYBias(FLumenCard *this)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  TIntPoint<int>_u_0 in_RDX;
  int iVar4;
  int iVar5;
  
  fVar1 = this->CardAspect;
  if (fVar1 < __real_3f800000) {
    uVar2 = (int)ROUND(__real_40000000 / fVar1 + __real_3f000000) >> 1;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar5 = 0;
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar5 = iVar3;
    }
  }
  else {
    iVar5 = 0;
    uVar2 = (int)ROUND(fVar1 + fVar1 + __real_3f000000) >> 1;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = iVar3;
    }
  }
  iVar3 = 8;
  if (iVar5 < 8) {
    iVar3 = iVar5;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  *(int *)in_RDX = iVar5;
  iVar3 = 8;
  if (iVar4 < 8) {
    iVar3 = iVar4;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  *(int *)((longlong)in_RDX + 4) = iVar5;
  return (TIntPoint<int>)in_RDX;
}

// SetTransform @ 144c5d7d0

void __thiscall
FLumenCard::SetTransform(FLumenCard *this,TMatrix<double> *param_1,FLumenMeshCards *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TLumenCardOBB<double> *pTVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_1d8;
  TVector<double>_u_0 local_1b8;
  double local_1a0;
  undefined1 local_198 [16];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double local_148;
  TMatrix<double> local_138;
  TLumenCardOBB<double> local_b8;
  
  uVar4 = *(undefined8 *)&(this->LocalOBB).Origin.field0_0x0;
  dVar5 = (double)(float)((ulonglong)uVar4 >> 0x20);
  local_1b8._8_4_ = SUB84(dVar5,0);
  local_1b8._0_8_ = (double)(float)uVar4;
  local_1b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_1b8._s_0.Z = (double)(this->LocalOBB).Origin.field0_0x0._s_0.Z;
  local_180 = (double)(this->LocalOBB).AxisY.field0_0x0._s_0.Y;
  local_1a0 = (double)(this->LocalOBB).AxisX.field0_0x0._s_0.X;
  uVar4 = *(undefined8 *)((longlong)&(this->LocalOBB).AxisX.field0_0x0 + 4);
  dVar5 = (double)(float)((ulonglong)uVar4 >> 0x20);
  local_150 = (double)(this->LocalOBB).Extent.field0_0x0._s_0.Y;
  local_198._8_4_ = SUB84(dVar5,0);
  local_198._0_8_ = (double)(float)uVar4;
  local_198._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_188 = (double)(this->LocalOBB).AxisY.field0_0x0._s_0.X;
  local_138.M[0][0] = param_1->M[0][0];
  local_138.M[0][1] = param_1->M[0][1];
  local_178 = (double)(this->LocalOBB).AxisY.field0_0x0._s_0.Z;
  local_138.M[1][0] = param_1->M[1][0];
  local_138.M[1][1] = param_1->M[1][1];
  local_170 = (double)(this->LocalOBB).AxisZ.field0_0x0._s_0.X;
  local_138.M[2][0] = param_1->M[2][0];
  local_138.M[2][1] = param_1->M[2][1];
  uVar4 = *(undefined8 *)((longlong)&(this->LocalOBB).AxisZ.field0_0x0 + 4);
  dVar5 = (double)(float)((ulonglong)uVar4 >> 0x20);
  local_138.M[3][0] = param_1->M[3][0];
  local_138.M[3][1] = param_1->M[3][1];
  local_168._8_4_ = SUB84(dVar5,0);
  local_168._0_8_ = (double)(float)uVar4;
  local_168._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_158 = (double)(this->LocalOBB).Extent.field0_0x0._s_0.X;
  local_148 = (double)(this->LocalOBB).Extent.field0_0x0._s_0.Z;
  local_138.M[0][2] = param_1->M[0][2];
  local_138.M[0][3] = param_1->M[0][3];
  local_138.M[1][2] = param_1->M[1][2];
  local_138.M[1][3] = param_1->M[1][3];
  local_138.M[2][2] = param_1->M[2][2];
  local_138.M[2][3] = param_1->M[2][3];
  local_138.M[3][2] = param_1->M[3][2];
  local_138.M[3][3] = param_1->M[3][3];
  pTVar16 = TLumenCardOBB<double>::Transform
                      ((TLumenCardOBB<double> *)&local_1b8._s_0,&local_b8,&local_138,
                       &this->bAxisXFlipped);
  dVar5 = (pTVar16->Origin).field0_0x0._s_0.Y;
  (this->WorldOBB).Origin.field0_0x0._s_0.X = (pTVar16->Origin).field0_0x0._s_0.X;
  (this->WorldOBB).Origin.field0_0x0._s_0.Y = dVar5;
  dVar5 = (pTVar16->AxisX).field0_0x0._s_0.X;
  (this->WorldOBB).Origin.field0_0x0._s_0.Z = (pTVar16->Origin).field0_0x0._s_0.Z;
  (this->WorldOBB).AxisX.field0_0x0._s_0.X = dVar5;
  dVar5 = (pTVar16->AxisX).field0_0x0._s_0.Z;
  (this->WorldOBB).AxisX.field0_0x0._s_0.Y = (pTVar16->AxisX).field0_0x0._s_0.Y;
  (this->WorldOBB).AxisX.field0_0x0._s_0.Z = dVar5;
  dVar5 = (pTVar16->AxisY).field0_0x0._s_0.Y;
  (this->WorldOBB).AxisY.field0_0x0._s_0.X = (pTVar16->AxisY).field0_0x0._s_0.X;
  (this->WorldOBB).AxisY.field0_0x0._s_0.Y = dVar5;
  dVar5 = (pTVar16->AxisZ).field0_0x0._s_0.X;
  (this->WorldOBB).AxisY.field0_0x0._s_0.Z = (pTVar16->AxisY).field0_0x0._s_0.Z;
  (this->WorldOBB).AxisZ.field0_0x0._s_0.X = dVar5;
  dVar5 = (pTVar16->AxisZ).field0_0x0._s_0.Z;
  (this->WorldOBB).AxisZ.field0_0x0._s_0.Y = (pTVar16->AxisZ).field0_0x0._s_0.Y;
  (this->WorldOBB).AxisZ.field0_0x0._s_0.Z = dVar5;
  dVar5 = (pTVar16->Extent).field0_0x0._s_0.Y;
  (this->WorldOBB).Extent.field0_0x0._s_0.X = (pTVar16->Extent).field0_0x0._s_0.X;
  (this->WorldOBB).Extent.field0_0x0._s_0.Y = dVar5;
  (this->WorldOBB).Extent.field0_0x0._s_0.Z = (pTVar16->Extent).field0_0x0._s_0.Z;
  dVar6 = (this->WorldOBB).AxisX.field0_0x0._s_0.X;
  dVar7 = (this->WorldOBB).AxisX.field0_0x0._s_0.Y;
  dVar5 = (this->WorldOBB).AxisX.field0_0x0._s_0.Z;
  dVar8 = (param_2->WorldToLocalRotation).M[1][1];
  dVar9 = (param_2->WorldToLocalRotation).M[0][1];
  dVar10 = (param_2->WorldToLocalRotation).M[1][2];
  dVar11 = (param_2->WorldToLocalRotation).M[2][1];
  dVar12 = (param_2->WorldToLocalRotation).M[3][1];
  dVar13 = (param_2->WorldToLocalRotation).M[0][2];
  dVar14 = (param_2->WorldToLocalRotation).M[2][2];
  dVar15 = (param_2->WorldToLocalRotation).M[3][2];
  (this->MeshCardsOBB).AxisX.field0_0x0._s_0.X =
       (float)((param_2->WorldToLocalRotation).M[0][0] * dVar6 +
               dVar7 * (param_2->WorldToLocalRotation).M[1][0] +
               (param_2->WorldToLocalRotation).M[2][0] * dVar5 +
              (param_2->WorldToLocalRotation).M[3][0] * 0.0);
  (this->MeshCardsOBB).AxisX.field0_0x0._s_0.Y =
       (float)(dVar9 * dVar6 + dVar7 * dVar8 + dVar11 * dVar5 + dVar12 * 0.0);
  (this->MeshCardsOBB).AxisX.field0_0x0._s_0.Z =
       (float)(dVar10 * dVar7 + dVar13 * dVar6 + dVar14 * dVar5 + dVar15 * 0.0);
  dVar6 = (this->WorldOBB).AxisY.field0_0x0._s_0.X;
  dVar7 = (this->WorldOBB).AxisY.field0_0x0._s_0.Y;
  dVar5 = (this->WorldOBB).AxisY.field0_0x0._s_0.Z;
  dVar8 = (param_2->WorldToLocalRotation).M[0][1];
  dVar9 = (param_2->WorldToLocalRotation).M[1][2];
  dVar10 = (param_2->WorldToLocalRotation).M[1][1];
  dVar11 = (param_2->WorldToLocalRotation).M[2][1];
  dVar12 = (param_2->WorldToLocalRotation).M[3][1];
  dVar13 = (param_2->WorldToLocalRotation).M[0][2];
  dVar14 = (param_2->WorldToLocalRotation).M[2][2];
  dVar15 = (param_2->WorldToLocalRotation).M[3][2];
  (this->MeshCardsOBB).AxisY.field0_0x0._s_0.X =
       (float)(dVar7 * (param_2->WorldToLocalRotation).M[1][0] +
               (param_2->WorldToLocalRotation).M[0][0] * dVar6 +
               (param_2->WorldToLocalRotation).M[2][0] * dVar5 +
              (param_2->WorldToLocalRotation).M[3][0] * 0.0);
  (this->MeshCardsOBB).AxisY.field0_0x0._s_0.Y =
       (float)(dVar7 * dVar10 + dVar8 * dVar6 + dVar11 * dVar5 + dVar12 * 0.0);
  (this->MeshCardsOBB).AxisY.field0_0x0._s_0.Z =
       (float)(dVar9 * dVar7 + dVar13 * dVar6 + dVar14 * dVar5 + dVar15 * 0.0);
  dVar6 = (this->WorldOBB).AxisZ.field0_0x0._s_0.X;
  dVar7 = (this->WorldOBB).AxisZ.field0_0x0._s_0.Y;
  dVar5 = (this->WorldOBB).AxisZ.field0_0x0._s_0.Z;
  dVar8 = (param_2->WorldToLocalRotation).M[0][1];
  dVar9 = (param_2->WorldToLocalRotation).M[1][2];
  dVar10 = (param_2->WorldToLocalRotation).M[1][1];
  dVar11 = (param_2->WorldToLocalRotation).M[2][1];
  dVar12 = (param_2->WorldToLocalRotation).M[3][1];
  dVar13 = (param_2->WorldToLocalRotation).M[0][2];
  dVar14 = (param_2->WorldToLocalRotation).M[2][2];
  dVar15 = (param_2->WorldToLocalRotation).M[3][2];
  (this->MeshCardsOBB).AxisZ.field0_0x0._s_0.X =
       (float)(dVar7 * (param_2->WorldToLocalRotation).M[1][0] +
               (param_2->WorldToLocalRotation).M[0][0] * dVar6 +
               (param_2->WorldToLocalRotation).M[2][0] * dVar5 +
              (param_2->WorldToLocalRotation).M[3][0] * 0.0);
  (this->MeshCardsOBB).AxisZ.field0_0x0._s_0.Y =
       (float)(dVar7 * dVar10 + dVar8 * dVar6 + dVar11 * dVar5 + dVar12 * 0.0);
  (this->MeshCardsOBB).AxisZ.field0_0x0._s_0.Z =
       (float)(dVar9 * dVar7 + dVar13 * dVar6 + dVar14 * dVar5 + dVar15 * 0.0);
  fVar1 = (this->LocalOBB).Origin.field0_0x0._s_0.Y;
  fVar2 = (this->LocalOBB).Origin.field0_0x0._s_0.Z;
  fVar3 = (param_2->LocalToWorldScale).field0_0x0._s_0.Z;
  fVar17 = (param_2->LocalToWorldScale).field0_0x0._s_0.Y;
  (this->MeshCardsOBB).Origin.field0_0x0._s_0.X =
       (param_2->LocalToWorldScale).field0_0x0._s_0.X * (this->LocalOBB).Origin.field0_0x0._s_0.X;
  (this->MeshCardsOBB).Origin.field0_0x0._s_0.Y = fVar1 * fVar17;
  (this->MeshCardsOBB).Origin.field0_0x0._s_0.Z = fVar2 * fVar3;
  uVar4 = *(undefined8 *)&(this->LocalOBB).Extent.field0_0x0;
  fVar17 = (float)((ulonglong)uVar4 >> 0x20);
  fVar1 = (this->LocalOBB).Extent.field0_0x0._s_0.Z;
  local_1d8 = (float)uVar4;
  fVar19 = (float)((uint)(fVar17 * (this->LocalOBB).AxisY.field0_0x0._s_0.Y +
                          local_1d8 * (this->LocalOBB).AxisX.field0_0x0._s_0.Y +
                         fVar1 * (this->LocalOBB).AxisZ.field0_0x0._s_0.Y) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar2 = (param_2->LocalToWorldScale).field0_0x0._s_0.Y;
  fVar18 = (float)((uint)(local_1d8 * (this->LocalOBB).AxisX.field0_0x0._s_0.Z +
                          fVar17 * (this->LocalOBB).AxisY.field0_0x0._s_0.Z +
                         fVar1 * (this->LocalOBB).AxisZ.field0_0x0._s_0.Z) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar3 = (param_2->LocalToWorldScale).field0_0x0._s_0.Z;
  (this->MeshCardsOBB).Extent.field0_0x0._s_0.X =
       (float)((uint)(fVar17 * (this->LocalOBB).AxisY.field0_0x0._s_0.X +
                      local_1d8 * (this->LocalOBB).AxisX.field0_0x0._s_0.X +
                     fVar1 * (this->LocalOBB).AxisZ.field0_0x0._s_0.X) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) *
       (param_2->LocalToWorldScale).field0_0x0._s_0.X;
  (this->MeshCardsOBB).Extent.field0_0x0._s_0.Y = fVar19 * fVar2;
  (this->MeshCardsOBB).Extent.field0_0x0._s_0.Z = fVar18 * fVar3;
  return;
}

// UpdateMinMaxAllocatedLevel @ 144c67650

void __thiscall FLumenCard::UpdateMinMaxAllocatedLevel(FLumenCard *this)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  
  this->MinAllocatedResLevel = 0xff;
  this->MaxAllocatedResLevel = '\0';
  uVar4 = 3;
  do {
    if (((int)(uVar4 - 3) < 0) || (8 < uVar4 - 3)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                         ,0x158,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->SurfaceMipMaps[(longlong)(int)uVar4 + -3].PageTableSpanSize != 0) {
      bVar3 = (byte)uVar4;
      if ((int)(uint)this->MinAllocatedResLevel < (int)uVar4) {
        bVar3 = this->MinAllocatedResLevel;
      }
      this->MinAllocatedResLevel = bVar3;
      bVar3 = (byte)uVar4;
      if ((int)uVar4 < (int)(uint)this->MaxAllocatedResLevel) {
        bVar3 = this->MaxAllocatedResLevel;
      }
      this->MaxAllocatedResLevel = bVar3;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  return;
}

// GetMipMap @ 144d7fbc0

FLumenSurfaceMipMap * __thiscall FLumenCard::GetMipMap(FLumenCard *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FLumenSurfaceMipMap *pFVar4;
  
  iVar3 = param_1 + -3;
  if ((iVar3 < 0) || (8 < (ulonglong)(longlong)iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                       ,0x158,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenSurfaceMipMap *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->SurfaceMipMaps + iVar3;
}

