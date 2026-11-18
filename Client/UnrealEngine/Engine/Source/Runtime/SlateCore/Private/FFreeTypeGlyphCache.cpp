// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FFreeTypeGlyphCache @ 142472fe0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeGlyphCache * __thiscall
FFreeTypeGlyphCache::FFreeTypeGlyphCache
          (FFreeTypeGlyphCache *this,FT_FaceRec_ *param_1,int param_2,uint param_3)

{
  this->Face = param_1;
  this->LoadFlags = param_2;
  this->FontRenderSize = param_3;
  *(undefined8 *)&(this->GlyphDataMap).field_0x10 = 0;
  *(undefined8 *)&(this->GlyphDataMap).field_0x18 = 0;
  *(undefined8 *)&(this->GlyphDataMap).field_0x38 = 0;
  *(undefined8 *)&(this->GlyphDataMap).field_0x48 = 0;
  *(undefined8 *)&this->GlyphDataMap = 0;
  *(undefined8 *)&(this->GlyphDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->GlyphDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->GlyphDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->GlyphDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GlyphDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->GlyphDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GlyphDataMap).field_0x40 = 0;
  return this;
}

// FindOrCache @ 1424881d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FFreeTypeGlyphCache::FindOrCache(FFreeTypeGlyphCache *this,uint param_1,FCachedGlyphData *param_2)

{
  FT_Vector_ *pFVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  FT_GlyphSlotRec_ *pFVar4;
  FT_SizeRec_ *pFVar5;
  FT_Vector_ *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ushort uVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  TArray<FT_Vector_,TSizedDefaultAllocator<32>_> *pTVar21;
  int *piVar22;
  uint *puVar23;
  undefined1 *puVar24;
  TPairInitializer<unsigned_int_const_&,FFreeTypeGlyphCache::FCachedGlyphData_&> local_res8;
  FCachedGlyphData **local_98;
  FCachedGlyphData *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  puVar23 = (uint *)0x0;
  local_res8.Value._0_4_ = param_1;
  if (*(int *)&(this->GlyphDataMap).field_0x8 != *(int *)&(this->GlyphDataMap).field_0x34) {
    puVar24 = *(undefined1 **)&(this->GlyphDataMap).field_0x40;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = &(this->GlyphDataMap).field_0x38;
    }
    uVar17 = *(uint *)(puVar24 +
                      (ulonglong)(*(int *)&(this->GlyphDataMap).field_0x48 - 1U & param_1) * 4);
    if (uVar17 != 0xffffffff) {
      do {
        puVar19 = (uint *)((longlong)(int)uVar17 * 0x60 + *(longlong *)&this->GlyphDataMap);
        if (*puVar19 == param_1) {
          puVar20 = puVar19 + 2;
          if (puVar19 == (uint *)0x0) {
            puVar20 = puVar23;
          }
          if (puVar20 != (uint *)0x0) {
            param_2->Height = (short)*puVar20;
            uVar17 = puVar20[2];
            uVar9 = puVar20[3];
            uVar10 = puVar20[4];
            (param_2->GlyphMetrics).width = puVar20[1];
            (param_2->GlyphMetrics).height = uVar17;
            (param_2->GlyphMetrics).horiBearingX = uVar9;
            (param_2->GlyphMetrics).horiBearingY = uVar10;
            uVar17 = puVar20[6];
            uVar9 = puVar20[7];
            uVar10 = puVar20[8];
            (param_2->GlyphMetrics).horiAdvance = puVar20[5];
            (param_2->GlyphMetrics).vertBearingX = uVar17;
            (param_2->GlyphMetrics).vertBearingY = uVar9;
            (param_2->GlyphMetrics).vertAdvance = uVar10;
            uVar8 = *(undefined8 *)(puVar20 + 9);
            uVar17 = puVar20[0xb];
            uVar9 = puVar20[0xc];
            (param_2->SizeMetrics).x_ppem = (short)uVar8;
            (param_2->SizeMetrics).y_ppem = (short)((ulonglong)uVar8 >> 0x10);
            (param_2->SizeMetrics).x_scale = (int)((ulonglong)uVar8 >> 0x20);
            (param_2->SizeMetrics).y_scale = uVar17;
            (param_2->SizeMetrics).ascender = uVar9;
            uVar17 = puVar20[0xe];
            (param_2->SizeMetrics).descender = puVar20[0xd];
            (param_2->SizeMetrics).height = uVar17;
            (param_2->SizeMetrics).max_advance = puVar20[0xf];
            pTVar21 = &param_2->OutlinePoints;
            if (pTVar21 != (TArray<FT_Vector_,TSizedDefaultAllocator<32>_> *)(puVar20 + 0x10)) {
              uVar17 = puVar20[0x12];
              piVar22 = &(param_2->OutlinePoints).ArrayMax;
              _Src = *(void **)(puVar20 + 0x10);
              (param_2->OutlinePoints).ArrayNum = uVar17;
              if ((uVar17 == 0) && (*piVar22 == 0)) {
                *piVar22 = 0;
                return true;
              }
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,uVar17,*piVar22,&pTVar21->AllocatorInstance,uVar17,piVar22);
              if (uVar17 != 0) {
                memcpy((pTVar21->AllocatorInstance).Data,_Src,(longlong)(int)uVar17 << 3);
              }
            }
            return true;
          }
          break;
        }
        uVar17 = puVar19[0x16];
      } while (uVar17 != 0xffffffff);
    }
  }
  iVar18 = FreeTypeUtils::LoadGlyph(this->Face,param_1,this->LoadFlags,this->FontRenderSize);
  if (iVar18 != 0) {
    return false;
  }
  local_88 = 0;
  uStack_84 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  pTVar21 = &param_2->OutlinePoints;
  uStack_80 = 0;
  uStack_7c = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_40 = 0;
  param_2->Height = 0;
  (param_2->GlyphMetrics).width = 0;
  (param_2->GlyphMetrics).height = 0;
  (param_2->GlyphMetrics).horiBearingX = 0;
  (param_2->GlyphMetrics).horiBearingY = 0;
  (param_2->GlyphMetrics).horiAdvance = 0;
  (param_2->GlyphMetrics).vertBearingX = 0;
  (param_2->GlyphMetrics).vertBearingY = 0;
  (param_2->GlyphMetrics).vertAdvance = 0;
  (param_2->SizeMetrics).x_ppem = 0;
  (param_2->SizeMetrics).y_ppem = 0;
  (param_2->SizeMetrics).x_scale = 0;
  (param_2->SizeMetrics).y_scale = 0;
  (param_2->SizeMetrics).ascender = 0;
  (param_2->SizeMetrics).descender = 0;
  (param_2->SizeMetrics).height = 0;
  (param_2->SizeMetrics).max_advance = 0;
  if (pTVar21 != (TArray<FT_Vector_,TSizedDefaultAllocator<32>_> *)&local_48) {
    pFVar3 = (pTVar21->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_2->OutlinePoints).ArrayMax = 0;
    (param_2->OutlinePoints).ArrayNum = 0;
  }
  piVar22 = &(param_2->OutlinePoints).ArrayMax;
  param_2->Height = this->Face->height;
  pFVar4 = this->Face->glyph;
  lVar11 = (pFVar4->metrics).height;
  lVar12 = (pFVar4->metrics).horiBearingX;
  lVar13 = (pFVar4->metrics).horiBearingY;
  (param_2->GlyphMetrics).width = (pFVar4->metrics).width;
  (param_2->GlyphMetrics).height = lVar11;
  (param_2->GlyphMetrics).horiBearingX = lVar12;
  (param_2->GlyphMetrics).horiBearingY = lVar13;
  lVar11 = (pFVar4->metrics).vertBearingX;
  lVar12 = (pFVar4->metrics).vertBearingY;
  lVar13 = (pFVar4->metrics).vertAdvance;
  (param_2->GlyphMetrics).horiAdvance = (pFVar4->metrics).horiAdvance;
  (param_2->GlyphMetrics).vertBearingX = lVar11;
  (param_2->GlyphMetrics).vertBearingY = lVar12;
  (param_2->GlyphMetrics).vertAdvance = lVar13;
  pFVar5 = this->Face->size;
  uVar14 = (pFVar5->metrics).y_ppem;
  lVar11 = (pFVar5->metrics).x_scale;
  lVar12 = (pFVar5->metrics).y_scale;
  lVar13 = (pFVar5->metrics).ascender;
  (param_2->SizeMetrics).x_ppem = (pFVar5->metrics).x_ppem;
  (param_2->SizeMetrics).y_ppem = uVar14;
  (param_2->SizeMetrics).x_scale = lVar11;
  (param_2->SizeMetrics).y_scale = lVar12;
  (param_2->SizeMetrics).ascender = lVar13;
  lVar11 = (pFVar5->metrics).height;
  (param_2->SizeMetrics).descender = (pFVar5->metrics).descender;
  (param_2->SizeMetrics).height = lVar11;
  (param_2->SizeMetrics).max_advance = (pFVar5->metrics).max_advance;
  sVar2 = (this->Face->glyph->outline).n_points;
  if (0 < sVar2) {
    if (sVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((longlong)sVar2 & 0xffffffff);
    }
    iVar18 = (int)sVar2;
    if (iVar18 != *piVar22 && *piVar22 <= (int)sVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar18,&pTVar21->AllocatorInstance,(param_2->OutlinePoints).ArrayNum,piVar22);
    }
    if (0 < iVar18) {
      do {
        pFVar6 = (FT_Vector_ *)(param_2->OutlinePoints).AllocatorInstance.Data;
        pFVar1 = (this->Face->glyph->outline).points + (longlong)puVar23;
        if (((pFVar6 <= pFVar1) && (pFVar1 < pFVar6 + *piVar22)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          uVar16 = (*pcVar7)();
          return (bool)uVar16;
        }
        iVar18 = (param_2->OutlinePoints).ArrayNum;
        if (iVar18 == *piVar22) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&(param_2->OutlinePoints).AllocatorInstance,piVar22);
          (param_2->OutlinePoints).ArrayNum = iVar18;
        }
        (param_2->OutlinePoints).ArrayNum = iVar18 + 1;
        puVar23 = (uint *)((longlong)puVar23 + 1);
        *(FT_Vector_ *)((param_2->OutlinePoints).AllocatorInstance.Data + (longlong)iVar18 * 8) =
             *pFVar1;
      } while ((longlong)puVar23 < (longlong)sVar2);
    }
  }
  local_98 = &local_res8.Value;
  local_90 = param_2;
  TSet<TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData>,TDefaultMapHashableKeyFuncs<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FFreeTypeGlyphCache::FCachedGlyphData_&>_>
            ((TSet<TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData>,TDefaultMapHashableKeyFuncs<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData,0>,FDefaultSetAllocator>
              *)&this->GlyphDataMap,&local_res8,(bool *)&local_98);
  return true;
}

