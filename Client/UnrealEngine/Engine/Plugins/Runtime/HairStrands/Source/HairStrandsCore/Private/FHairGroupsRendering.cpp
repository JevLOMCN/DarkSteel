// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df95650

UScriptStruct * __cdecl FHairGroupsRendering::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupsRendering.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupsRendering.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsRendering,(UObject *)pUVar1,
                         L"HairGroupsRendering");
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupsRendering.OuterSingleton;
}

// FHairGroupsRendering @ 14dfad1c0

FHairGroupsRendering * __thiscall
FHairGroupsRendering::FHairGroupsRendering(FHairGroupsRendering *this)

{
  undefined4 uVar1;
  uint uStack_14;
  
  uVar1 = __real_3f800000;
  (this->MaterialSlotName).ComparisonIndex = 0;
  (this->MaterialSlotName).Number = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  uStack_14 = uStack_14 & 0xffffff00;
  (this->GeometrySettings).HairWidth = 0.01;
  (this->GeometrySettings).HairWidth_Override = (bool)(char)uStack_14;
  *(int3 *)&(this->GeometrySettings).field_0x5 = (int3)(uStack_14 >> 8);
  (this->GeometrySettings).HairRootScale = 1.0;
  (this->GeometrySettings).HairTipScale = 1.0;
  (this->ShadowSettings).HairShadowDensity = (float)uVar1;
  (this->ShadowSettings).HairRaytracingRadiusScale = (float)uVar1;
  (this->ShadowSettings).bUseHairRaytracingGeometry = false;
  (this->ShadowSettings).bVoxelize = true;
  *(undefined2 *)&(this->ShadowSettings).field_0xa = 0x3f80;
  (this->AdvancedSettings).bUseStableRasterization = false;
  (this->AdvancedSettings).bScatterSceneLighting = false;
  return this;
}

// operator== @ 14dfb2180

bool __thiscall
FHairGroupsRendering::operator==(FHairGroupsRendering *this,FHairGroupsRendering *param_1)

{
  if (((((((param_1->GeometrySettings).HairWidth == (this->GeometrySettings).HairWidth) &&
         ((param_1->GeometrySettings).HairRootScale == (this->GeometrySettings).HairRootScale)) &&
        ((param_1->GeometrySettings).HairTipScale == (this->GeometrySettings).HairTipScale)) &&
       (((param_1->ShadowSettings).HairShadowDensity == (this->ShadowSettings).HairShadowDensity &&
        ((param_1->ShadowSettings).HairRaytracingRadiusScale ==
         (this->ShadowSettings).HairRaytracingRadiusScale)))) &&
      (((this->ShadowSettings).bUseHairRaytracingGeometry ==
        (param_1->ShadowSettings).bUseHairRaytracingGeometry &&
       (((this->ShadowSettings).bVoxelize == (param_1->ShadowSettings).bVoxelize &&
        ((this->AdvancedSettings).bUseStableRasterization ==
         (param_1->AdvancedSettings).bUseStableRasterization)))))) &&
     ((this->AdvancedSettings).bScatterSceneLighting ==
      (param_1->AdvancedSettings).bScatterSceneLighting)) {
    return true;
  }
  return false;
}

