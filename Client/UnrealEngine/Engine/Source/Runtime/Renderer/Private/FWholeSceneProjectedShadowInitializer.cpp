// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 14560baf0

FWholeSceneProjectedShadowInitializer * __thiscall
FWholeSceneProjectedShadowInitializer::operator=
          (FWholeSceneProjectedShadowInitializer *this,
          FWholeSceneProjectedShadowInitializer *param_1)

{
  undefined8 uVar1;
  FWholeSceneProjectedShadowInitializer *pFVar2;
  FWholeSceneProjectedShadowInitializer *pFVar3;
  FWholeSceneProjectedShadowInitializer *pFVar4;
  longlong lVar5;
  FWholeSceneProjectedShadowInitializer *pFVar6;
  
  lVar5 = 2;
  pFVar2 = param_1;
  pFVar3 = this;
  do {
    pFVar6 = pFVar3;
    pFVar4 = pFVar2;
    uVar1 = *(undefined8 *)&pFVar4->field_0x8;
    *(undefined8 *)pFVar6 = *(undefined8 *)pFVar4;
    *(undefined8 *)&pFVar6->field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pFVar4->field_0x18;
    *(undefined8 *)&pFVar6->field_0x10 = *(undefined8 *)&pFVar4->field_0x10;
    *(undefined8 *)&pFVar6->field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&pFVar4->field_0x28;
    *(undefined8 *)&pFVar6->field_0x20 = *(undefined8 *)&pFVar4->field_0x20;
    *(undefined8 *)&pFVar6->field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&pFVar4->field_0x38;
    *(undefined8 *)&pFVar6->field_0x30 = *(undefined8 *)&pFVar4->field_0x30;
    *(undefined8 *)&pFVar6->field_0x38 = uVar1;
    uVar1 = *(undefined8 *)&pFVar4->field_0x48;
    *(undefined8 *)&pFVar6->field_0x40 = *(undefined8 *)&pFVar4->field_0x40;
    *(undefined8 *)&pFVar6->field_0x48 = uVar1;
    uVar1 = *(undefined8 *)&pFVar4->field_0x58;
    *(undefined8 *)&pFVar6->field_0x50 = *(undefined8 *)&pFVar4->field_0x50;
    *(undefined8 *)&pFVar6->field_0x58 = uVar1;
    uVar1 = *(undefined8 *)&pFVar4->field_0x68;
    *(undefined8 *)&pFVar6->field_0x60 = *(undefined8 *)&pFVar4->field_0x60;
    *(undefined8 *)&pFVar6->field_0x68 = uVar1;
    uVar1 = *(undefined8 *)&pFVar4->field_0x78;
    *(undefined8 *)&pFVar6->field_0x70 = *(undefined8 *)&pFVar4->field_0x70;
    *(undefined8 *)&pFVar6->field_0x78 = uVar1;
    lVar5 = lVar5 + -1;
    pFVar2 = (FWholeSceneProjectedShadowInitializer *)&pFVar4->field_0x80;
    pFVar3 = (FWholeSceneProjectedShadowInitializer *)&pFVar6->field_0x80;
  } while (lVar5 != 0);
  uVar1 = *(undefined8 *)&pFVar4->field_0x88;
  *(undefined8 *)&pFVar6->field_0x80 = *(undefined8 *)&pFVar4->field_0x80;
  *(undefined8 *)&pFVar6->field_0x88 = uVar1;
  uVar1 = *(undefined8 *)&pFVar4->field_0x98;
  *(undefined8 *)&pFVar6->field_0x90 = *(undefined8 *)&pFVar4->field_0x90;
  *(undefined8 *)&pFVar6->field_0x98 = uVar1;
  FShadowCascadeSettings::operator=(&this->CascadeSettings,&param_1->CascadeSettings);
  this->bOnePassPointLightShadow = param_1->bOnePassPointLightShadow;
  this->bRayTracedDistanceField = param_1->bRayTracedDistanceField;
  return this;
}

