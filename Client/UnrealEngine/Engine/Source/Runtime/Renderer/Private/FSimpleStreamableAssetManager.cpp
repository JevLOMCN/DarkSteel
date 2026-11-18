// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetStreamingScaleFactor<FPrimitiveSceneProxy> @ 1453f0890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl
FSimpleStreamableAssetManager::GetStreamingScaleFactor<FPrimitiveSceneProxy>
          (FPrimitiveSceneProxy *param_1,TMatrix<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  char cVar10;
  undefined1 auVar11 [16];
  double dVar12;
  
  cVar10 = (**(code **)(param_1->_padding_ + 0xa0))();
  if (cVar10 != '\0') {
    dVar1 = param_2->M[1][0];
    dVar12 = param_2->M[2][0];
    dVar2 = param_2->M[2][1];
    dVar3 = param_2->M[2][2];
    dVar4 = param_2->M[1][2];
    dVar5 = param_2->M[0][0];
    dVar6 = param_2->M[0][2];
    dVar7 = param_2->M[0][1];
    dVar8 = param_2->M[1][1];
    auVar11._0_8_ = dVar1 * dVar1;
    auVar11._8_8_ = 0;
    dVar4 = dVar8 * dVar8 + auVar11._0_8_ + dVar4 * dVar4;
    dVar12 = dVar2 * dVar2 + dVar12 * dVar12 + dVar3 * dVar3;
    dVar1 = dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6;
    if (dVar4 <= dVar12) {
      dVar4 = dVar12;
    }
    if (dVar4 <= dVar1) {
      dVar4 = dVar1;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar4;
    auVar11 = sqrtpd(auVar11,auVar9);
    return (float)auVar11._0_8_;
  }
  return (float)__real_3ff0000000000000;
}

