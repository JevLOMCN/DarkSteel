// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 10

// GetMaterialShaderMapUsage @ 145f92d90

Type __thiscall FMaterial::GetMaterialShaderMapUsage(FMaterial *this)

{
  return Default;
}

// GetMaterialTranslateValidationFlags @ 145f92da0

EMaterialTranslateValidationFlags __thiscall
FMaterial::GetMaterialTranslateValidationFlags(FMaterial *this)

{
  return None;
}

// GetShaderMapId @ 145f94460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterial::GetShaderMapId
          (FMaterial *this,EShaderPlatform param_1,ITargetPlatform *param_2,
          FMaterialShaderMapId *param_3)

{
  FMaterialShaderMapId *local_28;
  EShaderPlatform local_20;
  ITargetPlatform *local_18;
  undefined4 local_10;
  
  local_20 = GMaxRHIShaderPlatform;
  local_10 = 0xf;
  local_28 = param_3;
  local_18 = param_2;
  (**(code **)(this->_padding_ + 0x38))(this,&local_28);
  return;
}

// GetShaderMapUsage @ 145f944a0

Type __thiscall FMaterial::GetShaderMapUsage(FMaterial *this)

{
  return Default;
}

// GetShaderTags @ 145f944b0

void __thiscall
FMaterial::GetShaderTags(FMaterial *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// IsDualBlendingEnabled @ 145f97f40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FMaterial::IsDualBlendingEnabled(FMaterial *this,EShaderPlatform param_1)

{
  return false;
}

// IsPreview @ 145f97f60

bool __thiscall FMaterial::IsPreview(FMaterial *this)

{
  return false;
}

// IsUsedWithUI @ 145f981b0

bool __thiscall FMaterial::IsUsedWithUI(FMaterial *this)

{
  return false;
}

// SetupExtraCompilationSettings @ 145fa2430

void __thiscall
FMaterial::SetupExtraCompilationSettings(FMaterial *this,FExtraShaderCompilerSettings *param_1)

{
  return;
}

// SetupExtraCompilationSettings @ 145fa2440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterial::SetupExtraCompilationSettings
          (FMaterial *this,EShaderPlatform param_1,FExtraShaderCompilerSettings *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145fa2446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x520))(this,param_2);
  return;
}

