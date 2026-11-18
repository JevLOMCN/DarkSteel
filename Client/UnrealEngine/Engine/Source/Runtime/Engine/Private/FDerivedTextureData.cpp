// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Build @ 148722d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::SVT::FDerivedTextureData::Build(FDerivedTextureData *this,FTextureData *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  TStaticArray<EPixelFormat,2,4294967295> TVar8;
  undefined2 uVar9;
  FDerivedTextureData *pFVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  FTextureData *pFVar25;
  size_t sVar26;
  uint uVar27;
  ForElementType<FSetElementId> FVar28;
  ulonglong uVar29;
  size_t sVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  undefined1 auStackY_1f8 [32];
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  undefined1 local_198 [4];
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  FDerivedTextureData *local_180;
  uint local_178;
  int local_174;
  longlong local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  int local_158;
  size_t local_150;
  int local_148;
  uint local_144;
  int local_140;
  ForAnyElementType local_138;
  int local_130 [4];
  FTextureData *local_120;
  size_t local_118;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_110;
  int local_108 [2];
  ulong64 local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_e0;
  undefined1 local_d8 [8];
  uint *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  ulong64 *local_b8;
  uint *local_b0;
  uint *local_a8;
  int *local_a0;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar7 = *(undefined8 *)((longlong)&(param_1->Header).VirtualVolumeResolution.field0_0x0 + 8);
  *(undefined8 *)&(this->Header).VirtualVolumeResolution.field0_0x0 =
       *(undefined8 *)&(param_1->Header).VirtualVolumeResolution.field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeResolution.field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)&(param_1->Header).VirtualVolumeAABBMax.field0_0x0;
  piVar4 = &(this->MipPageRanges).ArrayNum;
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMin.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Header).VirtualVolumeAABBMin.field0_0x0 + 4);
  *(undefined8 *)&(this->Header).VirtualVolumeAABBMax.field0_0x0 = uVar7;
  uVar7 = *(undefined8 *)((longlong)&(param_1->Header).PageTableVolumeResolution.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMax.field0_0x0 + 8) =
       *(undefined8 *)((longlong)&(param_1->Header).VirtualVolumeAABBMax.field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeResolution.field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&(param_1->Header).PageTableVolumeAABBMin.field0_0x0 + 8);
  *(undefined8 *)&(this->Header).PageTableVolumeAABBMin.field0_0x0 =
       *(undefined8 *)&(param_1->Header).PageTableVolumeAABBMin.field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMin.field0_0x0 + 8) = uVar7;
  TVar8.Elements = (param_1->Header).AttributesFormats.Elements[0];
  uVar9 = *(undefined2 *)&(param_1->Header).field_0x4a;
  iVar22 = (param_1->Header)._padding_;
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMax.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Header).PageTableVolumeAABBMax.field0_0x0 + 4);
  (this->Header).AttributesFormats = (TStaticArray<EPixelFormat,2,4294967295>)TVar8.Elements;
  *(undefined2 *)&(this->Header).field_0x4a = uVar9;
  (this->Header)._padding_ = iVar22;
  uVar7 = *(undefined8 *)((longlong)&(param_1->Header).FallbackValues.Elements[0].field0_0x0 + 8);
  *(undefined8 *)&(this->Header).FallbackValues.Elements[0].field0_0x0 =
       *(undefined8 *)&(param_1->Header).FallbackValues.Elements[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[0].field0_0x0 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&(param_1->Header).FallbackValues.Elements[1].field0_0x0 + 8);
  *(undefined8 *)&(this->Header).FallbackValues.Elements[1].field0_0x0 =
       *(undefined8 *)&(param_1->Header).FallbackValues.Elements[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[1].field0_0x0 + 8) = uVar7;
  local_194 = (param_1->MipMaps).ArrayNum;
  local_130[2] = GPixelFormats[(this->Header).AttributesFormats.Elements[0]].BlockBytes;
  sVar30 = (longlong)local_130[2] * 0x16c8;
  local_158 = GPixelFormats[(this->Header).AttributesFormats.Elements[1]].BlockBytes;
  local_150 = (longlong)local_158 * 0x16c8;
  iVar22 = *piVar4;
  local_180 = this;
  local_120 = param_1;
  local_118 = sVar30;
  local_110 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)piVar4;
  if (iVar22 < (int)local_194) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_194 - iVar22,&(this->MipPageRanges).AllocatorInstance,piVar4,
               &(this->MipPageRanges).ArrayMax);
  }
  else {
    if ((int)local_194 < 0) goto LAB_14872401d;
    if ((int)local_194 < iVar22) {
      uVar20 = iVar22 - local_194;
      if (((int)(uVar20 | local_194) < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar20 != 0) {
        pFVar34 = (this->MipPageRanges).AllocatorInstance.Data + (longlong)(int)local_194 * 8;
        iVar22 = (*piVar4 - uVar20) - local_194;
        if (iVar22 != 0) {
          memmove(pFVar34,pFVar34 + (longlong)(int)uVar20 * 8,(longlong)iVar22 << 3);
        }
        *piVar4 = *piVar4 - uVar20;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&(this->MipPageRanges).AllocatorInstance,*piVar4,
                   &(this->MipPageRanges).ArrayMax);
      }
    }
  }
  local_1a8 = local_194 - 1;
  local_188 = 0;
  uVar21 = (ulonglong)(int)local_1a8;
  uVar20 = 0;
  if (-1 < (int)local_1a8) {
    lVar33 = uVar21 * 0x48;
    uVar31 = uVar21;
    do {
      pFVar25 = local_120;
      uVar23 = (uint)uVar21;
      uVar32 = ~uVar23 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar23 < (local_120->MipMaps).ArrayNum) {
        uVar27 = uVar32;
      }
      local_190 = uVar32;
      local_170 = lVar33;
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_18c = uVar20 + *(int *)((pFVar25->MipMaps).AllocatorInstance.Data + lVar33 + 0x40);
      iVar22 = 0;
      uVar20 = 0;
      if ((int)uVar23 < (pFVar25->MipMaps).ArrayNum) {
        uVar20 = uVar32;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar34 = (pFVar25->MipMaps).AllocatorInstance.Data + lVar33;
      piVar19 = *(int **)pFVar34;
      iVar13 = *(int *)(pFVar34 + 8);
      piVar4 = piVar19 + iVar13;
      while( true ) {
        if (*(int *)(pFVar34 + 8) != iVar13) {
          local_198[0] = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_198);
        }
        pTVar11 = local_110;
        uVar20 = local_190;
        if (piVar19 == piVar4) break;
        iVar22 = iVar22 + (uint)(*piVar19 != 0);
        piVar19 = piVar19 + 1;
      }
      uVar27 = 0;
      if ((int)uVar23 < *(int *)local_110) {
        uVar27 = local_190;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = local_180;
      uVar27 = local_188;
      *(uint *)((local_180->MipPageRanges).AllocatorInstance.Data + uVar31 * 8) = local_188;
      uVar32 = 0;
      if ((int)uVar23 < *(int *)pTVar11) {
        uVar32 = uVar20;
      }
      if ((uVar32 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_188 = uVar27 + iVar22;
      lVar33 = local_170 + -0x48;
      *(int *)((this->MipPageRanges).AllocatorInstance.Data + uVar31 * 8 + 4) = iVar22;
      uVar31 = uVar31 - 1;
      uVar21 = (ulonglong)(uVar23 - 1);
      sVar30 = local_118;
      uVar20 = local_18c;
      local_170 = lVar33;
    } while (-1 < (int)(uVar23 - 1));
  }
  uVar27 = local_188;
  pTVar1 = &this->PageTableCoords;
  if ((int)local_188 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)local_188);
  }
  if ((this->PageTableCoords).ArrayMax < (int)local_188) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_188,&pTVar1->AllocatorInstance,(this->PageTableCoords).ArrayNum,
               &(this->PageTableCoords).ArrayMax);
  }
  pTVar2 = &this->PageTableTileIndices;
  if ((this->PageTableTileIndices).ArrayMax < (int)uVar27) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar27,&pTVar2->AllocatorInstance,(this->PageTableTileIndices).ArrayNum,
               &(this->PageTableTileIndices).ArrayMax);
  }
  pTVar3 = &this->PageTableParentIndices;
  piVar4 = &(this->PageTableParentIndices).ArrayMax;
  if ((this->PageTableParentIndices).ArrayMax < (int)uVar27) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar27,&pTVar3->AllocatorInstance,(this->PageTableParentIndices).ArrayNum,piVar4)
    ;
  }
  pFVar10 = local_180;
  local_e0 = &local_180->PhysicalTileDataA;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (local_e0,uVar20 * sVar30,Default);
  sVar26 = local_150;
  local_110 = &pFVar10->PhysicalTileDataB;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (local_110,uVar20 * local_150,Default);
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130[0] = 0;
  local_130[1] = 0;
  if ((int)local_194 < 1) {
    if ((int)local_194 < 0) {
LAB_14872401d:
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_194);
    }
  }
  else {
    iVar22 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,local_194,&local_138,local_130,local_130 + 1);
    DefaultConstructItems<TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>,int>
              (local_138.Data + (longlong)iVar22 * 0x50,local_194);
  }
  local_19c = local_194 - 1;
  local_15c = 0;
  local_c8 = (local_e0->AllocatorInstance).Data;
  local_c0 = (local_110->AllocatorInstance).Data;
  if (-1 < (int)local_19c) {
    lVar33 = (longlong)(int)local_19c * 0x48;
    uVar21 = 0;
    pFVar25 = local_120;
    local_188 = local_194;
    do {
      uVar20 = local_188;
      local_1a0 = ~local_19c >> 0x1f;
      uVar23 = (uint)uVar21;
      uVar27 = uVar23;
      if ((int)local_19c < (pFVar25->MipMaps).ArrayNum) {
        uVar27 = local_1a0;
      }
      local_e8 = lVar33;
      if (uVar27 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar23 = 0;
      }
      local_f8 = *(longlong *)((pFVar25->MipMaps).AllocatorInstance.Data + lVar33 + 0x10);
      if ((int)local_19c < (pFVar25->MipMaps).ArrayNum) {
        uVar23 = local_1a0;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar31 = (ulonglong)local_19c;
      bVar17 = (byte)local_19c;
      uVar27 = (pFVar25->Header).PageTableVolumeResolution.field0_0x0._s_0.Z >> (bVar17 & 0x1f);
      iVar18 = (pFVar25->Header).PageTableVolumeResolution.field0_0x0._s_0.Y >> (bVar17 & 0x1f);
      local_f0 = *(longlong *)((pFVar25->MipMaps).AllocatorInstance.Data + lVar33 + 0x28);
      iVar13 = (pFVar25->Header).PageTableVolumeResolution.field0_0x0._s_0.X >> (bVar17 & 0x1f);
      iVar22 = 1;
      if (1 < iVar13) {
        iVar22 = iVar13;
      }
      iVar13 = 1;
      if (1 < iVar18) {
        iVar13 = iVar18;
      }
      local_144 = 1;
      if (1 < (int)uVar27) {
        local_144 = uVar27;
      }
      uVar27 = 0 >> (bVar17 & 0x1f);
      uVar16 = (ulonglong)uVar27;
      uVar21 = uVar16;
      uVar23 = local_19c;
      local_18c = uVar27;
      local_174 = iVar22;
      local_148 = iVar13;
      if (0 < (int)local_144) {
        do {
          local_160 = (uint)uVar21;
          uVar24 = uVar21;
          uVar29 = uVar31;
          uVar20 = (uint)uVar16;
          local_190 = uVar27;
          if (0 < iVar13) {
            do {
              uVar21 = uVar24;
              uVar31 = uVar29;
              if (0 < iVar22) {
                local_d0 = (uint *)(uVar29 * 0x48);
                local_140 = (uVar27 + local_160) * iVar22;
                local_170 = (longlong)local_140;
                do {
                  pFVar25 = local_120;
                  uVar20 = (uint)uVar21;
                  if ((int)uVar31 < (local_120->MipMaps).ArrayNum) {
                    uVar20 = local_1a0;
                  }
                  if ((uVar20 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar23 = (uint)uVar24;
                  pFVar34 = (FScriptContainerElement *)
                            ((longlong)local_d0 +
                            (longlong)(pFVar25->MipMaps).AllocatorInstance.Data);
                  uVar20 = 0;
                  if ((int)(local_140 + uVar23) < *(int *)(pFVar34 + 8)) {
                    uVar20 = ~(local_140 + uVar23) >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar22 = *(int *)(*(longlong *)pFVar34 + local_170 * 4);
                  if (iVar22 != 0) {
                    uVar21 = (ulonglong)(iVar22 - 1);
                    local_100 = 0;
                    if (local_130[2] != 0) {
                      local_100 = CityHash64((char *)(uVar21 * local_118 + local_f8),(uint)local_118
                                            );
                    }
                    if (local_158 != 0) {
                      local_100 = CityHash64WithSeed((char *)(uVar21 * local_150 + local_f0),
                                                     (uint)local_150,local_100);
                    }
                    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
                      FVar28 = (ForElementType<FSetElementId>)&local_98.Hash;
                      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar28 = local_98.Hash.SecondaryData;
                      }
                      iVar22 = *(int *)((longlong)FVar28 +
                                       ((local_100 >> 0x20) * 0x17 + local_100 &
                                       (ulonglong)(local_98.HashSize - 1)) * 4);
                      while (iVar22 != -1) {
                        lVar33 = local_98.Elements._0_8_ + (longlong)iVar22 * 0x18;
                        if (*(ulonglong *)(local_98.Elements._0_8_ + (longlong)iVar22 * 0x18) ==
                            local_100) {
                          puVar15 = (uint *)(lVar33 + 8);
                          if (lVar33 == 0) {
                            puVar15 = (uint *)0x0;
                          }
                          if (puVar15 != (uint *)0x0) {
                            local_1a4 = *puVar15;
                            goto LAB_148723613;
                          }
                          break;
                        }
                        iVar22 = *(int *)(lVar33 + 0x10);
                      }
                    }
                    local_b8 = &local_100;
                    local_1a4 = local_15c;
                    local_15c = local_15c + 1;
                    local_b0 = &local_1a4;
                    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                              (&local_98,
                               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)
                               (local_d8 + 4),(bool *)&local_b8);
                    if (local_130[2] != 0) {
                      memcpy(local_c8 + local_1a4 * local_118,
                             (void *)(uVar21 * local_118 + local_f8),local_118);
                    }
                    if (local_158 != 0) {
                      memcpy(local_c0 + local_1a4 * local_150,
                             (void *)(uVar21 * local_150 + local_f0),local_150);
                    }
LAB_148723613:
                    uVar20 = local_18c;
                    local_178 = (local_160 & 0x7ff | local_18c << 0xb) << 0xb | uVar23 & 0x7ff;
                    uVar27 = 0;
                    if ((int)local_19c < local_130[0]) {
                      uVar27 = local_1a0;
                    }
                    if ((uVar27 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    local_108[0] = (local_180->PageTableCoords).ArrayNum;
                    local_a8 = &local_178;
                    local_a0 = local_108;
                    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                                *)(local_138.Data + uVar29 * 0x50),
                               (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_d8,
                               (bool *)&local_a8);
                    pFVar34 = (pTVar1->AllocatorInstance).Data;
                    if (((pFVar34 <= (FScriptContainerElement *)&local_178) &&
                        ((FScriptContainerElement *)&local_178 <
                         pFVar34 + (longlong)(this->PageTableCoords).ArrayMax * 4)) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar22 = (this->PageTableCoords).ArrayNum;
                    if (iVar22 == (this->PageTableCoords).ArrayMax) {
                      iVar22 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&pTVar1->AllocatorInstance,
                                          &(this->PageTableCoords).ArrayMax);
                    }
                    (this->PageTableCoords).ArrayNum = iVar22 + 1;
                    *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_178;
                    pFVar34 = (pTVar2->AllocatorInstance).Data;
                    if (((pFVar34 <= (FScriptContainerElement *)&local_1a4) &&
                        ((FScriptContainerElement *)&local_1a4 <
                         pFVar34 + (longlong)(this->PageTableTileIndices).ArrayMax * 4)) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar22 = (this->PageTableTileIndices).ArrayNum;
                    if (iVar22 == (this->PageTableTileIndices).ArrayMax) {
                      iVar22 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&pTVar2->AllocatorInstance,
                                          &(this->PageTableTileIndices).ArrayMax);
                    }
                    (this->PageTableTileIndices).ArrayNum = iVar22 + 1;
                    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_1a4;
                    if (((int)local_188 < 0) || (local_130[0] <= (int)local_188)) {
                      pFVar34 = (pTVar3->AllocatorInstance).Data;
                      local_164 = 0xffffffff;
                      if ((pFVar34 <= (FScriptContainerElement *)&local_164) &&
                         (((FScriptContainerElement *)&local_164 < pFVar34 + (longlong)*piVar4 * 4
                          && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar12)))) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar22 = (this->PageTableParentIndices).ArrayNum;
                      uVar20 = local_164;
                      if (iVar22 == *piVar4) {
                        iVar22 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar3->AllocatorInstance,piVar4);
                        uVar20 = local_164;
                      }
                    }
                    else {
                      uVar32 = local_160 & 0xffe;
                      uVar27 = 0;
                      if ((int)local_188 < local_130[0]) {
                        uVar27 = ~local_188 >> 0x1f;
                      }
                      if ((uVar27 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      puVar15 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                                ::FindChecked((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                                               *)(local_138.Data + (uVar29 + 1) * 0x50),
                                              ((uVar20 & 0xfffffffe) << 0xb | uVar32) << 10 |
                                              (uint)(uVar24 >> 1) & 0x7ff);
                      local_168 = *puVar15;
                      pFVar34 = (pTVar3->AllocatorInstance).Data;
                      if (((pFVar34 <= (FScriptContainerElement *)&local_168) &&
                          ((FScriptContainerElement *)&local_168 < pFVar34 + (longlong)*piVar4 * 4))
                         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar22 = (this->PageTableParentIndices).ArrayNum;
                      uVar20 = local_168;
                      if (iVar22 == *piVar4) {
                        iVar22 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar3->AllocatorInstance,piVar4);
                        uVar20 = local_168;
                      }
                    }
                    (this->PageTableParentIndices).ArrayNum = iVar22 + 1;
                    *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar22 * 4) = uVar20;
                  }
                  uVar31 = (ulonglong)local_19c;
                  local_170 = local_170 + 1;
                  uVar24 = (ulonglong)(uVar23 + 1);
                  uVar21 = 0;
                  iVar22 = local_174;
                  iVar13 = local_148;
                  uVar27 = local_190;
                } while ((int)(uVar23 + 1) < local_174);
              }
              local_160 = local_160 + 1;
              uVar24 = uVar21;
              uVar29 = uVar31;
              uVar20 = local_18c;
            } while ((int)local_160 < iVar13);
          }
          uVar23 = (uint)uVar31;
          local_18c = uVar20 + 1;
          uVar16 = (ulonglong)local_18c;
          uVar27 = uVar27 + iVar13;
          pFVar25 = local_120;
          uVar20 = local_188;
          local_190 = uVar27;
        } while ((int)local_18c < (int)local_144);
      }
      local_19c = uVar23 - 1;
      lVar33 = local_e8 + -0x48;
      local_188 = uVar20 - 1;
      sVar26 = local_150;
      sVar30 = local_118;
      local_e8 = lVar33;
    } while (-1 < (int)local_19c);
  }
  uVar21 = (ulonglong)local_15c;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(local_e0,local_15c * sVar30,No);
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(local_110,uVar21 * sVar26,No);
  uVar21 = (ulonglong)(int)local_1a8;
  iVar22 = 0;
  local_180->NumPhysicalTiles = local_15c;
  if (-1 < (int)local_1a8) {
    iVar13 = local_194 - 1;
    sVar30 = uVar21 * 0x48;
    uVar31 = uVar21;
    local_158 = iVar13;
    do {
      pFVar10 = local_180;
      uVar20 = ~(uint)uVar21 >> 0x1f;
      uVar27 = 0;
      if ((int)(uint)uVar21 < (local_180->MipPageRanges).ArrayNum) {
        uVar27 = uVar20;
      }
      local_150 = sVar30;
      local_144 = uVar20;
      if (uVar27 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar21 = (ulonglong)local_1a8;
      }
      if (*(int *)((pFVar10->MipPageRanges).AllocatorInstance.Data + uVar31 * 8) != iVar22) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipPageRanges[MipLevel].PageOffset == TotalPageCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                            ,0x350,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar21 = (ulonglong)local_1a8;
      }
      uVar27 = 0;
      if ((int)uVar21 < (pFVar10->MipPageRanges).ArrayNum) {
        uVar27 = uVar20;
      }
      if (uVar27 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar21 = (ulonglong)local_1a8;
      }
      iVar18 = *(int *)((pFVar10->MipPageRanges).AllocatorInstance.Data + uVar31 * 8 + 4);
      iVar22 = iVar22 + iVar18;
      local_148 = iVar18;
      local_140 = iVar22;
      if (((int)uVar21 == iVar13) && (1 < iVar18)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsHighestMipLevel || NumPageTableEntries <= 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                            ,0x354,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar21 = (ulonglong)local_1a8;
      }
      iVar14 = (pFVar10->Header).PageTableVolumeResolution.field0_0x0._s_0.X >>
               ((byte)uVar21 & 0x1f);
      uVar27 = (pFVar10->Header).PageTableVolumeResolution.field0_0x0._s_0.Y >>
               ((byte)uVar21 & 0x1f);
      local_174 = 1;
      if (1 < iVar14) {
        local_174 = iVar14;
      }
      local_190 = 1;
      if (1 < (int)uVar27) {
        local_190 = uVar27;
      }
      iVar14 = 0;
      uVar27 = (uint)uVar21;
      if (0 < iVar18) {
        do {
          pFVar10 = local_180;
          uVar27 = 0;
          if ((int)uVar21 < (local_180->MipPageRanges).ArrayNum) {
            uVar27 = uVar20;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar23 = *(int *)((pFVar10->MipPageRanges).AllocatorInstance.Data + uVar31 * 8) + iVar14;
          uVar27 = ~uVar23 >> 0x1f;
          uVar20 = 0;
          if ((int)uVar23 < (pFVar10->PageTableCoords).ArrayNum) {
            uVar20 = uVar27;
          }
          if ((uVar20 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar33 = (longlong)(int)uVar23;
          uVar32 = *(uint *)((pFVar10->PageTableCoords).AllocatorInstance.Data + lVar33 * 4);
          uVar20 = 0;
          if ((int)uVar23 < (local_180->PageTableCoords).ArrayNum) {
            uVar20 = uVar27;
          }
          if ((uVar20 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar5 = *(uint *)((local_180->PageTableCoords).AllocatorInstance.Data + lVar33 * 4);
          uVar20 = 0;
          if ((int)uVar23 < (local_180->PageTableCoords).ArrayNum) {
            uVar20 = uVar27;
          }
          if ((uVar20 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar25 = local_120;
          uVar20 = local_144;
          uVar23 = ((*(uint *)((local_180->PageTableCoords).AllocatorInstance.Data + lVar33 * 4) >>
                    0x16) * local_190 + (uVar5 >> 0xb & 0x7ff)) * local_174 + (uVar32 & 0x7ff);
          uVar27 = 0;
          if ((int)local_1a8 < (local_120->MipMaps).ArrayNum) {
            uVar27 = local_144;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          sVar30 = local_150;
          if ((((int)uVar23 < 0) ||
              (*(int *)((pFVar25->MipMaps).AllocatorInstance.Data + local_150 + 8) <= (int)uVar23))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("MippedTextureData.MipMaps[MipLevel].PageTable.IsValidIndex(LinearPageIndex)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                                     ,0x35e,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar27 = 0;
          if ((int)local_1a8 < (pFVar25->MipMaps).ArrayNum) {
            uVar27 = uVar20;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar34 = (pFVar25->MipMaps).AllocatorInstance.Data;
          uVar27 = 0;
          if ((int)uVar23 < *(int *)(pFVar34 + sVar30 + 8)) {
            uVar27 = ~uVar23 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar22 = *(int *)(*(longlong *)(pFVar34 + sVar30) + (longlong)(int)uVar23 * 4);
          if (((iVar22 == 0) || (iVar22 == -1)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PageTableEntry != 0 && PageTableEntry != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                                  ,0x360,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = iVar14 + 1;
          uVar21 = (ulonglong)local_1a8;
          iVar22 = local_140;
          iVar13 = local_158;
          uVar27 = local_1a8;
        } while (iVar14 < local_148);
      }
      local_1a8 = uVar27 - 1;
      uVar21 = (ulonglong)local_1a8;
      sVar30 = sVar30 - 0x48;
      uVar31 = uVar31 - 1;
      local_150 = sVar30;
    } while (-1 < (int)local_1a8);
  }
  if ((iVar22 != (local_180->PageTableCoords).ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TotalPageCount == PageTableCoords.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                          ,0x363,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  DestructItems<TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>,int>
            ((TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
              *)local_138.Data,local_130[0]);
  if ((TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
       *)local_138.Data !=
      (TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
       *)0x0) {
    FMemory::Free(local_138.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// Reset @ 148754690

void __thiscall UE::SVT::FDerivedTextureData::Reset(FDerivedTextureData *this)

{
  this->NumPhysicalTiles = 0;
  (this->MipPageRanges).ArrayNum = 0;
  if ((this->MipPageRanges).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->MipPageRanges).AllocatorInstance,0,&(this->MipPageRanges).ArrayMax);
  }
  (this->PageTableCoords).ArrayNum = 0;
  if ((this->PageTableCoords).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PageTableCoords).AllocatorInstance,0,&(this->PageTableCoords).ArrayMax)
    ;
  }
  (this->PageTableTileIndices).ArrayNum = 0;
  if ((this->PageTableTileIndices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PageTableTileIndices).AllocatorInstance,0,
               &(this->PageTableTileIndices).ArrayMax);
  }
  (this->PageTableParentIndices).ArrayNum = 0;
  if ((this->PageTableParentIndices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PageTableParentIndices).AllocatorInstance,0,
               &(this->PageTableParentIndices).ArrayMax);
  }
  (this->PhysicalTileDataA).ArrayNum = 0;
  if ((this->PhysicalTileDataA).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PhysicalTileDataA).AllocatorInstance,0,
               &(this->PhysicalTileDataA).ArrayMax);
  }
  (this->PhysicalTileDataB).ArrayNum = 0;
  if ((this->PhysicalTileDataB).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PhysicalTileDataB).AllocatorInstance,0,
               &(this->PhysicalTileDataB).ArrayMax);
  }
  return;
}

