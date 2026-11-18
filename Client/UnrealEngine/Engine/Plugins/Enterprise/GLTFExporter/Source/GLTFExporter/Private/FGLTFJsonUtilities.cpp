// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 9

// GetValue @ 14e600340

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonAccessorType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Scalar:
    return L"SCALAR";
  case Vec2:
    return L"VEC2";
  case Vec3:
    return L"VEC3";
  case Vec4:
    return L"VEC4";
  case Mat2:
    return L"MAT2";
  case Mat3:
    return L"MAT3";
  case Mat4:
    return L"MAT4";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                     ,0x44,L"");
  if (!bVar2) {
    return L"";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// GetValue @ 14e600410

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonAlphaMode param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Opaque) {
    return L"OPAQUE";
  }
  if (param_1 == Mask) {
    return L"MASK";
  }
  if (param_1 == Blend) {
    return L"BLEND";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                     ,0x27,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"";
}

// GetValue @ 14e600480

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonCameraType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Orthographic) {
    return L"orthographic";
  }
  if (param_1 != Perspective) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L"perspective";
}

// GetValue @ 14e6004e0

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonExtension param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case KHR_LightsPunctual:
    return L"KHR_lights_punctual";
  case EXT_LightsIES:
    return L"EXT_lights_ies";
  case KHR_MaterialsClearCoat:
    return L"KHR_materials_clearcoat";
  case KHR_MaterialsEmissiveStrength:
    return L"KHR_materials_emissive_strength";
  case KHR_MaterialsUnlit:
    return L"KHR_materials_unlit";
  case KHR_MaterialsVariants:
    return L"KHR_materials_variants";
  case KHR_MaterialsIOR:
    return L"KHR_materials_ior";
  case KHR_MaterialsSheen:
    return L"KHR_materials_sheen";
  case KHR_MaterialsTransmission:
    return L"KHR_materials_transmission";
  case KHR_MaterialsSpecularGlossiness:
    return L"KHR_materials_pbrSpecularGlossiness";
  case KHR_MaterialsIridescence:
    return L"KHR_materials_iridescence";
  case KHR_MaterialsAnisotropy:
    return L"KHR_materials_anisotropy";
  case KHR_MeshQuantization:
    return L"KHR_mesh_quantization";
  case KHR_TextureTransform:
    return L"KHR_texture_transform";
  case KHR_MaterialsSpecular:
    return L"KHR_materials_specular";
  case EPIC_LightmapTextures:
    return L"EPIC_lightmap_textures";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                     ,0x1a,L"");
  if (!bVar2) {
    return L"";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// GetValue @ 14e600640

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonInterpolation param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Linear) {
    return L"LINEAR";
  }
  if (param_1 == Step) {
    return L"STEP";
  }
  if (param_1 == CubicSpline) {
    return L"CUBICSPLINE";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                     ,0x6a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"";
}

// GetValue @ 14e6006b0

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonLightType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Directional) {
    return L"directional";
  }
  if (param_1 == Point) {
    return L"point";
  }
  if (param_1 == Spot) {
    return L"spot";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                     ,0x5d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"";
}

// GetValue @ 14e600720

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonMimeType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == PNG) {
    return L"image/png";
  }
  if (param_1 != JPEG) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                       ,0x33,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L"image/jpeg";
}

// GetValue @ 14e600780

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonShadingModel param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Default:
    return L"Default";
  case Unlit:
    return L"Unlit";
  case ClearCoat:
    return L"ClearCoat";
  case Sheen:
    return L"Sheen";
  case Transmission:
    return L"Transmission";
  case SpecularGlossiness:
    return L"SpecularGlossiness";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                     ,0x88,L"");
  if (!bVar2) {
    return L"";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// GetValue @ 14e600840

wchar_t * __cdecl FGLTFJsonUtilities::GetValue(EGLTFJsonTargetPath param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Translation) {
    return L"translation";
  }
  if (param_1 == Rotation) {
    return L"rotation";
  }
  if (param_1 == Scale) {
    return L"scale";
  }
  if (param_1 != Weights) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                       ,0x78,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L"weights";
}

