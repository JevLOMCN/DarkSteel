// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// StaticStruct @ 145ef6f80

UScriptStruct * __cdecl FLandscapeBrushParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeBrushParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeBrushParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeBrushParameters,(UObject *)pUVar1,
                         L"LandscapeBrushParameters");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeBrushParameters.OuterSingleton;
}

// FLandscapeBrushParameters @ 145f02750

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

FLandscapeBrushParameters * __thiscall
FLandscapeBrushParameters::FLandscapeBrushParameters
          (FLandscapeBrushParameters *this,bool param_1,TTransform<double> *param_2,
          TIntPoint<int> *param_3,UTextureRenderTarget2D *param_4,FName *param_5)

{
  double dVar1;
  ELandscapeToolTargetType EVar2;
  
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  (this->RenderAreaWorldTransform).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (this->RenderAreaWorldTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->RenderAreaWorldTransform).Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (this->RenderAreaWorldTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (this->RenderAreaWorldTransform).Translation.XY.m128d_f64[0] =
       (param_2->Translation).XY.m128d_f64[0];
  (this->RenderAreaWorldTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  (this->RenderAreaWorldTransform).Translation.ZW.m128d_f64[0] =
       (param_2->Translation).ZW.m128d_f64[0];
  (this->RenderAreaWorldTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->RenderAreaWorldTransform).Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (this->RenderAreaWorldTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->RenderAreaWorldTransform).Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (this->RenderAreaWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  (this->RenderAreaSize).field0_0x0 = param_3->field0_0x0;
  (this->CombinedResult).field0_0x0.DebugPtr = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  if (param_1) {
    EVar2 = Heightmap;
  }
  else {
    EVar2 = (*param_5 == UMaterialExpressionLandscapeVisibilityMask::ParameterName) + Weightmap;
  }
  this->LayerType = EVar2;
  this->WeightmapLayerName = *param_5;
  return this;
}

