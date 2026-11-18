// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FMaterialShaderParametersBase @ 147f65080

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FMaterialShaderParametersBase * __thiscall
FMaterialShaderParametersBase::FMaterialShaderParametersBase
          (FMaterialShaderParametersBase *this,FMaterial *param_1)

{
  FMaterialShaderMap *pFVar1;
  schar sVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  EMaterialDomain EVar7;
  EBlendMode EVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  short *psVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  undefined1 local_res8 [8];
  
  this->MaterialDomain = MD_Surface;
  this->ShadingModels = 0;
  this->field2_0x6 = (FMaterialShaderParametersBase_u_6)0x0;
  this->BlendMode = BLEND_Opaque;
  this->FeatureLevel = ES2_REMOVED;
  this->QualityLevel = Low;
  this->field_0x11 = 0;
  this->PreshaderGap = 0;
  this->BlendableLocation = 0;
  this->NumCustomizedUVs = 0;
  this->StencilCompare = 0;
  *(undefined8 *)&this->NumMaterialCacheTags = 0;
  (this->field11_0x28).PackedFlags = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  if (param_1 == (FMaterial *)0x0) {
    return this;
  }
  EVar7 = (**(code **)(param_1->_padding_ + 0x40))(param_1);
  this->MaterialDomain = EVar7;
  puVar11 = (ushort *)(**(code **)(param_1->_padding_ + 0x280))(param_1,local_res8);
  (this->ShadingModels).ShadingModelField = *puVar11;
  EVar8 = (**(code **)(param_1->_padding_ + 0x268))(param_1);
  this->BlendMode = EVar8;
  this->FeatureLevel = param_1->FeatureLevel;
  this->QualityLevel = param_1->QualityLevel;
  uVar6 = (**(code **)(param_1->_padding_ + 0x4a8))(param_1);
  this->PreshaderGap = uVar6;
  iVar9 = (**(code **)(param_1->_padding_ + 0x430))(param_1);
  this->BlendableLocation = iVar9;
  iVar9 = (**(code **)(param_1->_padding_ + 0x420))(param_1);
  this->NumCustomizedUVs = iVar9;
  sVar2 = (**(code **)(param_1->_padding_ + 0x428))(param_1);
  this->NumMaterialCacheTags = sVar2;
  uVar10 = (**(code **)(param_1->_padding_ + 0x460))(param_1);
  this->StencilCompare = uVar10;
  bVar3 = (**(code **)(param_1->_padding_ + 0x418))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffffffe ^ (ulonglong)bVar3
  ;
  bVar3 = (**(code **)(param_1->_padding_ + 0x108))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 * 2 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffffffd ^
       (ulonglong)bVar3 * 2;
  bVar3 = (**(code **)(param_1->_padding_ + 0x250))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 * 4 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffffffb ^
       (ulonglong)bVar3 * 4;
  bVar3 = (**(code **)(param_1->_padding_ + 600))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 * 8 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffffff7 ^
       (ulonglong)bVar3 * 8;
  bVar3 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 4 ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffffef ^
       (ulonglong)bVar3 << 4;
  bVar3 = (**(code **)(param_1->_padding_ + 0x50))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 5 ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffffdf ^
       (ulonglong)bVar3 << 5;
  bVar3 = (**(code **)(param_1->_padding_ + 0x2a8))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 6 ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffffbf ^
       (ulonglong)bVar3 << 6;
  EVar8 = (**(code **)(param_1->_padding_ + 0x268))(param_1);
  psVar12 = (short *)(**(code **)(param_1->_padding_ + 0x280))(param_1);
  uVar16 = 0;
  uVar14 = uVar16;
  if ((*psVar12 != 0x400) &&
     (((bVar4 = IsOpaqueBlendMode(EVar8), bVar4 || (bVar4 = IsMaskedBlendMode(EVar8), bVar4)) ||
      ((bVar4 = IsTranslucentOnlyBlendMode(EVar8), bVar4 &&
       (cVar5 = (**(code **)(param_1->_padding_ + 0x2a0))(param_1), cVar5 != '\0')))))) {
    uVar14 = 0x80;
  }
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags & 0xffffffffffffff7f;
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags | uVar14;
  bVar4 = FMaterial::WritesEveryPixel(param_1,false);
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags & 0xfffffffffffffeff;
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags | (ulonglong)bVar4 << 8;
  bVar4 = FMaterial::WritesEveryPixel(param_1,true);
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags & 0xfffffffffffffdff;
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags | (ulonglong)bVar4 << 9;
  bVar4 = Substrate::IsSubstrateEnabled();
  if (!bVar4) {
    bVar3 = (**(code **)(param_1->_padding_ + 0x3b8))(param_1);
    (this->field11_0x28).PackedFlags =
         ((ulonglong)bVar3 << 0xc ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffefff ^
         (ulonglong)bVar3 << 0xc;
    bVar3 = (**(code **)(param_1->_padding_ + 0x3c0))(param_1);
    (this->field11_0x28).PackedFlags =
         ((ulonglong)bVar3 << 0xd ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffdfff ^
         (ulonglong)bVar3 << 0xd;
    bVar3 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1);
    (this->field11_0x28).PackedFlags =
         ((ulonglong)bVar3 << 0xe ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffbfff ^
         (ulonglong)bVar3 << 0xe;
    bVar3 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
    (this->field11_0x28).PackedFlags =
         ((ulonglong)bVar3 << 0xf ^ (this->field11_0x28).PackedFlags) & 0xffffffffffff7fff ^
         (ulonglong)bVar3 << 0xf;
    bVar3 = (**(code **)(param_1->_padding_ + 0x3d8))(param_1);
    (this->field11_0x28).PackedFlags =
         ((ulonglong)bVar3 << 0x10 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffeffff ^
         (ulonglong)bVar3 << 0x10;
    bVar3 = (**(code **)(param_1->_padding_ + 0x3e0))(param_1);
    (this->field11_0x28).PackedFlags =
         ((ulonglong)bVar3 << 0x11 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffdffff ^
         (ulonglong)bVar3 << 0x11;
    bVar3 = (**(code **)(param_1->_padding_ + 0x3f0))(param_1);
    (this->field11_0x28).PackedFlags =
         ((ulonglong)bVar3 << 0x12 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffbffff ^
         (ulonglong)bVar3 << 0x12;
    bVar3 = (**(code **)(param_1->_padding_ + 1000))(param_1);
    uVar15 = ((ulonglong)bVar3 << 0x13 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffff7ffff ^
             (ulonglong)bVar3 << 0x13;
    goto LAB_147f65616;
  }
  bVar3 = (**(code **)(param_1->_padding_ + 0x408))();
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 & 0xfff7;
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 | (ushort)(bVar3 & 1) << 3;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,3);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 10 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffffbff ^
       (ulonglong)bVar3 << 10;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,4);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0xb ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffff7ff ^
       (ulonglong)bVar3 << 0xb;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,5);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0xc ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffefff ^
       (ulonglong)bVar3 << 0xc;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,10);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0xd ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffdfff ^
       (ulonglong)bVar3 << 0xd;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,8);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0xe ^ (this->field11_0x28).PackedFlags) & 0xffffffffffffbfff ^
       (ulonglong)bVar3 << 0xe;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,7);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0xf ^ (this->field11_0x28).PackedFlags) & 0xffffffffffff7fff ^
       (ulonglong)bVar3 << 0xf;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x10 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffeffff ^
       (ulonglong)bVar3 << 0x10;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,0);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x11 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffdffff ^
       (ulonglong)bVar3 << 0x11;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,0x12);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x12 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffffbffff ^
       (ulonglong)bVar3 << 0x12;
  cVar5 = (**(code **)(param_1->_padding_ + 0x3f8))(param_1,9);
  if (cVar5 == '\0') {
    pFVar1 = (param_1->GameThreadShaderMap).Reference;
    uVar14 = uVar16;
    if (pFVar1 != (FMaterialShaderMap *)0x0) {
      uVar14 = (ulonglong)*(ushort *)(pFVar1->_padding_ + 0x262);
    }
    uVar13 = uVar16;
    if ((uVar14 & 0x20) != 0) goto LAB_147f654da;
  }
  else {
LAB_147f654da:
    uVar13 = 0x80000;
  }
  uVar15 = (this->field11_0x28).PackedFlags & 0xfffffffffff7ffff | uVar13;
LAB_147f65616:
  (this->field11_0x28).PackedFlags = uVar15;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3a0))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x16 ^ (this->field11_0x28).PackedFlags) & 0xffffffffffbfffff ^
       (ulonglong)bVar3 << 0x16;
  bVar3 = (**(code **)(param_1->_padding_ + 0x3a8))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x17 ^ (this->field11_0x28).PackedFlags) & 0xffffffffff7fffff ^
       (ulonglong)bVar3 << 0x17;
  bVar3 = (**(code **)(param_1->_padding_ + 0x498))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x14 ^ (this->field11_0x28).PackedFlags) & 0xffffffffffefffff ^
       (ulonglong)bVar3 << 0x14;
  bVar3 = (**(code **)(param_1->_padding_ + 0x400))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x15 ^ (this->field11_0x28).PackedFlags) & 0xffffffffffdfffff ^
       (ulonglong)bVar3 << 0x15;
  cVar5 = (**(code **)(param_1->_padding_ + 0x3a0))(param_1);
  if ((((cVar5 != '\0') ||
       (cVar5 = (**(code **)(param_1->_padding_ + 0x3a8))(param_1), cVar5 != '\0')) ||
      (cVar5 = (**(code **)(param_1->_padding_ + 0x400))(param_1), cVar5 != '\0')) ||
     (cVar5 = (**(code **)(param_1->_padding_ + 0x488))(param_1), uVar14 = uVar16, cVar5 != '\0')) {
    uVar14 = 0x1000000;
  }
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags & 0xfffffffffeffffff;
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags | uVar14;
  bVar3 = (**(code **)(param_1->_padding_ + 0x158))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x19 ^ (this->field11_0x28).PackedFlags) & 0xfffffffffdffffff ^
       (ulonglong)bVar3 << 0x19;
  bVar3 = (**(code **)(param_1->_padding_ + 0x128))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x1a ^ (this->field11_0x28).PackedFlags) & 0xfffffffffbffffff ^
       (ulonglong)bVar3 << 0x1a;
  bVar3 = (**(code **)(param_1->_padding_ + 0x138))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x1b ^ (this->field11_0x28).PackedFlags) & 0xfffffffff7ffffff ^
       (ulonglong)bVar3 << 0x1b;
  bVar3 = (**(code **)(param_1->_padding_ + 0x140))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x1c ^ (this->field11_0x28).PackedFlags) & 0xffffffffefffffff ^
       (ulonglong)bVar3 << 0x1c;
  bVar3 = (**(code **)(param_1->_padding_ + 0x150))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x1d ^ (this->field11_0x28).PackedFlags) & 0xffffffffdfffffff ^
       (ulonglong)bVar3 << 0x1d;
  bVar3 = (**(code **)(param_1->_padding_ + 0x148))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x1e ^ (this->field11_0x28).PackedFlags) & 0xffffffffbfffffff ^
       (ulonglong)bVar3 << 0x1e;
  bVar3 = (**(code **)(param_1->_padding_ + 0x118))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x1f ^ (this->field11_0x28).PackedFlags) & 0xffffffff7fffffff ^
       (ulonglong)bVar3 << 0x1f;
  bVar3 = (**(code **)(param_1->_padding_ + 0x130))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x20 ^ (this->field11_0x28).PackedFlags) & 0xfffffffeffffffff ^
       (ulonglong)bVar3 << 0x20;
  bVar3 = (**(code **)(param_1->_padding_ + 0x168))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x21 ^ (this->field11_0x28).PackedFlags) & 0xfffffffdffffffff ^
       (ulonglong)bVar3 << 0x21;
  bVar3 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x22 ^ (this->field11_0x28).PackedFlags) & 0xfffffffbffffffff ^
       (ulonglong)bVar3 << 0x22;
  bVar3 = (**(code **)(param_1->_padding_ + 0x160))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x23 ^ (this->field11_0x28).PackedFlags) & 0xfffffff7ffffffff ^
       (ulonglong)bVar3 << 0x23;
  bVar3 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x24 ^ (this->field11_0x28).PackedFlags) & 0xffffffefffffffff ^
       (ulonglong)bVar3 << 0x24;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1c0))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x25 ^ (this->field11_0x28).PackedFlags) & 0xffffffdfffffffff ^
       (ulonglong)bVar3 << 0x25;
  bVar3 = (**(code **)(param_1->_padding_ + 0x178))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x26 ^ (this->field11_0x28).PackedFlags) & 0xffffffbfffffffff ^
       (ulonglong)bVar3 << 0x26;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1d0))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x27 ^ (this->field11_0x28).PackedFlags) & 0xffffff7fffffffff ^
       (ulonglong)bVar3 << 0x27;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1c8))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x28 ^ (this->field11_0x28).PackedFlags) & 0xfffffeffffffffff ^
       (ulonglong)bVar3 << 0x28;
  bVar3 = (**(code **)(param_1->_padding_ + 0x68))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x29 ^ (this->field11_0x28).PackedFlags) & 0xfffffdffffffffff ^
       (ulonglong)bVar3 << 0x29;
  bVar3 = (**(code **)(param_1->_padding_ + 0x60))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x2a ^ (this->field11_0x28).PackedFlags) & 0xfffffbffffffffff ^
       (ulonglong)bVar3 << 0x2a;
  bVar3 = (**(code **)(param_1->_padding_ + 0x58))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x2b ^ (this->field11_0x28).PackedFlags) & 0xfffff7ffffffffff ^
       (ulonglong)bVar3 << 0x2b;
  bVar3 = (**(code **)(param_1->_padding_ + 0x170))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x2c ^ (this->field11_0x28).PackedFlags) & 0xffffefffffffffff ^
       (ulonglong)bVar3 << 0x2c;
  bVar3 = (**(code **)(param_1->_padding_ + 0x468))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x2d ^ (this->field11_0x28).PackedFlags) & 0xffffdfffffffffff ^
       (ulonglong)bVar3 << 0x2d;
  bVar3 = (**(code **)(param_1->_padding_ + 0x470))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x2e ^ (this->field11_0x28).PackedFlags) & 0xffffbfffffffffff ^
       (ulonglong)bVar3 << 0x2e;
  bVar3 = (**(code **)(param_1->_padding_ + 0x478))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x2f ^ (this->field11_0x28).PackedFlags) & 0xffff7fffffffffff ^
       (ulonglong)bVar3 << 0x2f;
  bVar3 = (**(code **)(param_1->_padding_ + 0x480))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x30 ^ (this->field11_0x28).PackedFlags) & 0xfffeffffffffffff ^
       (ulonglong)bVar3 << 0x30;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1d8))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x31 ^ (this->field11_0x28).PackedFlags) & 0xfffdffffffffffff ^
       (ulonglong)bVar3 << 0x31;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x32 ^ (this->field11_0x28).PackedFlags) & 0xfffbffffffffffff ^
       (ulonglong)bVar3 << 0x32;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1e8))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x33 ^ (this->field11_0x28).PackedFlags) & 0xfff7ffffffffffff ^
       (ulonglong)bVar3 << 0x33;
  bVar3 = (**(code **)(param_1->_padding_ + 0x188))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x34 ^ (this->field11_0x28).PackedFlags) & 0xffefffffffffffff ^
       (ulonglong)bVar3 << 0x34;
  bVar3 = (**(code **)(param_1->_padding_ + 400))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x35 ^ (this->field11_0x28).PackedFlags) & 0xffdfffffffffffff ^
       (ulonglong)bVar3 << 0x35;
  bVar3 = (**(code **)(param_1->_padding_ + 0x450))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x36 ^ (this->field11_0x28).PackedFlags) & 0xffbfffffffffffff ^
       (ulonglong)bVar3 << 0x36;
  iVar9 = (**(code **)(param_1->_padding_ + 0x290))(param_1);
  if ((iVar9 == 4) ||
     (iVar9 = (**(code **)(param_1->_padding_ + 0x290))(param_1), uVar14 = uVar16, iVar9 == 5)) {
    uVar14 = 0x80000000000000;
  }
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags & 0xff7fffffffffffff;
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags | uVar14;
  bVar3 = (**(code **)(param_1->_padding_ + 0x90))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x38 ^ (this->field11_0x28).PackedFlags) & 0xfeffffffffffffff ^
       (ulonglong)bVar3 << 0x38;
  bVar3 = (**(code **)(param_1->_padding_ + 0x4a0))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x39 ^ (this->field11_0x28).PackedFlags) & 0xfdffffffffffffff ^
       (ulonglong)bVar3 << 0x39;
  bVar3 = (**(code **)(param_1->_padding_ + 0x198))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x3a ^ (this->field11_0x28).PackedFlags) & 0xfbffffffffffffff ^
       (ulonglong)bVar3 << 0x3a;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x3b ^ (this->field11_0x28).PackedFlags) & 0xf7ffffffffffffff ^
       (ulonglong)bVar3 << 0x3b;
  bVar3 = (**(code **)(param_1->_padding_ + 0x328))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x3c ^ (this->field11_0x28).PackedFlags) & 0xefffffffffffffff ^
       (ulonglong)bVar3 << 0x3c;
  bVar3 = (**(code **)(param_1->_padding_ + 0x358))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x3d ^ (this->field11_0x28).PackedFlags) & 0xdfffffffffffffff ^
       (ulonglong)bVar3 << 0x3d;
  bVar3 = (**(code **)(param_1->_padding_ + 0x448))(param_1);
  (this->field11_0x28).PackedFlags =
       ((ulonglong)bVar3 << 0x3e ^ (this->field11_0x28).PackedFlags) & 0xbfffffffffffffff ^
       (ulonglong)bVar3 << 0x3e;
  bVar3 = (**(code **)(param_1->_padding_ + 0x4c0))(param_1);
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags & 0x7fffffffffffffff;
  (this->field11_0x28).PackedFlags = (this->field11_0x28).PackedFlags | (ulonglong)bVar3 << 0x3f;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1a8))(param_1);
  this->field_0x30 = this->field_0x30 ^ (this->bSamplesMaterialCache ^ bVar3) & 1;
  cVar5 = (**(code **)(param_1->_padding_ + 0x1b0))(param_1);
  this->field_0x30 = this->field_0x30 ^ (cVar5 * '\x02' ^ this->field_0x30) & 2U;
  bVar3 = (**(code **)(param_1->_padding_ + 0x1f0))(param_1);
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 & 0xfffe;
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 | (ushort)(bVar3 & 1);
  iVar9 = (**(code **)(param_1->_padding_ + 0x290))(param_1);
  if (iVar9 == 5) {
    uVar16 = 2;
  }
  (this->field2_0x6).PackedFlags16 = (ushort)uVar16 | (this->field2_0x6).PackedFlags16 & 0xfffd;
  bVar3 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 & 0xfffb;
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 | (ushort)(bVar3 & 1) << 2;
  bVar3 = (**(code **)(param_1->_padding_ + 0xc0))(param_1);
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 & 0xffef;
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 | (ushort)(bVar3 & 1) << 4;
  bVar3 = (**(code **)(param_1->_padding_ + 200))(param_1);
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 & 0xffdf;
  (this->field2_0x6).PackedFlags16 = (this->field2_0x6).PackedFlags16 | (ushort)(bVar3 & 1) << 5;
  return this;
}

