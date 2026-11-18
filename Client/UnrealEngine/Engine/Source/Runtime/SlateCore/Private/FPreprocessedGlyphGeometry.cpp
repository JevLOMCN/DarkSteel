// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FPreprocessedGlyphGeometry @ 142473a10

FPreprocessedGlyphGeometry * __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FPreprocessedGlyphGeometry
          (FPreprocessedGlyphGeometry *this,FWindingFingerprint *param_1,
          FWindingFingerprint *param_2)

{
  int *piVar1;
  bool bVar2;
  bool local_res8 [8];
  
  this->Flags = '\0';
  this->ContourCount = 0;
  piVar1 = &(this->ContourData).ArrayMax;
  (this->ContourData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContourData).ArrayNum = 0;
  (this->CoordinateData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoordinateData).ArrayNum = 0;
  (this->CoordinateData).ArrayMax = 0;
  *piVar1 = 0;
  local_res8[0] = false;
  bVar2 = FWindingFingerprint::Diff(local_res8,&this->ContourData,param_1,param_2);
  if (bVar2) {
    if (local_res8[0] == false) {
      this->Flags = '\x02';
      this->ContourCount = (param_1->Contours).ArrayNum;
    }
    else {
      this->Flags = '\x01';
      (this->ContourData).ArrayNum = 0;
      if (*piVar1 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->ContourData).AllocatorInstance,0,piVar1);
      }
    }
  }
  return this;
}

// FPreprocessedGlyphGeometry @ 142473ac0

/* WARNING: Type propagation algorithm not settling */

FPreprocessedGlyphGeometry * __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FPreprocessedGlyphGeometry
          (FPreprocessedGlyphGeometry *this,Shape *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  Contour *pCVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  FPreprocessedGlyphGeometry *pFVar13;
  longlong lVar14;
  uint uVar15;
  undefined2 uVar16;
  longlong *plVar17;
  undefined2 uVar18;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar19;
  int *piVar20;
  longlong *plVar21;
  undefined2 uVar22;
  int *piVar23;
  undefined2 uVar24;
  int *piVar25;
  FScriptContainerElement local_a8 [8];
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  int local_90;
  TArray<short,TSizedDefaultAllocator<32>_> *local_88;
  int *local_80;
  int *local_78;
  longlong local_70;
  longlong *local_68;
  FPreprocessedGlyphGeometry *local_60;
  Shape *local_58;
  
  pTVar19 = &this->CoordinateData;
  (this->ContourData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->ContourData;
  (this->CoordinateData).ArrayNum = 0;
  piVar23 = &(this->CoordinateData).ArrayNum;
  (this->ContourData).ArrayMax = 0;
  piVar25 = &(this->CoordinateData).ArrayMax;
  (this->ContourData).ArrayNum = 0;
  *piVar25 = 0;
  (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->Flags = '\x04';
  if (param_1->inverseYAxis != false) {
    this->Flags = '\x14';
  }
  local_90 = 0;
  iVar8 = (int)(((longlong)(param_1->contours)._Mypair._Myval2._Mylast -
                (longlong)(param_1->contours)._Mypair._Myval2._Myfirst) / 0x18);
  this->ContourCount = iVar8;
  dVar5 = __real_3fe0000000000000;
  pFVar13 = this;
  if (0 < iVar8) {
    local_70 = 0;
    local_88 = pTVar19;
    local_80 = piVar23;
    local_78 = piVar25;
    local_60 = this;
    local_58 = param_1;
    do {
      pCVar2 = (param_1->contours)._Mypair._Myval2._Myfirst;
      plVar17 = *(longlong **)((longlong)&(pCVar2->edges)._Mypair._Myval2 + local_70 + 8);
      plVar21 = *(longlong **)((longlong)&(pCVar2->edges)._Mypair._Myval2 + local_70);
      local_68 = plVar17;
      if (plVar21 != plVar17) {
        do {
          pdVar10 = (double *)(**(code **)(*(longlong *)*plVar21 + 0x18))();
          local_a8[0] = (FScriptContainerElement)((char)((longlong *)*plVar21)[1] << 4);
          iVar8 = (**(code **)(*(longlong *)*plVar21 + 0x10))();
          if (iVar8 == 1) {
            lVar11 = (longlong)ROUND(*pdVar10 + *pdVar10 + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            local_a0 = 0x8000;
            if (-0x8000 < lVar14) {
              local_a0 = (undefined2)lVar14;
            }
            lVar11 = (longlong)ROUND(pdVar10[1] + pdVar10[1] + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            uStack_9e = 0x8000;
            if (-0x8000 < lVar14) {
              uStack_9e = (undefined2)lVar14;
            }
            iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,2,&pTVar19->AllocatorInstance,piVar23,piVar25);
            *(uint *)((pTVar19->AllocatorInstance).Data + (longlong)iVar8 * 2) =
                 CONCAT22(uStack_9e,local_a0);
            local_a8[0] = (FScriptContainerElement)((byte)local_a8[0] | 1);
          }
          else if (iVar8 == 2) {
            lVar11 = (longlong)ROUND(*pdVar10 + *pdVar10 + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            local_a0 = 0x8000;
            if (-0x8000 < lVar14) {
              local_a0 = (undefined2)lVar14;
            }
            lVar11 = (longlong)ROUND(pdVar10[1] + pdVar10[1] + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            uStack_9e = 0x8000;
            if (-0x8000 < lVar14) {
              uStack_9e = (undefined2)lVar14;
            }
            lVar11 = (longlong)ROUND(pdVar10[2] + pdVar10[2] + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            uStack_9c = 0x8000;
            if (-0x8000 < lVar14) {
              uStack_9c = (undefined2)lVar14;
            }
            lVar11 = (longlong)ROUND(pdVar10[3] + pdVar10[3] + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            uStack_9a = 0x8000;
            if (-0x8000 < lVar14) {
              uStack_9a = (undefined2)lVar14;
            }
            iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,4,&pTVar19->AllocatorInstance,piVar23,piVar25);
            *(ulonglong *)((pTVar19->AllocatorInstance).Data + (longlong)iVar8 * 2) =
                 CONCAT26(uStack_9a,CONCAT24(uStack_9c,CONCAT22(uStack_9e,local_a0)));
            local_a8[0] = (FScriptContainerElement)((byte)local_a8[0] | 2);
          }
          else if (iVar8 == 3) {
            uVar24 = 0x8000;
            uVar22 = 0x8000;
            uVar16 = 0x8000;
            uVar18 = 0x8000;
            lVar11 = (longlong)ROUND(*pdVar10 + *pdVar10 + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            if (-0x8000 < lVar14) {
              uVar24 = (undefined2)lVar14;
            }
            lVar11 = (longlong)ROUND(pdVar10[1] + pdVar10[1] + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            if (-0x8000 < lVar14) {
              uVar22 = (undefined2)lVar14;
            }
            lVar11 = (longlong)ROUND(pdVar10[2] + pdVar10[2] + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            if (-0x8000 < lVar14) {
              uVar16 = (undefined2)lVar14;
            }
            lVar11 = (longlong)ROUND(pdVar10[3] + pdVar10[3] + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            if (-0x8000 < lVar14) {
              uVar18 = (undefined2)lVar14;
            }
            lVar11 = (longlong)ROUND(pdVar10[4] + pdVar10[4] + dVar5) >> 1;
            lVar14 = 0x7fff;
            if (lVar11 < 0x7fff) {
              lVar14 = lVar11;
            }
            lVar12 = (longlong)ROUND(pdVar10[5] + pdVar10[5] + dVar5) >> 1;
            lVar11 = 0x7fff;
            if (lVar12 < 0x7fff) {
              lVar11 = lVar12;
            }
            local_a0 = uVar24;
            uStack_9e = uVar22;
            uStack_9c = uVar16;
            uStack_9a = uVar18;
            iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,6,&local_88->AllocatorInstance,local_80,local_78);
            lVar12 = (longlong)iVar8;
            pFVar3 = (local_88->AllocatorInstance).Data;
            uVar7 = 0x8000;
            *(undefined2 *)(pFVar3 + lVar12 * 2) = uVar24;
            *(undefined2 *)(pFVar3 + lVar12 * 2 + 2) = uVar22;
            *(undefined2 *)(pFVar3 + lVar12 * 2 + 4) = uVar16;
            *(undefined2 *)(pFVar3 + lVar12 * 2 + 6) = uVar18;
            if (-0x8000 < lVar14) {
              uVar7 = (undefined2)lVar14;
            }
            *(undefined2 *)(pFVar3 + lVar12 * 2 + 8) = uVar7;
            uVar16 = 0x8000;
            if (-0x8000 < lVar11) {
              uVar16 = (undefined2)lVar11;
            }
            *(undefined2 *)(pFVar3 + lVar12 * 2 + 10) = uVar16;
            local_a8[0] = (FScriptContainerElement)((byte)local_a8[0] | 3);
            plVar17 = local_68;
            pTVar19 = local_88;
            piVar23 = local_80;
            piVar25 = local_78;
          }
          piVar20 = &(this->ContourData).ArrayMax;
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar3 <= local_a8) && (local_a8 < pFVar3 + *piVar20)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar13 = (FPreprocessedGlyphGeometry *)(*pcVar4)();
            return pFVar13;
          }
          iVar8 = (this->ContourData).ArrayNum;
          if (iVar8 == *piVar20) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&pTVar1->AllocatorInstance,piVar20);
          }
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          plVar21 = plVar21 + 1;
          (this->ContourData).ArrayNum = iVar8 + 1;
          pFVar3[iVar8] = local_a8[0];
        } while (plVar21 != plVar17);
        iVar8 = (this->ContourData).ArrayNum;
        uVar15 = iVar8 - 1;
        uVar9 = 0;
        if ((int)uVar15 < iVar8) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPreprocessedGlyphGeometry *)(*pcVar4)();
          return pFVar13;
        }
        pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)(this->ContourData).ArrayNum + -1;
        *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 | 8);
        pFVar13 = local_60;
        param_1 = local_58;
      }
      local_90 = local_90 + 1;
      local_70 = local_70 + 0x18;
    } while (local_90 < pFVar13->ContourCount);
  }
  return pFVar13;
}

// FPreprocessedGlyphGeometry @ 1424740f0

FPreprocessedGlyphGeometry * __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FPreprocessedGlyphGeometry(FPreprocessedGlyphGeometry *this)

{
  this->Flags = '\0';
  this->ContourCount = 0;
  (this->ContourData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContourData).ArrayNum = 0;
  (this->ContourData).ArrayMax = 0;
  (this->CoordinateData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoordinateData).ArrayNum = 0;
  (this->CoordinateData).ArrayMax = 0;
  return this;
}

// View @ 1424ae3d0

FPreprocessedGlyphGeometryView * __thiscall
UE::Slate::FPreprocessedGlyphGeometry::View
          (FPreprocessedGlyphGeometry *this,FPreprocessedGlyphGeometryView *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPreprocessedGlyphGeometryView *pFVar4;
  byte bVar5;
  
  bVar5 = this->Flags;
  __return_storage_ptr__->ContourCount = this->ContourCount;
  __return_storage_ptr__->ContourDataPtr = (uchar *)(this->ContourData).AllocatorInstance.Data;
  __return_storage_ptr__->CoordinateDataPtr = (short *)(this->CoordinateData).AllocatorInstance.Data
  ;
  __return_storage_ptr__->ContourDataLength = (this->ContourData).ArrayNum;
  iVar1 = (this->CoordinateData).ArrayNum;
  __return_storage_ptr__->Flags = bVar5;
  __return_storage_ptr__->CoordinateDataLength = iVar1;
  bVar5 = bVar5 & 7;
  if (((bVar5 == 0) || ((bVar5 & bVar5 - 1) != 0)) && (bVar5 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FilteredValue == 0 || bHasSingleBit",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                       ,0x3e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPreprocessedGlyphGeometryView *)(*pcVar2)();
      return pFVar4;
    }
  }
  return __return_storage_ptr__;
}

