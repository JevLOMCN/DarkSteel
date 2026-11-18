// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// FGeometryCacheMeshBufferWrapper @ 14ca62720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGeometryCacheMeshBufferWrapper * __thiscall
UE::Conversion::FGeometryCacheMeshBufferWrapper::FGeometryCacheMeshBufferWrapper
          (FGeometryCacheMeshBufferWrapper *this,
          TArrayView<FGeometryCacheMeshData_const_,int> *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  FGeometryCacheMeshBufferWrapper *pFVar21;
  FGeometryCacheMeshData *pFVar22;
  ulonglong uVar23;
  ulong64 uVar24;
  int *piVar25;
  int *piVar26;
  char cVar27;
  FGeometryCacheMeshData *pFVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  int *piVar32;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar33;
  uint uVar34;
  uint uVar35;
  uint local_res18;
  undefined1 local_res20 [8];
  <unnamed_type_Vector> local_f8;
  <unnamed_type_Vector> local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_c8;
  int *local_c0;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_b8;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *local_b0;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *local_a8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  ulonglong local_88;
  FGeometryCacheMeshData *local_80;
  int *local_78;
  
  uVar23 = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0 = &this->Normals;
  piVar26 = &(this->Colors).ArrayMax;
  (this->Normals).ArrayNum = 0;
  (this->Normals).ArrayMax = 0;
  bVar17 = false;
  (this->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8 = &this->Tangents;
  bVar9 = false;
  (this->Tangents).ArrayNum = 0;
  (this->Tangents).ArrayMax = 0;
  bVar10 = false;
  (this->UVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8 = &this->UVs;
  (this->UVs).ArrayMax = 0;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->MaterialIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialIndices).ArrayNum = 0;
  (this->MaterialIndices).ArrayMax = 0;
  (this->TriSourceIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriSourceIndices).ArrayNum = 0;
  (this->TriSourceIndices).ArrayMax = 0;
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Positions).ArrayNum = 0;
  (this->Positions).ArrayMax = 0;
  local_c0 = &(this->UVs).ArrayNum;
  local_b8 = &this->Colors;
  local_a0 = &this->Triangles;
  local_d8 = &(this->Triangles).ArrayMax;
  *local_c0 = 0;
  pFVar22 = param_1->DataPtr;
  *local_d8 = 0;
  local_98 = &this->MaterialIndices;
  local_90 = &this->TriSourceIndices;
  (this->VertIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertIDs).ArrayNum = 0;
  local_d0 = &(this->VertIDs).ArrayMax;
  (this->Colors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Colors).ArrayNum = 0;
  *local_d0 = 0;
  (this->TriIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriIDs).ArrayNum = 0;
  local_e0 = &(this->TriIDs).ArrayMax;
  *piVar26 = 0;
  (this->EmptyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *local_e0 = 0;
  iVar19 = param_1->ArrayNum;
  (this->EmptyArray).ArrayNum = 0;
  (this->EmptyArray).ArrayMax = 0;
  pFVar28 = pFVar22 + iVar19;
  cVar27 = '\0';
  uVar29 = uVar23;
  if (pFVar22 != pFVar28) {
    uVar34 = 0;
    uVar35 = 0;
    uVar24 = uVar23;
    do {
      iVar19 = (pFVar22->Indices).ArrayNum;
      uVar34 = uVar34 + iVar19 / 3 + (iVar19 >> 0x1f) +
                        (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) & 0xffffffffU) >>
                             0x1f);
      uVar35 = uVar35 + (pFVar22->Positions).ArrayNum;
      if (((char)uVar24 != '\0') || ((pFVar22->VertexInfo).bHasUV0 != false)) {
        uVar24 = 1;
      }
      if ((bVar17) || ((pFVar22->VertexInfo).bHasColor0 != false)) {
        bVar17 = true;
      }
      if ((bVar9) || ((pFVar22->VertexInfo).bHasTangentZ != false)) {
        bVar9 = true;
      }
      if ((bVar10) || ((pFVar22->VertexInfo).bHasTangentX != false)) {
        bVar10 = true;
      }
      pFVar22 = pFVar22 + 1;
    } while (pFVar22 != pFVar28);
    uVar29 = (ulonglong)uVar34;
    uVar23 = (ulonglong)uVar35;
    cVar27 = (char)uVar24;
  }
  uVar34 = (uint)uVar23;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->Positions,uVar34,Default);
  fVar12 = __real_42fe0000;
  fVar11 = __real_3f000000;
  if (bVar9) {
    local_f8._s_0.W = '\x7f';
    iVar18 = (int)ROUND(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X * __real_42fe0000 +
                        UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X * __real_42fe0000 +
                        __real_3f000000) >> 1;
    iVar19 = 0x7f;
    if (iVar18 < 0x7f) {
      iVar19 = iVar18;
    }
    local_f8._s_0.X = -0x80;
    if (-0x80 < iVar19) {
      local_f8._s_0.X = (schar)iVar19;
    }
    iVar18 = (int)ROUND(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y * __real_42fe0000 +
                        UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y * __real_42fe0000 +
                        __real_3f000000) >> 1;
    iVar19 = 0x7f;
    if (iVar18 < 0x7f) {
      iVar19 = iVar18;
    }
    local_f8._s_0.Y = -0x80;
    if (-0x80 < iVar19) {
      local_f8._s_0.Y = (schar)iVar19;
    }
    iVar18 = (int)ROUND(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z * __real_42fe0000 +
                        UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z * __real_42fe0000 +
                        __real_3f000000) >> 1;
    iVar19 = 0x7f;
    if (iVar18 < 0x7f) {
      iVar19 = iVar18;
    }
    local_f8._s_0.Z = -0x80;
    if (-0x80 < iVar19) {
      local_f8._s_0.Z = (schar)iVar19;
    }
    TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::Init
              (local_b0,(FPackedNormal *)&local_f8._s_0,uVar34);
  }
  if (bVar10) {
    local_f4._s_0.W = '\x7f';
    iVar18 = (int)ROUND(UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X * fVar12 +
                        UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X * fVar12 + fVar11)
             >> 1;
    iVar19 = 0x7f;
    if (iVar18 < 0x7f) {
      iVar19 = iVar18;
    }
    local_f4._s_0.X = -0x80;
    if (-0x80 < iVar19) {
      local_f4._s_0.X = (schar)iVar19;
    }
    iVar18 = (int)ROUND(UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y * fVar12 +
                        UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y * fVar12 + fVar11)
             >> 1;
    iVar19 = 0x7f;
    if (iVar18 < 0x7f) {
      iVar19 = iVar18;
    }
    local_f4._s_0.Y = -0x80;
    if (-0x80 < iVar19) {
      local_f4._s_0.Y = (schar)iVar19;
    }
    iVar18 = (int)ROUND(UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z * fVar12 +
                        UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z * fVar12 + fVar11)
             >> 1;
    iVar19 = 0x7f;
    if (iVar18 < 0x7f) {
      iVar19 = iVar18;
    }
    local_f4._s_0.Z = -0x80;
    if (-0x80 < iVar19) {
      local_f4._s_0.Z = (schar)iVar19;
    }
    TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::Init
              (local_a8,(FPackedNormal *)&local_f4._s_0,uVar34);
  }
  pTVar14 = local_b8;
  if (bVar17) {
    if ((int)uVar34 < 0) goto LAB_14ca637c8;
    local_b8->ArrayNum = 0;
    if (*piVar26 != uVar34) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar34,&local_b8->AllocatorInstance,0,piVar26);
    }
    uVar24 = uVar23;
    if (0 < (int)uVar34) {
      do {
        pFVar6 = (pTVar14->AllocatorInstance).Data;
        if (((pFVar6 < (FScriptContainerElement *)0x15067ec41) &&
            (&FColor::White < pFVar6 + (longlong)*piVar26 * 4)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
          return pFVar21;
        }
        iVar19 = pTVar14->ArrayNum;
        if (iVar19 == *piVar26) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar14->AllocatorInstance,piVar26);
        }
        pTVar14->ArrayNum = iVar19 + 1;
        ((FColor_u_0 *)((pTVar14->AllocatorInstance).Data + (longlong)iVar19 * 4))->_s_0 =
             (FColor_u_0_s_0)FColor::White.field0_0x0;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  piVar26 = local_c0;
  pTVar13 = local_c8;
  if (cVar27 != '\0') {
    iVar19 = *local_c0;
    if ((int)uVar34 <= iVar19) {
      if ((int)uVar34 < 0) goto LAB_14ca637c8;
      if ((int)uVar34 < iVar19) {
        uVar35 = iVar19 - uVar34;
        if (((int)(uVar35 | uVar34) < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
          return pFVar21;
        }
        pTVar13 = local_c8;
        if (uVar35 != 0) {
          pFVar6 = (local_c8->AllocatorInstance).Data + (longlong)(int)uVar34 * 8;
          iVar19 = (*piVar26 - uVar35) - uVar34;
          if (iVar19 != 0) {
            memmove(pFVar6,pFVar6 + (longlong)(int)uVar35 * 8,(longlong)iVar19 << 3);
          }
          *piVar26 = *piVar26 - uVar35;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&pTVar13->AllocatorInstance,*piVar26,&pTVar13->ArrayMax);
        }
      }
      goto LAB_14ca62cb3;
    }
    iVar18 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,uVar34 - iVar19,&local_c8->AllocatorInstance,local_c0,
                        &local_c8->ArrayMax);
    memset((pTVar13->AllocatorInstance).Data + (longlong)iVar18 * 8,0,
           (longlong)(int)(uVar34 - iVar19) << 3);
  }
  if ((int)uVar34 < 0) {
LAB_14ca637c8:
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar23);
  }
LAB_14ca62cb3:
  if (*local_d0 < (int)uVar34) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar34,&(this->VertIDs).AllocatorInstance,(this->VertIDs).ArrayNum,local_d0);
  }
  iVar19 = (int)uVar29;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar29);
  }
  if (*local_d8 < iVar19) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar19,&local_a0->AllocatorInstance,local_a0->ArrayNum,local_d8);
  }
  if (*local_e0 < iVar19) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar19,&(this->TriIDs).AllocatorInstance,(this->TriIDs).ArrayNum,local_e0);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(local_98,iVar19,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->TriSourceIndices,iVar19,Default);
  local_e4 = 0;
  local_e8 = 0;
  local_res18 = 0;
  iVar19 = param_1->ArrayNum;
  if (0 < iVar19) {
    local_d0 = (int *)0x0;
    do {
      piVar26 = local_d0;
      iVar18 = local_e8;
      uVar34 = 0;
      if ((int)local_e4 < iVar19) {
        uVar34 = ~local_e4 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
        return pFVar21;
      }
      iVar19 = local_e8;
      pFVar22 = param_1->DataPtr;
      uVar34 = 0;
      lVar30 = (longlong)iVar18;
      local_d8 = (int *)lVar30;
      local_80 = pFVar22;
      if (0 < *(int *)((longlong)&(pFVar22->Positions).ArrayNum + (longlong)piVar26)) {
        lVar31 = 0;
        do {
          pTVar33 = &this->VertIDs;
          uVar35 = uVar34 + iVar19;
          pFVar6 = (pTVar33->AllocatorInstance).Data;
          local_f0 = uVar35;
          if (((pFVar6 <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 <
               pFVar6 + (longlong)(this->VertIDs).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          iVar18 = (this->VertIDs).ArrayNum;
          if (iVar18 == (this->VertIDs).ArrayMax) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar33->AllocatorInstance,&(this->VertIDs).ArrayMax);
          }
          (this->VertIDs).ArrayNum = iVar18 + 1;
          *(uint *)((pTVar33->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_f0;
          uVar20 = 0;
          if ((int)uVar34 < *(int *)((longlong)&(pFVar22->Positions).ArrayNum + (longlong)piVar26))
          {
            uVar20 = ~uVar34 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          lVar7 = *(longlong *)
                   ((longlong)&(pFVar22->Positions).AllocatorInstance.Data + (longlong)piVar26);
          uVar1 = *(undefined8 *)(lVar31 + lVar7);
          uVar2 = *(undefined4 *)(lVar31 + 8 + lVar7);
          uVar20 = 0;
          if ((int)uVar35 < (this->Positions).ArrayNum) {
            uVar20 = ~uVar35 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          lVar7 = lVar31 + lVar30 * 0xc;
          uVar34 = uVar34 + 1;
          lVar31 = lVar31 + 0xc;
          pFVar6 = (this->Positions).AllocatorInstance.Data;
          *(undefined8 *)(pFVar6 + lVar7) = uVar1;
          *(undefined4 *)(pFVar6 + lVar7 + 8) = uVar2;
          iVar18 = local_e8;
        } while ((int)uVar34 <
                 *(int *)((longlong)&(pFVar22->Positions).ArrayNum + (longlong)piVar26));
      }
      piVar25 = local_d8;
      if ((*(char *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0x16) != '\0') &&
         (uVar34 = 0,
         0 < *(int *)((longlong)&(pFVar22->TextureCoordinates).ArrayNum + (longlong)piVar26))) {
        lVar30 = 0;
        do {
          uVar35 = 0;
          if ((int)uVar34 <
              *(int *)((longlong)&(pFVar22->TextureCoordinates).ArrayNum + (longlong)piVar26)) {
            uVar35 = ~uVar34 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar1 = *(undefined8 *)
                   (lVar30 + *(longlong *)
                              ((longlong)&(pFVar22->TextureCoordinates).AllocatorInstance.Data +
                              (longlong)piVar26));
          uVar35 = 0;
          if ((int)(uVar34 + iVar18) < *local_c0) {
            uVar35 = ~(uVar34 + iVar18) >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          lVar31 = lVar30 + (longlong)piVar25 * 8;
          uVar34 = uVar34 + 1;
          lVar30 = lVar30 + 8;
          *(undefined8 *)((local_c8->AllocatorInstance).Data + lVar31) = uVar1;
        } while ((int)uVar34 <
                 *(int *)((longlong)&(pFVar22->TextureCoordinates).ArrayNum + (longlong)piVar26));
      }
      pTVar14 = local_b8;
      if ((*(char *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0x17) != '\0') &&
         (uVar34 = 0, 0 < *(int *)((longlong)(&pFVar22->BoundingBox + -2) + (longlong)piVar26))) {
        lVar30 = 0;
        do {
          uVar35 = 0;
          if ((int)uVar34 < *(int *)((longlong)(&pFVar22->BoundingBox + -2) + (longlong)piVar26)) {
            uVar35 = ~uVar34 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar2 = *(undefined4 *)
                   (lVar30 + *(longlong *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x59));
          uVar35 = 0;
          if ((int)(uVar34 + iVar18) < pTVar14->ArrayNum) {
            uVar35 = ~(uVar34 + iVar18) >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          lVar31 = lVar30 + (longlong)piVar25 * 4;
          uVar34 = uVar34 + 1;
          lVar30 = lVar30 + 4;
          *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar31) = uVar2;
        } while ((int)uVar34 < *(int *)((longlong)(&pFVar22->BoundingBox + -2) + (longlong)piVar26))
        ;
      }
      pTVar15 = local_b0;
      if ((*(char *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0x15) != '\0') &&
         (uVar34 = 0, 0 < *(int *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x61))) {
        lVar30 = 0;
        do {
          uVar35 = 0;
          if ((int)uVar34 < *(int *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x61)) {
            uVar35 = ~uVar34 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar2 = *(undefined4 *)
                   (lVar30 + *(longlong *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x69));
          uVar35 = 0;
          if ((int)(uVar34 + iVar18) < pTVar15->ArrayNum) {
            uVar35 = ~(uVar34 + iVar18) >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar34 = uVar34 + 1;
          *(undefined4 *)((pTVar15->AllocatorInstance).Data + (longlong)piVar25 * 4 + lVar30) =
               uVar2;
          lVar30 = lVar30 + 4;
        } while ((int)uVar34 < *(int *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x61));
      }
      pTVar15 = local_a8;
      if ((*(char *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0x14) != '\0') &&
         (uVar34 = 0, 0 < *(int *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x71))) {
        lVar30 = 0;
        do {
          uVar35 = 0;
          if ((int)uVar34 < *(int *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x71)) {
            uVar35 = ~uVar34 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar2 = *(undefined4 *)
                   (lVar30 + *(longlong *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x79));
          uVar35 = 0;
          if ((int)(uVar34 + iVar18) < pTVar15->ArrayNum) {
            uVar35 = ~(uVar34 + iVar18) >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar34 = uVar34 + 1;
          *(undefined4 *)((pTVar15->AllocatorInstance).Data + (longlong)piVar25 * 4 + lVar30) =
               uVar2;
          lVar30 = lVar30 + 4;
        } while ((int)uVar34 < *(int *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x71));
      }
      pTVar16 = local_a0;
      iVar19 = *(int *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0xc) / 3;
      local_e0 = (int *)CONCAT44(local_e0._4_4_,iVar19);
      if (2 < *(int *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0xc)) {
        uVar34 = 2;
        lVar30 = 4;
        do {
          uVar35 = 0;
          if ((int)uVar34 <
              *(int *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0xc)) {
            uVar35 = ~uVar34 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar2 = *(undefined4 *)
                   (lVar30 + 4 +
                   *(longlong *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 4));
          uVar35 = 0;
          if ((int)(uVar34 - 1) <
              *(int *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0xc)) {
            uVar35 = ~(uVar34 - 1) >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar3 = *(undefined4 *)
                   (lVar30 + *(longlong *)
                              ((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 4));
          uVar35 = 0;
          if ((int)(uVar34 - 2) <
              *(int *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0xc)) {
            uVar35 = ~(uVar34 - 2) >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          uVar4 = *(undefined4 *)
                   (lVar30 + -4 +
                   *(longlong *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 4));
          iVar19 = pTVar16->ArrayNum;
          if (iVar19 == pTVar16->ArrayMax) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
          }
          pTVar16->ArrayNum = iVar19 + 1;
          lVar31 = (longlong)iVar19;
          pFVar6 = (pTVar16->AllocatorInstance).Data;
          *(undefined4 *)(pFVar6 + lVar31 * 0xc + 8) = uVar2;
          pTVar33 = &this->TriIDs;
          *(undefined4 *)(pFVar6 + lVar31 * 0xc) = uVar4;
          *(undefined4 *)(pFVar6 + lVar31 * 0xc + 4) = uVar3;
          pFVar6 = (pTVar33->AllocatorInstance).Data;
          local_ec = iVar19;
          if (((pFVar6 <= (FScriptContainerElement *)&local_ec) &&
              ((FScriptContainerElement *)&local_ec < pFVar6 + (longlong)(this->TriIDs).ArrayMax * 4
              )) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          iVar19 = (this->TriIDs).ArrayNum;
          if (iVar19 == (this->TriIDs).ArrayMax) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar33->AllocatorInstance,&(this->TriIDs).ArrayMax);
          }
          uVar34 = uVar34 + 3;
          (this->TriIDs).ArrayNum = iVar19 + 1;
          lVar30 = lVar30 + 0xc;
          *(int *)((pTVar33->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_ec;
        } while ((int)uVar34 <
                 *(int *)((longlong)(&pFVar22->BoundingBox + 1) + (longlong)piVar26 + 0xc));
        iVar19 = (int)local_e0;
      }
      pTVar33 = local_90;
      uVar34 = local_e4;
      uVar29 = (ulonglong)(int)local_res18;
      iVar19 = local_res18 + iVar19;
      local_d8 = (int *)CONCAT44(local_d8._4_4_,iVar19);
      uVar35 = local_res18;
      local_88 = uVar29;
      if ((longlong)uVar29 < (longlong)iVar19) {
        do {
          uVar20 = 0;
          if ((int)uVar35 < pTVar33->ArrayNum) {
            uVar20 = ~uVar35 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
            return pFVar21;
          }
          *(uint *)((pTVar33->AllocatorInstance).Data + uVar29 * 4) = uVar34;
          uVar29 = uVar29 + 1;
          uVar35 = uVar35 + 1;
        } while ((longlong)uVar29 < (longlong)iVar19);
        uVar29 = (ulonglong)local_res18;
      }
      iVar19 = *(int *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x21);
      uVar23 = (ulonglong)iVar19;
      piVar32 = *(int **)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x29);
      local_e0 = (int *)CONCAT44(local_e0._4_4_,iVar19);
      piVar25 = piVar32 + uVar23 * 3;
      local_78 = piVar25;
      while( true ) {
        if (*(int *)((pFVar22->BoundingBox).Pad + (longlong)piVar26 + -0x21) != (int)uVar23) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FGeometryCacheMeshBatchInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        uVar23 = local_88;
        pTVar33 = local_98;
        if (piVar32 == piVar25) break;
        iVar19 = *piVar32;
        lVar30 = (longlong)iVar19;
        iVar18 = piVar32[1];
        if (lVar30 < iVar18 + iVar19) {
          uVar34 = iVar19 + (int)uVar29;
          do {
            lVar31 = lVar30 + uVar23;
            iVar5 = piVar32[2];
            uVar35 = 0;
            if ((int)uVar34 < pTVar33->ArrayNum) {
              uVar35 = ~uVar34 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              pFVar21 = (FGeometryCacheMeshBufferWrapper *)(*pcVar8)();
              return pFVar21;
            }
            uVar34 = uVar34 + 1;
            lVar30 = lVar30 + 1;
            *(int *)((pTVar33->AllocatorInstance).Data + lVar31 * 4) = iVar5;
            piVar25 = local_78;
            pFVar22 = local_80;
            piVar26 = local_d0;
          } while (lVar30 < iVar18 + iVar19);
        }
        uVar23 = (ulonglong)local_e0 & 0xffffffff;
        piVar32 = piVar32 + 3;
        uVar29 = (ulonglong)local_res18;
      }
      local_e8 = local_e8 + *(int *)((longlong)&(pFVar22->Positions).ArrayNum + (longlong)piVar26);
      local_d0 = (int *)((longlong)piVar26 + 0xd8);
      local_e4 = local_e4 + 1;
      local_res18 = (uint)local_d8;
      iVar19 = param_1->ArrayNum;
    } while ((int)local_e4 < iVar19);
  }
  return this;
}

// GetTri @ 14ca93c50

bool __thiscall
UE::Conversion::FGeometryCacheMeshBufferWrapper::GetTri
          (FGeometryCacheMeshBufferWrapper *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int local_18;
  
  uVar7 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar3 = (this->Triangles).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (longlong)param_1 * 0xc);
  iVar2 = *(int *)(pFVar3 + (longlong)param_1 * 0xc + 8);
  local_18 = (int)uVar1;
  *param_2 = local_18;
  *param_3 = (int)((ulonglong)uVar1 >> 0x20);
  *param_4 = iVar2;
  return true;
}

// GetVertexBiTangent @ 14ca94080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
UE::Conversion::FGeometryCacheMeshBufferWrapper::GetVertexBiTangent
          (FGeometryCacheMeshBufferWrapper *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  undefined4 uVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar3 = 0;
  if (param_1 < (this->Tangents).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  fVar13 = _UNK_15104007c;
  fVar12 = _UNK_151040078;
  fVar11 = _UNK_151040074;
  fVar10 = ___xmm_3c0102043c0102043c0102043c010204;
  auVar6 = pmovsxbd(in_XMM1,*(undefined4 *)
                             ((this->Tangents).AllocatorInstance.Data + (longlong)param_1 * 4));
  uVar3 = 0;
  if (param_1 < (this->Normals).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  fVar14 = (float)auVar6._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
  fVar15 = (float)auVar6._4_4_ * _UNK_151040074;
  fVar16 = (float)auVar6._8_4_ * _UNK_151040078;
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  auVar6 = pmovsxbd(auVar6,*(undefined4 *)
                            ((this->Normals).AllocatorInstance.Data + (longlong)param_1 * 4));
  fVar10 = (float)auVar6._0_4_ * fVar10;
  fVar11 = (float)auVar6._4_4_ * fVar11;
  fVar12 = (float)auVar6._8_4_ * fVar12;
  fVar13 = (float)auVar6._12_4_ * fVar13;
  fVar7 = fVar16 * fVar11 - fVar15 * fVar12;
  fVar11 = fVar15 * fVar10 - fVar14 * fVar11;
  fVar12 = fVar14 * fVar12 - fVar16 * fVar10;
  fVar10 = fVar7 * fVar7 + fVar12 * fVar12 + fVar11 * fVar11;
  uVar8 = fVar7;
  uVar5 = fVar12;
  uVar9 = fVar11;
  if ((fVar10 != __real_3f800000) &&
     (uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar10)) {
    fVar10 = __real_3f800000 / SQRT(fVar10);
    uVar8 = fVar7 * fVar10;
    uVar5 = fVar12 * fVar10;
    uVar9 = fVar11 * fVar10;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)uVar8 * fVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)uVar5 * fVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar9 * fVar13;
  return __return_storage_ptr__;
}

// GetVertexColor @ 14ca94290

TVector4<float> * __thiscall
UE::Conversion::FGeometryCacheMeshBufferWrapper::GetVertexColor
          (FGeometryCacheMeshBufferWrapper *this,TVector4<float> *__return_storage_ptr__,int param_1
          )

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  TVector4<float> *pTVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  uVar8 = 0;
  if (param_1 < (this->Colors).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector4<float> *)(*pcVar5)();
      return pTVar9;
    }
  }
  fVar6 = __real_3b808081;
  pFVar4 = (this->Colors).AllocatorInstance.Data;
  FVar1 = pFVar4[lVar10 * 4 + 1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)(byte)pFVar4[lVar10 * 4 + 2] * __real_3b808081;
  FVar2 = pFVar4[lVar10 * 4];
  FVar3 = pFVar4[lVar10 * 4 + 3];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(byte)FVar1 * fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(byte)FVar2 * fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.W = (float)(byte)FVar3 * fVar6;
  return __return_storage_ptr__;
}

// GetVertexNormal @ 14ca94370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
UE::Conversion::FGeometryCacheMeshBufferWrapper::GetVertexNormal
          (FGeometryCacheMeshBufferWrapper *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  float fVar6;
  
  uVar3 = 0;
  if (param_1 < (this->Normals).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  auVar5 = pmovsxbd(in_XMM1,*(undefined4 *)
                             ((this->Normals).AllocatorInstance.Data + (longlong)param_1 * 4));
  fVar6 = (float)auVar5._8_4_ * _UNK_151040078;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)auVar5._4_4_ * _UNK_151040074,
                (float)auVar5._0_4_ * ___xmm_3c0102043c0102043c0102043c010204);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6;
  return __return_storage_ptr__;
}

// GetVertexTangent @ 14ca94410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
UE::Conversion::FGeometryCacheMeshBufferWrapper::GetVertexTangent
          (FGeometryCacheMeshBufferWrapper *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  float fVar6;
  
  uVar3 = 0;
  if (param_1 < (this->Tangents).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  auVar5 = pmovsxbd(in_XMM1,*(undefined4 *)
                             ((this->Tangents).AllocatorInstance.Data + (longlong)param_1 * 4));
  fVar6 = (float)auVar5._8_4_ * _UNK_151040078;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)auVar5._4_4_ * _UNK_151040074,
                (float)auVar5._0_4_ * ___xmm_3c0102043c0102043c0102043c010204);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6;
  return __return_storage_ptr__;
}

// GetVertexUV @ 14ca944b0

TVector2<float> __thiscall
UE::Conversion::FGeometryCacheMeshBufferWrapper::GetVertexUV
          (FGeometryCacheMeshBufferWrapper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<float> TVar4;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar5;
  uint in_R8D;
  
  TVar5._s_0.Y = (float)in_register_00000014;
  TVar5._s_0.X = (float)param_1;
  uVar3 = 0;
  if ((int)in_R8D < (this->UVs).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar4.field0_0x0;
    }
  }
  *(undefined8 *)TVar5 =
       *(undefined8 *)((this->UVs).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
  return (TVector2<float>)TVar5;
}

