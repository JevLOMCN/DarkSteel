// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ShouldCompileProgrammablePermutation @ 144fea620

bool __cdecl
FNaniteMaterialShader::ShouldCompileProgrammablePermutation
          (FMaterialShaderParameters *param_1,bool param_2,bool param_3,bool param_4)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = param_1->_padding_;
  if ((uVar1 & 1) == 0) {
    if (((uVar1 & 0x800004) == 0) || (((uVar1 >> 0x2f & 1) == 0 && ((int)param_1->_padding_ < 1))))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((param_4) || ((uVar1 >> 0x14 & 1) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((((((uVar1 >> 0x16 & 1) == 0) && (!bVar2)) && (!bVar3)) &&
         (((param_1->_padding_ & 2) == 0 && ((param_1->_padding_ & 0x4000000000000) == 0)))) &&
        (param_2)) || ((((uVar1 & 0x800004) == 0 && (param_3)) || ((!param_2 && (!param_3)))))) {
      return false;
    }
  }
  return true;
}

// ShouldCompileVertexPermutation @ 144fea720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FNaniteMaterialShader::ShouldCompileVertexPermutation(FMaterialShaderPermutationParameters *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  byte bVar3;
  
  uVar1 = (param_1->MaterialParameters)._padding_;
  bVar3 = (byte)(param_1->MaterialParameters)._padding_ & 1;
  if ((uVar1 >> 0x34 & 1) != 0) {
    if (((uVar1 & 0x800004) == 0) ||
       (((uVar1 >> 0x2f & 1) == 0 && ((int)(param_1->MaterialParameters)._padding_ < 1)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((((uVar1 >> 0x16 & 1) != 0) || (bVar2)) ||
        (((param_1->MaterialParameters)._padding_ & 2) != 0)) ||
       (((param_1->MaterialParameters)._padding_ & 0x4000000000000) != 0)) {
      bVar3 = 1;
    }
  }
  bVar2 = DoesPlatformSupportNanite((EShaderPlatform)param_1->_padding_,true);
  if (((bVar2) && ((int)(param_1->MaterialParameters)._padding_ == 0)) && (bVar3 != 0)) {
    return true;
  }
  return false;
}

