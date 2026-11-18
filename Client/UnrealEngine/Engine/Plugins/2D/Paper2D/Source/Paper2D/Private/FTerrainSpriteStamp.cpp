// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// FTerrainSpriteStamp @ 14acea100

FTerrainSpriteStamp * __thiscall
FTerrainSpriteStamp::FTerrainSpriteStamp
          (FTerrainSpriteStamp *this,UPaperSprite *param_1,float param_2,bool param_3)

{
  float fVar1;
  TVector2<double>_u_0 local_38;
  double local_28;
  
  this->Sprite = param_1;
  this->bCanStretch = !param_3;
  this->Time = param_2;
  this->Scale = 1.0;
  GetSpriteRenderDataBounds2D((TBox2<double> *)&local_38._s_0,&param_1->BakedRenderData);
  fVar1 = (float)(local_28 - local_38._s_0.X);
  if ((float)(local_28 - local_38._s_0.X) <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  this->NominalWidth = fVar1;
  return this;
}

