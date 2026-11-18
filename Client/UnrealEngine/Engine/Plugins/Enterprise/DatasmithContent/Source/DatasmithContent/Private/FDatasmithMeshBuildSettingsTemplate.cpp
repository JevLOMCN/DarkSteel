// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 5

// StaticStruct @ 14e2ebd50

UScriptStruct * __cdecl FDatasmithMeshBuildSettingsTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshBuildSettingsTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithMeshBuildSettingsTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate,
                         (UObject *)pUVar1,L"DatasmithMeshBuildSettingsTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithMeshBuildSettingsTemplate.OuterSingleton;
}

// FDatasmithMeshBuildSettingsTemplate @ 14e2f40a0

FDatasmithMeshBuildSettingsTemplate * __thiscall
FDatasmithMeshBuildSettingsTemplate::FDatasmithMeshBuildSettingsTemplate
          (FDatasmithMeshBuildSettingsTemplate *this)

{
  this->MinLightmapResolution = 0x40;
  this->SrcLightmapIndex = 0;
  this->DstLightmapIndex = 1;
  this->bUseMikkTSpace = '\x01';
  this->bGenerateLightmapUVs = '\x01';
  this->bUseFullPrecisionUVs = '\0';
  this->bUseHighPrecisionTangentBasis = '\0';
  this->bRemoveDegenerates = '\x01';
  this->bRecomputeTangents = '\x01';
  this->bRecomputeNormals = '\x01';
  return this;
}

// Apply @ 14e2f7e70

void __thiscall
FDatasmithMeshBuildSettingsTemplate::Apply
          (FDatasmithMeshBuildSettingsTemplate *this,FMeshBuildSettings *param_1,
          FDatasmithMeshBuildSettingsTemplate *param_2)

{
  byte bVar1;
  
  if ((param_2 == (FDatasmithMeshBuildSettingsTemplate *)0x0) ||
     (bVar1 = *(byte *)param_1,
     ((((byte *)param_1)->bUseMikkTSpace ^ param_2->bUseMikkTSpace) & 1) == 0)) {
    bVar1 = (param_1->bUseMikkTSpace ^ this->bUseMikkTSpace) & 1 ^ *(byte *)param_1;
    *(byte *)param_1 = bVar1;
  }
  if (param_2 == (FDatasmithMeshBuildSettingsTemplate *)0x0) {
    bVar1 = (*(byte *)this ^ bVar1) & 2 ^ bVar1;
    *(byte *)param_1 = bVar1;
    bVar1 = (*(byte *)this ^ bVar1) & 4 ^ bVar1;
    *(byte *)param_1 = bVar1;
LAB_14e2f7ee3:
    bVar1 = (*(char *)this * '\x02' ^ bVar1) & 0x10 ^ bVar1;
    *(byte *)param_1 = bVar1;
    if (param_2 != (FDatasmithMeshBuildSettingsTemplate *)0x0) goto LAB_14e2f7ef8;
LAB_14e2f7f05:
    bVar1 = (*(char *)this << 2 ^ bVar1) & 0x40 ^ bVar1;
    *(byte *)param_1 = bVar1;
    if (param_2 != (FDatasmithMeshBuildSettingsTemplate *)0x0) goto LAB_14e2f7f1d;
LAB_14e2f7f30:
    *(byte *)param_1 = (*(byte *)this & 0xe0) << 2 | bVar1 & 0x7f;
    if (param_2 != (FDatasmithMeshBuildSettingsTemplate *)0x0) goto LAB_14e2f7f46;
LAB_14e2f7f55:
    param_1->field_0x1 = param_1->field_0x1 ^ (*(byte *)this >> 5 ^ param_1->field_0x1) & 2;
    if (param_2 != (FDatasmithMeshBuildSettingsTemplate *)0x0) goto LAB_14e2f7f6c;
LAB_14e2f7f76:
    param_1->MinLightmapResolution = this->MinLightmapResolution;
    if (param_2 != (FDatasmithMeshBuildSettingsTemplate *)0x0) goto LAB_14e2f7f83;
LAB_14e2f7f8d:
    param_1->SrcLightmapIndex = this->SrcLightmapIndex;
    if (param_2 == (FDatasmithMeshBuildSettingsTemplate *)0x0) goto LAB_14e2f7fa4;
  }
  else {
    bVar1 = (*(byte *)this | *(byte *)param_2) & 2 ^ bVar1 & 0xfd;
    *(byte *)param_1 = bVar1;
    bVar1 = (*(byte *)this | *(byte *)param_2) & 4 ^ bVar1 & 0xfb;
    *(byte *)param_1 = bVar1;
    if (((bVar1 >> 1 ^ *(byte *)param_2) & 8) == 0) goto LAB_14e2f7ee3;
LAB_14e2f7ef8:
    if (((bVar1 >> 2 ^ *(byte *)param_2) & 0x10) == 0) goto LAB_14e2f7f05;
LAB_14e2f7f1d:
    if ((bVar1 >> 2 & 0x20) == (*(byte *)param_2 & 0x20)) goto LAB_14e2f7f30;
LAB_14e2f7f46:
    if (((*(byte *)param_2 >> 5 ^ param_1->field_0x1) & 2) == 0) goto LAB_14e2f7f55;
LAB_14e2f7f6c:
    if (param_1->MinLightmapResolution == param_2->MinLightmapResolution) goto LAB_14e2f7f76;
LAB_14e2f7f83:
    if (param_1->SrcLightmapIndex == param_2->SrcLightmapIndex) goto LAB_14e2f7f8d;
  }
  if (param_1->DstLightmapIndex != param_2->DstLightmapIndex) {
    return;
  }
LAB_14e2f7fa4:
  param_1->DstLightmapIndex = this->DstLightmapIndex;
  return;
}

// Equals @ 14e2f8d80

bool __thiscall
FDatasmithMeshBuildSettingsTemplate::Equals
          (FDatasmithMeshBuildSettingsTemplate *this,FDatasmithMeshBuildSettingsTemplate *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)this;
  uVar2 = *(undefined1 *)param_1;
  if ((((((((((undefined1 *)this)->bUseMikkTSpace ^ ((undefined1 *)param_1)->bUseMikkTSpace) & 1) ==
           0) && (((uVar1 ^ uVar2) & 2) == 0)) && (((uVar1 ^ uVar2) & 4) == 0)) &&
       ((((uVar1 ^ uVar2) & 8) == 0 && (((uVar1 ^ uVar2) & 0x10) == 0)))) &&
      ((((uVar1 ^ uVar2) & 0x20) == 0 &&
       ((((uVar1 ^ uVar2) & 0x40) == 0 &&
        (this->MinLightmapResolution == param_1->MinLightmapResolution)))))) &&
     ((this->SrcLightmapIndex == param_1->SrcLightmapIndex &&
      (this->DstLightmapIndex == param_1->DstLightmapIndex)))) {
    return true;
  }
  return false;
}

// Load @ 14e2fdcd0

void __thiscall
FDatasmithMeshBuildSettingsTemplate::Load
          (FDatasmithMeshBuildSettingsTemplate *this,FMeshBuildSettings *param_1)

{
  byte bVar1;
  
  bVar1 = (this->bUseMikkTSpace ^ param_1->bUseMikkTSpace) & 1 ^ *(byte *)this;
  *(byte *)this = bVar1;
  bVar1 = (bVar1 ^ *(byte *)param_1) & 2 ^ bVar1;
  *(byte *)this = bVar1;
  bVar1 = (bVar1 ^ *(byte *)param_1) & 4 ^ bVar1;
  *(byte *)this = bVar1;
  bVar1 = (*(byte *)param_1 >> 1 ^ bVar1) & 8 ^ bVar1;
  *(byte *)this = bVar1;
  bVar1 = (*(byte *)param_1 >> 2 ^ bVar1) & 0x10 ^ bVar1;
  *(byte *)this = bVar1;
  bVar1 = (*(byte *)param_1 >> 2 ^ bVar1) & 0x20 ^ bVar1;
  *(byte *)this = bVar1;
  *(byte *)this = (param_1->field_0x1 << 5 ^ bVar1) & 0x40 ^ bVar1;
  this->MinLightmapResolution = param_1->MinLightmapResolution;
  this->SrcLightmapIndex = param_1->SrcLightmapIndex;
  this->DstLightmapIndex = param_1->DstLightmapIndex;
  return;
}

