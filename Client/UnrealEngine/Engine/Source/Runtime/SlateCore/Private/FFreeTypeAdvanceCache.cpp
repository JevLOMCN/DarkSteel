// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FFreeTypeAdvanceCache @ 1424728b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeAdvanceCache * __thiscall
FFreeTypeAdvanceCache::FFreeTypeAdvanceCache
          (FFreeTypeAdvanceCache *this,FT_FaceRec_ *param_1,int param_2,uint param_3)

{
  FT_FaceRec_ *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FFreeTypeAdvanceCache *pFVar5;
  
  this->Face = param_1;
  this->LoadFlags = param_2;
  if ((param_2 & 1U) != 0) {
    uVar4 = param_1->units_per_EM;
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    param_3 = FT_DivFix(param_3 << 6,uVar4);
  }
  this->FontRenderSize = param_3;
  *(undefined8 *)&(this->AdvanceMap).field_0x10 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x18 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x38 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x48 = 0;
  *(undefined8 *)&this->AdvanceMap = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->AdvanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->AdvanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdvanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdvanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x40 = 0;
  if (((this->LoadFlags & 1) != 0) &&
     (((pFVar1 = this->Face, pFVar1 == (FT_FaceRec_ *)0x0 || ((pFVar1->face_flags & 0x2001U) != 1))
      || (((pFVar1->face_flags & 2U) != 0 && (pFVar1->num_glyphs < 1)))))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("((LoadFlags & ( 1L << 0 )) == 0) || FreeTypeUtils::IsFaceEligibleForSdf(Face)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x311,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFreeTypeAdvanceCache *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

// FFreeTypeAdvanceCache @ 142472980

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeAdvanceCache * __thiscall
FFreeTypeAdvanceCache::FFreeTypeAdvanceCache(FFreeTypeAdvanceCache *this)

{
  this->Face = (FT_FaceRec_ *)0x0;
  this->LoadFlags = 0;
  this->FontRenderSize = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x10 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x18 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x38 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x48 = 0;
  *(undefined8 *)&this->AdvanceMap = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->AdvanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->AdvanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->AdvanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdvanceMap).field_0x34 = 0;
  *(undefined4 *)&(this->AdvanceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AdvanceMap).field_0x40 = 0;
  return this;
}

// FindOrCache @ 142488050

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FFreeTypeAdvanceCache::FindOrCache(FFreeTypeAdvanceCache *this,uint param_1,long *param_2)

{
  FT_FaceRec_ *pFVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  undefined1 *puVar8;
  TPairInitializer<unsigned_int_const_&,long_const_&> local_res8;
  long **local_18;
  long *local_10;
  
  pFVar1 = this->Face;
  if (pFVar1 == (FT_FaceRec_ *)0x0) {
    return false;
  }
  if (*(int *)&(this->AdvanceMap).field_0x8 != *(int *)&(this->AdvanceMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AdvanceMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AdvanceMap).field_0x38;
    }
    uVar2 = *(uint *)(puVar8 + (ulonglong)(*(int *)&(this->AdvanceMap).field_0x48 - 1U & param_1) *
                               4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar2 * 0x10 + *(longlong *)&this->AdvanceMap);
        if (*puVar7 == param_1) {
          puVar5 = puVar7 + 1;
          if (puVar7 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            *param_2 = *puVar5;
            return true;
          }
          break;
        }
        uVar2 = puVar7[2];
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res8.Value._0_4_ = param_1;
  if ((this->LoadFlags & 1U) == 0) {
    FreeTypeUtils::ApplySizeAndScale(pFVar1,this->FontRenderSize);
    iVar3 = FT_Get_Advance(this->Face,(uint)local_res8.Value,this->LoadFlags,param_2);
    if (iVar3 != 0) {
      return false;
    }
    if (((byte)this->Face->face_flags & 3) != 2) goto LAB_1424880fd;
    lVar6 = 0x20;
    if ((this->LoadFlags & 0x10) == 0) {
      lVar6 = 0x1c;
    }
    lVar4 = FT_MulFix(*param_2,*(undefined4 *)((longlong)&this->Face->size->face + lVar6));
  }
  else {
    iVar3 = FT_Get_Advance(pFVar1,param_1,this->LoadFlags,param_2);
    if (iVar3 != 0) {
      return false;
    }
    lVar4 = FT_MulDiv(*param_2,this->FontRenderSize,0x40);
  }
  *param_2 = lVar4;
LAB_1424880fd:
  local_18 = &local_res8.Value;
  local_10 = param_2;
  TSet<TTuple<unsigned_int,long>,TDefaultMapHashableKeyFuncs<unsigned_int,long,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,long_const_&>_>
            ((TSet<TTuple<unsigned_int,long>,TDefaultMapHashableKeyFuncs<unsigned_int,long,0>,FDefaultSetAllocator>
              *)&this->AdvanceMap,&local_res8,(bool *)&local_18);
  return true;
}

