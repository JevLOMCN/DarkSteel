// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FFreeTypeKerningCache @ 142473030

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeKerningCache * __thiscall
FFreeTypeKerningCache::FFreeTypeKerningCache
          (FFreeTypeKerningCache *this,FT_FaceRec_ *param_1,int param_2,uint param_3)

{
  FT_FaceRec_ *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FFreeTypeKerningCache *pFVar5;
  
  this->Face = param_1;
  this->KerningFlags = param_2;
  if (param_2 == 2) {
    uVar4 = param_1->units_per_EM;
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    param_3 = FT_DivFix(param_3 << 6,uVar4);
  }
  this->FontRenderSize = param_3;
  *(undefined8 *)&(this->KerningMap).field_0x10 = 0;
  *(undefined8 *)&(this->KerningMap).field_0x18 = 0;
  *(undefined8 *)&(this->KerningMap).field_0x38 = 0;
  *(undefined8 *)&(this->KerningMap).field_0x48 = 0;
  *(undefined8 *)&this->KerningMap = 0;
  *(undefined8 *)&(this->KerningMap).field_0x8 = 0;
  *(undefined8 *)&(this->KerningMap).field_0x20 = 0;
  *(undefined4 *)&(this->KerningMap).field_0x28 = 0;
  *(undefined4 *)&(this->KerningMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KerningMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KerningMap).field_0x34 = 0;
  *(undefined8 *)&(this->KerningMap).field_0x40 = 0;
  if (this->Face == (FT_FaceRec_ *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Face",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x34d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFreeTypeKerningCache *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((param_1->face_flags & 0x40) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("( (InFace)->face_flags & ( 1L << 6 ) )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x34e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFreeTypeKerningCache *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((this->KerningFlags == 2) &&
     (((pFVar1 = this->Face, pFVar1 == (FT_FaceRec_ *)0x0 || ((pFVar1->face_flags & 0x2001U) != 1))
      || (((pFVar1->face_flags & 2U) != 0 && (pFVar1->num_glyphs < 1)))))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("KerningFlags != FT_KERNING_UNSCALED || FreeTypeUtils::IsFaceEligibleForSdf(Face)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x34f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFreeTypeKerningCache *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

// FindOrCache @ 1424885a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FFreeTypeKerningCache::FindOrCache
          (FFreeTypeKerningCache *this,uint param_1,uint param_2,FT_Vector_ *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  FT_Vector_ *pFVar6;
  undefined1 *puVar7;
  FKerningPair local_res8 [2];
  FKerningPair *local_28;
  FT_Vector_ *local_20;
  
  local_res8[0].FirstGlyphIndex = param_1;
  local_res8[0].SecondGlyphIndex = param_2;
  uVar3 = ::GetTypeHash(local_res8);
  if (*(int *)&(this->KerningMap).field_0x8 != *(int *)&(this->KerningMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->KerningMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->KerningMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->KerningMap).field_0x48 - 1U & uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->KerningMap).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if ((*(uint *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) &&
           (*(uint *)(lVar1 + 4) == param_2)) {
          if (iVar4 != -1) {
            pFVar6 = (FT_Vector_ *)(lVar1 + 8);
            if (lVar1 == 0) {
              pFVar6 = (FT_Vector_ *)0x0;
            }
            if (pFVar6 != (FT_Vector_ *)0x0) {
              *param_3 = *pFVar6;
              return true;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  if (this->KerningFlags == 2) {
    iVar4 = FT_Get_Kerning(this->Face,param_1,param_2,2,param_3);
    if (iVar4 != 0) {
      return false;
    }
    uVar3 = this->FontRenderSize;
    lVar5 = FT_MulFix(param_3->x,uVar3);
    param_3->x = lVar5;
  }
  else {
    FreeTypeUtils::ApplySizeAndScale(this->Face,this->FontRenderSize);
    iVar4 = FT_Get_Kerning(this->Face,param_1,param_2,this->KerningFlags,param_3);
    if (iVar4 != 0) {
      return false;
    }
    if (((byte)this->Face->face_flags & 3) != 2) goto LAB_142488674;
    lVar5 = FT_MulFix(param_3->x,(this->Face->size->metrics).x_scale);
    param_3->x = lVar5;
    uVar3 = (this->Face->size->metrics).y_scale;
  }
  lVar5 = FT_MulFix(param_3->y,uVar3);
  param_3->y = lVar5;
LAB_142488674:
  local_28 = local_res8;
  local_20 = param_3;
  TSet<TTuple<FFreeTypeKerningCache::FKerningPair,FT_Vector_>,TDefaultMapHashableKeyFuncs<FFreeTypeKerningCache::FKerningPair,FT_Vector_,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FFreeTypeKerningCache::FKerningPair_const_&,FT_Vector__const_&>_>
            ((TSet<TTuple<FFreeTypeKerningCache::FKerningPair,FT_Vector_>,TDefaultMapHashableKeyFuncs<FFreeTypeKerningCache::FKerningPair,FT_Vector_,0>,FDefaultSetAllocator>
              *)&this->KerningMap,
             (TPairInitializer<FFreeTypeKerningCache::FKerningPair_const_&,FT_Vector__const_&> *)
             (local_res8 + 1),(bool *)&local_28);
  return true;
}

