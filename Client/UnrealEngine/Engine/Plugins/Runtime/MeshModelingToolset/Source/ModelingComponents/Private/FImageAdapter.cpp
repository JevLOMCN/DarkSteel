// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// SetDimensions @ 14cbaf040

void __thiscall
UE::Geometry::FImageAdapter::SetDimensions(FImageAdapter *this,FImageDimensions param_1)

{
  EImageType EVar1;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar2;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar3;
  TImageBuilder<float> *pTVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  ulong64 uVar12;
  TDenseGrid2<UE::Math::TVector<float>_> *pTVar13;
  longlong lVar14;
  long64 *plVar15;
  
  EVar1 = this->ImageType;
  iVar10 = param_1.Width;
  if (EVar1 == Float1) {
    pTVar4 = this->Image1f;
    pTVar4->Dimensions = param_1;
    pTVar13 = (TDenseGrid2<UE::Math::TVector<float>_> *)&pTVar4->Image;
    lVar7 = (longlong)(pTVar4->Dimensions).Height;
    plVar15 = &(pTVar4->Image).Buffer.ArrayNum;
    (pTVar4->Image).DimensionX = (longlong)iVar10;
    uVar12 = iVar10 * lVar7;
    (pTVar4->Image).DimensionY = lVar7;
    lVar7 = *plVar15;
    if (uVar12 - lVar7 != 0 && lVar7 <= (longlong)uVar12) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (4,4,uVar12 - lVar7,(ForAnyElementType *)pTVar13,plVar15,
                 &(pTVar4->Image).Buffer.ArrayMax);
      return;
    }
    if ((longlong)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (lVar7 <= (longlong)uVar12) {
      return;
    }
    lVar7 = lVar7 - uVar12;
    if (((((uint)(uVar12 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar7 >> 0x3f) ^ 1)) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (lVar7 == 0) {
      return;
    }
    pFVar9 = (((TDenseGrid2<float> *)pTVar13)->Buffer).AllocatorInstance.Data + uVar12 * 4;
    lVar14 = (*plVar15 - lVar7) - uVar12;
    if (lVar14 != 0) {
      memmove(pFVar9,pFVar9 + lVar7 * 4,lVar14 * 4);
    }
    uVar11 = 4;
    uVar8 = uVar11;
  }
  else if (EVar1 == Float3) {
    pTVar3 = this->Image3f;
    pTVar3->Dimensions = param_1;
    pTVar13 = &pTVar3->Image;
    lVar7 = (longlong)(pTVar3->Dimensions).Height;
    plVar15 = &(pTVar3->Image).Buffer.ArrayNum;
    (pTVar3->Image).DimensionX = (longlong)iVar10;
    uVar12 = iVar10 * lVar7;
    (pTVar3->Image).DimensionY = lVar7;
    lVar7 = *plVar15;
    if (uVar12 - lVar7 != 0 && lVar7 <= (longlong)uVar12) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0xc,4,uVar12 - lVar7,(ForAnyElementType *)pTVar13,plVar15,
                 &(pTVar3->Image).Buffer.ArrayMax);
      return;
    }
    if ((longlong)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (lVar7 <= (longlong)uVar12) {
      return;
    }
    lVar7 = lVar7 - uVar12;
    if (((((uint)(uVar12 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar7 >> 0x3f) ^ 1)) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (lVar7 == 0) {
      return;
    }
    pFVar9 = (pTVar13->Buffer).AllocatorInstance.Data + uVar12 * 0xc;
    lVar14 = (*plVar15 - lVar7) - uVar12;
    if (lVar14 != 0) {
      memmove(pFVar9,pFVar9 + lVar7 * 0xc,lVar14 * 0xc);
    }
    uVar11 = 4;
    uVar8 = 0xc;
  }
  else {
    if (EVar1 != Float4) {
      return;
    }
    pTVar2 = this->Image4f;
    pTVar2->Dimensions = param_1;
    pTVar13 = (TDenseGrid2<UE::Math::TVector<float>_> *)&pTVar2->Image;
    lVar7 = (longlong)(pTVar2->Dimensions).Height;
    plVar15 = &(pTVar2->Image).Buffer.ArrayNum;
    (pTVar2->Image).DimensionX = (longlong)iVar10;
    uVar12 = iVar10 * lVar7;
    (pTVar2->Image).DimensionY = lVar7;
    lVar7 = *plVar15;
    if (uVar12 - lVar7 != 0 && lVar7 <= (longlong)uVar12) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar12 - lVar7,(ForAnyElementType *)pTVar13,plVar15,
                 &(pTVar2->Image).Buffer.ArrayMax);
      return;
    }
    if ((longlong)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar12);
    }
    if (lVar7 <= (longlong)uVar12) {
      return;
    }
    lVar7 = lVar7 - uVar12;
    if (((((uint)(uVar12 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar7 >> 0x3f) ^ 1)) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (lVar7 == 0) {
      return;
    }
    pFVar9 = (((TDenseGrid2<UE::Math::TVector4<float>_> *)pTVar13)->Buffer).AllocatorInstance.Data +
             uVar12 * 0x10;
    lVar14 = (*plVar15 - lVar7) - uVar12;
    if (lVar14 != 0) {
      memmove(pFVar9,pFVar9 + lVar7 * 0x10,lVar14 * 0x10);
    }
    uVar11 = 0x10;
    uVar8 = uVar11;
  }
  *plVar15 = *plVar15 - lVar7;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (uVar8,uVar11,(ForAnyElementType *)pTVar13,*plVar15,
             &(((TDenseGrid2<UE::Math::TVector4<float>_> *)pTVar13)->Buffer).ArrayMax);
  return;
}

