// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 15

// operator[] @ 144c1f070

FLumenCard * __thiscall
TSparseSpanArray<FLumenCard>::operator[](TSparseSpanArray<FLumenCard> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLumenCard *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenCard *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLumenCard *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 400);
}

// operator[] @ 144c1f0f0

FLumenHeightfield * __thiscall
TSparseSpanArray<FLumenHeightfield>::operator[]
          (TSparseSpanArray<FLumenHeightfield> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLumenHeightfield *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenHeightfield *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLumenHeightfield *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// operator[] @ 144c1f170

FLumenMeshCards * __thiscall
TSparseSpanArray<FLumenMeshCards>::operator[](TSparseSpanArray<FLumenMeshCards> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLumenMeshCards *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenMeshCards *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLumenMeshCards *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 400);
}

// AddSpan @ 144c2a090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall TSparseSpanArray<FLumenCard>::AddSpan(TSparseSpanArray<FLumenCard> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FLumenCard *pFVar12;
  FLumenCard *pFVar13;
  double *pdVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_3a8 [32];
  double local_370 [51];
  FLumenCard local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  if ((param_1 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x1e,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    iVar10 = (*pcVar2)();
    return iVar10;
  }
  uVar11 = FSpanAllocator::Allocate(&this->SpanAllocator,param_1);
  piVar1 = &(this->Elements).ArrayNum;
  iVar10 = *piVar1;
  lVar15 = 0x38;
  if ((this->SpanAllocator).bGrowOnly == false) {
    lVar15 = 0x34;
  }
  iVar18 = *(int *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData + lVar15 + -0x10)
  ;
  if (iVar10 < iVar18) {
    iVar18 = iVar18 - iVar10;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (400,8,iVar18,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<FLumenCard,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)iVar10 * 400,iVar18);
    if (-1 < iVar18) {
      iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         (&this->AllocatedElementsBitArray,iVar18);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                (&this->AllocatedElementsBitArray,iVar10,iVar18,false);
    }
  }
  if ((int)uVar11 < (int)(param_1 + uVar11)) {
    lVar15 = (longlong)(int)uVar11 * 400;
    uVar20 = uVar11;
    do {
      pFVar12 = FLumenCard::FLumenCard(&local_1d8);
      lVar17 = 3;
      pdVar7 = local_370;
      do {
        pdVar14 = pdVar7;
        pFVar13 = pFVar12;
        dVar3 = *(double *)((longlong)&(pFVar13->LocalOBB).Origin.field0_0x0 + 8);
        dVar4 = *(double *)((longlong)&(pFVar13->LocalOBB).AxisX.field0_0x0 + 4);
        dVar5 = *(double *)&(pFVar13->LocalOBB).AxisY.field0_0x0;
        pFVar12 = (FLumenCard *)((pFVar13->WorldOBB).AxisY.field0_0x0.XYZ + 2);
        *pdVar14 = *(double *)&(pFVar13->LocalOBB).Origin.field0_0x0;
        pdVar14[1] = dVar3;
        dVar3 = *(double *)((longlong)&(pFVar13->LocalOBB).AxisY.field0_0x0 + 8);
        dVar6 = *(double *)((longlong)&(pFVar13->LocalOBB).AxisZ.field0_0x0 + 4);
        pdVar14[2] = dVar4;
        pdVar14[3] = dVar5;
        dVar4 = *(double *)&(pFVar13->LocalOBB).Extent.field0_0x0;
        dVar5 = *(double *)((longlong)&(pFVar13->LocalOBB).Extent.field0_0x0 + 8);
        pdVar14[4] = dVar3;
        pdVar14[5] = dVar6;
        dVar3 = (pFVar13->WorldOBB).Origin.field0_0x0._s_0.X;
        dVar6 = (pFVar13->WorldOBB).Origin.field0_0x0._s_0.Y;
        pdVar14[6] = dVar4;
        pdVar14[7] = dVar5;
        dVar4 = (pFVar13->WorldOBB).Origin.field0_0x0._s_0.Z;
        dVar5 = (pFVar13->WorldOBB).AxisX.field0_0x0._s_0.X;
        pdVar14[8] = dVar3;
        pdVar14[9] = dVar6;
        dVar3 = (pFVar13->WorldOBB).AxisX.field0_0x0._s_0.Y;
        dVar6 = (pFVar13->WorldOBB).AxisX.field0_0x0._s_0.Z;
        pdVar14[10] = dVar4;
        pdVar14[0xb] = dVar5;
        dVar4 = (pFVar13->WorldOBB).AxisY.field0_0x0._s_0.X;
        dVar5 = (pFVar13->WorldOBB).AxisY.field0_0x0._s_0.Y;
        pdVar14[0xc] = dVar3;
        pdVar14[0xd] = dVar6;
        pdVar14[0xe] = dVar4;
        pdVar14[0xf] = dVar5;
        lVar17 = lVar17 + -1;
        pdVar7 = pdVar14 + 0x10;
      } while (lVar17 != 0);
      dVar3 = (pFVar13->WorldOBB).AxisZ.field0_0x0._s_0.X;
      iVar10 = (this->Elements).ArrayNum;
      pdVar14[0x10] = *(double *)&(pFVar12->LocalOBB).Origin.field0_0x0;
      pdVar14[0x11] = dVar3;
      uVar21 = 0;
      if ((int)uVar20 < iVar10) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        iVar10 = (*pcVar2)();
        return iVar10;
      }
      lVar17 = 3;
      pdVar7 = local_370;
      pFVar8 = (this->Elements).AllocatorInstance.Data + lVar15;
      do {
        pFVar16 = pFVar8;
        pdVar14 = pdVar7;
        dVar3 = pdVar14[1];
        dVar4 = pdVar14[2];
        dVar5 = pdVar14[3];
        *(double *)pFVar16 = *pdVar14;
        *(double *)(pFVar16 + 8) = dVar3;
        dVar3 = pdVar14[4];
        dVar6 = pdVar14[5];
        *(double *)(pFVar16 + 0x10) = dVar4;
        *(double *)(pFVar16 + 0x18) = dVar5;
        dVar4 = pdVar14[6];
        dVar5 = pdVar14[7];
        *(double *)(pFVar16 + 0x20) = dVar3;
        *(double *)(pFVar16 + 0x28) = dVar6;
        dVar3 = pdVar14[8];
        dVar6 = pdVar14[9];
        *(double *)(pFVar16 + 0x30) = dVar4;
        *(double *)(pFVar16 + 0x38) = dVar5;
        dVar4 = pdVar14[10];
        dVar5 = pdVar14[0xb];
        *(double *)(pFVar16 + 0x40) = dVar3;
        *(double *)(pFVar16 + 0x48) = dVar6;
        dVar3 = pdVar14[0xc];
        dVar6 = pdVar14[0xd];
        *(double *)(pFVar16 + 0x50) = dVar4;
        *(double *)(pFVar16 + 0x58) = dVar5;
        dVar4 = pdVar14[0xe];
        dVar5 = pdVar14[0xf];
        *(double *)(pFVar16 + 0x60) = dVar3;
        *(double *)(pFVar16 + 0x68) = dVar6;
        *(double *)(pFVar16 + 0x70) = dVar4;
        *(double *)(pFVar16 + 0x78) = dVar5;
        lVar17 = lVar17 + -1;
        pdVar7 = pdVar14 + 0x10;
        pFVar8 = pFVar16 + 0x80;
      } while (lVar17 != 0);
      dVar3 = pdVar14[0x11];
      uVar21 = 0;
      puVar19 = &local_1d8.SurfaceMipMaps[0].PageTableSpanSize;
      *(double *)(pFVar16 + 0x80) = pdVar14[0x10];
      *(double *)(pFVar16 + 0x88) = dVar3;
      do {
        if ((*puVar19 != 0) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_874545965275544426>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                               ,0x496,"SurfaceMipMaps[MipIndex].PageTableSpanSize == 0"), bVar9)) {
          pcVar2 = (code *)swi(3);
          iVar10 = (*pcVar2)();
          return iVar10;
        }
        uVar21 = uVar21 + 1;
        puVar19 = puVar19 + 6;
      } while (uVar21 < 9);
      uVar20 = uVar20 + 1;
      lVar15 = lVar15 + 400;
    } while ((int)uVar20 < (int)(param_1 + uVar11));
  }
  TBitArray<FDefaultBitArrayAllocator>::SetRange
            (&this->AllocatedElementsBitArray,uVar11,param_1,true);
  return uVar11;
}

// AddSpan @ 144c2a3a0

int __thiscall
TSparseSpanArray<FLumenHeightfield>::AddSpan(TSparseSpanArray<FLumenHeightfield> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  if ((param_1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x1e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar5 = FSpanAllocator::Allocate(&this->SpanAllocator,param_1);
  piVar1 = &(this->Elements).ArrayNum;
  lVar8 = 0x38;
  if ((this->SpanAllocator).bGrowOnly == false) {
    lVar8 = 0x34;
  }
  iVar4 = *(int *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData + lVar8 + -0x10);
  if (*piVar1 < iVar4) {
    iVar4 = iVar4 - *piVar1;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<FLumenHeightfield,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)iVar6 * 4,iVar4);
    if (-1 < iVar4) {
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        (&this->AllocatedElementsBitArray,iVar4);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                (&this->AllocatedElementsBitArray,iVar6,iVar4,false);
    }
  }
  if ((int)uVar5 < (int)(uVar5 + param_1)) {
    lVar8 = (longlong)(int)uVar5 * 4;
    uVar9 = uVar5;
    do {
      uVar7 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)((this->Elements).AllocatorInstance.Data + lVar8) = 0xffffffff;
      lVar8 = lVar8 + 4;
    } while ((int)uVar9 < (int)(uVar5 + param_1));
  }
  TBitArray<FDefaultBitArrayAllocator>::SetRange
            (&this->AllocatedElementsBitArray,uVar5,param_1,true);
  return uVar5;
}

// AddSpan @ 144c2a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
TSparseSpanArray<FLumenMeshCards>::AddSpan(TSparseSpanArray<FLumenMeshCards> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStackY_248 [32];
  FLumenMeshCards local_208;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((param_1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x1e,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  uVar7 = FSpanAllocator::Allocate(&this->SpanAllocator,param_1);
  piVar1 = &(this->Elements).ArrayNum;
  iVar6 = *piVar1;
  lVar9 = 0x38;
  if ((this->SpanAllocator).bGrowOnly == false) {
    lVar9 = 0x34;
  }
  iVar10 = *(int *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData + lVar9 + -0x10);
  if (iVar6 < iVar10) {
    iVar10 = iVar10 - iVar6;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (400,0x10,iVar10,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<FLumenMeshCards,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)iVar6 * 400,iVar10);
    if (-1 < iVar10) {
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        (&this->AllocatedElementsBitArray,iVar10);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                (&this->AllocatedElementsBitArray,iVar6,iVar10,false);
    }
  }
  dVar4 = _UNK_15076c718;
  dVar3 = ___xmm_bff0000000000000bff0000000000000;
  if ((int)uVar7 < (int)(uVar7 + param_1)) {
    lVar9 = (longlong)(int)uVar7 * 400;
    uVar11 = uVar7;
    do {
      local_208.LocalBounds.Pad[0] = '\0';
      local_208.LocalBounds.Pad[1] = '\0';
      local_208.LocalBounds.Pad[2] = '\0';
      local_208.LocalBounds.Pad[3] = '\0';
      local_208.LocalBounds.Pad[4] = '\0';
      local_208.LocalBounds.Pad[5] = '\0';
      local_208.LocalBounds.Pad[6] = '\0';
      local_208._392_8_ = 0;
      local_208.bFarField = false;
      local_208.bHeightfield = false;
      local_208.bMostlyTwoSided = false;
      local_208.bEmissiveLightSource = false;
      local_208.FirstCardIndex = 0;
      local_208.NumCards = 0;
      uVar8 = 0;
      if ((int)uVar11 < (this->Elements).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      local_208._136_8_ = 0x3f800000;
      local_208.LocalToWorld.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_208.LocalToWorld.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_208.LocalToWorld.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_208.LocalToWorld.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_208.LocalToWorld.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_208.LocalToWorld.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_208.LocalToWorld.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_208.LocalToWorld.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_208.LocalToWorld.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      local_208.LocalToWorld.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_208.LocalToWorld.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_208.LocalToWorld.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_208.LocalToWorld.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_208.LocalToWorld.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_208.LocalToWorldScale.field0_0x0._s_0.X = 1.0;
      local_208.LocalToWorldScale.field0_0x0._s_0.Y = 1.0;
      local_208.WorldToLocalRotation.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_208.WorldToLocalRotation.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_208.WorldToLocalRotation.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_208.WorldToLocalRotation.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_208.WorldToLocalRotation.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_208.WorldToLocalRotation.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_208.WorldToLocalRotation.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_208.WorldToLocalRotation.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_208.WorldToLocalRotation.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      local_208.WorldToLocalRotation.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_208.WorldToLocalRotation.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_208.WorldToLocalRotation.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_208.WorldToLocalRotation.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_208.WorldToLocalRotation.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_208.LocalBounds.Min.field0_0x0._s_0.X = dVar3;
      local_208.LocalBounds.Min.field0_0x0._s_0.Y = dVar4;
      local_208.LocalBounds.Min.field0_0x0._s_0.Z = dVar3;
      local_208.LocalBounds.Max.field0_0x0._s_0.X = dVar4;
      local_208.LocalBounds.Max.field0_0x0._s_0.Y = dVar3;
      local_208.LocalBounds.Max.field0_0x0._s_0.Z = dVar4;
      local_208.LocalBounds.IsValid = '\x01';
      local_208.PrimitiveGroupIndex = -1;
      local_208.ScenePrimitiveIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_208.ScenePrimitiveIndices.ArrayNum = 0;
      local_208.ScenePrimitiveIndices.ArrayMax = 1;
      local_208.CardLookup[0] = 0;
      local_208.CardLookup[1] = 0;
      local_208.CardLookup[2] = 0;
      local_208.CardLookup[3] = 0;
      local_208.CardLookup[4] = 0;
      local_208.CardLookup[5] = 0;
      local_208.ScenePrimitiveIndices.AllocatorInstance.InlineData[0] = '\0';
      local_208.ScenePrimitiveIndices.AllocatorInstance.InlineData[1] = '\0';
      local_208.ScenePrimitiveIndices.AllocatorInstance.InlineData[2] = '\0';
      local_208.ScenePrimitiveIndices.AllocatorInstance.InlineData[3] = '\0';
      local_208.ScenePrimitiveIndices.AllocatorInstance._padding_ = 0;
      local_208.LocalToWorld.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_208.LocalToWorld.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
      local_208.WorldToLocalRotation.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_208.WorldToLocalRotation.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      FLumenMeshCards::operator=
                ((FLumenMeshCards *)((this->Elements).AllocatorInstance.Data + lVar9),&local_208);
      if (local_208.ScenePrimitiveIndices.AllocatorInstance.SecondaryData !=
          (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_208.ScenePrimitiveIndices.AllocatorInstance.SecondaryData);
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 400;
    } while ((int)uVar11 < (int)(uVar7 + param_1));
  }
  TBitArray<FDefaultBitArrayAllocator>::SetRange
            (&this->AllocatedElementsBitArray,uVar7,param_1,true);
  return uVar7;
}

// RemoveSpan @ 144c56240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TSparseSpanArray<FLumenMeshCards>::RemoveSpan
          (TSparseSpanArray<FLumenMeshCards> *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  FLumenMeshCards local_208;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_238;
  lVar9 = (longlong)param_1;
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x38,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  dVar4 = _UNK_15076c718;
  dVar3 = ___xmm_bff0000000000000bff0000000000000;
  if (param_1 < param_1 + param_2) {
    lVar8 = lVar9 * 400;
    uVar7 = param_1;
    do {
      iVar1 = (this->Elements).ArrayNum;
      local_208.LocalBounds.Pad[0] = '\0';
      local_208.LocalBounds.Pad[1] = '\0';
      local_208.LocalBounds.Pad[2] = '\0';
      local_208.LocalBounds.Pad[3] = '\0';
      local_208.LocalBounds.Pad[4] = '\0';
      local_208.LocalBounds.Pad[5] = '\0';
      local_208.LocalBounds.Pad[6] = '\0';
      local_208._392_8_ = 0;
      local_208.bFarField = false;
      local_208.bHeightfield = false;
      local_208.bMostlyTwoSided = false;
      local_208.bEmissiveLightSource = false;
      local_208.FirstCardIndex = 0;
      local_208.NumCards = 0;
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      local_208._136_8_ = 0x3f800000;
      local_208.LocalToWorld.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_208.LocalToWorld.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_208.LocalToWorld.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_208.LocalToWorld.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_208.LocalToWorld.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_208.LocalToWorld.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_208.LocalToWorld.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_208.LocalToWorld.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_208.LocalToWorld.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      local_208.LocalToWorld.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_208.LocalToWorld.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_208.LocalToWorld.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_208.LocalToWorld.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_208.LocalToWorld.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_208.LocalToWorldScale.field0_0x0._s_0.X = 1.0;
      local_208.LocalToWorldScale.field0_0x0._s_0.Y = 1.0;
      local_208.WorldToLocalRotation.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_208.WorldToLocalRotation.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_208.WorldToLocalRotation.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_208.WorldToLocalRotation.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_208.WorldToLocalRotation.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_208.WorldToLocalRotation.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_208.WorldToLocalRotation.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_208.WorldToLocalRotation.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_208.WorldToLocalRotation.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      local_208.WorldToLocalRotation.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_208.WorldToLocalRotation.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_208.WorldToLocalRotation.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_208.WorldToLocalRotation.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_208.WorldToLocalRotation.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_208.LocalBounds.Min.field0_0x0._s_0.X = dVar3;
      local_208.LocalBounds.Min.field0_0x0._s_0.Y = dVar4;
      local_208.LocalBounds.Min.field0_0x0._s_0.Z = dVar3;
      local_208.LocalBounds.Max.field0_0x0._s_0.X = dVar4;
      local_208.LocalBounds.Max.field0_0x0._s_0.Y = dVar3;
      local_208.LocalBounds.Max.field0_0x0._s_0.Z = dVar4;
      local_208.LocalBounds.IsValid = '\x01';
      local_208.PrimitiveGroupIndex = -1;
      local_208.ScenePrimitiveIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_208.ScenePrimitiveIndices.ArrayNum = 0;
      local_208.ScenePrimitiveIndices.ArrayMax = 1;
      local_208.CardLookup[0] = 0;
      local_208.CardLookup[1] = 0;
      local_208.CardLookup[2] = 0;
      local_208.CardLookup[3] = 0;
      local_208.CardLookup[4] = 0;
      local_208.CardLookup[5] = 0;
      local_208.ScenePrimitiveIndices.AllocatorInstance.InlineData[0] = '\0';
      local_208.ScenePrimitiveIndices.AllocatorInstance.InlineData[1] = '\0';
      local_208.ScenePrimitiveIndices.AllocatorInstance.InlineData[2] = '\0';
      local_208.ScenePrimitiveIndices.AllocatorInstance.InlineData[3] = '\0';
      local_208.ScenePrimitiveIndices.AllocatorInstance._padding_ = 0;
      local_208.LocalToWorld.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_208.LocalToWorld.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
      local_208.WorldToLocalRotation.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_208.WorldToLocalRotation.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
      if ((uVar6 == 0) &&
         (local_218 = lVar9, local_210 = (longlong)iVar1,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FLumenMeshCards::operator=
                ((FLumenMeshCards *)((this->Elements).AllocatorInstance.Data + lVar8),&local_208);
      if (local_208.ScenePrimitiveIndices.AllocatorInstance.SecondaryData !=
          (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_208.ScenePrimitiveIndices.AllocatorInstance.SecondaryData);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 400;
    } while ((int)uVar7 < param_1 + param_2);
  }
  FSpanAllocator::Free(&this->SpanAllocator,param_1,param_2);
  TBitArray<FDefaultBitArrayAllocator>::SetRange
            (&this->AllocatedElementsBitArray,param_1,param_2,false);
  return;
}

// operator[] @ 144d442c0

FLumenPageTableEntry * __thiscall
TSparseSpanArray<FLumenPageTableEntry>::operator[]
          (TSparseSpanArray<FLumenPageTableEntry> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLumenPageTableEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenPageTableEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLumenPageTableEntry *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x50);
}

// AddSpan @ 144d57590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
TSparseSpanArray<FLumenPageTableEntry>::AddSpan
          (TSparseSpanArray<FLumenPageTableEntry> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  
  if ((param_1 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x1e,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    iVar9 = (*pcVar3)();
    return iVar9;
  }
  uVar10 = FSpanAllocator::Allocate(&this->SpanAllocator,param_1);
  piVar1 = &(this->Elements).ArrayNum;
  iVar9 = *piVar1;
  lVar12 = 0x38;
  if ((this->SpanAllocator).bGrowOnly == false) {
    lVar12 = 0x34;
  }
  iVar13 = *(int *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData + lVar12 + -0x10)
  ;
  if (iVar9 < iVar13) {
    iVar13 = iVar13 - iVar9;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,iVar13,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax)
    ;
    DefaultConstructItems<FLumenPageTableEntry,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)iVar9 * 0x50,iVar13);
    if (-1 < iVar13) {
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        (&this->AllocatedElementsBitArray,iVar13);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                (&this->AllocatedElementsBitArray,iVar9,iVar13,false);
    }
  }
  uVar7 = _UNK_15076adc8;
  uVar6 = ___xmm_0000000000000000ffffffffffffffff;
  uVar5 = _UNK_150689648;
  uVar4 = ___xmm_3f800000000000000000000000000000;
  if ((int)uVar10 < (int)(uVar10 + param_1)) {
    lVar12 = (longlong)(int)uVar10 * 0x50;
    uVar14 = uVar10;
    do {
      uVar11 = 0;
      if ((int)uVar14 < (this->Elements).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
      pFVar2 = (this->Elements).AllocatorInstance.Data;
      uVar14 = uVar14 + 1;
      *(undefined8 *)(pFVar2 + lVar12) = uVar6;
      *(undefined8 *)(pFVar2 + lVar12 + 8) = uVar7;
      *(undefined8 *)(pFVar2 + lVar12 + 0x10) = 0;
      *(undefined2 *)(pFVar2 + lVar12 + 0x1e) = 0;
      *(undefined2 *)(pFVar2 + lVar12 + 0x20) = 0;
      *(undefined2 *)(pFVar2 + lVar12 + 0x22) = 0;
      *(undefined4 *)(pFVar2 + lVar12 + 0x24) = 0xffffffff;
      pFVar2[lVar12 + 0x28] = (FScriptContainerElement)0x0;
      *(undefined8 *)(pFVar2 + lVar12 + 0x40) = 0xffffffffffffffff;
      *(undefined4 *)(pFVar2 + lVar12 + 0x18) = 0;
      *(undefined2 *)(pFVar2 + lVar12 + 0x1c) = 0;
      *(undefined8 *)(pFVar2 + lVar12 + 0x30) = uVar4;
      *(undefined8 *)(pFVar2 + lVar12 + 0x30 + 8) = uVar5;
      lVar12 = lVar12 + 0x50;
    } while ((int)uVar14 < (int)(uVar10 + param_1));
  }
  TBitArray<FDefaultBitArrayAllocator>::SetRange
            (&this->AllocatedElementsBitArray,uVar10,param_1,true);
  return uVar10;
}

// Consolidate @ 144d64c70

void __thiscall
TSparseSpanArray<FLumenPageTableEntry>::Consolidate(TSparseSpanArray<FLumenPageTableEntry> *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  longlong lVar9;
  
  FSpanAllocator::Consolidate(&this->SpanAllocator);
  piVar1 = &(this->Elements).ArrayNum;
  iVar6 = *piVar1;
  lVar9 = 0x38;
  lVar7 = 0x38;
  if ((this->SpanAllocator).bGrowOnly == false) {
    lVar7 = 0x34;
  }
  uVar2 = *(uint *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData + lVar7 + -0x10);
  if ((int)(uVar2 * 2) < iVar6) {
    if (iVar6 < (int)uVar2) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,0x10,uVar2 - iVar6,(ForAnyElementType *)this,piVar1,
                         &(this->Elements).ArrayMax);
      DefaultConstructItems<FLumenPageTableEntry,int>
                ((this->Elements).AllocatorInstance.Data + (longlong)iVar5 * 0x50,uVar2 - iVar6);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar6) {
        uVar8 = iVar6 - uVar2;
        if (((int)(uVar8 | uVar2) < 0) &&
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
        if (uVar8 != 0) {
          _Dst = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x50;
          iVar6 = (*piVar1 - uVar2) - uVar8;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x50,(longlong)iVar6 * 0x50);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,0x10,(ForAnyElementType *)this,*piVar1,&(this->Elements).ArrayMax);
        }
      }
    }
    if ((this->SpanAllocator).bGrowOnly == false) {
      lVar9 = 0x34;
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
              (&this->AllocatedElementsBitArray,
               *(int *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData +
                       lVar9 + -0x10));
  }
  return;
}

// Consolidate @ 144d64e00

void __thiscall
TSparseSpanArray<FLumenPrimitiveGroupCullingInfo>::Consolidate
          (TSparseSpanArray<FLumenPrimitiveGroupCullingInfo> *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  longlong lVar9;
  
  FSpanAllocator::Consolidate(&this->SpanAllocator);
  piVar1 = &(this->Elements).ArrayNum;
  iVar6 = *piVar1;
  lVar9 = 0x38;
  lVar7 = 0x38;
  if ((this->SpanAllocator).bGrowOnly == false) {
    lVar7 = 0x34;
  }
  uVar2 = *(uint *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData + lVar7 + -0x10);
  if ((int)(uVar2 * 2) < iVar6) {
    if (iVar6 < (int)uVar2) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,4,uVar2 - iVar6,(ForAnyElementType *)this,piVar1,
                         &(this->Elements).ArrayMax);
      DefaultConstructItems<FLumenPrimitiveGroupCullingInfo,int>
                ((this->Elements).AllocatorInstance.Data + (longlong)iVar5 * 0x20,uVar2 - iVar6);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar6) {
        uVar8 = iVar6 - uVar2;
        if (((int)(uVar8 | uVar2) < 0) &&
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
        if (uVar8 != 0) {
          _Dst = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x20;
          iVar6 = (*piVar1 - uVar2) - uVar8;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x20,(longlong)iVar6 << 5);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,4,(ForAnyElementType *)this,*piVar1,&(this->Elements).ArrayMax);
        }
      }
    }
    if ((this->SpanAllocator).bGrowOnly == false) {
      lVar9 = 0x34;
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
              (&this->AllocatedElementsBitArray,
               *(int *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData +
                       lVar9 + -0x10));
  }
  return;
}

// Consolidate @ 144d64f80

void __thiscall
TSparseSpanArray<FLumenHeightfield>::Consolidate(TSparseSpanArray<FLumenHeightfield> *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  FSpanAllocator::Consolidate(&this->SpanAllocator);
  piVar1 = &(this->Elements).ArrayNum;
  iVar6 = *piVar1;
  lVar9 = 0x38;
  lVar7 = 0x38;
  if ((this->SpanAllocator).bGrowOnly == false) {
    lVar7 = 0x34;
  }
  uVar2 = *(uint *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData + lVar7 + -0x10);
  if ((int)(uVar2 * 2) < iVar6) {
    if (iVar6 < (int)uVar2) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar2 - iVar6,(ForAnyElementType *)this,piVar1,
                         &(this->Elements).ArrayMax);
      DefaultConstructItems<FLumenHeightfield,int>
                ((this->Elements).AllocatorInstance.Data + (longlong)iVar5 * 4,uVar2 - iVar6);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar6) {
        uVar8 = iVar6 - uVar2;
        if (((int)(uVar8 | uVar2) < 0) &&
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
        if (uVar8 != 0) {
          _Dst = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar2 * 4;
          iVar6 = (*piVar1 - uVar2) - uVar8;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar6 << 2);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)this,*piVar1,&(this->Elements).ArrayMax);
        }
      }
    }
    if ((this->SpanAllocator).bGrowOnly == false) {
      lVar9 = 0x34;
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
              (&this->AllocatedElementsBitArray,
               *(int *)((this->AllocatedElementsBitArray).AllocatorInstance.InlineData +
                       lVar9 + -0x10));
  }
  return;
}

// RemoveSpan @ 144d943b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TSparseSpanArray<FLumenPageTableEntry>::RemoveSpan
          (TSparseSpanArray<FLumenPageTableEntry> *this,int param_1,int param_2)

{
  int *piVar1;
  TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar12;
  longlong lVar13;
  uint uVar14;
  int local_c8;
  int iStack_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  FScriptContainerElement local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if ((param_2 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x38,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = _UNK_15076adc8;
  uVar7 = ___xmm_0000000000000000ffffffffffffffff;
  uVar6 = _UNK_150689648;
  uVar5 = ___xmm_3f800000000000000000000000000000;
  if (param_1 < param_1 + param_2) {
    lVar13 = (longlong)param_1 * 0x50;
    uVar14 = param_1;
    do {
      local_8f = 0;
      local_8b = 0;
      local_70 = 0;
      uVar10 = 0;
      if ((int)uVar14 < (this->Elements).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      local_89 = 0;
      local_b8 = uVar7;
      uStack_b0 = uVar8;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_94 = 0xffffffff;
      local_90 = (FScriptContainerElement)0x0;
      local_88 = uVar5;
      uStack_80 = uVar6;
      local_78 = 0xffffffffffffffff;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Elements).AllocatorInstance.Data;
      uVar14 = uVar14 + 1;
      *(undefined8 *)(pFVar3 + lVar13) = local_b8;
      *(undefined8 *)(pFVar3 + lVar13 + 8) = uStack_b0;
      *(undefined8 *)(pFVar3 + lVar13 + 0x10) = local_a8;
      *(undefined2 *)(pFVar3 + lVar13 + 0x1e) = local_a0._6_2_;
      *(undefined2 *)(pFVar3 + lVar13 + 0x20) = (undefined2)local_98;
      *(undefined2 *)(pFVar3 + lVar13 + 0x22) = local_98._2_2_;
      *(undefined4 *)(pFVar3 + lVar13 + 0x24) = local_94;
      pFVar3[lVar13 + 0x28] = local_90;
      *(undefined8 *)(pFVar3 + lVar13 + 0x40) = local_78;
      *(undefined4 *)(pFVar3 + lVar13 + 0x18) = 0;
      *(undefined2 *)(pFVar3 + lVar13 + 0x1c) = 0;
      *(undefined8 *)(pFVar3 + lVar13 + 0x30) = uVar5;
      *(undefined8 *)(pFVar3 + lVar13 + 0x30 + 8) = uVar6;
      lVar13 = lVar13 + 0x50;
    } while ((int)uVar14 < param_1 + param_2);
  }
  pTVar2 = &(this->SpanAllocator).PendingFreeSpans;
  FVar12 = (this->SpanAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FVar12 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar2;
  }
  local_c8 = param_1;
  iStack_c4 = param_2;
  if ((((ulonglong)FVar12 <= &local_c8) &&
      (&local_c8 <
       (int *)((longlong)FVar12 + (longlong)(this->SpanAllocator).PendingFreeSpans.ArrayMax * 8)))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = (this->SpanAllocator).PendingFreeSpans.ArrayNum;
  piVar1 = &(this->SpanAllocator).PendingFreeSpans.ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                       (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SpanAllocator).PendingFreeSpans.ArrayNum = iVar11 + 1;
  FVar12 = (this->SpanAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FVar12 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar2;
  }
  *(ulonglong *)((longlong)FVar12 + (longlong)iVar11 * 8) = CONCAT44(iStack_c4,local_c8);
  (this->SpanAllocator).CurrentSize = (this->SpanAllocator).CurrentSize - param_2;
  TBitArray<FDefaultBitArrayAllocator>::SetRange
            (&this->AllocatedElementsBitArray,param_1,param_2,false);
  return;
}

// operator[] @ 144e75030

FLumenCard * __thiscall
TSparseSpanArray<FLumenCard>::operator[](TSparseSpanArray<FLumenCard> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLumenCard *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenCard *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLumenCard *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 400);
}

// operator[] @ 144e750b0

FLumenMeshCards * __thiscall
TSparseSpanArray<FLumenMeshCards>::operator[](TSparseSpanArray<FLumenMeshCards> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLumenMeshCards *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenMeshCards *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLumenMeshCards *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 400);
}

