// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// InitBins @ 144090360

void __thiscall
UE::GeometryCollectionInternal::FPerGeometrySpatial::InitBins
          (FPerGeometrySpatial *this,FGeometryCollection *param_1,FBinNormals *param_2,int param_3,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  TTypeCompatibleBytes<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_58 [12];
  
  piVar10 = &(this->Bins).ArrayNum;
  iVar7 = *piVar10;
  if (iVar7 < 0x14) {
    iVar6 = Core::Private::
            ReallocGrow<0,TFixedAllocator<20>::ForElementType<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                      (0x10,8,0x14 - iVar7,
                       (ForElementType<TArray<int,TSizedDefaultAllocator<32>_>_> *)this,piVar10,
                       &(this->Bins).ArrayMax);
    memset((this->Bins).AllocatorInstance.InlineData + iVar6,0,(longlong)(0x14 - iVar7) << 4);
  }
  else if (0x14 < iVar7) {
    iVar7 = iVar7 + -0x14;
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (iVar7 == 0) goto LAB_144090435;
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TFixedAllocator<20>_>::RemoveAtImpl
              (&this->Bins,0x14,iVar7);
  }
LAB_144090435:
  uVar12 = 0;
  if (param_3 < *(int *)&(param_1->FaceStart).field_0x18) {
    uVar12 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = *(uint *)(*(longlong *)&(param_1->FaceStart).field_0x10 + (longlong)param_3 * 4);
  uVar11 = 0;
  if (param_3 < *(int *)&(param_1->FaceCount).field_0x18) {
    uVar11 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = __real_bf800000;
  iVar7 = *(int *)(*(longlong *)&(param_1->FaceCount).field_0x10 + (longlong)param_3 * 4) + uVar12;
  while( true ) {
    if (iVar7 <= (int)uVar12) {
      return;
    }
    uVar11 = 0;
    if ((int)uVar12 < param_4->ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    local_58[0] = uVar12;
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_4->AllocatorInstance).Data;
    lVar9 = (longlong)(int)uVar12;
    uVar11 = 0;
    lVar14 = -1;
    lVar15 = 0;
    fVar17 = fVar3;
    uVar12 = 0xffffffff;
    do {
      if (((param_2->Bins).ArrayNum <= (int)uVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar16 = *(float *)((param_2->Bins).AllocatorInstance.InlineData[lVar15].Pad + 4) *
               *(float *)(pFVar1 + lVar9 * 0xc + 4) +
               *(float *)(param_2->Bins).AllocatorInstance.InlineData[lVar15].Pad *
               *(float *)(pFVar1 + lVar9 * 0xc) +
               *(float *)((param_2->Bins).AllocatorInstance.InlineData[lVar15].Pad + 8) *
               *(float *)(pFVar1 + lVar9 * 0xc + 8);
      fVar18 = fVar17;
      if (fVar17 <= fVar16) {
        fVar18 = fVar16;
      }
      uVar8 = uVar11;
      lVar4 = lVar15;
      if (fVar16 <= fVar17) {
        uVar8 = uVar12;
        lVar4 = lVar14;
      }
      lVar14 = lVar4;
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 1;
      fVar17 = fVar18;
      uVar12 = uVar8;
    } while ((int)uVar11 < 0x14);
    uVar12 = 0;
    if ((int)uVar8 < (this->Bins).ArrayNum) {
      uVar12 = ~uVar8 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pTVar13 = (this->Bins).AllocatorInstance.InlineData + lVar14;
    if (((*(uint **)pTVar13->Pad <= local_58) &&
        (local_58 < *(uint **)pTVar13->Pad + *(int *)(pTVar13->Pad + 0xc))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = *(int *)(pTVar13->Pad + 8);
    if (iVar6 == *(int *)(pTVar13->Pad + 0xc)) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pTVar13,(int *)(pTVar13->Pad + 0xc));
    }
    *(int *)(pTVar13->Pad + 8) = iVar6 + 1;
    *(uint *)(*(longlong *)pTVar13->Pad + (longlong)iVar6 * 4) = local_58[0];
    uVar12 = local_58[0] + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

