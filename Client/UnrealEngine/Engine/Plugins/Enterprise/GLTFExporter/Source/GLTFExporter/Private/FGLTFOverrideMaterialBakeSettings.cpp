// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// StaticStruct @ 14e5b5400

UScriptStruct * __cdecl FGLTFOverrideMaterialBakeSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGLTFOverrideMaterialBakeSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UScriptStruct_FGLTFOverrideMaterialBakeSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings,
                         (UObject *)pUVar1,L"GLTFOverrideMaterialBakeSettings");
  }
  return Z_Registration_Info_UScriptStruct_FGLTFOverrideMaterialBakeSettings.OuterSingleton;
}

// FGLTFOverrideMaterialBakeSettings @ 14e5d2a50

FGLTFOverrideMaterialBakeSettings * __thiscall
FGLTFOverrideMaterialBakeSettings::FGLTFOverrideMaterialBakeSettings
          (FGLTFOverrideMaterialBakeSettings *this)

{
  int iVar1;
  undefined3 uVar2;
  
  this->bOverrideSize = false;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  (this->Size).X = FGLTFMaterialBakeSize::Default.X;
  (this->Size).Y = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  (this->Size).bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&(this->Size).field_0x9 = uVar2;
  this->bOverrideFilter = false;
  this->Filter = '\x02';
  this->bOverrideTiling = false;
  this->Tiling = '\0';
  return this;
}

