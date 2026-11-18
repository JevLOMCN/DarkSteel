// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// GetMaterialResource @ 145ef5340

FMaterialResource * __thiscall
UMaterialInterface::GetMaterialResource(UMaterialInterface *this,Type param_1,Type param_2)

{
  return (FMaterialResource *)0x0;
}

// GetMaterialResource @ 145ef5350

FMaterialResource * __thiscall
UMaterialInterface::GetMaterialResource(UMaterialInterface *this,Type param_1,Type param_2)

{
  return (FMaterialResource *)0x0;
}

// GetUsedTextures @ 145ef5e90

void __thiscall
UMaterialInterface::GetUsedTextures
          (UMaterialInterface *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          Type param_2,bool param_3,Type param_4,bool param_5)

{
  return;
}

// OverrideNumericParameterDefault @ 145ef5ec0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInterface::OverrideNumericParameterDefault
          (UMaterialInterface *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FValue *param_3,bool param_4,Type param_5)

{
  return;
}

// _getUObject @ 145ef6d60

UObject * __thiscall UMaterialInterface::_getUObject(UMaterialInterface *this)

{
  return (UObject *)&this[-1].CachedTexturesSamplingInfo;
}

// _getUObject`adjustor{8}' @ 145ef6d6c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMaterialInterface::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UMaterialInterface::_getUObject_adjustor_8__(UMaterialInterface *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMaterialInterface *)&this[-1].CachedExpressionData);
  return (UObject *)pUVar1;
}

