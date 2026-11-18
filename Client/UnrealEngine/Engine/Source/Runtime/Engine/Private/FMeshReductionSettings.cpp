// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147f90a60

UScriptStruct * __cdecl FMeshReductionSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshReductionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMeshReductionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshReductionSettings,(UObject *)pUVar1,
                         L"MeshReductionSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMeshReductionSettings.OuterSingleton;
}

// FMeshReductionSettings @ 147fa48d0

FMeshReductionSettings * __thiscall
FMeshReductionSettings::FMeshReductionSettings(FMeshReductionSettings *this)

{
  undefined1 *puVar1;
  
  this->bRecalculateNormals = '\0';
  this->bCullOccluded = '\0';
  this->bVisibilityAided = '\0';
  this->bKeepSymmetry = '\0';
  this->bGenerateUniqueLightmapUVs = '\0';
  this->MaxDeviation = 0.0;
  (this->VertexColorImportance).Value = '\0';
  this->PercentTriangles = 1.0;
  this->MaxNumOfTriangles = 0xffffffff;
  this->PercentVertices = 1.0;
  this->MaxNumOfVerts = 0xffffffff;
  this->PixelError = 8.0;
  this->WeldingThreshold = 0.0;
  this->HardAngleThreshold = 80.0;
  this->BaseLODModel = 0;
  this->SilhouetteImportance = '\x03';
  this->TextureImportance = '\x03';
  (this->ShadingImportance).Value = '\x03';
  this->TerminationCriterion = Triangles;
  this->VisibilityAggressiveness = '\x01';
  return this;
}

// operator== @ 147fac210

bool __thiscall
FMeshReductionSettings::operator==(FMeshReductionSettings *this,FMeshReductionSettings *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (((((((this->TerminationCriterion == param_1->TerminationCriterion) &&
          (param_1->PercentVertices == this->PercentVertices)) &&
         (param_1->PercentTriangles == this->PercentTriangles)) &&
        ((this->MaxNumOfTriangles == param_1->MaxNumOfTriangles &&
         (this->MaxNumOfVerts == param_1->MaxNumOfVerts)))) &&
       ((param_1->MaxDeviation == this->MaxDeviation &&
        ((param_1->PixelError == this->PixelError &&
         (param_1->WeldingThreshold == this->WeldingThreshold)))))) &&
      (param_1->HardAngleThreshold == this->HardAngleThreshold)) &&
     ((((this->SilhouetteImportance).Value == (param_1->SilhouetteImportance).Value &&
       ((this->TextureImportance).Value == (param_1->TextureImportance).Value)) &&
      ((this->ShadingImportance).Value == (param_1->ShadingImportance).Value)))) {
    uVar1 = this->field_0x27;
    uVar2 = param_1->field_0x27;
    if ((((((this->bRecalculateNormals ^ param_1->bRecalculateNormals) & 1) == 0) &&
         (this->BaseLODModel == param_1->BaseLODModel)) &&
        ((((uVar2 ^ uVar1) & 2) == 0 &&
         ((((uVar2 ^ uVar1) & 4) == 0 && (((uVar2 ^ uVar1) & 8) == 0)))))) &&
       ((((uVar2 ^ uVar1) & 0x10) == 0 &&
        (((this->VisibilityAggressiveness).Value == (param_1->VisibilityAggressiveness).Value &&
         ((this->VertexColorImportance).Value == (param_1->VertexColorImportance).Value)))))) {
      return true;
    }
  }
  return false;
}

// operator!= @ 147fad110

bool __thiscall
FMeshReductionSettings::operator!=(FMeshReductionSettings *this,FMeshReductionSettings *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (((((((this->TerminationCriterion == param_1->TerminationCriterion) &&
          (param_1->PercentVertices == this->PercentVertices)) &&
         (param_1->PercentTriangles == this->PercentTriangles)) &&
        ((this->MaxNumOfTriangles == param_1->MaxNumOfTriangles &&
         (this->MaxNumOfVerts == param_1->MaxNumOfVerts)))) &&
       ((param_1->MaxDeviation == this->MaxDeviation &&
        ((param_1->PixelError == this->PixelError &&
         (param_1->WeldingThreshold == this->WeldingThreshold)))))) &&
      (param_1->HardAngleThreshold == this->HardAngleThreshold)) &&
     ((((this->SilhouetteImportance).Value == (param_1->SilhouetteImportance).Value &&
       ((this->TextureImportance).Value == (param_1->TextureImportance).Value)) &&
      ((this->ShadingImportance).Value == (param_1->ShadingImportance).Value)))) {
    uVar1 = this->field_0x27;
    uVar2 = param_1->field_0x27;
    if ((((((this->bRecalculateNormals ^ param_1->bRecalculateNormals) & 1) == 0) &&
         (this->BaseLODModel == param_1->BaseLODModel)) &&
        ((((uVar2 ^ uVar1) & 2) == 0 &&
         ((((uVar2 ^ uVar1) & 4) == 0 && (((uVar2 ^ uVar1) & 8) == 0)))))) &&
       ((((uVar2 ^ uVar1) & 0x10) == 0 &&
        (((this->VisibilityAggressiveness).Value == (param_1->VisibilityAggressiveness).Value &&
         ((this->VertexColorImportance).Value == (param_1->VertexColorImportance).Value)))))) {
      return false;
    }
  }
  return true;
}

