// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 982

// AnisotropyRotation'' @ 14141f780

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::AnisotropyRotation__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Anisotropy Rotation");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::AnisotropyRotation.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::AnisotropyRotation.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::AnisotropyRotation.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::AnisotropyRotation.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::AnisotropyRotation.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AnisotropyStrength'' @ 14141f800

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::AnisotropyStrength__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Anisotropy Strength");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::AnisotropyStrength.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::AnisotropyStrength.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::AnisotropyStrength.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::AnisotropyStrength.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::AnisotropyStrength.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AnisotropyTexture'' @ 14141f880

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::AnisotropyTexture__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Anisotropy");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::AnisotropyTexture,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// BaseColor'' @ 14141f8c0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::BaseColor__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Base Color");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::BaseColor,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// BaseColorFactor'' @ 14141f900

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::BaseColorFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Base Color Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::BaseColorFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::BaseColorFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::BaseColorFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::BaseColorFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::BaseColorFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Black'' @ 14141f980

void __cdecl `dynamic_initializer_for_'FGLTFJsonColor3::Black__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonColor3::Black__);
  return;
}

// Black'' @ 14141f9a0

void __cdecl `dynamic_initializer_for_'FGLTFJsonColor4::Black__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonColor4::Black__);
  return;
}

// ClearCoat'' @ 14141f9c0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::ClearCoat__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Clear Coat");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::ClearCoat,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearCoatFactor'' @ 14141fa00

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::ClearCoatFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Clear Coat Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::ClearCoatFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::ClearCoatFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::ClearCoatFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::ClearCoatFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::ClearCoatFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearCoatNormal'' @ 14141fa80

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::ClearCoatNormal__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Clear Coat Normal");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::ClearCoatNormal,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearCoatNormalScale'' @ 14141fac0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::ClearCoatNormalScale__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Clear Coat Normal Scale");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::ClearCoatNormalScale.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::ClearCoatNormalScale.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::ClearCoatNormalScale.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::ClearCoatNormalScale.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::ClearCoatNormalScale.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearCoatRoughness'' @ 14141fb40

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::ClearCoatRoughness__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Clear Coat Roughness");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::ClearCoatRoughness,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearCoatRoughnessFactor'' @ 14141fb80

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::ClearCoatRoughnessFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Clear Coat Roughness Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::ClearCoatRoughnessFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::ClearCoatRoughnessFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::ClearCoatRoughnessFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::ClearCoatRoughnessFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::ClearCoatRoughnessFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Emissive'' @ 14141fc00

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::Emissive__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Emissive");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::Emissive,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// EmissiveFactor'' @ 14141fc40

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::EmissiveFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Emissive Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::EmissiveFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::EmissiveFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::EmissiveFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::EmissiveFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::EmissiveFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// EmissiveStrength'' @ 14141fcc0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::EmissiveStrength__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Emissive Strength");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::EmissiveStrength.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::EmissiveStrength.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::EmissiveStrength.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::EmissiveStrength.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::EmissiveStrength.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IOR'' @ 14141fd40

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::IOR__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"IOR");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::IOR.ParameterInfo.Name.ComparisonIndex = (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::IOR.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::IOR.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::IOR.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::IOR.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Identity'' @ 14141fdc0

void __cdecl `dynamic_initializer_for_'FGLTFJsonMatrix2::Identity__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonMatrix2::Identity__);
  return;
}

// Identity'' @ 14141fde0

void __cdecl `dynamic_initializer_for_'FGLTFJsonMatrix3::Identity__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonMatrix3::Identity__);
  return;
}

// Identity'' @ 14141fe00

void __cdecl `dynamic_initializer_for_'FGLTFJsonMatrix4::Identity__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonMatrix4::Identity__);
  return;
}

// Identity'' @ 14141fe20

void __cdecl `dynamic_initializer_for_'FGLTFJsonTransform::Identity__(void)

{
  FGLTFJsonTransform::Identity.Translation._8_8_ = FGLTFJsonVector3::Zero._8_8_;
  FGLTFJsonTransform::Identity.Translation._16_4_ = FGLTFJsonVector3::Zero._16_4_;
  FGLTFJsonTransform::Identity.Rotation._8_16_ = FGLTFJsonQuaternion::Identity.field0_0x0;
  FGLTFJsonTransform::Identity.Scale._8_8_ = FGLTFJsonVector3::One._8_8_;
  FGLTFJsonTransform::Identity.Scale._16_4_ = FGLTFJsonVector3::One._16_4_;
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonTransform::Identity__);
  return;
}

// IridescenceFactor'' @ 14141fe80

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::IridescenceFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Iridescence Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::IridescenceFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::IridescenceFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::IridescenceFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::IridescenceFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::IridescenceFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IridescenceIOR'' @ 14141ff00

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::IridescenceIOR__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Iridescence IOR");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::IridescenceIOR.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::IridescenceIOR.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::IridescenceIOR.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::IridescenceIOR.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::IridescenceIOR.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IridescenceTexture'' @ 14141ff80

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::IridescenceTexture__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Iridescence");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::IridescenceTexture,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IridescenceThicknessMaximum'' @ 14141ffc0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::IridescenceThicknessMaximum__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"IridescenceThickness Maximum");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::IridescenceThicknessMaximum.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::IridescenceThicknessMaximum.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::IridescenceThicknessMaximum.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::IridescenceThicknessMaximum.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::IridescenceThicknessMaximum.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IridescenceThicknessMinimum'' @ 141420040

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::IridescenceThicknessMinimum__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"IridescenceThickness Minimum");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::IridescenceThicknessMinimum.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::IridescenceThicknessMinimum.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::IridescenceThicknessMinimum.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::IridescenceThicknessMinimum.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::IridescenceThicknessMinimum.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IridescenceThicknessTexture'' @ 1414200c0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::IridescenceThicknessTexture__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"IridescenceThickness");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::IridescenceThicknessTexture,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// MetallicFactor'' @ 141420100

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::MetallicFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Metallic Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::MetallicFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::MetallicFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::MetallicFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::MetallicFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::MetallicFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// MetallicRoughness'' @ 141420180

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::MetallicRoughness__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Metallic Roughness");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::MetallicRoughness,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Normal'' @ 1414201c0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::Normal__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Normal");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::Normal,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// NormalScale'' @ 141420200

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::NormalScale__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Normal Scale");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::NormalScale.ParameterInfo.Name.ComparisonIndex = (*pFVar1).ComparisonIndex
  ;
  FGLTFProxyMaterialInfo::NormalScale.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::NormalScale.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::NormalScale.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::NormalScale.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Occlusion'' @ 141420280

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::Occlusion__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Occlusion");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::Occlusion,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OcclusionStrength'' @ 1414202c0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::OcclusionStrength__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Occlusion Strength");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::OcclusionStrength.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::OcclusionStrength.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::OcclusionStrength.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::OcclusionStrength.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::OcclusionStrength.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// One'' @ 141420340

void __cdecl `dynamic_initializer_for_'FGLTFJsonVector2::One__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonVector2::One__);
  return;
}

// One'' @ 141420360

void __cdecl `dynamic_initializer_for_'FGLTFJsonVector3::One__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonVector3::One__);
  return;
}

// One'' @ 141420380

void __cdecl `dynamic_initializer_for_'FGLTFJsonVector4::One__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonVector4::One__);
  return;
}

// RoughnessFactor'' @ 1414203a0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::RoughnessFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Roughness Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::RoughnessFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::RoughnessFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::RoughnessFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::RoughnessFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::RoughnessFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ShaderTypeRegistration'' @ 141420420

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FGLTFSimpleElementNormalMapPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FGLTFSimpleElementNormalMapPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FGLTFSimpleElementNormalMapPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FGLTFSimpleElementNormalMapPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141420470

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FGLTFSimpleTexture2DPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FGLTFSimpleTexture2DPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FGLTFSimpleTexture2DPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FGLTFSimpleTexture2DPS::ShaderTypeRegistration__);
  return;
}

// SheenColorFactor'' @ 1414204c0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::SheenColorFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Sheen Color Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::SheenColorFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::SheenColorFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::SheenColorFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::SheenColorFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::SheenColorFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SheenColorTexture'' @ 141420540

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::SheenColorTexture__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Sheen Color");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::SheenColorTexture,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SheenRoughnessFactor'' @ 141420580

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::SheenRoughnessFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Sheen Roughness Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::SheenRoughnessFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::SheenRoughnessFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::SheenRoughnessFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::SheenRoughnessFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::SheenRoughnessFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SheenRoughnessTexture'' @ 141420600

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::SheenRoughnessTexture__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Sheen Roughness");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::SheenRoughnessTexture,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SpecularFactor'' @ 141420640

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::SpecularFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Specular Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::SpecularFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::SpecularFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::SpecularFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::SpecularFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::SpecularFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SpecularTexture'' @ 1414206c0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::SpecularTexture__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Specular");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::SpecularTexture,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticResource'' @ 141420700

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// TransmissionFactor'' @ 1414207c0

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::TransmissionFactor__(void)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,L"Transmission Factor");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  FGLTFProxyMaterialInfo::TransmissionFactor.ParameterInfo.Name.ComparisonIndex =
       (*pFVar1).ComparisonIndex;
  FGLTFProxyMaterialInfo::TransmissionFactor.ParameterInfo.Name.DisplayIndex.Value = 0;
  FGLTFProxyMaterialInfo::TransmissionFactor.ParameterInfo.Name.Number = (*pFVar1).Number;
  FGLTFProxyMaterialInfo::TransmissionFactor.ParameterInfo.Index = -1;
  FGLTFProxyMaterialInfo::TransmissionFactor.ParameterInfo.Association.Value = '\x02';
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// TransmissionTexture'' @ 141420840

void __cdecl `dynamic_initializer_for_'FGLTFProxyMaterialInfo::TransmissionTexture__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Transmission");
  FGLTFProxyMaterialTextureParameterInfo::FGLTFProxyMaterialTextureParameterInfo
            (&FGLTFProxyMaterialInfo::TransmissionTexture,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// White'' @ 141420880

void __cdecl `dynamic_initializer_for_'FGLTFJsonColor3::White__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonColor3::White__);
  return;
}

// White'' @ 1414208a0

void __cdecl `dynamic_initializer_for_'FGLTFJsonColor4::White__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonColor4::White__);
  return;
}

// Zero'' @ 1414208c0

void __cdecl `dynamic_initializer_for_'FGLTFJsonVector2::Zero__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonVector2::Zero__);
  return;
}

// Zero'' @ 1414208e0

void __cdecl `dynamic_initializer_for_'FGLTFJsonVector3::Zero__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonVector3::Zero__);
  return;
}

// Zero'' @ 141420900

void __cdecl `dynamic_initializer_for_'FGLTFJsonVector4::Zero__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGLTFJsonVector4::Zero__);
  return;
}

// `dynamic_initializer_for_'AlphaCutoff'' @ 141420920

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AlphaCutoff__(void)

{
  ::FString::FString(&AlphaCutoff,L"AlphaCutoff");
  atexit(_dynamic_atexit_destructor_for__AlphaCutoff__);
  return;
}

// `dynamic_initializer_for_'AlphaMode'' @ 141420950

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AlphaMode__(void)

{
  ::FString::FString(&AlphaMode,L"AlphaMode");
  atexit(_dynamic_atexit_destructor_for__AlphaMode__);
  return;
}

// `dynamic_initializer_for_'AnisotropyRotation'' @ 141420980

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyRotation__(void)

{
  ::FString::FString(&AnisotropyRotation,L"AnisotropyRotation");
  atexit(_dynamic_atexit_destructor_for__AnisotropyRotation__);
  return;
}

// `dynamic_initializer_for_'AnisotropyStrength'' @ 1414209b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyStrength__(void)

{
  ::FString::FString(&AnisotropyStrength,L"AnisotropyStrength");
  atexit(_dynamic_atexit_destructor_for__AnisotropyStrength__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture'' @ 1414209e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture__(void)

{
  ::FString::FString(&AnisotropyTexture,L"AnisotropyTexture");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_OffsetScale'' @ 141420a10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_OffsetScale__
          (void)

{
  ::FString::FString(&AnisotropyTexture_OffsetScale,L"AnisotropyTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Offset_X'' @ 141420a40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Offset_X__(void)

{
  ::FString::FString(&AnisotropyTexture_Offset_X,L"AnisotropyTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Offset_Y'' @ 141420a70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Offset_Y__(void)

{
  ::FString::FString(&AnisotropyTexture_Offset_Y,L"AnisotropyTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Rotation'' @ 141420aa0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Rotation__(void)

{
  ::FString::FString(&AnisotropyTexture_Rotation,L"AnisotropyTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Scale_X'' @ 141420ad0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Scale_X__(void)

{
  ::FString::FString(&AnisotropyTexture_Scale_X,L"AnisotropyTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_Scale_Y'' @ 141420b00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_Scale_Y__(void)

{
  ::FString::FString(&AnisotropyTexture_Scale_Y,L"AnisotropyTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_TexCoord'' @ 141420b30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_TexCoord__(void)

{
  ::FString::FString(&AnisotropyTexture_TexCoord,L"AnisotropyTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'AnisotropyTexture_TilingMethod'' @ 141420b60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__AnisotropyTexture_TilingMethod__
          (void)

{
  ::FString::FString(&AnisotropyTexture_TilingMethod,L"AnisotropyTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__AnisotropyTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'BaseColorFactor'' @ 141420b90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorFactor__(void)

{
  ::FString::FString(&BaseColorFactor,L"BaseColorFactor");
  atexit(_dynamic_atexit_destructor_for__BaseColorFactor__);
  return;
}

// `dynamic_initializer_for_'BaseColorFactor_A'' @ 141420bc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorFactor_A__(void)

{
  ::FString::ConcatFF(&BaseColorFactor_A,&BaseColorFactor,&PostFix::Color_A);
  atexit(_dynamic_atexit_destructor_for__BaseColorFactor_A__);
  return;
}

// `dynamic_initializer_for_'BaseColorFactor_RGB'' @ 141420c00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorFactor_RGB__(void)

{
  ::FString::ConcatFF(&BaseColorFactor_RGB,&BaseColorFactor,&PostFix::Color_RGB);
  atexit(_dynamic_atexit_destructor_for__BaseColorFactor_RGB__);
  return;
}

// `dynamic_initializer_for_'BaseColorInputMasks'' @ 141420c40

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__BaseColorInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLinearColor FVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FVar2.field0_0x0 = BaseColorMask.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&BaseColorInputMasks.AllocatorInstance,1,&BaseColorInputMasks.ArrayMax);
  FVar1 = BaseColorInputMasks.AllocatorInstance;
  local_28 = FVar2.field0_0x0._0_8_;
  uStack_20 = FVar2.field0_0x0._8_8_;
  *(undefined8 *)BaseColorInputMasks.AllocatorInstance.Data = local_28;
  *(undefined8 *)(FVar1.Data + 8) = uStack_20;
  atexit(_dynamic_atexit_destructor_for__BaseColorInputMasks__);
  return;
}

// `dynamic_initializer_for_'BaseColorMask'' @ 141420cb0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__BaseColorMask__(void)

{
  BaseColorMask = RgbMask;
  return;
}

// `dynamic_initializer_for_'BaseColorTexture'' @ 141420cd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture__(void)

{
  ::FString::FString(&BaseColorTexture,L"BaseColorTexture");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_OffsetScale'' @ 141420d00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_OffsetScale__
          (void)

{
  ::FString::FString(&BaseColorTexture_OffsetScale,L"BaseColorTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Offset_X'' @ 141420d30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Offset_X__(void)

{
  ::FString::FString(&BaseColorTexture_Offset_X,L"BaseColorTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Offset_Y'' @ 141420d60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Offset_Y__(void)

{
  ::FString::FString(&BaseColorTexture_Offset_Y,L"BaseColorTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Rotation'' @ 141420d90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Rotation__(void)

{
  ::FString::FString(&BaseColorTexture_Rotation,L"BaseColorTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Scale_X'' @ 141420dc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Scale_X__(void)

{
  ::FString::FString(&BaseColorTexture_Scale_X,L"BaseColorTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_Scale_Y'' @ 141420df0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_Scale_Y__(void)

{
  ::FString::FString(&BaseColorTexture_Scale_Y,L"BaseColorTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_TexCoord'' @ 141420e20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_TexCoord__(void)

{
  ::FString::FString(&BaseColorTexture_TexCoord,L"BaseColorTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'BaseColorTexture_TilingMethod'' @ 141420e50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__BaseColorTexture_TilingMethod__
          (void)

{
  ::FString::FString(&BaseColorTexture_TilingMethod,L"BaseColorTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__BaseColorTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'ClearCoatFactor'' @ 141420e80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatFactor__(void)

{
  ::FString::FString(&ClearCoatFactor,L"ClearCoatFactor");
  atexit(_dynamic_atexit_destructor_for__ClearCoatFactor__);
  return;
}

// `dynamic_initializer_for_'ClearCoatInputMasks'' @ 141420eb0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__ClearCoatInputMasks__(void)

{
  FLinearColor FVar1;
  ForAnyElementType FVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FVar1.field0_0x0 = ClearCoatMask.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&ClearCoatInputMasks.AllocatorInstance,1,&ClearCoatInputMasks.ArrayMax);
  FVar2 = ClearCoatInputMasks.AllocatorInstance;
  local_28 = FVar1.field0_0x0._0_8_;
  uStack_20 = FVar1.field0_0x0._8_8_;
  *(undefined8 *)ClearCoatInputMasks.AllocatorInstance.Data = local_28;
  *(undefined8 *)(FVar2.Data + 8) = uStack_20;
  atexit(_dynamic_atexit_destructor_for__ClearCoatInputMasks__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalScale'' @ 141420f20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalScale__(void)

{
  ::FString::FString(&ClearCoatNormalScale,L"ClearCoatNormalScale");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalScale__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture'' @ 141420f50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture__(void)

{
  ::FString::FString(&ClearCoatNormalTexture,L"ClearCoatNormalTexture");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_OffsetScale'' @ 141420f80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatNormalTexture_OffsetScale__(void)

{
  ::FString::FString(&ClearCoatNormalTexture_OffsetScale,L"ClearCoatNormalTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Offset_X'' @ 141420fb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Offset_X__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Offset_X,L"ClearCoatNormalTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Offset_Y'' @ 141420fe0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Offset_Y__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Offset_Y,L"ClearCoatNormalTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Rotation'' @ 141421010

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Rotation__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Rotation,L"ClearCoatNormalTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Scale_X'' @ 141421040

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Scale_X__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Scale_X,L"ClearCoatNormalTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_Scale_Y'' @ 141421070

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_Scale_Y__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_Scale_Y,L"ClearCoatNormalTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_TexCoord'' @ 1414210a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatNormalTexture_TexCoord__
          (void)

{
  ::FString::FString(&ClearCoatNormalTexture_TexCoord,L"ClearCoatNormalTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'ClearCoatNormalTexture_TilingMethod'' @ 1414210d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatNormalTexture_TilingMethod__(void)

{
  ::FString::FString(&ClearCoatNormalTexture_TilingMethod,L"ClearCoatNormalTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__ClearCoatNormalTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessFactor'' @ 141421100

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatRoughnessFactor__(void)

{
  ::FString::FString(&ClearCoatRoughnessFactor,L"ClearCoatRoughnessFactor");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessFactor__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessInputMasks'' @ 141421130

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__ClearCoatRoughnessInputMasks__(void)

{
  FLinearColor FVar1;
  ForAnyElementType FVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FVar1.field0_0x0 = ClearCoatRoughnessMask.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&ClearCoatRoughnessInputMasks.AllocatorInstance,1,
             &ClearCoatRoughnessInputMasks.ArrayMax);
  FVar2 = ClearCoatRoughnessInputMasks.AllocatorInstance;
  local_28 = FVar1.field0_0x0._0_8_;
  uStack_20 = FVar1.field0_0x0._8_8_;
  *(undefined8 *)ClearCoatRoughnessInputMasks.AllocatorInstance.Data = local_28;
  *(undefined8 *)(FVar2.Data + 8) = uStack_20;
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessInputMasks__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture'' @ 1414211a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatRoughnessTexture__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture,L"ClearCoatRoughnessTexture");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_OffsetScale'' @ 1414211d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_OffsetScale__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_OffsetScale,L"ClearCoatRoughnessTexture_OffsetScale"
                    );
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Offset_X'' @ 141421200

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Offset_X__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Offset_X,L"ClearCoatRoughnessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Offset_Y'' @ 141421230

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Offset_Y__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Offset_Y,L"ClearCoatRoughnessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Rotation'' @ 141421260

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Rotation__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Rotation,L"ClearCoatRoughnessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Scale_X'' @ 141421290

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Scale_X__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Scale_X,L"ClearCoatRoughnessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_Scale_Y'' @ 1414212c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_Scale_Y__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_Scale_Y,L"ClearCoatRoughnessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_TexCoord'' @ 1414212f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_TexCoord__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_TexCoord,L"ClearCoatRoughnessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'ClearCoatRoughnessTexture_TilingMethod'' @ 141421320

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__ClearCoatRoughnessTexture_TilingMethod__(void)

{
  ::FString::FString(&ClearCoatRoughnessTexture_TilingMethod,
                     L"ClearCoatRoughnessTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture'' @ 141421350

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture__(void)

{
  ::FString::FString(&ClearCoatTexture,L"ClearCoatTexture");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_OffsetScale'' @ 141421380

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_OffsetScale__
          (void)

{
  ::FString::FString(&ClearCoatTexture_OffsetScale,L"ClearCoatTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Offset_X'' @ 1414213b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Offset_X__(void)

{
  ::FString::FString(&ClearCoatTexture_Offset_X,L"ClearCoatTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Offset_Y'' @ 1414213e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Offset_Y__(void)

{
  ::FString::FString(&ClearCoatTexture_Offset_Y,L"ClearCoatTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Rotation'' @ 141421410

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Rotation__(void)

{
  ::FString::FString(&ClearCoatTexture_Rotation,L"ClearCoatTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Scale_X'' @ 141421440

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Scale_X__(void)

{
  ::FString::FString(&ClearCoatTexture_Scale_X,L"ClearCoatTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_Scale_Y'' @ 141421470

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_Scale_Y__(void)

{
  ::FString::FString(&ClearCoatTexture_Scale_Y,L"ClearCoatTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_TexCoord'' @ 1414214a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_TexCoord__(void)

{
  ::FString::FString(&ClearCoatTexture_TexCoord,L"ClearCoatTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'ClearCoatTexture_TilingMethod'' @ 1414214d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__ClearCoatTexture_TilingMethod__
          (void)

{
  ::FString::FString(&ClearCoatTexture_TilingMethod,L"ClearCoatTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__ClearCoatTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'Color_A'' @ 141421500

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__Color_A__(void)

{
  ::FString::FString(&Color_A,L"_A");
  atexit(_dynamic_atexit_destructor_for__Color_A__);
  return;
}

// `dynamic_initializer_for_'Color_RGB'' @ 141421530

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__Color_RGB__(void)

{
  ::FString::FString(&Color_RGB,L"_RGB");
  atexit(_dynamic_atexit_destructor_for__Color_RGB__);
  return;
}

// `dynamic_initializer_for_'DefaultColorInputMasks'' @ 141421560

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__DefaultColorInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLinearColor FVar2;
  FLinearColor FVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FVar3.field0_0x0 = RgbaMask.field0_0x0;
  FVar2.field0_0x0 = RgbMask.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&DefaultColorInputMasks.AllocatorInstance,2,&DefaultColorInputMasks.ArrayMax
            );
  FVar1 = DefaultColorInputMasks.AllocatorInstance;
  local_48 = FVar2.field0_0x0._0_8_;
  uStack_40 = FVar2.field0_0x0._8_8_;
  *(undefined8 *)DefaultColorInputMasks.AllocatorInstance.Data = local_48;
  *(undefined8 *)(FVar1.Data + 8) = uStack_40;
  local_38 = FVar3.field0_0x0._0_8_;
  uStack_30 = FVar3.field0_0x0._8_8_;
  *(undefined8 *)(FVar1.Data + 0x10) = local_38;
  *(undefined8 *)(FVar1.Data + 0x18) = uStack_30;
  atexit(_dynamic_atexit_destructor_for__DefaultColorInputMasks__);
  return;
}

// `dynamic_initializer_for_'DiffuseFactor'' @ 1414215f0

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseFactor__(void)

{
  ::FString::FString(&DiffuseFactor,L"DiffuseFactor");
  atexit(_dynamic_atexit_destructor_for__DiffuseFactor__);
  return;
}

// `dynamic_initializer_for_'DiffuseFactor_A'' @ 141421620

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseFactor_A__(void)

{
  ::FString::ConcatFF(&DiffuseFactor_A,&DiffuseFactor,&PostFix::Color_A);
  atexit(_dynamic_atexit_destructor_for__DiffuseFactor_A__);
  return;
}

// `dynamic_initializer_for_'DiffuseFactor_RGB'' @ 141421660

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseFactor_RGB__(void)

{
  ::FString::ConcatFF(&DiffuseFactor_RGB,&DiffuseFactor,&PostFix::Color_RGB);
  atexit(_dynamic_atexit_destructor_for__DiffuseFactor_RGB__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture'' @ 1414216a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture__(void)

{
  ::FString::FString(&DiffuseTexture,L"DiffuseTexture");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_OffsetScale'' @ 1414216d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_OffsetScale__(void)

{
  ::FString::FString(&DiffuseTexture_OffsetScale,L"DiffuseTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Offset_X'' @ 141421700

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Offset_X__(void)

{
  ::FString::FString(&DiffuseTexture_Offset_X,L"DiffuseTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Offset_Y'' @ 141421730

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Offset_Y__(void)

{
  ::FString::FString(&DiffuseTexture_Offset_Y,L"DiffuseTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Rotation'' @ 141421760

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Rotation__(void)

{
  ::FString::FString(&DiffuseTexture_Rotation,L"DiffuseTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Scale_X'' @ 141421790

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Scale_X__(void)

{
  ::FString::FString(&DiffuseTexture_Scale_X,L"DiffuseTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_Scale_Y'' @ 1414217c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_Scale_Y__(void)

{
  ::FString::FString(&DiffuseTexture_Scale_Y,L"DiffuseTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_TexCoord'' @ 1414217f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_TexCoord__(void)

{
  ::FString::FString(&DiffuseTexture_TexCoord,L"DiffuseTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'DiffuseTexture_TilingMethod'' @ 141421820

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__DiffuseTexture_TilingMethod__
          (void)

{
  ::FString::FString(&DiffuseTexture_TilingMethod,L"DiffuseTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__DiffuseTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'EmissiveFactor'' @ 141421850

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveFactor__(void)

{
  ::FString::FString(&EmissiveFactor,L"EmissiveFactor");
  atexit(_dynamic_atexit_destructor_for__EmissiveFactor__);
  return;
}

// `dynamic_initializer_for_'EmissiveStrength'' @ 141421880

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveStrength__(void)

{
  ::FString::FString(&EmissiveStrength,L"EmissiveStrength");
  atexit(_dynamic_atexit_destructor_for__EmissiveStrength__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture'' @ 1414218b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture__(void)

{
  ::FString::FString(&EmissiveTexture,L"EmissiveTexture");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_OffsetScale'' @ 1414218e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_OffsetScale__
          (void)

{
  ::FString::FString(&EmissiveTexture_OffsetScale,L"EmissiveTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Offset_X'' @ 141421910

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Offset_X__(void)

{
  ::FString::FString(&EmissiveTexture_Offset_X,L"EmissiveTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Offset_Y'' @ 141421940

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Offset_Y__(void)

{
  ::FString::FString(&EmissiveTexture_Offset_Y,L"EmissiveTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Rotation'' @ 141421970

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Rotation__(void)

{
  ::FString::FString(&EmissiveTexture_Rotation,L"EmissiveTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Scale_X'' @ 1414219a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Scale_X__(void)

{
  ::FString::FString(&EmissiveTexture_Scale_X,L"EmissiveTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_Scale_Y'' @ 1414219d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_Scale_Y__(void)

{
  ::FString::FString(&EmissiveTexture_Scale_Y,L"EmissiveTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_TexCoord'' @ 141421a00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_TexCoord__(void)

{
  ::FString::FString(&EmissiveTexture_TexCoord,L"EmissiveTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'EmissiveTexture_TilingMethod'' @ 141421a30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__EmissiveTexture_TilingMethod__
          (void)

{
  ::FString::FString(&EmissiveTexture_TilingMethod,L"EmissiveTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__EmissiveTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'GlossinessFactor'' @ 141421a60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__GlossinessFactor__(void)

{
  ::FString::FString(&GlossinessFactor,L"GlossinessFactor");
  atexit(_dynamic_atexit_destructor_for__GlossinessFactor__);
  return;
}

// `dynamic_initializer_for_'IOR'' @ 141421a90

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IOR__(void)

{
  ::FString::FString(&IOR,L"IOR");
  atexit(_dynamic_atexit_destructor_for__IOR__);
  return;
}

// `dynamic_initializer_for_'IridescenceFactor'' @ 141421ac0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceFactor__(void)

{
  ::FString::FString(&IridescenceFactor,L"IridescenceFactor");
  atexit(_dynamic_atexit_destructor_for__IridescenceFactor__);
  return;
}

// `dynamic_initializer_for_'IridescenceIOR'' @ 141421af0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceIOR__(void)

{
  ::FString::FString(&IridescenceIOR,L"IridescenceIOR");
  atexit(_dynamic_atexit_destructor_for__IridescenceIOR__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture'' @ 141421b20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture__(void)

{
  ::FString::FString(&IridescenceTexture,L"IridescenceTexture");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_OffsetScale'' @ 141421b50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_OffsetScale__
          (void)

{
  ::FString::FString(&IridescenceTexture_OffsetScale,L"IridescenceTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Offset_X'' @ 141421b80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Offset_X__
          (void)

{
  ::FString::FString(&IridescenceTexture_Offset_X,L"IridescenceTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Offset_Y'' @ 141421bb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Offset_Y__
          (void)

{
  ::FString::FString(&IridescenceTexture_Offset_Y,L"IridescenceTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Rotation'' @ 141421be0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Rotation__
          (void)

{
  ::FString::FString(&IridescenceTexture_Rotation,L"IridescenceTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Scale_X'' @ 141421c10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Scale_X__(void)

{
  ::FString::FString(&IridescenceTexture_Scale_X,L"IridescenceTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_Scale_Y'' @ 141421c40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_Scale_Y__(void)

{
  ::FString::FString(&IridescenceTexture_Scale_Y,L"IridescenceTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_TexCoord'' @ 141421c70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_TexCoord__
          (void)

{
  ::FString::FString(&IridescenceTexture_TexCoord,L"IridescenceTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'IridescenceTexture_TilingMethod'' @ 141421ca0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceTexture_TilingMethod__
          (void)

{
  ::FString::FString(&IridescenceTexture_TilingMethod,L"IridescenceTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__IridescenceTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessMaximum'' @ 141421cd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceThicknessMaximum__
          (void)

{
  ::FString::FString(&IridescenceThicknessMaximum,L"IridescenceThicknessMaximum");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessMaximum__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessMinimum'' @ 141421d00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceThicknessMinimum__
          (void)

{
  ::FString::FString(&IridescenceThicknessMinimum,L"IridescenceThicknessMinimum");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessMinimum__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture'' @ 141421d30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__IridescenceThicknessTexture__
          (void)

{
  ::FString::FString(&IridescenceThicknessTexture,L"IridescenceThicknessTexture");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_OffsetScale'' @ 141421d60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_OffsetScale__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_OffsetScale,
                     L"IridescenceThicknessTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Offset_X'' @ 141421d90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Offset_X__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Offset_X,L"IridescenceThicknessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Offset_Y'' @ 141421dc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Offset_Y__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Offset_Y,L"IridescenceThicknessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Rotation'' @ 141421df0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Rotation__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Rotation,L"IridescenceThicknessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Scale_X'' @ 141421e20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Scale_X__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Scale_X,L"IridescenceThicknessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_Scale_Y'' @ 141421e50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_Scale_Y__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_Scale_Y,L"IridescenceThicknessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_TexCoord'' @ 141421e80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_TexCoord__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_TexCoord,L"IridescenceThicknessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'IridescenceThicknessTexture_TilingMethod'' @ 141421eb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__IridescenceThicknessTexture_TilingMethod__(void)

{
  ::FString::FString(&IridescenceThicknessTexture_TilingMethod,
                     L"IridescenceThicknessTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__IridescenceThicknessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'LogGLTFExporter'' @ 141421ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGLTFExporter__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGLTFExporter,L"LogGLTFExporter",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGLTFExporter__);
  return;
}

// `dynamic_initializer_for_'MetallicFactor'' @ 141421f20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__MetallicFactor__(void)

{
  ::FString::FString(&MetallicFactor,L"MetallicFactor");
  atexit(_dynamic_atexit_destructor_for__MetallicFactor__);
  return;
}

// `dynamic_initializer_for_'MetallicInputMasks'' @ 141421f50

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__MetallicInputMasks__(void)

{
  FLinearColor FVar1;
  ForAnyElementType FVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FVar1.field0_0x0 = MetallicMask.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&MetallicInputMasks.AllocatorInstance,1,&MetallicInputMasks.ArrayMax);
  FVar2 = MetallicInputMasks.AllocatorInstance;
  local_28 = FVar1.field0_0x0._0_8_;
  uStack_20 = FVar1.field0_0x0._8_8_;
  *(undefined8 *)MetallicInputMasks.AllocatorInstance.Data = local_28;
  *(undefined8 *)(FVar2.Data + 8) = uStack_20;
  atexit(_dynamic_atexit_destructor_for__MetallicInputMasks__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture'' @ 141421fc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__MetallicRoughnessTexture__(void)

{
  ::FString::FString(&MetallicRoughnessTexture,L"MetallicRoughnessTexture");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_OffsetScale'' @ 141421ff0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_OffsetScale__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_OffsetScale,L"MetallicRoughnessTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Offset_X'' @ 141422020

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_Offset_X__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_Offset_X,L"MetallicRoughnessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Offset_Y'' @ 141422050

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_Offset_Y__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_Offset_Y,L"MetallicRoughnessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Rotation'' @ 141422080

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_Rotation__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_Rotation,L"MetallicRoughnessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Scale_X'' @ 1414220b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__MetallicRoughnessTexture_Scale_X__
          (void)

{
  ::FString::FString(&MetallicRoughnessTexture_Scale_X,L"MetallicRoughnessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_Scale_Y'' @ 1414220e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__MetallicRoughnessTexture_Scale_Y__
          (void)

{
  ::FString::FString(&MetallicRoughnessTexture_Scale_Y,L"MetallicRoughnessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_TexCoord'' @ 141422110

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_TexCoord__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_TexCoord,L"MetallicRoughnessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'MetallicRoughnessTexture_TilingMethod'' @ 141422140

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__MetallicRoughnessTexture_TilingMethod__(void)

{
  ::FString::FString(&MetallicRoughnessTexture_TilingMethod,L"MetallicRoughnessTexture_TilingMethod"
                    );
  atexit(_dynamic_atexit_destructor_for__MetallicRoughnessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141422170

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGLTFExporter'' @ 141422190

void __cdecl _dynamic_initializer_for__ModuleRegistrantGLTFExporter__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GLTFExporter";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GLTFExporter",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGLTFExporterModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NormalScale'' @ 1414221e0

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalScale__(void)

{
  ::FString::FString(&NormalScale,L"NormalScale");
  atexit(_dynamic_atexit_destructor_for__NormalScale__);
  return;
}

// `dynamic_initializer_for_'NormalTexture'' @ 141422210

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture__(void)

{
  ::FString::FString(&NormalTexture,L"NormalTexture");
  atexit(_dynamic_atexit_destructor_for__NormalTexture__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_OffsetScale'' @ 141422240

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_OffsetScale__(void)

{
  ::FString::FString(&NormalTexture_OffsetScale,L"NormalTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Offset_X'' @ 141422270

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Offset_X__(void)

{
  ::FString::FString(&NormalTexture_Offset_X,L"NormalTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Offset_Y'' @ 1414222a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Offset_Y__(void)

{
  ::FString::FString(&NormalTexture_Offset_Y,L"NormalTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Rotation'' @ 1414222d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Rotation__(void)

{
  ::FString::FString(&NormalTexture_Rotation,L"NormalTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Scale_X'' @ 141422300

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Scale_X__(void)

{
  ::FString::FString(&NormalTexture_Scale_X,L"NormalTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_Scale_Y'' @ 141422330

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_Scale_Y__(void)

{
  ::FString::FString(&NormalTexture_Scale_Y,L"NormalTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_TexCoord'' @ 141422360

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_TexCoord__(void)

{
  ::FString::FString(&NormalTexture_TexCoord,L"NormalTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'NormalTexture_TilingMethod'' @ 141422390

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__NormalTexture_TilingMethod__(void)

{
  ::FString::FString(&NormalTexture_TilingMethod,L"NormalTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__NormalTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'OcclusionInputMasks'' @ 1414223c0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__OcclusionInputMasks__(void)

{
  FLinearColor FVar1;
  ForAnyElementType FVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FVar1.field0_0x0 = OcclusionMask.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&OcclusionInputMasks.AllocatorInstance,1,&OcclusionInputMasks.ArrayMax);
  FVar2 = OcclusionInputMasks.AllocatorInstance;
  local_28 = FVar1.field0_0x0._0_8_;
  uStack_20 = FVar1.field0_0x0._8_8_;
  *(undefined8 *)OcclusionInputMasks.AllocatorInstance.Data = local_28;
  *(undefined8 *)(FVar2.Data + 8) = uStack_20;
  atexit(_dynamic_atexit_destructor_for__OcclusionInputMasks__);
  return;
}

// `dynamic_initializer_for_'OcclusionStrength'' @ 141422430

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionStrength__(void)

{
  ::FString::FString(&OcclusionStrength,L"OcclusionStrength");
  atexit(_dynamic_atexit_destructor_for__OcclusionStrength__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture'' @ 141422460

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture__(void)

{
  ::FString::FString(&OcclusionTexture,L"OcclusionTexture");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_OffsetScale'' @ 141422490

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_OffsetScale__
          (void)

{
  ::FString::FString(&OcclusionTexture_OffsetScale,L"OcclusionTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Offset_X'' @ 1414224c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Offset_X__(void)

{
  ::FString::FString(&OcclusionTexture_Offset_X,L"OcclusionTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Offset_Y'' @ 1414224f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Offset_Y__(void)

{
  ::FString::FString(&OcclusionTexture_Offset_Y,L"OcclusionTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Rotation'' @ 141422520

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Rotation__(void)

{
  ::FString::FString(&OcclusionTexture_Rotation,L"OcclusionTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Scale_X'' @ 141422550

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Scale_X__(void)

{
  ::FString::FString(&OcclusionTexture_Scale_X,L"OcclusionTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_Scale_Y'' @ 141422580

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_Scale_Y__(void)

{
  ::FString::FString(&OcclusionTexture_Scale_Y,L"OcclusionTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_TexCoord'' @ 1414225b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_TexCoord__(void)

{
  ::FString::FString(&OcclusionTexture_TexCoord,L"OcclusionTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'OcclusionTexture_TilingMethod'' @ 1414225e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__OcclusionTexture_TilingMethod__
          (void)

{
  ::FString::FString(&OcclusionTexture_TilingMethod,L"OcclusionTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__OcclusionTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'OffsetScale'' @ 141422610

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__OffsetScale__(void)

{
  ::FString::FString(&OffsetScale,L"_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__OffsetScale__);
  return;
}

// `dynamic_initializer_for_'OffsetX'' @ 141422640

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__OffsetX__(void)

{
  ::FString::FString(&OffsetX,L"_Offset_X");
  atexit(_dynamic_atexit_destructor_for__OffsetX__);
  return;
}

// `dynamic_initializer_for_'OffsetY'' @ 141422670

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__OffsetY__(void)

{
  ::FString::FString(&OffsetY,L"_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__OffsetY__);
  return;
}

// `dynamic_initializer_for_'OpacityInputMasks'' @ 1414226a0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__OpacityInputMasks__(void)

{
  FLinearColor FVar1;
  ForAnyElementType FVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FVar1.field0_0x0 = ::OpacityMask.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&OpacityInputMasks.AllocatorInstance,1,&OpacityInputMasks.ArrayMax);
  FVar2 = OpacityInputMasks.AllocatorInstance;
  local_28 = FVar1.field0_0x0._0_8_;
  uStack_20 = FVar1.field0_0x0._8_8_;
  *(undefined8 *)OpacityInputMasks.AllocatorInstance.Data = local_28;
  *(undefined8 *)(FVar2.Data + 8) = uStack_20;
  atexit(_dynamic_atexit_destructor_for__OpacityInputMasks__);
  return;
}

// `dynamic_initializer_for_'RgbMask'' @ 141422710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__RgbMask__(void)

{
  RgbMask.field0_0x0 = (FLinearColor_u_0)(FLinearColor_u_0)___xmm_000000003f8000003f8000003f800000;
  return;
}

// `dynamic_initializer_for_'RgbaMask'' @ 141422730

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__RgbaMask__(void)

{
  RgbaMask.field0_0x0._s_0.G = RgbMask.field0_0x0._s_0.G;
  RgbaMask.field0_0x0._s_0.R = RgbMask.field0_0x0._s_0.R;
  RgbaMask.field0_0x0._s_0.B = RgbMask.field0_0x0._s_0.B;
  RgbaMask.field0_0x0._s_0.A = RgbMask.field0_0x0._s_0.A + __real_3f800000;
  return;
}

// `dynamic_initializer_for_'Rotation'' @ 141422780

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__Rotation__(void)

{
  ::FString::FString(&Rotation,L"_Rotation");
  atexit(_dynamic_atexit_destructor_for__Rotation__);
  return;
}

// `dynamic_initializer_for_'RoughnessFactor'' @ 1414227b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__RoughnessFactor__(void)

{
  ::FString::FString(&RoughnessFactor,L"RoughnessFactor");
  atexit(_dynamic_atexit_destructor_for__RoughnessFactor__);
  return;
}

// `dynamic_initializer_for_'RoughnessInputMasks'' @ 1414227e0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__RoughnessInputMasks__(void)

{
  FLinearColor FVar1;
  ForAnyElementType FVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FVar1.field0_0x0 = RoughnessMask.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&RoughnessInputMasks.AllocatorInstance,1,&RoughnessInputMasks.ArrayMax);
  FVar2 = RoughnessInputMasks.AllocatorInstance;
  local_28 = FVar1.field0_0x0._0_8_;
  uStack_20 = FVar1.field0_0x0._8_8_;
  *(undefined8 *)RoughnessInputMasks.AllocatorInstance.Data = local_28;
  *(undefined8 *)(FVar2.Data + 8) = uStack_20;
  atexit(_dynamic_atexit_destructor_for__RoughnessInputMasks__);
  return;
}

// `dynamic_initializer_for_'ScaleX'' @ 141422850

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__ScaleX__(void)

{
  ::FString::FString(&ScaleX,L"_Scale_X");
  atexit(_dynamic_atexit_destructor_for__ScaleX__);
  return;
}

// `dynamic_initializer_for_'ScaleY'' @ 141422880

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__ScaleY__(void)

{
  ::FString::FString(&ScaleY,L"_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__ScaleY__);
  return;
}

// `dynamic_initializer_for_'ShadingModelToMaterialInformation'' @ 1414228b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Interchange::GLTFMaterials::_dynamic_initializer_for__ShadingModelToMaterialInformation__(void)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  FString *pFVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_678 [32];
  EShadingModel local_638 [8];
  ForAnyElementType local_630;
  int local_628;
  int local_624;
  ForAnyElementType local_620;
  int local_618;
  int local_614;
  ForAnyElementType local_610;
  int local_608;
  int local_604;
  ForAnyElementType local_600;
  int local_5f8;
  int local_5f4;
  ForAnyElementType local_5f0;
  int local_5e8;
  int local_5e4;
  ForAnyElementType local_5e0;
  int local_5d8;
  int local_5d4;
  ForAnyElementType local_5d0;
  int local_5c4;
  ForAnyElementType local_5c0;
  int local_5b4;
  ForAnyElementType local_5b0;
  int local_5a8;
  int local_5a4;
  ForAnyElementType local_5a0;
  int local_594;
  ForAnyElementType local_590;
  int local_584;
  ForAnyElementType local_580;
  int local_578;
  int local_574;
  ForAnyElementType local_570;
  int local_564;
  ForAnyElementType local_560;
  int local_554;
  ForAnyElementType local_550;
  int local_548;
  int local_544;
  ForAnyElementType local_540;
  int local_534;
  ForAnyElementType local_530;
  int local_524;
  ForAnyElementType local_520;
  int local_518;
  int local_514;
  ForAnyElementType local_510;
  int local_504;
  ForAnyElementType local_500;
  int local_4f4;
  ForAnyElementType local_4f0;
  int local_4e8;
  int local_4e4;
  FGLTFMaterialInformation local_4e0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  initializer_list<TPairInitializer<UE::Interchange::GLTFMaterials::EShadingModel_const_&,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation_const_&>_>
  local_3e8;
  TPairInitializer<UE::Interchange::GLTFMaterials::EShadingModel_const_&,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation_const_&>
  local_3d8;
  EShadingModel *local_3c8;
  ForAnyElementType *local_3c0;
  EShadingModel *local_3b8;
  ForAnyElementType *local_3b0;
  EShadingModel *local_3a8;
  ForAnyElementType *local_3a0;
  EShadingModel *local_398;
  ForAnyElementType *local_390;
  EShadingModel *local_388;
  ForAnyElementType *local_380;
  TPairInitializer<UE::Interchange::GLTFMaterials::EShadingModel_const_&,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation_const_&>
  local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_638[0] = DEFAULT;
  ::FString::FString(&local_238,L"BaseColor");
  ::FString::FString(&local_228,L"Metallic");
  ::FString::FString(&local_218,L"Specular");
  ::FString::FString(&local_208,L"Roughness");
  ::FString::FString(&local_1f8,L"EmissiveColor");
  ::FString::FString(&local_1e8,L"Opacity");
  ::FString::FString(&local_1d8,L"OpacityMask");
  ::FString::FString(&local_1c8,L"Normal");
  ::FString::FString(&local_1b8,L"Occlusion");
  lVar8 = 9;
  lVar5 = 8;
  local_5e0.Data = (FScriptContainerElement *)0x0;
  local_5d8 = 9;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,&local_5e0,9,&local_5d4);
  ConstructItems<FString,FString,int>(local_5e0.Data,&local_238,9);
  ::FString::FString(&local_460,L"/InterchangeAssets/gltf/M_Default.M_Default");
  ::FString::FString(&local_470,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_Default_Body.MF_Default_Body");
  FVar3.Data = local_470.Data.AllocatorInstance.Data;
  local_4e0.MaterialFunctionPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_470.Data.ArrayNum == 0) {
    local_4e0.MaterialFunctionPath.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_470.Data.ArrayNum,0,(ForAnyElementType *)&local_4e0,local_470.Data.ArrayNum
               ,&local_4e0.MaterialFunctionPath.Data.ArrayMax);
    memcpy(local_4e0.MaterialFunctionPath.Data.AllocatorInstance.Data,FVar3.Data,
           (longlong)local_470.Data.ArrayNum * 2);
  }
  FVar3.Data = local_460.Data.AllocatorInstance.Data;
  local_4e0.MaterialPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_460.Data.ArrayNum == 0) {
    local_4e0.MaterialPath.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_460.Data.ArrayNum,0,(ForAnyElementType *)&local_4e0.MaterialPath,
               local_460.Data.ArrayNum,&local_4e0.MaterialPath.Data.ArrayMax);
    memcpy(local_4e0.MaterialPath.Data.AllocatorInstance.Data,FVar3.Data,
           (longlong)local_460.Data.ArrayNum * 2);
  }
  iVar4 = local_5d8;
  FVar3.Data = local_5e0.Data;
  local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e0.MaterialFunctionOutputs.ArrayNum = local_5d8;
  if (local_5d8 == 0) {
    local_4e0.MaterialFunctionOutputs.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_5d8,0,&local_4e0.MaterialFunctionOutputs.AllocatorInstance,local_5d8,
               &local_4e0.MaterialFunctionOutputs.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data,(FString *)FVar3.Data,iVar4)
    ;
  }
  local_3d8.Key = local_638;
  local_638[1] = 1;
  local_3d8.Value = &local_4e0;
  ::FString::FString((FString *)&local_378,L"UnlitColor");
  ::FString::FString(&local_368,L"Opacity");
  ::FString::FString(&local_358,L"OpacityMask");
  lVar10 = 3;
  local_5f0.Data = (FScriptContainerElement *)0x0;
  local_5e8 = 3;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_5f0,3,&local_5e4);
  ConstructItems<FString,FString,int>(local_5f0.Data,(FString *)&local_378,3);
  ::FString::FString(&local_480,L"/InterchangeAssets/gltf/M_Unlit.M_Unlit");
  ::FString::FString(&local_490,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_Unlit_Body.MF_Unlit_Body");
  FVar3.Data = local_490.Data.AllocatorInstance.Data;
  local_510.Data = (FScriptContainerElement *)0x0;
  if (local_490.Data.ArrayNum == 0) {
    local_504 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_490.Data.ArrayNum,0,&local_510,local_490.Data.ArrayNum,&local_504);
    memcpy(local_510.Data,FVar3.Data,(longlong)local_490.Data.ArrayNum * 2);
  }
  FVar3.Data = local_480.Data.AllocatorInstance.Data;
  local_500.Data = (FScriptContainerElement *)0x0;
  if (local_480.Data.ArrayNum == 0) {
    local_4f4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_480.Data.ArrayNum,0,&local_500,local_480.Data.ArrayNum,&local_4f4);
    memcpy(local_500.Data,FVar3.Data,(longlong)local_480.Data.ArrayNum * 2);
  }
  iVar4 = local_5e8;
  FVar3.Data = local_5f0.Data;
  local_4f0.Data = (FScriptContainerElement *)0x0;
  local_4e8 = local_5e8;
  if (local_5e8 == 0) {
    local_4e4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_5e8,0,&local_4f0,local_5e8,&local_4e4);
    ConstructItems<FString,FString,int>(local_4f0.Data,(FString *)FVar3.Data,iVar4);
  }
  local_3c8 = local_638 + 1;
  local_638[2] = 2;
  local_3c0 = &local_510;
  ::FString::FString(&local_f8,L"ClearCoatNormal");
  ::FString::FString(&local_e8,L"BaseColor");
  ::FString::FString(&local_d8,L"Metallic");
  ::FString::FString(&local_c8,L"Specular");
  ::FString::FString(&local_b8,L"Roughness");
  ::FString::FString(&local_a8,L"EmissiveColor");
  ::FString::FString(&local_98,L"Opacity");
  ::FString::FString(&local_88,L"OpacityMask");
  ::FString::FString(&local_78,L"Normal");
  ::FString::FString(&local_68,L"ClearCoat");
  ::FString::FString(&local_58,L"ClearCoatRoughness");
  ::FString::FString(&local_48,L"Occlusion");
  lVar9 = 0xc;
  local_600.Data = (FScriptContainerElement *)0x0;
  local_5f8 = 0xc;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0xc,0,&local_600,0xc,&local_5f4);
  ConstructItems<FString,FString,int>(local_600.Data,&local_f8,0xc);
  ::FString::FString(&local_4a0,L"/InterchangeAssets/gltf/M_ClearCoat.M_ClearCoat");
  ::FString::FString(&local_4b0,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_ClearCoat_Body.MF_ClearCoat_Body");
  FVar3.Data = local_4b0.Data.AllocatorInstance.Data;
  local_540.Data = (FScriptContainerElement *)0x0;
  if (local_4b0.Data.ArrayNum == 0) {
    local_534 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_4b0.Data.ArrayNum,0,&local_540,local_4b0.Data.ArrayNum,&local_534);
    memcpy(local_540.Data,FVar3.Data,(longlong)local_4b0.Data.ArrayNum * 2);
  }
  FVar3.Data = local_4a0.Data.AllocatorInstance.Data;
  local_530.Data = (FScriptContainerElement *)0x0;
  if (local_4a0.Data.ArrayNum == 0) {
    local_524 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_4a0.Data.ArrayNum,0,&local_530,local_4a0.Data.ArrayNum,&local_524);
    memcpy(local_530.Data,FVar3.Data,(longlong)local_4a0.Data.ArrayNum * 2);
  }
  iVar4 = local_5f8;
  FVar3.Data = local_600.Data;
  local_520.Data = (FScriptContainerElement *)0x0;
  local_518 = local_5f8;
  if (local_5f8 == 0) {
    local_514 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_5f8,0,&local_520,local_5f8,&local_514);
    ConstructItems<FString,FString,int>(local_520.Data,(FString *)FVar3.Data,iVar4);
  }
  local_3b8 = local_638 + 2;
  local_638[3] = 3;
  local_3b0 = &local_540;
  ::FString::FString(&local_1a8,L"BaseColor");
  ::FString::FString(&local_198,L"Metallic");
  ::FString::FString(&local_188,L"Specular");
  ::FString::FString(&local_178,L"Roughness");
  ::FString::FString(&local_168,L"EmissiveColor");
  ::FString::FString(&local_158,L"Opacity");
  ::FString::FString(&local_148,L"OpacityMask");
  ::FString::FString(&local_138,L"Normal");
  ::FString::FString(&local_128,L"SheenColor");
  ::FString::FString(&local_118,L"SheenRoughness");
  ::FString::FString(&local_108,L"Occlusion");
  lVar11 = 0xb;
  local_610.Data = (FScriptContainerElement *)0x0;
  local_608 = 0xb;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0xb,0,&local_610,0xb,&local_604);
  ConstructItems<FString,FString,int>(local_610.Data,&local_1a8,0xb);
  ::FString::FString(&local_400,L"/InterchangeAssets/gltf/M_Sheen.M_Sheen");
  ::FString::FString(&local_410,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_Sheen_Body.MF_Sheen_Body");
  FVar3.Data = local_410.Data.AllocatorInstance.Data;
  local_570.Data = (FScriptContainerElement *)0x0;
  if (local_410.Data.ArrayNum == 0) {
    local_564 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_410.Data.ArrayNum,0,&local_570,local_410.Data.ArrayNum,&local_564);
    memcpy(local_570.Data,FVar3.Data,(longlong)local_410.Data.ArrayNum * 2);
  }
  FVar3.Data = local_400.Data.AllocatorInstance.Data;
  local_560.Data = (FScriptContainerElement *)0x0;
  if (local_400.Data.ArrayNum == 0) {
    local_554 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_400.Data.ArrayNum,0,&local_560,local_400.Data.ArrayNum,&local_554);
    memcpy(local_560.Data,FVar3.Data,(longlong)local_400.Data.ArrayNum * 2);
  }
  iVar4 = local_608;
  FVar3.Data = local_610.Data;
  local_550.Data = (FScriptContainerElement *)0x0;
  local_548 = local_608;
  if (local_608 == 0) {
    local_544 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_608,0,&local_550,local_608,&local_544);
    ConstructItems<FString,FString,int>(local_550.Data,(FString *)FVar3.Data,iVar4);
  }
  local_3a8 = local_638 + 3;
  local_638[4] = 4;
  local_3a0 = &local_570;
  ::FString::FString(&local_2c8,L"TransmissionColor");
  ::FString::FString(&local_2b8,L"BaseColor");
  ::FString::FString(&local_2a8,L"Metallic");
  ::FString::FString(&local_298,L"Specular");
  ::FString::FString(&local_288,L"Roughness");
  ::FString::FString(&local_278,L"EmissiveColor");
  ::FString::FString(&local_268,L"Opacity");
  ::FString::FString(&local_258,L"Normal");
  ::FString::FString(&local_248,L"Occlusion");
  local_620.Data = (FScriptContainerElement *)0x0;
  local_618 = 9;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,&local_620,9,&local_614);
  ConstructItems<FString,FString,int>(local_620.Data,&local_2c8,9);
  ::FString::FString(&local_420,L"/InterchangeAssets/gltf/M_Transmission.M_Transmission");
  ::FString::FString(&local_430,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_Transmission_Body.MF_Transmission_Body"
                    );
  FVar3.Data = local_430.Data.AllocatorInstance.Data;
  local_5a0.Data = (FScriptContainerElement *)0x0;
  if (local_430.Data.ArrayNum == 0) {
    local_594 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_430.Data.ArrayNum,0,&local_5a0,local_430.Data.ArrayNum,&local_594);
    memcpy(local_5a0.Data,FVar3.Data,(longlong)local_430.Data.ArrayNum * 2);
  }
  FVar3.Data = local_420.Data.AllocatorInstance.Data;
  local_590.Data = (FScriptContainerElement *)0x0;
  if (local_420.Data.ArrayNum == 0) {
    local_584 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_420.Data.ArrayNum,0,&local_590,local_420.Data.ArrayNum,&local_584);
    memcpy(local_590.Data,FVar3.Data,(longlong)local_420.Data.ArrayNum * 2);
  }
  iVar4 = local_618;
  FVar3.Data = local_620.Data;
  local_580.Data = (FScriptContainerElement *)0x0;
  local_578 = local_618;
  if (local_618 == 0) {
    local_574 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_618,0,&local_580,local_618,&local_574);
    ConstructItems<FString,FString,int>(local_580.Data,(FString *)FVar3.Data,iVar4);
  }
  local_398 = local_638 + 4;
  local_638[5] = 5;
  local_390 = &local_5a0;
  ::FString::FString(&local_348,L"BaseColor");
  ::FString::FString(&local_338,L"Metallic");
  ::FString::FString(&local_328,L"Roughness");
  ::FString::FString(&local_318,L"EmissiveColor");
  ::FString::FString(&local_308,L"Opacity");
  ::FString::FString(&local_2f8,L"OpacityMask");
  ::FString::FString(&local_2e8,L"Normal");
  ::FString::FString(&local_2d8,L"Occlusion");
  local_630.Data = (FScriptContainerElement *)0x0;
  local_628 = 8;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,8,0,&local_630,8,&local_624);
  ConstructItems<FString,FString,int>(local_630.Data,&local_348,8);
  ::FString::FString(&local_440,L"/InterchangeAssets/gltf/M_SpecularGlossiness.M_SpecularGlossiness"
                    );
  ::FString::FString(&local_450,
                     L"/InterchangeAssets/gltf/MaterialBodies/MF_SpecularGlossiness_Body.MF_SpecularGlossiness_Body"
                    );
  FVar3.Data = local_450.Data.AllocatorInstance.Data;
  local_5d0.Data = (FScriptContainerElement *)0x0;
  if (local_450.Data.ArrayNum == 0) {
    local_5c4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_450.Data.ArrayNum,0,&local_5d0,local_450.Data.ArrayNum,&local_5c4);
    memcpy(local_5d0.Data,FVar3.Data,(longlong)local_450.Data.ArrayNum * 2);
  }
  FVar3.Data = local_440.Data.AllocatorInstance.Data;
  local_5c0.Data = (FScriptContainerElement *)0x0;
  if (local_440.Data.ArrayNum == 0) {
    local_5b4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_440.Data.ArrayNum,0,&local_5c0,local_440.Data.ArrayNum,&local_5b4);
    memcpy(local_5c0.Data,FVar3.Data,(longlong)local_440.Data.ArrayNum * 2);
  }
  iVar4 = local_628;
  FVar3.Data = local_630.Data;
  local_5b0.Data = (FScriptContainerElement *)0x0;
  local_5a8 = local_628;
  if (local_628 == 0) {
    local_5a4 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_628,0,&local_5b0,local_628,&local_5a4);
    ConstructItems<FString,FString,int>(local_5b0.Data,(FString *)FVar3.Data,iVar4);
  }
  local_388 = local_638 + 5;
  local_380 = &local_5d0;
  local_3e8._First = &local_3d8;
  local_3e8._Last = &local_378;
  TMap<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,0>_>
  ::
  TMap<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,0>_>
            (&ShadingModelToMaterialInformation,&local_3e8);
  DestructItems<FString,int>((FString *)local_5b0.Data,local_5a8);
  if (local_5b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data);
  }
  if (local_5c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data);
  }
  if (local_5d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data);
  }
  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data.AllocatorInstance.Data);
  }
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_630.Data,local_628);
  if (local_630.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_630.Data);
  }
  pFVar7 = &local_2c8;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar5 != 0);
  DestructItems<FString,int>((FString *)local_580.Data,local_578);
  if (local_580.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data);
  }
  if (local_590.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Data);
  }
  if (local_5a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data);
  }
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_620.Data,local_618);
  if (local_620.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.Data);
  }
  pFVar7 = &local_238;
  lVar5 = 9;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar5 != 0);
  DestructItems<FString,int>((FString *)local_550.Data,local_548);
  if (local_550.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.Data);
  }
  if (local_560.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data);
  }
  if (local_570.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data);
  }
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_610.Data,local_608);
  if (local_610.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_610.Data);
  }
  pFVar7 = &local_f8;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar11 = lVar11 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar11 != 0);
  DestructItems<FString,int>((FString *)local_520.Data,local_518);
  if (local_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data);
  }
  if (local_530.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data);
  }
  if (local_540.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data);
  }
  if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
  }
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_600.Data,local_5f8);
  if (local_600.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data);
  }
  puVar6 = local_38;
  do {
    puVar1 = puVar6 + -2;
    puVar6 = puVar6 + -2;
    lVar9 = lVar9 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar9 != 0);
  DestructItems<FString,int>((FString *)local_4f0.Data,local_4e8);
  if (local_4f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data);
  }
  if (local_500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data);
  }
  if (local_510.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data);
  }
  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.Data.AllocatorInstance.Data);
  }
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_5f0.Data,local_5e8);
  if (local_5f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data);
  }
  pFVar7 = &local_348;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar10 = lVar10 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar10 != 0);
  DestructItems<FString,int>
            ((FString *)local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data,
             local_4e0.MaterialFunctionOutputs.ArrayNum);
  if (local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.MaterialFunctionOutputs.AllocatorInstance.Data);
  }
  if (local_4e0.MaterialPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.MaterialPath.Data.AllocatorInstance.Data);
  }
  if (local_4e0.MaterialFunctionPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_4e0.MaterialFunctionPath.Data.AllocatorInstance.Data);
  }
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_5e0.Data,local_5d8);
  if (local_5e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data);
  }
  pFVar7 = &local_1a8;
  do {
    pFVar2 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar8 = lVar8 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar8 != 0);
  atexit(_dynamic_atexit_destructor_for__ShadingModelToMaterialInformation__);
  return;
}

// `dynamic_initializer_for_'SheenColorFactor'' @ 141423ac0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorFactor__(void)

{
  ::FString::FString(&SheenColorFactor,L"SheenColorFactor");
  atexit(_dynamic_atexit_destructor_for__SheenColorFactor__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture'' @ 141423af0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture__(void)

{
  ::FString::FString(&SheenColorTexture,L"SheenColorTexture");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_OffsetScale'' @ 141423b20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_OffsetScale__
          (void)

{
  ::FString::FString(&SheenColorTexture_OffsetScale,L"SheenColorTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Offset_X'' @ 141423b50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Offset_X__(void)

{
  ::FString::FString(&SheenColorTexture_Offset_X,L"SheenColorTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Offset_Y'' @ 141423b80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Offset_Y__(void)

{
  ::FString::FString(&SheenColorTexture_Offset_Y,L"SheenColorTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Rotation'' @ 141423bb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Rotation__(void)

{
  ::FString::FString(&SheenColorTexture_Rotation,L"SheenColorTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Scale_X'' @ 141423be0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Scale_X__(void)

{
  ::FString::FString(&SheenColorTexture_Scale_X,L"SheenColorTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_Scale_Y'' @ 141423c10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_Scale_Y__(void)

{
  ::FString::FString(&SheenColorTexture_Scale_Y,L"SheenColorTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_TexCoord'' @ 141423c40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_TexCoord__(void)

{
  ::FString::FString(&SheenColorTexture_TexCoord,L"SheenColorTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'SheenColorTexture_TilingMethod'' @ 141423c70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenColorTexture_TilingMethod__
          (void)

{
  ::FString::FString(&SheenColorTexture_TilingMethod,L"SheenColorTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__SheenColorTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessFactor'' @ 141423ca0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessFactor__(void)

{
  ::FString::FString(&SheenRoughnessFactor,L"SheenRoughnessFactor");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessFactor__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture'' @ 141423cd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture__(void)

{
  ::FString::FString(&SheenRoughnessTexture,L"SheenRoughnessTexture");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_OffsetScale'' @ 141423d00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SheenRoughnessTexture_OffsetScale__(void)

{
  ::FString::FString(&SheenRoughnessTexture_OffsetScale,L"SheenRoughnessTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Offset_X'' @ 141423d30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Offset_X__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Offset_X,L"SheenRoughnessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Offset_Y'' @ 141423d60

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Offset_Y__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Offset_Y,L"SheenRoughnessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Rotation'' @ 141423d90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Rotation__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Rotation,L"SheenRoughnessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Scale_X'' @ 141423dc0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Scale_X__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Scale_X,L"SheenRoughnessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_Scale_Y'' @ 141423df0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_Scale_Y__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_Scale_Y,L"SheenRoughnessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_TexCoord'' @ 141423e20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SheenRoughnessTexture_TexCoord__
          (void)

{
  ::FString::FString(&SheenRoughnessTexture_TexCoord,L"SheenRoughnessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'SheenRoughnessTexture_TilingMethod'' @ 141423e50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SheenRoughnessTexture_TilingMethod__(void)

{
  ::FString::FString(&SheenRoughnessTexture_TilingMethod,L"SheenRoughnessTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__SheenRoughnessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'SpecFactor'' @ 141423e80

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecFactor__(void)

{
  ::FString::FString(&SpecFactor,L"SpecFactor");
  atexit(_dynamic_atexit_destructor_for__SpecFactor__);
  return;
}

// `dynamic_initializer_for_'SpecularFactor'' @ 141423eb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularFactor__(void)

{
  ::FString::FString(&SpecularFactor,L"SpecularFactor");
  atexit(_dynamic_atexit_destructor_for__SpecularFactor__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture'' @ 141423ee0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularGlossinessTexture__(void)

{
  ::FString::FString(&SpecularGlossinessTexture,L"SpecularGlossinessTexture");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_OffsetScale'' @ 141423f10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_OffsetScale__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_OffsetScale,L"SpecularGlossinessTexture_OffsetScale"
                    );
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Offset_X'' @ 141423f40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Offset_X__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Offset_X,L"SpecularGlossinessTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Offset_Y'' @ 141423f70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Offset_Y__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Offset_Y,L"SpecularGlossinessTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Rotation'' @ 141423fa0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Rotation__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Rotation,L"SpecularGlossinessTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Scale_X'' @ 141423fd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Scale_X__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Scale_X,L"SpecularGlossinessTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_Scale_Y'' @ 141424000

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_Scale_Y__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_Scale_Y,L"SpecularGlossinessTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_TexCoord'' @ 141424030

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_TexCoord__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_TexCoord,L"SpecularGlossinessTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'SpecularGlossinessTexture_TilingMethod'' @ 141424060

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_initializer_for__SpecularGlossinessTexture_TilingMethod__(void)

{
  ::FString::FString(&SpecularGlossinessTexture_TilingMethod,
                     L"SpecularGlossinessTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__SpecularGlossinessTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture'' @ 141424090

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture__(void)

{
  ::FString::FString(&SpecularTexture,L"SpecularTexture");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_OffsetScale'' @ 1414240c0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_OffsetScale__
          (void)

{
  ::FString::FString(&SpecularTexture_OffsetScale,L"SpecularTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Offset_X'' @ 1414240f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Offset_X__(void)

{
  ::FString::FString(&SpecularTexture_Offset_X,L"SpecularTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Offset_Y'' @ 141424120

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Offset_Y__(void)

{
  ::FString::FString(&SpecularTexture_Offset_Y,L"SpecularTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Rotation'' @ 141424150

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Rotation__(void)

{
  ::FString::FString(&SpecularTexture_Rotation,L"SpecularTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Scale_X'' @ 141424180

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Scale_X__(void)

{
  ::FString::FString(&SpecularTexture_Scale_X,L"SpecularTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_Scale_Y'' @ 1414241b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_Scale_Y__(void)

{
  ::FString::FString(&SpecularTexture_Scale_Y,L"SpecularTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_TexCoord'' @ 1414241e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_TexCoord__(void)

{
  ::FString::FString(&SpecularTexture_TexCoord,L"SpecularTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'SpecularTexture_TilingMethod'' @ 141424210

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__SpecularTexture_TilingMethod__
          (void)

{
  ::FString::FString(&SpecularTexture_TilingMethod,L"SpecularTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__SpecularTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 141424240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ApplyProperties__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ApplyProperties ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ApplyProperties>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ApplyProperties");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ApplyProperties,*pFVar1,
               L"Apply properties","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 1414242d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_AquireComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AquireComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AquireComponentAccessLocks>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_AquireComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AquireComponentAccessLocks,
               *pFVar1,L"Aquire Component Access Locks","STATGROUP_MovieSceneECS","STATCAT_Advanced"
               ,L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 141424360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1414243f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ReleaseComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ReleaseComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ReleaseComponentAccessLocks>)0x0)
  {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ReleaseComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ReleaseComponentAccessLocks,
               *pFVar1,L"Release Component Access Locks","STATGROUP_MovieSceneECS",
               "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TexCoord'' @ 141424480

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__TexCoord__(void)

{
  ::FString::FString(&TexCoord,L"_TexCoord");
  atexit(_dynamic_atexit_destructor_for__TexCoord__);
  return;
}

// `dynamic_initializer_for_'TilingMethod'' @ 1414244b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_initializer_for__TilingMethod__(void)

{
  ::FString::FString(&TilingMethod,L"_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__TilingMethod__);
  return;
}

// `dynamic_initializer_for_'TransmissionFactor'' @ 1414244e0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionFactor__(void)

{
  ::FString::FString(&TransmissionFactor,L"TransmissionFactor");
  atexit(_dynamic_atexit_destructor_for__TransmissionFactor__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture'' @ 141424510

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture__(void)

{
  ::FString::FString(&TransmissionTexture,L"TransmissionTexture");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_OffsetScale'' @ 141424540

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_OffsetScale__
          (void)

{
  ::FString::FString(&TransmissionTexture_OffsetScale,L"TransmissionTexture_OffsetScale");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_OffsetScale__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Offset_X'' @ 141424570

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Offset_X__
          (void)

{
  ::FString::FString(&TransmissionTexture_Offset_X,L"TransmissionTexture_Offset_X");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Offset_X__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Offset_Y'' @ 1414245a0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Offset_Y__
          (void)

{
  ::FString::FString(&TransmissionTexture_Offset_Y,L"TransmissionTexture_Offset_Y");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Offset_Y__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Rotation'' @ 1414245d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Rotation__
          (void)

{
  ::FString::FString(&TransmissionTexture_Rotation,L"TransmissionTexture_Rotation");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Rotation__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Scale_X'' @ 141424600

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Scale_X__
          (void)

{
  ::FString::FString(&TransmissionTexture_Scale_X,L"TransmissionTexture_Scale_X");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Scale_X__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_Scale_Y'' @ 141424630

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_Scale_Y__
          (void)

{
  ::FString::FString(&TransmissionTexture_Scale_Y,L"TransmissionTexture_Scale_Y");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_Scale_Y__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_TexCoord'' @ 141424660

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_TexCoord__
          (void)

{
  ::FString::FString(&TransmissionTexture_TexCoord,L"TransmissionTexture_TexCoord");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_TexCoord__);
  return;
}

// `dynamic_initializer_for_'TransmissionTexture_TilingMethod'' @ 141424690

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_initializer_for__TransmissionTexture_TilingMethod__
          (void)

{
  ::FString::FString(&TransmissionTexture_TilingMethod,L"TransmissionTexture_TilingMethod");
  atexit(_dynamic_atexit_destructor_for__TransmissionTexture_TilingMethod__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFAnimSequenceExporter_h__Script_GLTFExporter_2022041698'' @ 1414246c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFAnimSequenceExporter_h__Script_GLTFExporter_2022041698__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFAnimSequenceExporter_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h__Script_GLTFExporter_3942046424'' @ 141424700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h__Script_GLTFExporter_3942046424__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h__Script_GLTFExporter_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h__Script_GLTFExporter_2809976175'' @ 141424750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h__Script_GLTFExporter_2809976175__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelSequenceExporter_h__Script_GLTFExporter_421711269'' @ 141424790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelSequenceExporter_h__Script_GLTFExporter_421711269__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelSequenceExporter_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelVariantSetsExporter_h__Script_GLTFExporter_1180695531'' @ 1414247d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelVariantSetsExporter_h__Script_GLTFExporter_1180695531__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelVariantSetsExporter_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h__Script_GLTFExporter_2012085377'' @ 141424810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h__Script_GLTFExporter_2012085377__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h__Script_GLTFExporter_2145079042'' @ 141424850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h__Script_GLTFExporter_2145079042__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h__Script_GLTFExporter_2049191282'' @ 141424890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h__Script_GLTFExporter_2049191282__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h__Script_GLTFExporter_1309923197'' @ 1414248d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h__Script_GLTFExporter_1309923197__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h__Script_GLTFExporter_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h__Script_GLTFExporter_3759936512'' @ 141424920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h__Script_GLTFExporter_3759936512__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h__Script_GLTFExporter_1534462098'' @ 141424960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h__Script_GLTFExporter_1534462098__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GLTFExporter",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h__Script_GLTFExporter_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h__Script_GLTFExporter_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h__Script_GLTFExporter_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GLTFExporter'' @ 1414249b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GLTFExporter__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf30769a6;
  local_res8[0].DeclarationsHash = 0x64e104e3;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GLTFExporter,L"/Script/GLTFExporter",
             &Z_Registration_Info_UPackage__Script_GLTFExporter,local_res8);
  return;
}

// `dynamic_initializer_for_'bHasAnisotropyTextureAndOrRotation'' @ 1414249f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasAnisotropyTextureAndOrRotation__(void)

{
  ::FString::FString(&bHasAnisotropyTextureAndOrRotation,L"bHasAnisotropyTextureAndOrRotation");
  atexit(_dynamic_atexit_destructor_for__bHasAnisotropyTextureAndOrRotation__);
  return;
}

// `dynamic_initializer_for_'bHasBaseColorTexture'' @ 141424a20

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasBaseColorTexture__(void)

{
  ::FString::FString(&bHasBaseColorTexture,L"bHasBaseColorTexture");
  atexit(_dynamic_atexit_destructor_for__bHasBaseColorTexture__);
  return;
}

// `dynamic_initializer_for_'bHasClearCoatTexture'' @ 141424a50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasClearCoatTexture__(void)

{
  ::FString::FString(&bHasClearCoatTexture,L"bHasClearCoatTexture");
  atexit(_dynamic_atexit_destructor_for__bHasClearCoatTexture__);
  return;
}

// `dynamic_initializer_for_'bHasDiffuseSpecGlossTexture'' @ 141424a80

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasDiffuseSpecGlossTexture__(void)

{
  ::FString::FString(&bHasDiffuseSpecGlossTexture,L"bHasDiffuseSpecGlossTexture");
  atexit(_dynamic_atexit_destructor_for__bHasDiffuseSpecGlossTexture__);
  return;
}

// `dynamic_initializer_for_'bHasEmissiveTexture'' @ 141424ab0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasEmissiveTexture__(void)

{
  ::FString::FString(&bHasEmissiveTexture,L"bHasEmissiveTexture");
  atexit(_dynamic_atexit_destructor_for__bHasEmissiveTexture__);
  return;
}

// `dynamic_initializer_for_'bHasIridescence'' @ 141424ae0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::_dynamic_initializer_for__bHasIridescence__
          (void)

{
  ::FString::FString(&bHasIridescence,L"bHasIridescence");
  atexit(_dynamic_atexit_destructor_for__bHasIridescence__);
  return;
}

// `dynamic_initializer_for_'bHasMetallicRoughnessTexture'' @ 141424b10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasMetallicRoughnessTexture__(void)

{
  ::FString::FString(&bHasMetallicRoughnessTexture,L"bHasMetallicRoughnessTexture");
  atexit(_dynamic_atexit_destructor_for__bHasMetallicRoughnessTexture__);
  return;
}

// `dynamic_initializer_for_'bHasNormalTexture'' @ 141424b40

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::_dynamic_initializer_for__bHasNormalTexture__
          (void)

{
  ::FString::FString(&bHasNormalTexture,L"bHasNormalTexture");
  atexit(_dynamic_atexit_destructor_for__bHasNormalTexture__);
  return;
}

// `dynamic_initializer_for_'bHasOcclusionTexture'' @ 141424b70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasOcclusionTexture__(void)

{
  ::FString::FString(&bHasOcclusionTexture,L"bHasOcclusionTexture");
  atexit(_dynamic_atexit_destructor_for__bHasOcclusionTexture__);
  return;
}

// `dynamic_initializer_for_'bHasSheenTexture'' @ 141424ba0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::_dynamic_initializer_for__bHasSheenTexture__
          (void)

{
  ::FString::FString(&bHasSheenTexture,L"bHasSheenTexture");
  atexit(_dynamic_atexit_destructor_for__bHasSheenTexture__);
  return;
}

// `dynamic_initializer_for_'bHasSpecularTexture'' @ 141424bd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasSpecularTexture__(void)

{
  ::FString::FString(&bHasSpecularTexture,L"bHasSpecularTexture");
  atexit(_dynamic_atexit_destructor_for__bHasSpecularTexture__);
  return;
}

// `dynamic_initializer_for_'bHasTransmissionTexture'' @ 141424c00

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_initializer_for__bHasTransmissionTexture__(void)

{
  ::FString::FString(&bHasTransmissionTexture,L"bHasTransmissionTexture");
  atexit(_dynamic_atexit_destructor_for__bHasTransmissionTexture__);
  return;
}

// Z_Construct_UClass_UGLTFMaterialExportOptions @ 14e5b51c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFMaterialExportOptions(void)

{
  if (Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton,
               &Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton;
}

// EGLTFMaterialBakeMode_StaticEnum @ 14e5b5200

UEnum * __cdecl EGLTFMaterialBakeMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode,(UObject *)pUVar1,
                       L"EGLTFMaterialBakeMode");
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton;
}

// EGLTFMaterialPropertyGroup_StaticEnum @ 14e5b5240

UEnum * __cdecl EGLTFMaterialPropertyGroup_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup,(UObject *)pUVar1,
                       L"EGLTFMaterialPropertyGroup");
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton;
}

// NewProp_bAutoDetect_SetBit @ 14e5b5280

void __cdecl
Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_bAutoDetect_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14e5b5290

void * __cdecl Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGLTFMaterialBakeSize,&UE::CoreUObject::Private::Construct<FGLTFMaterialBakeSize>,&UE::CoreUObject::Private::ConstructForTests<FGLTFMaterialBakeSize>,&UE::CoreUObject::Private::Destruct<FGLTFMaterialBakeSize>,&UE::CoreUObject::Private::Copy<FGLTFMaterialBakeSize>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideSize_SetBit @ 14e5b52d0

void __cdecl
Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bOverrideFilter_SetBit @ 14e5b52e0

void __cdecl
Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bOverrideTiling_SetBit @ 14e5b52f0

void __cdecl
Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewStructOps @ 14e5b5300

void * __cdecl
Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGLTFOverrideMaterialBakeSettings,&UE::CoreUObject::Private::Construct<FGLTFOverrideMaterialBakeSettings>,&UE::CoreUObject::Private::ConstructForTests<FGLTFOverrideMaterialBakeSettings>,&UE::CoreUObject::Private::Destruct<FGLTFOverrideMaterialBakeSettings>,&UE::CoreUObject::Private::Copy<FGLTFOverrideMaterialBakeSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_GLTFExporter @ 14e5b5380

UPackage * __cdecl Z_Construct_UPackage__Script_GLTFExporter(void)

{
  if (Z_Registration_Info_UPackage__Script_GLTFExporter.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GLTFExporter.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_GLTFExporter.OuterSingleton;
}

// Z_Construct_UClass_UGLTFAnimSequenceExporter @ 14e5b56c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFAnimSequenceExporter(void)

{
  if (Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.OuterSingleton,
               &Z_Construct_UClass_UGLTFAnimSequenceExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.OuterSingleton;
}

// Z_Construct_UClass_UGLTFExporter @ 14e5b5700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFExporter(void)

{
  if (Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton,
               &Z_Construct_UClass_UGLTFExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e5b5790

void * __thiscall
TGLTFJsonColor<TGLTFColor3<float>_>::_scalar_deleting_destructor_
          (TGLTFJsonColor<TGLTFColor3<float>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b57c0

void * __thiscall FGLTFJsonColor3::_scalar_deleting_destructor_(FGLTFJsonColor3 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b5840

void * __thiscall
TGLTFJsonMatrix<TGLTFMatrix<float,2>_>::_scalar_deleting_destructor_
          (TGLTFJsonMatrix<TGLTFMatrix<float,2>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b5870

void * __thiscall
FGLTFJsonMatrix2::_scalar_deleting_destructor_(FGLTFJsonMatrix2 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b58f0

void * __thiscall
TGLTFJsonMatrix<TGLTFMatrix<float,3>_>::_scalar_deleting_destructor_
          (TGLTFJsonMatrix<TGLTFMatrix<float,3>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b5920

void * __thiscall
FGLTFJsonMatrix3::_scalar_deleting_destructor_(FGLTFJsonMatrix3 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b59a0

void * __thiscall
TGLTFJsonMatrix<TGLTFMatrix<float,4>_>::_scalar_deleting_destructor_
          (TGLTFJsonMatrix<TGLTFMatrix<float,4>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b59d0

void * __thiscall
FGLTFJsonMatrix4::_scalar_deleting_destructor_(FGLTFJsonMatrix4 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// Z_Construct_UClass_UGLTFExportOptions @ 14e5b5a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFExportOptions(void)

{
  if (Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton,
               &Z_Construct_UClass_UGLTFExportOptions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton;
}

// Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode @ 14e5b5a40

UEnum * __cdecl Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode(void)

{
  if (Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton,
               &Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton;
}

// Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup @ 14e5b5a80

UEnum * __cdecl Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup(void)

{
  if (Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton,
               &Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton;
}

// Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode @ 14e5b5ac0

UEnum * __cdecl Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode(void)

{
  if (Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton,
               &Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton;
}

// Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat @ 14e5b5b00

UEnum * __cdecl Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat(void)

{
  if (Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton,
               &Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGLTFMaterialBakeSize @ 14e5b5b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGLTFMaterialBakeSize(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGLTFMaterialBakeSize.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGLTFMaterialBakeSize.InnerSingleton,
               &Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGLTFMaterialBakeSize.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FGLTFMaterialBakeSize.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings @ 14e5b5bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGLTFOverrideMaterialBakeSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGLTFOverrideMaterialBakeSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGLTFOverrideMaterialBakeSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGLTFOverrideMaterialBakeSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGLTFExportMessages @ 14e5b5c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGLTFExportMessages(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGLTFExportMessages.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGLTFExportMessages.InnerSingleton,
               &Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGLTFExportMessages.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FGLTFExportMessages.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14e5b5cc0

void * __cdecl Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGLTFExportMessages,&UE::CoreUObject::Private::Construct<FGLTFExportMessages>,&UE::CoreUObject::Private::ConstructForTests<FGLTFExportMessages>,&UE::CoreUObject::Private::Destruct<FGLTFExportMessages>,&UE::CoreUObject::Private::Copy<FGLTFExportMessages>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EGLTFTextureImageFormat_StaticEnum @ 14e5b5d00

UEnum * __cdecl EGLTFTextureImageFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat,(UObject *)pUVar1,
                       L"EGLTFTextureImageFormat");
  }
  return Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton;
}

// EGLTFMaterialVariantMode_StaticEnum @ 14e5b5d40

UEnum * __cdecl EGLTFMaterialVariantMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode,(UObject *)pUVar1,
                       L"EGLTFMaterialVariantMode");
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton;
}

// Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault @ 14e5b5d80

UFunction * __cdecl Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExportPreviewMesh_SetBit @ 14e5b5dc0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bSkipNearDefaultValues_SetBit @ 14e5b5dd0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bIncludeCopyrightNotice_SetBit @ 14e5b5de0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeCopyrightNotice_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewProp_bExportProxyMaterials_SetBit @ 14e5b5df0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// NewProp_bUseImporterMaterialMapping_SetBit @ 14e5b5e00

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseImporterMaterialMapping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bExportUnlitMaterials_SetBit @ 14e5b5e10

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bExportClearCoatMaterials_SetBit @ 14e5b5e20

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// NewProp_bExportClothMaterials_SetBit @ 14e5b5e30

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClothMaterials_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  return;
}

// NewProp_bExportThinTranslucentMaterials_SetBit @ 14e5b5e40

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportThinTranslucentMaterials_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewProp_bExportSpecularGlossinessMaterials_SetBit @ 14e5b5e50

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSpecularGlossinessMaterials_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  return;
}

// NewProp_bExportEmissiveStrength_SetBit @ 14e5b5e60

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportEmissiveStrength_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return;
}

// NewProp_bExportSourceModel_SetBit @ 14e5b5e70

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSourceModel_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  return;
}

// NewProp_bExportVertexColors_SetBit @ 14e5b5e80

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9d) = 1;
  return;
}

// NewProp_bExportVertexSkinWeights_SetBit @ 14e5b5e90

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9e) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14e5b5ea0

void __cdecl
Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewProp_bMakeSkinnedMeshesRoot_SetBit @ 14e5b5eb0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bMakeSkinnedMeshesRoot_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9f) = 1;
  return;
}

// NewProp_bUseMeshQuantization_SetBit @ 14e5b5ec0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewProp_bExportMorphTargets_SetBit @ 14e5b5ed0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportMorphTargets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
  return;
}

// NewProp_bExportLevelSequences_SetBit @ 14e5b5ee0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  return;
}

// NewProp_bExportAnimationSequences_SetBit @ 14e5b5ef0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa3) = 1;
  return;
}

// NewProp_bExportTextureTransforms_SetBit @ 14e5b5f00

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  return;
}

// NewProp_bExportLightmaps_SetBit @ 14e5b5f60

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLightmaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xad) = 1;
  return;
}

// NewProp_bAdjustNormalmaps_SetBit @ 14e5b5f70

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xae) = 1;
  return;
}

// NewProp_bExportHiddenInGame_SetBit @ 14e5b5f80

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xaf) = 1;
  return;
}

// NewProp_bExportLights_SetBit @ 14e5b5f90

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLights_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14e5b5fa0

void * __thiscall
TGLTFJsonVector<TGLTFVector2<float>_>::_scalar_deleting_destructor_
          (TGLTFJsonVector<TGLTFVector2<float>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewProp_bExportCameras_SetBit @ 14e5b5fd0

void __cdecl
Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// Z_Construct_UFunction_UGLTFExporter_ExportToGLTF @ 14e5b5fe0

UFunction * __cdecl Z_Construct_UFunction_UGLTFExporter_ExportToGLTF(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14e5b6020

void * __thiscall
FGLTFJsonVector2::_scalar_deleting_destructor_(FGLTFJsonVector2 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b60a0

void * __thiscall
TGLTFJsonVector<TGLTFVector3<float>_>::_scalar_deleting_destructor_
          (TGLTFJsonVector<TGLTFVector3<float>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5b60d0

void * __thiscall
FGLTFJsonVector3::_scalar_deleting_destructor_(FGLTFJsonVector3 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UClass_UGLTFExportOptions_NoRegister @ 14e5b6100

UClass * __cdecl Z_Construct_UClass_UGLTFExportOptions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFExportOptions",
               &Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton,
               UGLTFExportOptions::StaticRegisterNativesUGLTFExportOptions,0xb8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGLTFExportOptions>,
               InternalVTableHelperCtorCaller<UGLTFExportOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton;
}

// Z_Construct_UClass_UGLTFProxyOptions @ 14e5b6490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFProxyOptions(void)

{
  if (Z_Registration_Info_UClass_UGLTFProxyOptions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFProxyOptions.OuterSingleton,
               &Z_Construct_UClass_UGLTFProxyOptions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFProxyOptions.OuterSingleton;
}

// Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault @ 14e5b64d0

UFunction * __cdecl Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGLTFProxyOptions_ResetToDefault_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bBakeMaterialInputs_SetBit @ 14e5b6510

void __cdecl
Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bBakeMaterialInputs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bUseThinTranslucentShadingModel_SetBit @ 14e5b6520

void __cdecl
Z_Construct_UClass_UGLTFProxyOptions_Statics::NewProp_bUseThinTranslucentShadingModel_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UClass_UGLTFLevelExporter @ 14e5b6680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFLevelExporter(void)

{
  if (Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton,
               &Z_Construct_UClass_UGLTFLevelExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton;
}

// Z_Construct_UClass_UGLTFLevelSequenceExporter @ 14e5b6780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFLevelSequenceExporter(void)

{
  if (Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.OuterSingleton,
               &Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.OuterSingleton;
}

// Z_Construct_UClass_UGLTFLevelVariantSetsExporter @ 14e5b6880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFLevelVariantSetsExporter(void)

{
  if (Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.OuterSingleton,
               &Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.OuterSingleton;
}

// Z_Construct_UClass_UGLTFMaterialExporter @ 14e5b6980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFMaterialExporter(void)

{
  if (Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton,
               &Z_Construct_UClass_UGLTFMaterialExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton;
}

// Z_Construct_UClass_UGLTFSkeletalMeshExporter @ 14e5b6a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFSkeletalMeshExporter(void)

{
  if (Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.OuterSingleton,
               &Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e5b6b80

void * __thiscall
IGLTFExporterModule::_scalar_deleting_destructor_(IGLTFExporterModule *this,uint param_1)

{
  *this = (IGLTFExporterModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UGLTFStaticMeshExporter @ 14e5b6bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGLTFStaticMeshExporter(void)

{
  if (Z_Registration_Info_UClass_UGLTFStaticMeshExporter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGLTFStaticMeshExporter.OuterSingleton,
               &Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGLTFStaticMeshExporter.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e5b6d50

void * __thiscall
FGLTFExporterModule::_scalar_deleting_destructor_(FGLTFExporterModule *this,uint param_1)

{
  *this = (FGLTFExporterModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AllOf<TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>,``FGLTFDelayedSkeletalMeshTask::ProcessRenderData'::__l2::FTargetDeltas::GenerateIsValid'::__l2::<lambda_1>_> @ 14e5b7490

bool __cdecl
Algo::
AllOf<TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>,__FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas::GenerateIsValid_::__l2::<lambda_1>_>
          (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e5b753d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14e5b753d:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e5b7640;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14e5b7640:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)param_1;
    if (((*(float *)(lVar4 + 4 + lVar10 * 0x18) != 0.0) ||
        (*(float *)(lVar4 + 8 + lVar10 * 0x18) != 0.0)) ||
       (*(float *)(lVar4 + 0xc + lVar10 * 0x18) != 0.0)) {
      return false;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return true;
}

// AnalyticsConversionToString<FString,TSizedDefaultAllocator<32>_> @ 14e5b76d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
AnalyticsConversionToString<FString,TSizedDefaultAllocator<32>_>
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  void *_Src;
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar5) break;
    local_30 = *(int *)(pFVar2 + 8);
    lVar3 = (longlong)local_30;
    _Src = *(void **)pFVar2;
    local_38.Data = (FScriptContainerElement *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,_Src,lVar3 * 2);
    }
    iVar4 = local_30 + -1;
    if (local_30 == 0) {
      iVar4 = 0;
    }
    FString::AppendChars(__return_storage_ptr__,(wchar_t *)local_38.Data,iVar4);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    FString::AppendChars(__return_storage_ptr__,L",",1);
    pFVar2 = pFVar2 + 0x10;
  }
  iVar4 = (__return_storage_ptr__->Data).ArrayNum;
  iVar1 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar1 = 0;
  }
  if (iVar1 + -1 < iVar1) {
    iVar1 = iVar1 + -1;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    iVar4 = iVar1;
  }
  FString::RemoveAt(__return_storage_ptr__,iVar4,1,No);
  return __return_storage_ptr__;
}

// CastChecked<UAnimSequence,UObject_const_> @ 14e5b7830

UAnimSequence * __cdecl CastChecked<UAnimSequence,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UAnimSequence>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UAnimSequence_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UAnimSequence *)param_1;
  }
  pFVar3 = GetTypeName<UAnimSequence>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ULevelSequence,UObject_const_> @ 14e5b78f0

ULevelSequence * __cdecl CastChecked<ULevelSequence,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULevelSequence>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ULevelSequence_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULevelSequence *)param_1;
  }
  pFVar3 = GetTypeName<ULevelSequence>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ULevelVariantSets,UObject_const_> @ 14e5b79b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelVariantSets * __cdecl CastChecked<ULevelVariantSets,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULevelVariantSets>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ULevelVariantSets_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULevelVariantSets *)param_1;
  }
  pFVar3 = GetTypeName<ULevelVariantSets>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<USkeletalMesh,UObject_const_> @ 14e5b7a70

USkeletalMesh * __cdecl CastChecked<USkeletalMesh,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<USkeletalMesh>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USkeletalMesh *)param_1;
  }
  pFVar3 = GetTypeName<USkeletalMesh>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UStaticMesh,UObject_const_> @ 14e5b7b30

UStaticMesh * __cdecl CastChecked<UStaticMesh,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UStaticMesh>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UStaticMesh_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UStaticMesh *)param_1;
  }
  pFVar3 = GetTypeName<UStaticMesh>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UWorld,UObject_const_> @ 14e5b7bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl CastChecked<UWorld,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UWorld>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UWorld *)param_1;
  }
  pFVar3 = GetTypeName<UWorld>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<UE::Math::TIntVector4<unsigned_short>,int> @ 14e5b7cb0

bool __cdecl
CompareItems<UE::Math::TIntVector4<unsigned_short>,int>
          (TIntVector4<unsigned_short> *param_1,TIntVector4<unsigned_short> *param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  
  if (param_3 != 0) {
    puVar2 = &(param_2->field0_0x0)._s_0.Z;
    puVar1 = &(param_1->field0_0x0)._s_0.Z;
    do {
      if ((((((TIntVector4<unsigned_short>_u_0_s_0 *)(puVar1 + -2))->X !=
             *(ushort *)((longlong)param_2 + (-4 - (longlong)param_1) + (longlong)puVar1)) ||
           (puVar1[-1] != puVar2[-1])) || (*puVar1 != *puVar2)) || (puVar1[1] != puVar2[1])) {
        return false;
      }
      puVar2 = puVar2 + 4;
      puVar1 = puVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Convert<unsigned_char,unsigned_char,`FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>'::__l5::<lambda_1>_> @ 14e5b8000

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::
Convert<unsigned_char,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>_::__l5::<lambda_1>_>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_1> param_5)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  uint uVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FGLTFJsonAccessor *pFVar10;
  FGLTFJsonAccessor *pFVar11;
  FGLTFJsonBufferView *pFVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar3 = (param_1->IndexMap).ArrayNum;
  pFVar11 = (FGLTFJsonAccessor *)0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar3,&local_50,local_48,local_48 + 1);
  pFVar10 = pFVar11;
  if (uVar3 != 0) {
    do {
      uVar17 = (uint)pFVar10;
      uVar15 = ~uVar17 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar17 < (param_1->BoneMapLookup).ArrayNum) {
        uVar6 = uVar15;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      lVar14 = (longlong)(int)uVar17;
      uVar6 = *(uint *)((param_1->BoneMapLookup).AllocatorInstance.Data + lVar14 * 4);
      uVar7 = 0;
      uVar8 = uVar7;
      if ((int)uVar6 < (param_1->BoneMaps).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      pFVar16 = (param_1->BoneMaps).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
      uVar6 = uVar7;
      if ((int)uVar17 < (param_1->IndexMap).ArrayNum) {
        uVar6 = uVar15;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      uVar6 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar14 * 4);
      if ((int)uVar17 < local_48[0]) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      uVar6 = param_5.LookupData[uVar6];
      pFVar1 = local_50.Data + lVar14 * 4;
      iVar9 = (uVar6 & 0xff) - param_3;
      iVar13 = 4;
      if (iVar9 < 4) {
        iVar13 = iVar9;
      }
      pFVar10 = pFVar11;
      uVar15 = param_3;
      if (0 < iVar13) {
        do {
          bVar2 = param_4[(ulonglong)uVar15 + (ulonglong)(uVar6 >> 8)];
          if ((*(int *)(pFVar16 + 8) <= (int)(uint)bVar2) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar10;
          }
          pFVar1[(longlong)(pFVar10->Min + -0x11)] =
               *(FScriptContainerElement *)(*(longlong *)pFVar16 + (ulonglong)bVar2 * 2);
          pFVar10 = (FGLTFJsonAccessor *)((longlong)&pFVar10->_padding_ + 1);
          uVar15 = uVar15 + 1;
        } while ((longlong)pFVar10 < (longlong)iVar13);
      }
      if (iVar13 < 4) {
        memset(pFVar1 + iVar13,0,(longlong)(4 - iVar13));
      }
      pFVar10 = (FGLTFJsonAccessor *)(ulonglong)(uVar17 + 1);
    } while (uVar17 + 1 < uVar3);
  }
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar11 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar12 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_50.Data,(longlong)local_48[0] << 2,ArrayBuffer,'\x04');
    pFVar11->BufferView = pFVar12;
    pFVar11->ComponentType = UInt8;
    pFVar11->Count = local_48[0];
    pFVar11->Type = Vec4;
    pFVar11->bNormalized = false;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar11;
}

// Convert<unsigned_char,unsigned_char,`FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>'::__l2::<lambda_2>_> @ 14e5b8370

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::
Convert<unsigned_char,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>_::__l2::<lambda_2>_>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_2> param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FGLTFJsonAccessor *pFVar10;
  FGLTFJsonBufferView *pFVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  uVar16 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar2,&local_50,local_48,local_48 + 1);
  if (uVar2 != 0) {
    iVar12 = 4;
    if ((int)(param_5.MaxBoneInfluences - param_3) < 4) {
      iVar12 = param_5.MaxBoneInfluences - param_3;
    }
    lVar9 = (longlong)iVar12;
    do {
      lVar15 = 0;
      uVar14 = ~uVar16 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar16 < (param_1->BoneMapLookup).ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      lVar13 = (longlong)(int)uVar16;
      uVar7 = *(uint *)((param_1->BoneMapLookup).AllocatorInstance.Data + lVar13 * 4);
      uVar8 = 0;
      if ((int)uVar7 < (param_1->BoneMaps).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      pFVar17 = (param_1->BoneMaps).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
      uVar7 = 0;
      if ((int)uVar16 < (param_1->IndexMap).ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      iVar3 = *(int *)((param_1->IndexMap).AllocatorInstance.Data + lVar13 * 4);
      uVar7 = 0;
      if ((int)uVar16 < local_48[0]) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      FVar5.Data = local_50.Data;
      uVar7 = param_3;
      if (0 < lVar9) {
        do {
          bVar1 = param_4[(ulonglong)uVar7 + (ulonglong)(iVar3 * param_5.MaxBoneInfluences * 2)];
          if ((*(int *)(pFVar17 + 8) <= (int)(uint)bVar1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar10;
          }
          FVar5.Data[lVar15 + lVar13 * 4] =
               *(FScriptContainerElement *)(*(longlong *)pFVar17 + (ulonglong)bVar1 * 2);
          lVar15 = lVar15 + 1;
          uVar7 = uVar7 + 1;
        } while (lVar15 < lVar9);
      }
      if (iVar12 < 4) {
        memset(FVar5.Data + lVar9 + lVar13 * 4,0,(longlong)(4 - iVar12));
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar2);
  }
  pFVar10 = (FGLTFJsonAccessor *)0x0;
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar10 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar11 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_50.Data,(longlong)local_48[0] << 2,ArrayBuffer,'\x04');
    pFVar10->BufferView = pFVar11;
    pFVar10->ComponentType = UInt8;
    pFVar10->Count = local_48[0];
    pFVar10->Type = Vec4;
    pFVar10->bNormalized = false;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar10;
}

// Convert<unsigned_char,unsigned_short,`FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>'::__l5::<lambda_1>_> @ 14e5b87b0

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::
Convert<unsigned_char,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>_::__l5::<lambda_1>_>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_1> param_5)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  uint uVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FGLTFJsonAccessor *pFVar10;
  FGLTFJsonAccessor *pFVar11;
  FGLTFJsonBufferView *pFVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar3 = (param_1->IndexMap).ArrayNum;
  pFVar11 = (FGLTFJsonAccessor *)0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar3,&local_50,local_48,local_48 + 1);
  pFVar10 = pFVar11;
  if (uVar3 != 0) {
    do {
      uVar17 = (uint)pFVar10;
      uVar15 = ~uVar17 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar17 < (param_1->BoneMapLookup).ArrayNum) {
        uVar6 = uVar15;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      lVar14 = (longlong)(int)uVar17;
      uVar6 = *(uint *)((param_1->BoneMapLookup).AllocatorInstance.Data + lVar14 * 4);
      uVar7 = 0;
      uVar8 = uVar7;
      if ((int)uVar6 < (param_1->BoneMaps).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      pFVar16 = (param_1->BoneMaps).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
      uVar6 = uVar7;
      if ((int)uVar17 < (param_1->IndexMap).ArrayNum) {
        uVar6 = uVar15;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      uVar6 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar14 * 4);
      if ((int)uVar17 < local_48[0]) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      uVar6 = param_5.LookupData[uVar6];
      pFVar1 = local_50.Data + lVar14 * 4;
      iVar9 = (uVar6 & 0xff) - param_3;
      iVar13 = 4;
      if (iVar9 < 4) {
        iVar13 = iVar9;
      }
      pFVar10 = pFVar11;
      uVar15 = param_3;
      if (0 < iVar13) {
        do {
          uVar2 = *(ushort *)(param_4 + (ulonglong)uVar15 * 2 + (ulonglong)(uVar6 >> 8));
          if ((*(int *)(pFVar16 + 8) <= (int)(uint)uVar2) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar10;
          }
          pFVar1[(longlong)pFVar10] =
               *(FScriptContainerElement *)(*(longlong *)pFVar16 + (ulonglong)uVar2 * 2);
          pFVar10 = (FGLTFJsonAccessor *)((longlong)&pFVar10->_padding_ + 1);
          uVar15 = uVar15 + 1;
        } while ((longlong)pFVar10 < (longlong)iVar13);
      }
      if (iVar13 < 4) {
        memset(pFVar1 + iVar13,0,(longlong)(4 - iVar13));
      }
      pFVar10 = (FGLTFJsonAccessor *)(ulonglong)(uVar17 + 1);
    } while (uVar17 + 1 < uVar3);
  }
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar11 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar12 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_50.Data,(longlong)local_48[0] << 2,ArrayBuffer,'\x04');
    pFVar11->BufferView = pFVar12;
    pFVar11->ComponentType = UInt8;
    pFVar11->Count = local_48[0];
    pFVar11->Type = Vec4;
    pFVar11->bNormalized = false;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar11;
}

// Convert<unsigned_char,unsigned_short,`FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>'::__l2::<lambda_2>_> @ 14e5b8b20

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::
Convert<unsigned_char,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>_::__l2::<lambda_2>_>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_2> param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FGLTFJsonAccessor *pFVar10;
  FGLTFJsonBufferView *pFVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  uVar16 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar2,&local_50,local_48,local_48 + 1);
  if (uVar2 != 0) {
    iVar12 = 4;
    if ((int)(param_5.MaxBoneInfluences - param_3) < 4) {
      iVar12 = param_5.MaxBoneInfluences - param_3;
    }
    lVar9 = (longlong)iVar12;
    do {
      lVar15 = 0;
      uVar14 = ~uVar16 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar16 < (param_1->BoneMapLookup).ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      lVar13 = (longlong)(int)uVar16;
      uVar7 = *(uint *)((param_1->BoneMapLookup).AllocatorInstance.Data + lVar13 * 4);
      uVar8 = 0;
      if ((int)uVar7 < (param_1->BoneMaps).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      pFVar17 = (param_1->BoneMaps).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
      uVar7 = 0;
      if ((int)uVar16 < (param_1->IndexMap).ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      iVar3 = *(int *)((param_1->IndexMap).AllocatorInstance.Data + lVar13 * 4);
      uVar7 = 0;
      if ((int)uVar16 < local_48[0]) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      FVar5.Data = local_50.Data;
      uVar7 = param_3;
      if (0 < lVar9) {
        do {
          uVar1 = *(ushort *)
                   (param_4 +
                   (ulonglong)uVar7 * 2 + (ulonglong)(iVar3 * param_5.MaxBoneInfluences * 3));
          if ((*(int *)(pFVar17 + 8) <= (int)(uint)uVar1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar10;
          }
          FVar5.Data[lVar15 + lVar13 * 4] =
               *(FScriptContainerElement *)(*(longlong *)pFVar17 + (ulonglong)uVar1 * 2);
          lVar15 = lVar15 + 1;
          uVar7 = uVar7 + 1;
        } while (lVar15 < lVar9);
      }
      if (iVar12 < 4) {
        memset(FVar5.Data + lVar9 + lVar13 * 4,0,(longlong)(4 - iVar12));
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar2);
  }
  pFVar10 = (FGLTFJsonAccessor *)0x0;
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar10 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar11 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_50.Data,(longlong)local_48[0] << 2,ArrayBuffer,'\x04');
    pFVar10->BufferView = pFVar11;
    pFVar10->ComponentType = UInt8;
    pFVar10->Count = local_48[0];
    pFVar10->Type = Vec4;
    pFVar10->bNormalized = false;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar10;
}

// Convert<unsigned_char,`FGLTFBoneWeightBufferConverter::Convert<unsigned_char>'::__l5::<lambda_1>_> @ 14e5b8e90

FGLTFJsonAccessor * __thiscall
FGLTFBoneWeightBufferConverter::
Convert<unsigned_char,_FGLTFBoneWeightBufferConverter::Convert<unsigned_char>_::__l5::<lambda_1>_>
          (FGLTFBoneWeightBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_1> param_5)

{
  uint uVar1;
  FGLTFBufferBuilder *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FGLTFJsonAccessor *pFVar6;
  FGLTFJsonAccessor *pFVar7;
  FGLTFJsonBufferView *pFVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ForAnyElementType local_48;
  int local_40 [2];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  pFVar7 = (FGLTFJsonAccessor *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar1,&local_48,local_40,local_40 + 1);
  pFVar6 = pFVar7;
  if (uVar1 != 0) {
    do {
      uVar11 = (uint)pFVar6;
      uVar4 = 0;
      if ((int)uVar11 < (param_1->IndexMap).ArrayNum) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FGLTFJsonAccessor *)(*pcVar2)();
        return pFVar6;
      }
      uVar4 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
      uVar5 = 0;
      if ((int)uVar11 < local_40[0]) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FGLTFJsonAccessor *)(*pcVar2)();
        return pFVar6;
      }
      uVar4 = param_5.LookupData[uVar4];
      iVar9 = (uVar4 & 0xff) - param_3;
      iVar10 = 4;
      if (iVar9 < 4) {
        iVar10 = iVar9;
      }
      pFVar6 = pFVar7;
      uVar5 = param_3;
      if (0 < iVar10) {
        do {
          (local_48.Data + (longlong)(int)uVar11 * 4)[(longlong)pFVar6] =
               *(FScriptContainerElement *)
                (param_4 + (ulonglong)uVar5 + (ulonglong)(byte)uVar4 + (ulonglong)(uVar4 >> 8));
          pFVar6 = (FGLTFJsonAccessor *)((longlong)&pFVar6->_padding_ + 1);
          uVar5 = uVar5 + 1;
        } while ((longlong)pFVar6 < (longlong)iVar10);
      }
      if (iVar10 < 4) {
        memset(local_48.Data + (longlong)(int)uVar11 * 4 + iVar10,0,(longlong)(4 - iVar10));
      }
      pFVar6 = (FGLTFJsonAccessor *)(ulonglong)(uVar11 + 1);
    } while (uVar11 + 1 < uVar1);
  }
  if (local_40[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar7 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar8 = FGLTFBufferBuilder::AddBufferView
                       (this_00,local_48.Data,(longlong)local_40[0] << 2,ArrayBuffer,'\x04');
    pFVar7->BufferView = pFVar8;
    pFVar7->ComponentType = UInt8;
    pFVar7->Count = local_40[0];
    pFVar7->Type = Vec4;
    pFVar7->bNormalized = true;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return pFVar7;
}

// Convert<unsigned_char,`FGLTFBoneWeightBufferConverter::Convert<unsigned_char>'::__l2::<lambda_2>_> @ 14e5b90e0

FGLTFJsonAccessor * __thiscall
FGLTFBoneWeightBufferConverter::
Convert<unsigned_char,_FGLTFBoneWeightBufferConverter::Convert<unsigned_char>_::__l2::<lambda_2>_>
          (FGLTFBoneWeightBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_2> param_5)

{
  uint uVar1;
  int iVar2;
  FGLTFBufferBuilder *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FGLTFJsonAccessor *pFVar6;
  FGLTFJsonAccessor *pFVar7;
  FGLTFJsonBufferView *pFVar8;
  uint uVar9;
  int iVar10;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  pFVar6 = (FGLTFJsonAccessor *)0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar1,&local_50,local_48,local_48 + 1);
  if (uVar1 != 0) {
    iVar10 = 4;
    if ((int)(param_5.MaxBoneInfluences - param_3) < 4) {
      iVar10 = param_5.MaxBoneInfluences - param_3;
    }
    pFVar7 = pFVar6;
    do {
      uVar9 = (uint)pFVar7;
      uVar5 = 0;
      if ((int)uVar9 < (param_1->IndexMap).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar6;
      }
      iVar2 = *(int *)((param_1->IndexMap).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      uVar5 = 0;
      if ((int)uVar9 < local_48[0]) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar6;
      }
      pFVar7 = pFVar6;
      uVar5 = param_3;
      if (0 < iVar10) {
        do {
          (local_50.Data + (longlong)(int)uVar9 * 4)[(longlong)pFVar7] =
               *(FScriptContainerElement *)
                (param_4 +
                (ulonglong)uVar5 +
                (ulonglong)(iVar2 * param_5.MaxBoneInfluences * 2) +
                (ulonglong)param_5.MaxBoneInfluences);
          pFVar7 = (FGLTFJsonAccessor *)((longlong)&pFVar7->_padding_ + 1);
          uVar5 = uVar5 + 1;
        } while ((longlong)pFVar7 < (longlong)iVar10);
      }
      if (iVar10 < 4) {
        memset(local_50.Data + (longlong)(int)uVar9 * 4 + iVar10,0,(longlong)(4 - iVar10));
      }
      pFVar7 = (FGLTFJsonAccessor *)(ulonglong)(uVar9 + 1);
    } while (uVar9 + 1 < uVar1);
  }
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar6 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar8 = FGLTFBufferBuilder::AddBufferView
                       (this_00,local_50.Data,(longlong)local_48[0] << 2,ArrayBuffer,'\x04');
    pFVar6->BufferView = pFVar8;
    pFVar6->ComponentType = UInt8;
    pFVar6->Count = local_48[0];
    pFVar6->Type = Vec4;
    pFVar6->bNormalized = true;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar6;
}

// Convert<unsigned_short,unsigned_char,`FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>'::__l5::<lambda_1>_> @ 14e5b9630

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::
Convert<unsigned_short,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>_::__l5::<lambda_1>_>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_1> param_5)

{
  byte bVar1;
  uint uVar2;
  FGLTFBufferBuilder *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FGLTFJsonAccessor *pFVar9;
  FGLTFJsonBufferView *pFVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  uVar16 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,2,uVar2,&local_50,local_48,local_48 + 1);
  if (uVar2 != 0) {
    do {
      lVar13 = 0;
      uVar14 = ~uVar16 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar16 < (param_1->BoneMapLookup).ArrayNum) {
        uVar6 = uVar14;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar9;
      }
      lVar12 = (longlong)(int)uVar16;
      uVar6 = *(uint *)((param_1->BoneMapLookup).AllocatorInstance.Data + lVar12 * 4);
      uVar7 = 0;
      if ((int)uVar6 < (param_1->BoneMaps).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar9;
      }
      pFVar15 = (param_1->BoneMaps).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
      uVar6 = 0;
      if ((int)uVar16 < (param_1->IndexMap).ArrayNum) {
        uVar6 = uVar14;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar9;
      }
      uVar6 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar12 * 4);
      uVar7 = 0;
      if ((int)uVar16 < local_48[0]) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar9;
      }
      FVar4.Data = local_50.Data;
      uVar6 = param_5.LookupData[uVar6];
      iVar8 = (uVar6 & 0xff) - param_3;
      iVar11 = 4;
      if (iVar8 < 4) {
        iVar11 = iVar8;
      }
      uVar14 = param_3;
      if (0 < iVar11) {
        do {
          bVar1 = param_4[(ulonglong)uVar14 + (ulonglong)(uVar6 >> 8)];
          if ((*(int *)(pFVar15 + 8) <= (int)(uint)bVar1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
            return pFVar9;
          }
          *(undefined2 *)(FVar4.Data + lVar13 * 2 + lVar12 * 8) =
               *(undefined2 *)(*(longlong *)pFVar15 + (ulonglong)bVar1 * 2);
          lVar13 = lVar13 + 1;
          uVar14 = uVar14 + 1;
        } while (lVar13 < iVar11);
      }
      if (iVar11 < 4) {
        pFVar15 = FVar4.Data + (longlong)iVar11 * 2 + lVar12 * 8;
        for (lVar13 = (longlong)(4 - iVar11); lVar13 != 0; lVar13 = lVar13 + -1) {
          *(undefined2 *)pFVar15 = 0;
          pFVar15 = pFVar15 + 2;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar2);
  }
  pFVar9 = (FGLTFJsonAccessor *)0x0;
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_50.Data,(longlong)local_48[0] << 3,ArrayBuffer,'\x04');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = UInt16;
    pFVar9->Count = local_48[0];
    pFVar9->Type = Vec4;
    pFVar9->bNormalized = false;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar9;
}

// Convert<unsigned_short,unsigned_char,`FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>'::__l2::<lambda_2>_> @ 14e5b99a0

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::
Convert<unsigned_short,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>_::__l2::<lambda_2>_>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_2> param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FGLTFJsonAccessor *pFVar10;
  FGLTFJsonBufferView *pFVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  uVar16 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,2,uVar2,&local_50,local_48,local_48 + 1);
  if (uVar2 != 0) {
    iVar15 = 4;
    if ((int)(param_5.MaxBoneInfluences - param_3) < 4) {
      iVar15 = param_5.MaxBoneInfluences - param_3;
    }
    lVar9 = (longlong)iVar15;
    do {
      lVar14 = 0;
      uVar13 = ~uVar16 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar16 < (param_1->BoneMapLookup).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      lVar12 = (longlong)(int)uVar16;
      uVar7 = *(uint *)((param_1->BoneMapLookup).AllocatorInstance.Data + lVar12 * 4);
      uVar8 = 0;
      if ((int)uVar7 < (param_1->BoneMaps).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      pFVar17 = (param_1->BoneMaps).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
      uVar7 = 0;
      if ((int)uVar16 < (param_1->IndexMap).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      iVar3 = *(int *)((param_1->IndexMap).AllocatorInstance.Data + lVar12 * 4);
      uVar7 = 0;
      if ((int)uVar16 < local_48[0]) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      FVar5.Data = local_50.Data;
      uVar7 = param_3;
      if (0 < lVar9) {
        do {
          bVar1 = param_4[(ulonglong)uVar7 + (ulonglong)(iVar3 * param_5.MaxBoneInfluences * 2)];
          if ((*(int *)(pFVar17 + 8) <= (int)(uint)bVar1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar10;
          }
          *(undefined2 *)(FVar5.Data + lVar14 * 2 + lVar12 * 8) =
               *(undefined2 *)(*(longlong *)pFVar17 + (ulonglong)bVar1 * 2);
          lVar14 = lVar14 + 1;
          uVar7 = uVar7 + 1;
        } while (lVar14 < lVar9);
      }
      if (iVar15 < 4) {
        pFVar17 = FVar5.Data + lVar9 * 2 + lVar12 * 8;
        for (lVar14 = (longlong)(4 - iVar15); lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined2 *)pFVar17 = 0;
          pFVar17 = pFVar17 + 2;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar2);
  }
  pFVar10 = (FGLTFJsonAccessor *)0x0;
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar10 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar11 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_50.Data,(longlong)local_48[0] << 3,ArrayBuffer,'\x04');
    pFVar10->BufferView = pFVar11;
    pFVar10->ComponentType = UInt16;
    pFVar10->Count = local_48[0];
    pFVar10->Type = Vec4;
    pFVar10->bNormalized = false;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar10;
}

// Convert<unsigned_short,unsigned_short,`FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>'::__l5::<lambda_1>_> @ 14e5b9df0

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::
Convert<unsigned_short,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>_::__l5::<lambda_1>_>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_1> param_5)

{
  ushort uVar1;
  uint uVar2;
  FGLTFBufferBuilder *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FGLTFJsonAccessor *pFVar9;
  FGLTFJsonBufferView *pFVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  uVar16 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,2,uVar2,&local_50,local_48,local_48 + 1);
  if (uVar2 != 0) {
    do {
      lVar13 = 0;
      uVar14 = ~uVar16 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar16 < (param_1->BoneMapLookup).ArrayNum) {
        uVar6 = uVar14;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar9;
      }
      lVar12 = (longlong)(int)uVar16;
      uVar6 = *(uint *)((param_1->BoneMapLookup).AllocatorInstance.Data + lVar12 * 4);
      uVar7 = 0;
      if ((int)uVar6 < (param_1->BoneMaps).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar9;
      }
      pFVar15 = (param_1->BoneMaps).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
      uVar6 = 0;
      if ((int)uVar16 < (param_1->IndexMap).ArrayNum) {
        uVar6 = uVar14;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar9;
      }
      uVar6 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar12 * 4);
      uVar7 = 0;
      if ((int)uVar16 < local_48[0]) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar9;
      }
      FVar4.Data = local_50.Data;
      uVar6 = param_5.LookupData[uVar6];
      iVar8 = (uVar6 & 0xff) - param_3;
      iVar11 = 4;
      if (iVar8 < 4) {
        iVar11 = iVar8;
      }
      uVar14 = param_3;
      if (0 < iVar11) {
        do {
          uVar1 = *(ushort *)(param_4 + (ulonglong)uVar14 * 2 + (ulonglong)(uVar6 >> 8));
          if ((*(int *)(pFVar15 + 8) <= (int)(uint)uVar1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FGLTFJsonAccessor *)(*pcVar3)();
            return pFVar9;
          }
          *(undefined2 *)(FVar4.Data + lVar13 * 2 + lVar12 * 8) =
               *(undefined2 *)(*(longlong *)pFVar15 + (ulonglong)uVar1 * 2);
          lVar13 = lVar13 + 1;
          uVar14 = uVar14 + 1;
        } while (lVar13 < iVar11);
      }
      if (iVar11 < 4) {
        pFVar15 = FVar4.Data + (longlong)iVar11 * 2 + lVar12 * 8;
        for (lVar13 = (longlong)(4 - iVar11); lVar13 != 0; lVar13 = lVar13 + -1) {
          *(undefined2 *)pFVar15 = 0;
          pFVar15 = pFVar15 + 2;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar2);
  }
  pFVar9 = (FGLTFJsonAccessor *)0x0;
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_50.Data,(longlong)local_48[0] << 3,ArrayBuffer,'\x04');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = UInt16;
    pFVar9->Count = local_48[0];
    pFVar9->Type = Vec4;
    pFVar9->bNormalized = false;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar9;
}

// Convert<unsigned_short,unsigned_short,`FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>'::__l2::<lambda_2>_> @ 14e5ba160

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::
Convert<unsigned_short,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>_::__l2::<lambda_2>_>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_2> param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FGLTFJsonAccessor *pFVar10;
  FGLTFJsonBufferView *pFVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType local_50;
  int local_48 [4];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  uVar16 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,2,uVar2,&local_50,local_48,local_48 + 1);
  if (uVar2 != 0) {
    iVar15 = 4;
    if ((int)(param_5.MaxBoneInfluences - param_3) < 4) {
      iVar15 = param_5.MaxBoneInfluences - param_3;
    }
    lVar9 = (longlong)iVar15;
    do {
      lVar14 = 0;
      uVar13 = ~uVar16 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar16 < (param_1->BoneMapLookup).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      lVar12 = (longlong)(int)uVar16;
      uVar7 = *(uint *)((param_1->BoneMapLookup).AllocatorInstance.Data + lVar12 * 4);
      uVar8 = 0;
      if ((int)uVar7 < (param_1->BoneMaps).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      pFVar17 = (param_1->BoneMaps).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
      uVar7 = 0;
      if ((int)uVar16 < (param_1->IndexMap).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      iVar3 = *(int *)((param_1->IndexMap).AllocatorInstance.Data + lVar12 * 4);
      uVar7 = 0;
      if ((int)uVar16 < local_48[0]) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar10;
      }
      FVar5.Data = local_50.Data;
      uVar7 = param_3;
      if (0 < lVar9) {
        do {
          uVar1 = *(ushort *)
                   (param_4 +
                   (ulonglong)uVar7 * 2 + (ulonglong)(iVar3 * param_5.MaxBoneInfluences * 3));
          if ((*(int *)(pFVar17 + 8) <= (int)(uint)uVar1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar10;
          }
          *(undefined2 *)(FVar5.Data + lVar14 * 2 + lVar12 * 8) =
               *(undefined2 *)(*(longlong *)pFVar17 + (ulonglong)uVar1 * 2);
          lVar14 = lVar14 + 1;
          uVar7 = uVar7 + 1;
        } while (lVar14 < lVar9);
      }
      if (iVar15 < 4) {
        pFVar17 = FVar5.Data + lVar9 * 2 + lVar12 * 8;
        for (lVar14 = (longlong)(4 - iVar15); lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined2 *)pFVar17 = 0;
          pFVar17 = pFVar17 + 2;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar2);
  }
  pFVar10 = (FGLTFJsonAccessor *)0x0;
  if (local_48[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar10 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar11 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_50.Data,(longlong)local_48[0] << 3,ArrayBuffer,'\x04');
    pFVar10->BufferView = pFVar11;
    pFVar10->ComponentType = UInt16;
    pFVar10->Count = local_48[0];
    pFVar10->Type = Vec4;
    pFVar10->bNormalized = false;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar10;
}

// Convert<unsigned_short,`FGLTFBoneWeightBufferConverter::Convert<unsigned_short>'::__l5::<lambda_1>_> @ 14e5ba4e0

FGLTFJsonAccessor * __thiscall
FGLTFBoneWeightBufferConverter::
Convert<unsigned_short,_FGLTFBoneWeightBufferConverter::Convert<unsigned_short>_::__l5::<lambda_1>_>
          (FGLTFBoneWeightBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_1> param_5)

{
  uint uVar1;
  FGLTFBufferBuilder *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FGLTFJsonAccessor *pFVar6;
  FGLTFJsonAccessor *pFVar7;
  FGLTFJsonBufferView *pFVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ForAnyElementType local_48;
  int local_40 [2];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  pFVar7 = (FGLTFJsonAccessor *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar1,&local_48,local_40,local_40 + 1);
  pFVar6 = pFVar7;
  if (uVar1 != 0) {
    do {
      uVar11 = (uint)pFVar6;
      uVar4 = 0;
      if ((int)uVar11 < (param_1->IndexMap).ArrayNum) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FGLTFJsonAccessor *)(*pcVar2)();
        return pFVar6;
      }
      uVar4 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
      uVar5 = 0;
      if ((int)uVar11 < local_40[0]) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FGLTFJsonAccessor *)(*pcVar2)();
        return pFVar6;
      }
      uVar4 = param_5.LookupData[uVar4];
      iVar9 = (uVar4 & 0xff) - param_3;
      iVar10 = 4;
      if (iVar9 < 4) {
        iVar10 = iVar9;
      }
      pFVar6 = pFVar7;
      uVar5 = param_3;
      if (0 < iVar10) {
        do {
          (local_48.Data + (longlong)(int)uVar11 * 4)[(longlong)pFVar6] =
               *(FScriptContainerElement *)
                (param_4 + (ulonglong)uVar5 + (ulonglong)(byte)uVar4 * 2 + (ulonglong)(uVar4 >> 8));
          pFVar6 = (FGLTFJsonAccessor *)((longlong)&pFVar6->_padding_ + 1);
          uVar5 = uVar5 + 1;
        } while ((longlong)pFVar6 < (longlong)iVar10);
      }
      if (iVar10 < 4) {
        memset(local_48.Data + (longlong)(int)uVar11 * 4 + iVar10,0,(longlong)(4 - iVar10));
      }
      pFVar6 = (FGLTFJsonAccessor *)(ulonglong)(uVar11 + 1);
    } while (uVar11 + 1 < uVar1);
  }
  if (local_40[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar7 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar8 = FGLTFBufferBuilder::AddBufferView
                       (this_00,local_48.Data,(longlong)local_40[0] << 2,ArrayBuffer,'\x04');
    pFVar7->BufferView = pFVar8;
    pFVar7->ComponentType = UInt8;
    pFVar7->Count = local_40[0];
    pFVar7->Type = Vec4;
    pFVar7->bNormalized = true;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return pFVar7;
}

// Convert<unsigned_short,`FGLTFBoneWeightBufferConverter::Convert<unsigned_short>'::__l2::<lambda_2>_> @ 14e5ba730

FGLTFJsonAccessor * __thiscall
FGLTFBoneWeightBufferConverter::
Convert<unsigned_short,_FGLTFBoneWeightBufferConverter::Convert<unsigned_short>_::__l2::<lambda_2>_>
          (FGLTFBoneWeightBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4,<lambda_2> param_5)

{
  uint uVar1;
  int iVar2;
  FGLTFBufferBuilder *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FGLTFJsonAccessor *pFVar6;
  FGLTFJsonAccessor *pFVar7;
  FGLTFJsonBufferView *pFVar8;
  uint uVar9;
  int iVar10;
  ForAnyElementType local_48;
  int local_40 [2];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  pFVar6 = (FGLTFJsonAccessor *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar1,&local_48,local_40,local_40 + 1);
  if (uVar1 != 0) {
    iVar10 = 4;
    if ((int)(param_5.MaxBoneInfluences - param_3) < 4) {
      iVar10 = param_5.MaxBoneInfluences - param_3;
    }
    pFVar7 = pFVar6;
    do {
      uVar9 = (uint)pFVar7;
      uVar5 = 0;
      if ((int)uVar9 < (param_1->IndexMap).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar6;
      }
      iVar2 = *(int *)((param_1->IndexMap).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      uVar5 = 0;
      if ((int)uVar9 < local_40[0]) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FGLTFJsonAccessor *)(*pcVar3)();
        return pFVar6;
      }
      pFVar7 = pFVar6;
      uVar5 = param_3;
      if (0 < iVar10) {
        do {
          (local_48.Data + (longlong)(int)uVar9 * 4)[(longlong)pFVar7] =
               *(FScriptContainerElement *)
                (param_4 +
                (ulonglong)uVar5 +
                (ulonglong)(iVar2 * param_5.MaxBoneInfluences * 3) +
                (ulonglong)param_5.MaxBoneInfluences * 2);
          pFVar7 = (FGLTFJsonAccessor *)((longlong)&pFVar7->_padding_ + 1);
          uVar5 = uVar5 + 1;
        } while ((longlong)pFVar7 < (longlong)iVar10);
      }
      if (iVar10 < 4) {
        memset(local_48.Data + (longlong)(int)uVar9 * 4 + iVar10,0,(longlong)(4 - iVar10));
      }
      pFVar7 = (FGLTFJsonAccessor *)(ulonglong)(uVar9 + 1);
    } while (uVar9 + 1 < uVar1);
  }
  if (local_40[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar6 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar8 = FGLTFBufferBuilder::AddBufferView
                       (this_00,local_48.Data,(longlong)local_40[0] << 2,ArrayBuffer,'\x04');
    pFVar6->BufferView = pFVar8;
    pFVar6->ComponentType = UInt8;
    pFVar6->Count = local_40[0];
    pFVar6->Type = Vec4;
    pFVar6->bNormalized = true;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return pFVar6;
}

// ConvertToAccessor<unsigned_short,3,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_> @ 14e5bd310

FGLTFJsonAccessor * __cdecl
`anonymous_namespace'::
ConvertToAccessor<unsigned_short,3,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
          (FGLTFConvertBuilder *param_1,
          FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *param_2,bool param_3)

{
  int iVar1;
  FGLTFJsonAccessor *pFVar2;
  FGLTFJsonBufferView *pFVar3;
  
  if (*(int *)&param_2->field_0x8 == 0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar2 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)param_1);
  pFVar3 = FGLTFBufferBuilder::AddBufferView
                     ((FGLTFBufferBuilder *)param_1,*(void **)param_2,
                      (longlong)*(int *)&param_2->field_0x8 << 3,ArrayBuffer,'\x04');
  pFVar2->BufferView = pFVar3;
  pFVar2->ComponentType = UInt16;
  iVar1 = *(int *)&param_2->field_0x8;
  pFVar2->bNormalized = param_3;
  pFVar2->Count = iVar1;
  pFVar2->Type = Vec4;
  return pFVar2;
}

// DefaultConstructItems<FGLTFJsonPrimitive,int> @ 14e5bd3b0

void __cdecl DefaultConstructItems<FGLTFJsonPrimitive,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FGLTFJsonPrimitive__6B_;
      puVar1[-1] = &___7FGLTFJsonAttributes__6B_;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      *(undefined4 *)(puVar1 + 0xc) = 4;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1 = puVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGLTFJsonTarget,int> @ 14e5bd440

void __cdecl DefaultConstructItems<FGLTFJsonTarget,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FGLTFJsonTarget__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`FGLTFDelayedSkeletalMeshTask::ProcessRenderData'::__l2::FTargetDeltas,int> @ 14e5bd470

void __cdecl
DefaultConstructItems<_FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined1 *)(lVar1 + 0x44) = 0;
      lVar1 = lVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGLTFJsonMaterialVariantMapping,int> @ 14e5bdaa0

void __cdecl
DestructItems<FGLTFJsonMaterialVariantMapping,int>
          (FGLTFJsonMaterialVariantMapping *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FGLTFJsonMaterialVariant_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Variants;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGLTFJsonPrimitive,int> @ 14e5bdae0

void __cdecl DestructItems<FGLTFJsonPrimitive,int>(FGLTFJsonPrimitive *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FGLTFJsonMaterialVariantMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->MaterialVariantMappings;
    do {
      pFVar1 = (((TArray<FGLTFJsonTarget,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FGLTFJsonMaterialVariantMapping,int>
                ((FGLTFJsonMaterialVariantMapping *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -4) + 8));
      }
      pFVar1 = (((TArray<FGLTFJsonAccessor_*,TSizedDefaultAllocator<32>_> *)
                ((longlong)(pTVar2 + -5) + 8))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FGLTFJsonMaterialVariantMapping,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 9) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FGLTFDelayedSkeletalMeshTask::ProcessRenderData'::__l2::FTargetDeltas,int> @ 14e5bdb70

void __cdecl
DestructItems<_FGLTFDelayedSkeletalMeshTask::ProcessRenderData_::__l2::FTargetDeltas,int>
          (FTargetDeltas *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Deltas).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_>,int> @ 14e5bdbd0

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_>,int>
          (TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_> *param_1,int param_2)

{
  FGLTFJsonAccessor *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonAccessor *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_>,int> @ 14e5bdc10

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_>,int>
          (TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_> *param_1,int param_2)

{
  FGLTFJsonAnimation *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonAnimation *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonAnimationSampler,TDefaultDelete<FGLTFJsonAnimationSampler>_>,int> @ 14e5bdc50

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonAnimationSampler,TDefaultDelete<FGLTFJsonAnimationSampler>_>,int>
          (TUniquePtr<FGLTFJsonAnimationSampler,TDefaultDelete<FGLTFJsonAnimationSampler>_> *param_1
          ,int param_2)

{
  FGLTFJsonAnimationSampler *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonAnimationSampler *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_>,int> @ 14e5bdc90

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_>,int>
          (TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_> *param_1,int param_2)

{
  FGLTFJsonBuffer *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonBuffer *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_>,int> @ 14e5bdcd0

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_>,int>
          (TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_> *param_1,int param_2
          )

{
  FGLTFJsonBufferView *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonBufferView *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_>,int> @ 14e5bdd10

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_>,int>
          (TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_> *param_1,int param_2)

{
  FGLTFJsonCamera *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonCamera *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_>,int> @ 14e5bdd50

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_>,int>
          (TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_> *param_1,int param_2)

{
  FGLTFJsonImage *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonImage *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_>,int> @ 14e5bdd90

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_>,int>
          (TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_> *param_1,int param_2)

{
  FGLTFJsonLight *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonLight *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_>,int> @ 14e5bddd0

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_>,int>
          (TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_> *param_1,int param_2)

{
  FGLTFJsonLightIES *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonLightIES *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_>,int> @ 14e5bde10

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_>,int>
          (TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_> *param_1
          ,int param_2)

{
  FGLTFJsonLightIESInstance *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonLightIESInstance *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_>,int> @ 14e5bde50

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_>,int>
          (TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_> *param_1,int param_2)

{
  FGLTFJsonLightMap *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonLightMap *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_>,int> @ 14e5bde90

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_>,int>
          (TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_> *param_1,int param_2)

{
  FGLTFJsonMaterial *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonMaterial *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_>,int> @ 14e5bded0

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_>,int>
          (TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_> *param_1,
          int param_2)

{
  FGLTFJsonMaterialVariant *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonMaterialVariant *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_>,int> @ 14e5bdf10

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_>,int>
          (TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_> *param_1,int param_2)

{
  FGLTFJsonMesh *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonMesh *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_>,int> @ 14e5bdf50

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_>,int>
          (TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_> *param_1,int param_2)

{
  FGLTFJsonNode *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonNode *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_>,int> @ 14e5bdf90

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_>,int>
          (TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_> *param_1,int param_2)

{
  FGLTFJsonSampler *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonSampler *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_>,int> @ 14e5bdfd0

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_>,int>
          (TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_> *param_1,int param_2)

{
  FGLTFJsonScene *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonScene *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_>,int> @ 14e5be010

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_>,int>
          (TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_> *param_1,int param_2)

{
  FGLTFJsonSkin *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonSkin *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_>,int> @ 14e5be050

void __cdecl
DestructItems<TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_>,int>
          (TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_> *param_1,int param_2)

{
  FGLTFJsonTexture *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFJsonTexture *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_>,int> @ 14e5be090

void __cdecl
DestructItems<TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_>,int>
          (TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_> *param_1,int param_2)

{
  FGLTFMeshData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFMeshData *)0x0) {
      pFVar2 = (pFVar1->Name).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x20);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,int> @ 14e5be0f0

void __cdecl
DestructItems<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,int>
          (TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_> *param_1,int param_2)

{
  FGLTFMeshSection *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFMeshSection *)0x0) {
      pFVar2 = (pFVar1->BoneMapLookup).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      DestructItems<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,int>
                ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                 (pFVar1->BoneMaps).AllocatorInstance.Data,(pFVar1->BoneMaps).ArrayNum);
      pFVar2 = (pFVar1->BoneMaps).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->IndexBuffer).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->IndexMap).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if (*(void **)&pFVar1->SectionIndices != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar1->SectionIndices);
      }
      pFVar2 = (pFVar1->Name).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x68);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,int> @ 14e5be1b0

void __cdecl
DestructItems<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,int>
          (TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_> *param_1,int param_2)

{
  FGLTFDelayedTask *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FGLTFDelayedTask *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DuplicateObject<UGLTFExportOptions> @ 14e5be1f0

UGLTFExportOptions * __cdecl
DuplicateObject<UGLTFExportOptions>(UGLTFExportOptions *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UGLTFExportOptions *pUVar2;
  
  pUVar1 = UGLTFExportOptions::StaticClass();
  pUVar2 = (UGLTFExportOptions *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3)
  ;
  return pUVar2;
}

// Enqueue<TRenderCommandTag<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::TSTR_ReadRHIBuffer94>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e5c6c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FGLTFBufferUtilities::ReadRHIBuffer_::__l2::TSTR_ReadRHIBuffer94>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::TSTR_ReadRHIBuffer94>::
            Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14e5c6d51;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14e5c6f45;
  }
LAB_14e5c6d51:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14e5c6e2f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e5c6e2f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14e5c6f45:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetBakeSettingsByPredicate<`UGLTFMaterialExportOptions::GetBakeFilterForPropertyGroup'::__l3::<lambda_1>_> @ 14e5c7dd0

FGLTFOverrideMaterialBakeSettings * __cdecl
UGLTFMaterialExportOptions::
GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeFilterForPropertyGroup_::__l3::<lambda_1>_>
          (UMaterialInterface *param_1,EGLTFMaterialPropertyGroup param_2,<lambda_1> param_3)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  UClass *pUVar4;
  longlong lVar5;
  UClass *local_res8;
  
  do {
    if (param_1 == (UMaterialInterface *)0x0) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    pcVar1 = *(code **)(param_1->_padding_ + 0x18);
    local_res8 = StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    lVar3 = (*pcVar1)(&param_1->_padding_,&local_res8);
    if (lVar3 != 0) {
      pUVar4 = StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar4->_padding_)) {
        if (*(int *)(lVar3 + 0x50) != *(int *)(lVar3 + 0x7c)) {
          lVar5 = lVar3 + 0x80;
          if (*(longlong *)(lVar3 + 0x88) != 0) {
            lVar5 = *(longlong *)(lVar3 + 0x88);
          }
          iVar2 = *(int *)(lVar5 + ((ulonglong)(*(int *)(lVar3 + 0x90) - 1) & (ulonglong)param_2) *
                                   4);
          if (iVar2 != -1) {
            lVar5 = *(longlong *)(lVar3 + 0x48);
            do {
              if (*(EGLTFMaterialPropertyGroup *)((longlong)iVar2 * 0x20 + lVar5) == param_2) {
                if ((((iVar2 != -1) && (lVar5 = (longlong)iVar2 * 0x20 + lVar5, lVar5 != 0)) &&
                    ((FGLTFOverrideMaterialBakeSettings *)(lVar5 + 4) !=
                     (FGLTFOverrideMaterialBakeSettings *)0x0)) && (*(char *)(lVar5 + 0x14) != '\0')
                   ) {
                  return (FGLTFOverrideMaterialBakeSettings *)(lVar5 + 4);
                }
                break;
              }
              iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar5);
            } while (iVar2 != -1);
          }
        }
        if (*(char *)(lVar3 + 0x40) != '\0') {
          return (FGLTFOverrideMaterialBakeSettings *)(lVar3 + 0x30);
        }
      }
    }
    pUVar4 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar2) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar4->_padding_) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    if (param_1 == (UMaterialInterface *)0x0) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    param_1 = *(UMaterialInterface **)&param_1[1].SubsurfaceProfiles.ArrayNum;
  } while( true );
}

// GetBakeSettingsByPredicate<`UGLTFMaterialExportOptions::GetBakeSizeForPropertyGroup'::__l3::<lambda_1>_> @ 14e5c7f30

FGLTFOverrideMaterialBakeSettings * __cdecl
UGLTFMaterialExportOptions::
GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeSizeForPropertyGroup_::__l3::<lambda_1>_>
          (UMaterialInterface *param_1,EGLTFMaterialPropertyGroup param_2,<lambda_1> param_3)

{
  FGLTFOverrideMaterialBakeSettings *pFVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  UClass *pUVar5;
  longlong lVar6;
  UClass *local_res8;
  
  do {
    if (param_1 == (UMaterialInterface *)0x0) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    pcVar2 = *(code **)(param_1->_padding_ + 0x18);
    local_res8 = StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    lVar4 = (*pcVar2)(&param_1->_padding_,&local_res8);
    if (lVar4 != 0) {
      pUVar5 = StaticClass();
      iVar3 = (int)pUVar5->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar5->_padding_)) {
        if (*(int *)(lVar4 + 0x50) != *(int *)(lVar4 + 0x7c)) {
          lVar6 = lVar4 + 0x80;
          if (*(longlong *)(lVar4 + 0x88) != 0) {
            lVar6 = *(longlong *)(lVar4 + 0x88);
          }
          iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar4 + 0x90) - 1) & (ulonglong)param_2) *
                                   4);
          if (iVar3 != -1) {
            lVar6 = *(longlong *)(lVar4 + 0x48);
            do {
              if (*(EGLTFMaterialPropertyGroup *)((longlong)iVar3 * 0x20 + lVar6) == param_2) {
                if ((((iVar3 != -1) && (lVar6 = (longlong)iVar3 * 0x20 + lVar6, lVar6 != 0)) &&
                    (pFVar1 = (FGLTFOverrideMaterialBakeSettings *)(lVar6 + 4),
                    pFVar1 != (FGLTFOverrideMaterialBakeSettings *)0x0)) &&
                   (pFVar1->bOverrideSize != false)) {
                  return pFVar1;
                }
                break;
              }
              iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar6);
            } while (iVar3 != -1);
          }
        }
        if (*(char *)(lVar4 + 0x30) != '\0') {
          return (FGLTFOverrideMaterialBakeSettings *)(lVar4 + 0x30);
        }
      }
    }
    pUVar5 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar3) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    if (param_1 == (UMaterialInterface *)0x0) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    param_1 = *(UMaterialInterface **)&param_1[1].SubsurfaceProfiles.ArrayNum;
  } while( true );
}

// GetBakeSettingsByPredicate<`UGLTFMaterialExportOptions::GetBakeTilingForPropertyGroup'::__l3::<lambda_1>_> @ 14e5c8090

FGLTFOverrideMaterialBakeSettings * __cdecl
UGLTFMaterialExportOptions::
GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeTilingForPropertyGroup_::__l3::<lambda_1>_>
          (UMaterialInterface *param_1,EGLTFMaterialPropertyGroup param_2,<lambda_1> param_3)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  UClass *pUVar4;
  longlong lVar5;
  UClass *local_res8;
  
  do {
    if (param_1 == (UMaterialInterface *)0x0) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    pcVar1 = *(code **)(param_1->_padding_ + 0x18);
    local_res8 = StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    lVar3 = (*pcVar1)(&param_1->_padding_,&local_res8);
    if (lVar3 != 0) {
      pUVar4 = StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar4->_padding_)) {
        if (*(int *)(lVar3 + 0x50) != *(int *)(lVar3 + 0x7c)) {
          lVar5 = lVar3 + 0x80;
          if (*(longlong *)(lVar3 + 0x88) != 0) {
            lVar5 = *(longlong *)(lVar3 + 0x88);
          }
          iVar2 = *(int *)(lVar5 + ((ulonglong)(*(int *)(lVar3 + 0x90) - 1) & (ulonglong)param_2) *
                                   4);
          if (iVar2 != -1) {
            lVar5 = *(longlong *)(lVar3 + 0x48);
            do {
              if (*(EGLTFMaterialPropertyGroup *)((longlong)iVar2 * 0x20 + lVar5) == param_2) {
                if ((((iVar2 != -1) && (lVar5 = (longlong)iVar2 * 0x20 + lVar5, lVar5 != 0)) &&
                    ((FGLTFOverrideMaterialBakeSettings *)(lVar5 + 4) !=
                     (FGLTFOverrideMaterialBakeSettings *)0x0)) && (*(char *)(lVar5 + 0x16) != '\0')
                   ) {
                  return (FGLTFOverrideMaterialBakeSettings *)(lVar5 + 4);
                }
                break;
              }
              iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar5);
            } while (iVar2 != -1);
          }
        }
        if (*(char *)(lVar3 + 0x42) != '\0') {
          return (FGLTFOverrideMaterialBakeSettings *)(lVar3 + 0x30);
        }
      }
    }
    pUVar4 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar2) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar4->_padding_) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    if (param_1 == (UMaterialInterface *)0x0) {
      return (FGLTFOverrideMaterialBakeSettings *)0x0;
    }
    param_1 = *(UMaterialInterface **)&param_1[1].SubsurfaceProfiles.ArrayNum;
  } while( true );
}

// GetTypeName<ULevelVariantSets> @ 14e5c8210

FString * __cdecl GetTypeName<ULevelVariantSets>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ULevelVariantSets_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FGLTFJsonBuilder::ValidateAndFixGLTFJson'::__l10::<lambda_1>_>_> @ 14e5c8250

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FGLTFJsonBuilder::ValidateAndFixGLTFJson_::__l10::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_void___cdecl_FGLTFJsonBuilder::ValidateAndFixGLTFJson(void)_::_10_::<lambda_1>_>
          param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar2 = iVar6;
  iVar7 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_14e5c832e:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar9 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar2 = *param_1;
            iVar5 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar2;
            if (1 < iVar6) {
              do {
                iVar2 = iVar5 * 2;
                iVar7 = iVar2 + 1;
                if (iVar2 + 2 < iVar6) {
                  if (param_1[iVar7] < param_1[(longlong)iVar2 + 2]) {
                    iVar7 = iVar2;
                  }
                  iVar7 = iVar7 + 1;
                }
                iVar2 = param_1[iVar5];
                if (iVar2 <= param_1[iVar7]) break;
                param_1[iVar5] = param_1[iVar7];
                param_1[iVar7] = iVar2;
                iVar5 = iVar7;
              } while (iVar7 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar5 = iVar7 + -1;
      iVar6 = iVar2 + -2;
      iVar2 = iVar6;
      iVar7 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[iVar8] < param_1[(longlong)iVar6 + 2]) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar1 = param_1[iVar5];
    if (iVar1 <= param_1[iVar8]) goto LAB_14e5c832e;
    param_1[iVar5] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = iVar1;
    iVar5 = iVar8;
  } while( true );
}

// InternalConstructor<UGLTFAnimSequenceExporter> @ 14e5c9fc0

void __cdecl InternalConstructor<UGLTFAnimSequenceExporter>(FObjectInitializer *param_1)

{
  UGLTFExporter *this;
  UClass *pUVar1;
  
  this = (UGLTFExporter *)param_1->Obj;
  if (this != (UGLTFExporter *)0x0) {
    UGLTFExporter::UGLTFExporter(this,param_1);
    *(undefined ***)this = &___7UGLTFAnimSequenceExporter__6B_;
    pUVar1 = Z_Construct_UClass_UAnimSequence_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this->field_0x28 = pUVar1;
  }
  return;
}

// InternalConstructor<UGLTFExportOptions> @ 14e5ca020

void __cdecl InternalConstructor<UGLTFExportOptions>(FObjectInitializer *param_1)

{
  UObject *this;
  int iVar1;
  undefined3 uVar2;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UGLTFExportOptions__6B_;
    *(undefined4 *)&this[1].field_0x10 = 1;
    *(undefined4 *)&this[1].field_0x14 = 1;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x24 = 0x80;
    *(undefined4 *)(this + 3) = 0xffffffff;
    *(undefined4 *)&this[3].field_0x4 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x18 = 0;
    *(undefined4 *)(this + 1) = 0x3c23d70a;
    *(undefined4 *)&this[1].field_0x4 = 0x1000101;
    *(undefined4 *)&this[1].field_0x8 = 0x1010101;
    *(undefined4 *)&this[1].field_0xc = 0x2010100;
    iVar1 = FGLTFMaterialBakeSize::Default.Y;
    *(int *)&this[1].field_0x10 = FGLTFMaterialBakeSize::Default.X;
    *(int *)&this[1].field_0x14 = iVar1;
    uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
    this[1].field_0x18 = FGLTFMaterialBakeSize::Default.bAutoDetect;
    *(undefined3 *)&this[1].field_0x19 = uVar2;
    *(undefined2 *)&this[1].field_0x1c = 2;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x24 = 0x1010000;
    *(undefined4 *)(this + 4) = 0x1010100;
    this[4].field_0x4 = 1;
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0xc = 0x10001;
    *(undefined2 *)&this[4].field_0x10 = 0x101;
    this[4].field_0x12 = 2;
  }
  return;
}

// InternalConstructor<UGLTFExporter> @ 14e5ca110

void __cdecl InternalConstructor<UGLTFExporter>(FObjectInitializer *param_1)

{
  if ((UGLTFExporter *)param_1->Obj != (UGLTFExporter *)0x0) {
    UGLTFExporter::UGLTFExporter((UGLTFExporter *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGLTFLevelExporter> @ 14e5ca130

void __cdecl InternalConstructor<UGLTFLevelExporter>(FObjectInitializer *param_1)

{
  UGLTFExporter *this;
  UClass *pUVar1;
  
  this = (UGLTFExporter *)param_1->Obj;
  if (this != (UGLTFExporter *)0x0) {
    UGLTFExporter::UGLTFExporter(this,param_1);
    *(undefined ***)this = &___7UGLTFLevelExporter__6B_;
    pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this->field_0x28 = pUVar1;
  }
  return;
}

// InternalConstructor<UGLTFLevelSequenceExporter> @ 14e5ca190

void __cdecl InternalConstructor<UGLTFLevelSequenceExporter>(FObjectInitializer *param_1)

{
  UGLTFExporter *this;
  UClass *pUVar1;
  
  this = (UGLTFExporter *)param_1->Obj;
  if (this != (UGLTFExporter *)0x0) {
    UGLTFExporter::UGLTFExporter(this,param_1);
    *(undefined ***)this = &___7UGLTFLevelSequenceExporter__6B_;
    pUVar1 = Z_Construct_UClass_ULevelSequence_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this->field_0x28 = pUVar1;
  }
  return;
}

// InternalConstructor<UGLTFLevelVariantSetsExporter> @ 14e5ca1f0

void __cdecl InternalConstructor<UGLTFLevelVariantSetsExporter>(FObjectInitializer *param_1)

{
  UGLTFExporter *this;
  UClass *pUVar1;
  
  this = (UGLTFExporter *)param_1->Obj;
  if (this != (UGLTFExporter *)0x0) {
    UGLTFExporter::UGLTFExporter(this,param_1);
    *(undefined ***)this = &___7UGLTFLevelVariantSetsExporter__6B_;
    pUVar1 = Z_Construct_UClass_ULevelVariantSets_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this->field_0x28 = pUVar1;
  }
  return;
}

// InternalConstructor<UGLTFMaterialExportOptions> @ 14e5ca250

void __cdecl InternalConstructor<UGLTFMaterialExportOptions>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  int iVar1;
  undefined3 uVar2;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7UGLTFMaterialExportOptions__6B_;
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x8 = 0;
    iVar1 = FGLTFMaterialBakeSize::Default.Y;
    *(int *)&this[1].field_0xc = FGLTFMaterialBakeSize::Default.X;
    *(int *)&this[1].field_0x10 = iVar1;
    uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
    this[1].field_0x14 = FGLTFMaterialBakeSize::Default.bAutoDetect;
    *(undefined3 *)&this[1].field_0x15 = uVar2;
    *(undefined4 *)&this[1].field_0x18 = 0x200;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x24 = 0x80;
    *(undefined4 *)(this + 3) = 0xffffffff;
    *(undefined4 *)&this[3].field_0x4 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UGLTFMaterialExporter> @ 14e5ca2e0

void __cdecl InternalConstructor<UGLTFMaterialExporter>(FObjectInitializer *param_1)

{
  UGLTFExporter *this;
  UClass *pUVar1;
  
  this = (UGLTFExporter *)param_1->Obj;
  if (this != (UGLTFExporter *)0x0) {
    UGLTFExporter::UGLTFExporter(this,param_1);
    *(undefined ***)this = &___7UGLTFMaterialExporter__6B_;
    pUVar1 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this->field_0x28 = pUVar1;
  }
  return;
}

// InternalConstructor<UGLTFProxyOptions> @ 14e5ca340

void __cdecl InternalConstructor<UGLTFProxyOptions>(FObjectInitializer *param_1)

{
  UObject *this;
  int iVar1;
  undefined3 uVar2;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UGLTFProxyOptions__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x4 = 1;
    *(undefined4 *)&this[1].field_0x8 = 1;
    this[1].field_0xc = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined2 *)(this + 1) = 1;
    iVar1 = FGLTFMaterialBakeSize::Default.Y;
    *(int *)&this[1].field_0x4 = FGLTFMaterialBakeSize::Default.X;
    *(int *)&this[1].field_0x8 = iVar1;
    uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
    this[1].field_0xc = FGLTFMaterialBakeSize::Default.bAutoDetect;
    *(undefined3 *)&this[1].field_0xd = uVar2;
    *(undefined2 *)&this[1].field_0x10 = 2;
  }
  return;
}

// InternalConstructor<UGLTFSkeletalMeshExporter> @ 14e5ca3e0

void __cdecl InternalConstructor<UGLTFSkeletalMeshExporter>(FObjectInitializer *param_1)

{
  UGLTFExporter *this;
  UClass *pUVar1;
  
  this = (UGLTFExporter *)param_1->Obj;
  if (this != (UGLTFExporter *)0x0) {
    UGLTFExporter::UGLTFExporter(this,param_1);
    *(undefined ***)this = &___7UGLTFSkeletalMeshExporter__6B_;
    pUVar1 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this->field_0x28 = pUVar1;
  }
  return;
}

// InternalConstructor<UGLTFStaticMeshExporter> @ 14e5ca440

void __cdecl InternalConstructor<UGLTFStaticMeshExporter>(FObjectInitializer *param_1)

{
  UGLTFExporter *this;
  UClass *pUVar1;
  
  this = (UGLTFExporter *)param_1->Obj;
  if (this != (UGLTFExporter *)0x0) {
    UGLTFExporter::UGLTFExporter(this,param_1);
    *(undefined ***)this = &___7UGLTFStaticMeshExporter__6B_;
    pUVar1 = Z_Construct_UClass_UStaticMesh_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this->field_0x28 = pUVar1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UGLTFAnimSequenceExporter> @ 14e5ca4a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFAnimSequenceExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UExporter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFAnimSequenceExporter::GetPrivateStaticClass();
  this = (UExporter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UExporter *)0x0) {
    UExporter::UExporter(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFAnimSequenceExporter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFExportOptions> @ 14e5ca550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFExportOptions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFExportOptions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGLTFExportOptions__6B_;
    *(undefined4 *)&pUVar1[1].field_0x10 = 1;
    *(undefined4 *)&pUVar1[1].field_0x14 = 1;
    pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 3) = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFExporter> @ 14e5ca640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UExporter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFExporter::GetPrivateStaticClass();
  this = (UExporter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UExporter *)0x0) {
    UExporter::UExporter(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFExporter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFLevelExporter> @ 14e5ca6f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFLevelExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UExporter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFLevelExporter::GetPrivateStaticClass();
  this = (UExporter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UExporter *)0x0) {
    UExporter::UExporter(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFLevelExporter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFLevelSequenceExporter> @ 14e5ca7a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFLevelSequenceExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UExporter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFLevelSequenceExporter::GetPrivateStaticClass();
  this = (UExporter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UExporter *)0x0) {
    UExporter::UExporter(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFLevelSequenceExporter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFLevelVariantSetsExporter> @ 14e5ca850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGLTFLevelVariantSetsExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UExporter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFLevelVariantSetsExporter::GetPrivateStaticClass();
  this = (UExporter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UExporter *)0x0) {
    UExporter::UExporter(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFLevelVariantSetsExporter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFMaterialExportOptions> @ 14e5ca900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFMaterialExportOptions>(FVTableHelper *param_1)

{
  int iVar1;
  undefined3 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UGLTFMaterialExportOptions::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar3,param_1);
    *(undefined ***)pUVar3 = &___7UGLTFMaterialExportOptions__6B_;
    *(undefined8 *)(pUVar3 + 1) = 0;
    pUVar3[1].field_0x8 = 0;
    iVar1 = FGLTFMaterialBakeSize::Default.Y;
    *(int *)&pUVar3[1].field_0xc = FGLTFMaterialBakeSize::Default.X;
    *(int *)&pUVar3[1].field_0x10 = iVar1;
    uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
    pUVar3[1].field_0x14 = FGLTFMaterialBakeSize::Default.bAutoDetect;
    *(undefined3 *)&pUVar3[1].field_0x15 = uVar2;
    *(undefined4 *)&pUVar3[1].field_0x18 = 0x200;
    *(undefined8 *)&pUVar3[1].field_0x20 = 0;
    *(undefined8 *)(pUVar3 + 2) = 0;
    *(undefined8 *)&pUVar3[2].field_0x18 = 0;
    *(undefined4 *)&pUVar3[2].field_0x20 = 0;
    *(undefined4 *)&pUVar3[2].field_0x24 = 0x80;
    *(undefined4 *)(pUVar3 + 3) = 0xffffffff;
    *(undefined4 *)&pUVar3[3].field_0x4 = 0;
    *(undefined8 *)&pUVar3[3].field_0x10 = 0;
    *(undefined4 *)&pUVar3[3].field_0x18 = 0;
    return pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFMaterialExporter> @ 14e5caa00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFMaterialExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UExporter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFMaterialExporter::GetPrivateStaticClass();
  this = (UExporter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UExporter *)0x0) {
    UExporter::UExporter(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFMaterialExporter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFProxyOptions> @ 14e5caab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFProxyOptions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFProxyOptions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGLTFProxyOptions__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 1;
    *(undefined4 *)&pUVar1[1].field_0x8 = 1;
    pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFSkeletalMeshExporter> @ 14e5caba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFSkeletalMeshExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UExporter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFSkeletalMeshExporter::GetPrivateStaticClass();
  this = (UExporter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UExporter *)0x0) {
    UExporter::UExporter(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFSkeletalMeshExporter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGLTFStaticMeshExporter> @ 14e5cac50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGLTFStaticMeshExporter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UExporter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGLTFStaticMeshExporter::GetPrivateStaticClass();
  this = (UExporter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UExporter *)0x0) {
    UExporter::UExporter(this,param_1);
    this->_padding_ = (longlong)&___7UGLTFStaticMeshExporter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FGLTFJsonBuilder::ValidateAndFixGLTFJson'::__l10::<lambda_1>_>_> @ 14e5cad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FGLTFJsonBuilder::ValidateAndFixGLTFJson_::__l10::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_void___cdecl_FGLTFJsonBuilder::ValidateAndFixGLTFJson(void)_::_10_::<lambda_1>_>
          param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  int *local_338;
  int *local_328;
  int *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppiVar5 = &local_328;
    do {
      piVar8 = ppiVar5[1];
      piVar4 = *ppiVar5;
      piVar1 = ppiVar5[2];
      iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
      local_338._0_4_ = (int)piVar1;
      piVar9 = piVar4;
      if ((int)local_338 != 0) {
LAB_14e5cadb0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar6 = piVar8 + 1;
          iVar2 = piVar9[iVar3 >> 1];
          piVar9[iVar3 >> 1] = *piVar9;
          *piVar9 = iVar2;
          piVar4 = piVar9;
LAB_14e5cade0:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar8) goto code_r0x00014e5cade9;
          goto LAB_14e5cadf0;
        }
        for (; piVar4 = piVar9, piVar1 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -1) {
          while (piVar1 = piVar1 + 1, piVar1 <= piVar8) {
            if (*piVar1 < *piVar4) {
              piVar4 = piVar1;
            }
          }
          iVar3 = *piVar4;
          *piVar4 = *piVar8;
          *piVar8 = iVar3;
        }
        goto LAB_14e5caea8;
      }
LAB_14e5cae97:
      local_338 = piVar1;
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FGLTFJsonBuilder::ValidateAndFixGLTFJson_::__l10::<lambda_1>_>_>
                (piVar4,iVar3,param_3,param_4);
LAB_14e5caea8:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_328 <= ppiVar5);
  }
  return;
code_r0x00014e5cade9:
  if (*piVar9 <= *piVar4) goto LAB_14e5cade0;
LAB_14e5cadf0:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar9) break;
  } while (*piVar6 <= *piVar9);
  if (piVar4 <= piVar6) {
    iVar3 = *piVar4;
    *piVar4 = *piVar6;
    *piVar6 = iVar3;
    goto LAB_14e5cade0;
  }
  iVar3 = *piVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *piVar9 = *piVar6;
  *piVar6 = iVar3;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar8) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar8;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar6 <= piVar9 + 1) goto LAB_14e5caea8;
    piVar8 = piVar7 + -2;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar6) {
      *ppiVar5 = piVar9;
      ppiVar5[1] = piVar7 + -2;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_14e5caea8;
  }
  iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
  piVar9 = piVar4;
  if ((int)local_338 == 0) goto LAB_14e5cae97;
  goto LAB_14e5cadb0;
}

// IsObjectPtrEqual<ULandscapeLayerInfoObject,ULandscapeLayerInfoObject_*,0> @ 14e5caf70

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<ULandscapeLayerInfoObject,ULandscapeLayerInfoObject_*,0>
          (TObjectPtr<ULandscapeLayerInfoObject> *param_1,ULandscapeLayerInfoObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULandscapeLayerInfoObject *)0x0) {
    return *param_2 == (ULandscapeLayerInfoObject *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LexToString<FString,char> @ 14e5caf90

FString * __cdecl LexToString<FString,char>(FString *__return_storage_ptr__,char *param_1)

{
  FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// MakeShared<FGLTFMemoryArchive,1> @ 14e5cafb0

TSharedRef<FGLTFMemoryArchive,1> * __cdecl
MakeShared<FGLTFMemoryArchive,1>(TSharedRef<FGLTFMemoryArchive,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FGLTFMemoryArchive,1> *pTVar4;
  
  pTVar3 = operator_new(0xc0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FGLTFMemoryArchive *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFGLTFMemoryArchive___00_SharedPointerInternals__6B_;
    FGLTFMemoryArchive::FGLTFMemoryArchive((FGLTFMemoryArchive *)(pTVar3 + 1));
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FGLTFMemoryArchive *)(pTVar3 + 1);
    if ((FGLTFMemoryArchive *)(pTVar3 + 1) == (FGLTFMemoryArchive *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FGLTFMemoryArchive,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UGLTFExportOptions> @ 14e5cb060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGLTFExportOptions * __cdecl NewObject<UGLTFExportOptions>(UObject *param_1)

{
  UClass *pUVar1;
  UGLTFExportOptions *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGLTFExportOptions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGLTFExportOptions *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGLTFMaterialExportOptions> @ 14e5cb100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGLTFMaterialExportOptions * __cdecl
NewObject<UGLTFMaterialExportOptions>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UGLTFMaterialExportOptions *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UGLTFMaterialExportOptions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UGLTFMaterialExportOptions *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EGLTFMaterialBakeMode> @ 14e5cb550

UEnum * __cdecl StaticEnum<enum_EGLTFMaterialBakeMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode,(UObject *)pUVar1,
                       L"EGLTFMaterialBakeMode");
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton;
}

// StaticEnum<enum_EGLTFMaterialPropertyGroup> @ 14e5cb590

UEnum * __cdecl StaticEnum<enum_EGLTFMaterialPropertyGroup>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup,(UObject *)pUVar1,
                       L"EGLTFMaterialPropertyGroup");
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton;
}

// StaticEnum<enum_EGLTFMaterialVariantMode> @ 14e5cb5d0

UEnum * __cdecl StaticEnum<enum_EGLTFMaterialVariantMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode,(UObject *)pUVar1,
                       L"EGLTFMaterialVariantMode");
  }
  return Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton;
}

// StaticEnum<enum_EGLTFTextureImageFormat> @ 14e5cb610

UEnum * __cdecl StaticEnum<enum_EGLTFTextureImageFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GLTFExporter();
    Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat,(UObject *)pUVar1,
                       L"EGLTFTextureImageFormat");
  }
  return Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton;
}

// ~TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>,1,1> @ 14e5d3a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FGLTFBufferUtilities::ReadRHIBuffer_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::`2'::<lambda_1>,1,1>::_vftable_
  ;
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d82f8

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,struct FGLTFMeshSection const
   * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d82fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8304

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,struct FGLTFMeshSection const
   * __ptr64,class TMap<unsigned int,struct UE::Math::TVector<float>,class
   FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<unsigned int,struct
   UE::Math::TVector<float>,0> > const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const*___ptr64>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8310

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,struct FGLTFMeshSection const
   * __ptr64,class TMap<unsigned int,struct UE::Math::TVector<float>,class
   FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<unsigned int,struct
   UE::Math::TVector<float>,0> > const * __ptr64,bool>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const*___ptr64,bool>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const*___ptr64,bool>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d831c

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,struct FGLTFMeshSection const
   * __ptr64,class FColorVertexBuffer const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FColorVertexBuffer_const*___ptr64>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FColorVertexBuffer_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d831f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8328

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,struct FGLTFMeshSection const
   * __ptr64,class FPositionVertexBuffer const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FPositionVertexBuffer_const*___ptr64>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FPositionVertexBuffer_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d832b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8334

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,struct FGLTFMeshSection const
   * __ptr64,class FSkinWeightVertexBuffer const * __ptr64,unsigned int>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FSkinWeightVertexBuffer_const*___ptr64,unsigned_int>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FSkinWeightVertexBuffer_const*___ptr64,unsigned_int>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8340

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,struct FGLTFMeshSection const
   * __ptr64,class FStaticMeshVertexBuffer const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FStaticMeshVertexBuffer_const*___ptr64>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FStaticMeshVertexBuffer_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d834c

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,struct FGLTFMeshSection const
   * __ptr64,class FStaticMeshVertexBuffer const * __ptr64,unsigned int>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FStaticMeshVertexBuffer_const*___ptr64,unsigned_int>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64,FStaticMeshVertexBuffer_const*___ptr64,unsigned_int>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d834f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8358

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,class
   FMeshAttributesArray<int>,class FString>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<int>,FString>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<int>,FString> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d835b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8364

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,class
   FMeshAttributesArray<struct UE::Math::TIntVector4<unsigned short> > >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8370

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,class
   FMeshAttributesArray<struct UE::Math::TVector2<float> > >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector2<float>_>_>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d837c

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,class
   FMeshAttributesArray<struct UE::Math::TVector4<float> > >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector4<float>_>_>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d837f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8388

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,class
   FMeshAttributesArray<struct UE::Math::TVector<float> > >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector<float>_>_>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector<float>_>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d838b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8394

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,class
   FMeshAttributesArray<struct UE::Math::TVector<float> >,bool>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d83a0

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAccessor * __ptr64,class
   FMeshAttributesArray<struct FColor> >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<FColor>_>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<FColor>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d83a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d83ac

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAnimation * __ptr64,struct FGLTFJsonNode *
   __ptr64,class USkeletalMesh const * __ptr64,class UAnimSequence const *
   __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAnimation*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,UAnimSequence_const*___ptr64>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAnimation*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,UAnimSequence_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d83af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d83b8

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAnimation * __ptr64,struct FGLTFJsonNode *
   __ptr64,class USkeletalMeshComponent const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAnimation*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMeshComponent_const*___ptr64>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAnimation*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMeshComponent_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d83bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d83c4

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAnimation * __ptr64,class ALevelSequenceActor
   const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAnimation*___ptr64,ALevelSequenceActor_const*___ptr64>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAnimation*___ptr64,ALevelSequenceActor_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d83c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d83d0

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonAnimation * __ptr64,class ULevel const *
   __ptr64,class ULevelSequence const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonAnimation*___ptr64,ULevel_const*___ptr64,ULevelSequence_const*___ptr64>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonAnimation*___ptr64,ULevel_const*___ptr64,ULevelSequence_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d83d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d83dc

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonCamera * __ptr64,class UCameraComponent const *
   __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonCamera*___ptr64,UCameraComponent_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonCamera*___ptr64,UCameraComponent_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d83df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d83e8

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonImage * __ptr64,class TGLTFSuperfluous<class
   FString>,bool,struct UE::Math::TIntPoint<int>,class TGLTFSharedArray<struct FColor,class
   TArray<struct FColor,class TSizedDefaultAllocator<32> >,1> >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonImage*___ptr64,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonImage*___ptr64,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d83eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d83f4

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonLight * __ptr64,class ULightComponent const *
   __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonLight*___ptr64,ULightComponent_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonLight*___ptr64,ULightComponent_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d83f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8400

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonLightIES * __ptr64,class ULightComponent const *
   __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonLightIES*___ptr64,ULightComponent_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonLightIES*___ptr64,ULightComponent_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d840c

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonLightIESInstance * __ptr64,class ULightComponent
   const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonLightIESInstance*___ptr64,ULightComponent_const*___ptr64>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonLightIESInstance*___ptr64,ULightComponent_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d840f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8418

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonLightMap * __ptr64,class UStaticMeshComponent
   const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonLightMap*___ptr64,UStaticMeshComponent_const*___ptr64>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonLightMap*___ptr64,UStaticMeshComponent_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d841b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8424

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonMaterial * __ptr64,class UMaterialInterface const
   * __ptr64,struct FGLTFMeshData const * __ptr64,class FMeshAttributesArray<int>
   >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonMaterial*___ptr64,UMaterialInterface_const*___ptr64,FGLTFMeshData_const*___ptr64,FMeshAttributesArray<int>_>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonMaterial*___ptr64,UMaterialInterface_const*___ptr64,FGLTFMeshData_const*___ptr64,FMeshAttributesArray<int>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8430

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonMaterialVariant * __ptr64,class UVariant const *
   __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonMaterialVariant*___ptr64,UVariant_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonMaterialVariant*___ptr64,UVariant_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d843c

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonMesh * __ptr64,class ULandscapeComponent const *
   __ptr64,class UMaterialInterface const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonMesh*___ptr64,ULandscapeComponent_const*___ptr64,UMaterialInterface_const*___ptr64>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonMesh*___ptr64,ULandscapeComponent_const*___ptr64,UMaterialInterface_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d843f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8448

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonMesh * __ptr64,class USkeletalMesh const *
   __ptr64,class USkeletalMeshComponent const * __ptr64,class
   FGLTFMaterialArray,int>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonMesh*___ptr64,USkeletalMesh_const*___ptr64,USkeletalMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonMesh*___ptr64,USkeletalMesh_const*___ptr64,USkeletalMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d844b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8454

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonMesh * __ptr64,class UStaticMesh const *
   __ptr64,class USplineMeshComponent const * __ptr64,class
   FGLTFMaterialArray,int>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonMesh*___ptr64,UStaticMesh_const*___ptr64,USplineMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonMesh*___ptr64,UStaticMesh_const*___ptr64,USplineMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8460

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonMesh * __ptr64,class UStaticMesh const *
   __ptr64,class UStaticMeshComponent const * __ptr64,class
   FGLTFMaterialArray,int>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonMesh*___ptr64,UStaticMesh_const*___ptr64,UStaticMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonMesh*___ptr64,UStaticMesh_const*___ptr64,UStaticMeshComponent_const*___ptr64,FGLTFMaterialArray,int>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d846c

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonNode * __ptr64,struct FGLTFJsonNode *
   __ptr64,class USkeletalMesh const * __ptr64,int>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,int>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,int>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d846f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8478

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonNode * __ptr64,struct FGLTFJsonNode *
   __ptr64,class USkeletalMesh const * __ptr64,class FName>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,FName>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64,FName>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d847b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8484

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonNode * __ptr64,struct FGLTFJsonNode *
   __ptr64,class UStaticMesh const * __ptr64,class FName>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,UStaticMesh_const*___ptr64,FName>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonNode*___ptr64,FGLTFJsonNode*___ptr64,UStaticMesh_const*___ptr64,FName>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8490

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonNode * __ptr64,class AActor const *
   __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonNode*___ptr64,AActor_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonNode*___ptr64,AActor_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d849c

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonNode * __ptr64,class USceneComponent const *
   __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonNode*___ptr64,USceneComponent_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonNode*___ptr64,USceneComponent_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d849f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d84a8

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonNode * __ptr64,class USceneComponent const *
   __ptr64,class FName>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonNode*___ptr64,USceneComponent_const*___ptr64,FName>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonNode*___ptr64,USceneComponent_const*___ptr64,FName> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d84ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d84b4

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonSampler * __ptr64,enum TextureAddress,enum
   TextureAddress,enum TextureFilter,enum TextureGroup>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonSampler*___ptr64,TextureAddress,TextureAddress,TextureFilter,TextureGroup>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonSampler*___ptr64,TextureAddress,TextureAddress,TextureFilter,TextureGroup>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d84b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d84c0

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonScene * __ptr64,class UWorld const *
   __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonScene*___ptr64,UWorld_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonScene*___ptr64,UWorld_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d84c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d84cc

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonSkin * __ptr64,struct FGLTFJsonNode *
   __ptr64,class USkeletalMesh const * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonSkin*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonSkin*___ptr64,FGLTFJsonNode*___ptr64,USkeletalMesh_const*___ptr64>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d84cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d84d8

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonTexture * __ptr64,class ULightMapTexture2D const
   * __ptr64>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonTexture*___ptr64,ULightMapTexture2D_const*___ptr64>::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonTexture*___ptr64,ULightMapTexture2D_const*___ptr64> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d84db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d84e4

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonTexture * __ptr64,class UTexture2D const *
   __ptr64,bool,enum TextureAddress,enum TextureAddress>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonTexture*___ptr64,UTexture2D_const*___ptr64,bool,TextureAddress,TextureAddress>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonTexture*___ptr64,UTexture2D_const*___ptr64,bool,TextureAddress,TextureAddress>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d84e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d84f0

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFJsonTexture * __ptr64,class UTextureRenderTarget2D
   const * __ptr64,bool>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFJsonTexture*___ptr64,UTextureRenderTarget2D_const*___ptr64,bool>::
_vcall__16__flat______
          (TGLTFConverter<FGLTFJsonTexture*___ptr64,UTextureRenderTarget2D_const*___ptr64,bool>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d84f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d84fc

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFMeshData const * __ptr64,class USkeletalMesh const *
   __ptr64,class USkeletalMeshComponent const * __ptr64,int>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFMeshData_const*___ptr64,USkeletalMesh_const*___ptr64,USkeletalMeshComponent_const*___ptr64,int>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFMeshData_const*___ptr64,USkeletalMesh_const*___ptr64,USkeletalMeshComponent_const*___ptr64,int>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d84ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8508

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFMeshData const * __ptr64,class UStaticMesh const *
   __ptr64,class UStaticMeshComponent const * __ptr64,int>::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFMeshData_const*___ptr64,UStaticMesh_const*___ptr64,UStaticMeshComponent_const*___ptr64,int>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFMeshData_const*___ptr64,UStaticMesh_const*___ptr64,UStaticMeshComponent_const*___ptr64,int>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d850b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8514

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFMeshSection const * __ptr64,class USkeletalMesh const
   * __ptr64,int,class FMeshAttributesArray<int> >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFMeshSection_const*___ptr64,USkeletalMesh_const*___ptr64,int,FMeshAttributesArray<int>_>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFMeshSection_const*___ptr64,USkeletalMesh_const*___ptr64,int,FMeshAttributesArray<int>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14e5d8520

/* [thunk]: __cdecl TGLTFConverter<struct FGLTFMeshSection const * __ptr64,class UStaticMesh const *
   __ptr64,int,class FMeshAttributesArray<int> >::`vcall'{16,{flat}}' }' */

void __thiscall
TGLTFConverter<FGLTFMeshSection_const*___ptr64,UStaticMesh_const*___ptr64,int,FMeshAttributesArray<int>_>
::_vcall__16__flat______
          (TGLTFConverter<FGLTFMeshSection_const*___ptr64,UStaticMesh_const*___ptr64,int,FMeshAttributesArray<int>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5d8523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// `scalar_deleting_destructor' @ 14e5d8530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::`2'::<lambda_1>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8570

void * __thiscall
TGLTFConverter<float,FMeshDescription_const_*,FMeshAttributesArray<int>,int>::
_scalar_deleting_destructor_
          (TGLTFConverter<float,FMeshDescription_const_*,FMeshAttributesArray<int>,int> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d85d0

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8630

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8690

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d86f0

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8750

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d87b0

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8810

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8870

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d88d0

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8930

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8990

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d89f0

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8a50

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8ab0

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8b10

void * __thiscall
TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8b70

void * __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8bd0

void * __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *this
          ,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8c30

void * __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8c90

void * __thiscall
TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8cf0

void * __thiscall
TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8d50

void * __thiscall
TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8db0

void * __thiscall
TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8e10

void * __thiscall
TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8e70

void * __thiscall
TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8ed0

void * __thiscall
TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8f30

void * __thiscall
TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8f90

void * __thiscall
TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d8ff0

void * __thiscall
TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9050

void * __thiscall
TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d90b0

void * __thiscall
TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9110

void * __thiscall
TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9170

void * __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d91d0

void * __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9230

void * __thiscall
TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9290

void * __thiscall
TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d92f0

void * __thiscall
TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9350

void * __thiscall
TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d93b0

void * __thiscall
TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,FGLTFJsonSampler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,FGLTFJsonSampler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9410

void * __thiscall
TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9470

void * __thiscall
TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d94d0

void * __thiscall
TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9530

void * __thiscall
TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9590

void * __thiscall
TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>::_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> *this,uint param_1
          )

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d95f0

void * __thiscall
TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9650

void * __thiscall
TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d96b0

void * __thiscall
TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9710

void * __thiscall
TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>::
_scalar_deleting_destructor_
          (TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9770

void * __thiscall
TGLTFConverter<UE::Math::TBox2<float>,FMeshDescription_const_*,FMeshAttributesArray<int>,int>::
_scalar_deleting_destructor_
          (TGLTFConverter<UE::Math::TBox2<float>,FMeshDescription_const_*,FMeshAttributesArray<int>,int>
           *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedOutputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedOutputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedOutputs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d97d0

void * __thiscall
TGLTFJsonColor<TGLTFColor4<float>_>::_scalar_deleting_destructor_
          (TGLTFJsonColor<TGLTFColor4<float>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9800

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonAccessor,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonAccessor,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_>,int>
            ((TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9850

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonAnimation,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonAnimation,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_>,int>
            ((TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d98a0

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonAnimationSampler,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonAnimationSampler,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonAnimationSampler,TDefaultDelete<FGLTFJsonAnimationSampler>_>,int>
            ((TUniquePtr<FGLTFJsonAnimationSampler,TDefaultDelete<FGLTFJsonAnimationSampler>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d98f0

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonBuffer,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonBuffer,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_>,int>
            ((TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9940

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonBufferView,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonBufferView,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_>,int>
            ((TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9990

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonCamera,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonCamera,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_>,int>
            ((TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d99e0

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonImage,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonImage,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_>,int>
            ((TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9a30

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonLight,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonLight,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_>,int>
            ((TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9a80

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonLightIES,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonLightIES,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_>,int>
            ((TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9ad0

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonLightIESInstance,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonLightIESInstance,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_>,int>
            ((TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9b20

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonLightMap,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonLightMap,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_>,int>
            ((TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9b70

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonMaterial,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonMaterial,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_>,int>
            ((TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9bc0

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonMaterialVariant,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonMaterialVariant,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_>,int>
            ((TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9c10

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonMesh,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonMesh,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_>,int>
            ((TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9c60

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonNode,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonNode,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_>,int>
            ((TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9cb0

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonSampler,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonSampler,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_>,int>
            ((TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9d00

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonScene,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonScene,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_>,int>
            ((TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9d50

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonSkin,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonSkin,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_>,int>
            ((TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9da0

void * __thiscall
TGLTFJsonIndexedObjectArray<FGLTFJsonTexture,void>::_scalar_deleting_destructor_
          (TGLTFJsonIndexedObjectArray<FGLTFJsonTexture,void> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_>,int>
            ((TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_> *)
             (this->Array).AllocatorInstance.Data,(this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9df0

void * __thiscall
TGLTFJsonVector<TGLTFVector4<float>_>::_scalar_deleting_destructor_
          (TGLTFJsonVector<TGLTFVector4<float>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9e20

void * __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::_scalar_deleting_destructor_
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CurrentIdentifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9e70

void * __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::_scalar_deleting_destructor_
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CurrentIdentifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9ec0

void * __thiscall
TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent>::_scalar_deleting_destructor_
          (TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_>,int>
            ((TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_> *)
             (this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9f40

void * __thiscall
TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent>::_scalar_deleting_destructor_
          (TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_>,int>
            ((TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_> *)
             (this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5d9fc0

void * __thiscall
TGLTFMeshSectionConverter<USkeletalMesh>::_scalar_deleting_destructor_
          (TGLTFMeshSectionConverter<USkeletalMesh> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,int>
            ((TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_> *)
             (this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da040

void * __thiscall
TGLTFMeshSectionConverter<UStaticMesh>::_scalar_deleting_destructor_
          (TGLTFMeshSectionConverter<UStaticMesh> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,int>
            ((TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_> *)
             (this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da0c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<FColor,TSizedDefaultAllocator<32>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<FColor,TSizedDefaultAllocator<32>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da100

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGLTFMemoryArchive,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FGLTFMemoryArchive,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da140

void * __thiscall
TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::_scalar_deleting_destructor_
          (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__QUTGLTFCondensedJsonPrintPolicyUTF8____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da190

void * __thiscall
TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::_scalar_deleting_destructor_
          (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__QUTGLTFPrettyJsonPrintPolicyUTF8____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da1e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da220

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da260

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IGLTFJsonWriter,SharedPointerInternals::DefaultDeleter<IGLTFJsonWriter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IGLTFJsonWriter,SharedPointerInternals::DefaultDeleter<IGLTFJsonWriter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da2a0

void * __thiscall
FGLTFActorConverter::_scalar_deleting_destructor_(FGLTFActorConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da300

void * __thiscall
FGLTFAnimationConverter::_scalar_deleting_destructor_(FGLTFAnimationConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da360

void * __thiscall
FGLTFAnimationDataConverter::_scalar_deleting_destructor_
          (FGLTFAnimationDataConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da3c0

void * __thiscall
FGLTFBoneIndexBufferConverter::_scalar_deleting_destructor_
          (FGLTFBoneIndexBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da420

void * __thiscall
FGLTFBoneIndexBufferConverterRaw::_scalar_deleting_destructor_
          (FGLTFBoneIndexBufferConverterRaw *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da480

void * __thiscall
FGLTFBoneWeightBufferConverter::_scalar_deleting_destructor_
          (FGLTFBoneWeightBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da4e0

void * __thiscall
FGLTFBoneWeightBufferConverterRaw::_scalar_deleting_destructor_
          (FGLTFBoneWeightBufferConverterRaw *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da540

void * __thiscall
FGLTFBufferAdapterCPU::_scalar_deleting_destructor_(FGLTFBufferAdapterCPU *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da570

void * __thiscall
FGLTFBufferAdapterGPU::_scalar_deleting_destructor_(FGLTFBufferAdapterGPU *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da5c0

void * __thiscall
FGLTFCameraConverter::_scalar_deleting_destructor_(FGLTFCameraConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da620

void * __thiscall
FGLTFColorBufferConverter::_scalar_deleting_destructor_
          (FGLTFColorBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da680

void * __thiscall
FGLTFColorBufferConverterRaw::_scalar_deleting_destructor_
          (FGLTFColorBufferConverterRaw *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<FColor>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da6e0

void * __thiscall
FGLTFComponentConverter::_scalar_deleting_destructor_(FGLTFComponentConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da740

void * __thiscall
FGLTFComponentSocketConverter::_scalar_deleting_destructor_
          (FGLTFComponentSocketConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USceneComponent_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da7a0

void * __thiscall
FGLTFDelayedAnimSequenceTask::_scalar_deleting_destructor_
          (FGLTFDelayedAnimSequenceTask *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da7d0

void * __thiscall
FGLTFDelayedLandscapeTask::_scalar_deleting_destructor_
          (FGLTFDelayedLandscapeTask *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FGLTFDelayedLevelSequenceTask::_scalar_deleting_destructor_
          (FGLTFDelayedLevelSequenceTask *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da830

void * __thiscall
FGLTFDelayedMaterialTask::_scalar_deleting_destructor_(FGLTFDelayedMaterialTask *this,uint param_1)

{
  if (*(void **)&this->SectionIndices != (void *)0x0) {
    FMemory::Free(*(void **)&this->SectionIndices);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da880

void * __thiscall
FGLTFDelayedSkeletalMeshTask::_scalar_deleting_destructor_
          (FGLTFDelayedSkeletalMeshTask *this,uint param_1)

{
  if (*(void **)&this->Materials != (void *)0x0) {
    FMemory::Free(*(void **)&this->Materials);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da8d0

void * __thiscall
FGLTFDelayedSplineMeshTask::_scalar_deleting_destructor_
          (FGLTFDelayedSplineMeshTask *this,uint param_1)

{
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da920

void * __thiscall
FGLTFDelayedStaticAndSplineMeshTask::_scalar_deleting_destructor_
          (FGLTFDelayedStaticAndSplineMeshTask *this,uint param_1)

{
  if (*(void **)&this->Materials != (void *)0x0) {
    FMemory::Free(*(void **)&this->Materials);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da970

void * __thiscall
FGLTFDelayedStaticMeshTask::_scalar_deleting_destructor_
          (FGLTFDelayedStaticMeshTask *this,uint param_1)

{
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da9c0

void * __thiscall
FGLTFDelayedTask::_scalar_deleting_destructor_(FGLTFDelayedTask *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5da9f0

void * __thiscall
FGLTFDelayedTexture2DTask::_scalar_deleting_destructor_
          (FGLTFDelayedTexture2DTask *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5daa20

void * __thiscall
FGLTFDelayedTextureRenderTarget2DTask::_scalar_deleting_destructor_
          (FGLTFDelayedTextureRenderTarget2DTask *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5daa50

void * __thiscall
FGLTFImageConverter::_scalar_deleting_destructor_(FGLTFImageConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,FGLTFJsonImage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5daab0

void * __thiscall
FGLTFIndexBufferConverter::_scalar_deleting_destructor_
          (FGLTFIndexBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dab10

void * __thiscall
FGLTFIndexBufferConverterRaw::_scalar_deleting_destructor_
          (FGLTFIndexBufferConverterRaw *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<int>,FString>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dab70

void * __thiscall
FGLTFJsonAccessor::_scalar_deleting_destructor_(FGLTFJsonAccessor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dabc0

void * __thiscall
FGLTFJsonAnimation::_scalar_deleting_destructor_(FGLTFJsonAnimation *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFJsonAnimationSampler,TDefaultDelete<FGLTFJsonAnimationSampler>_>,int>
            ((TUniquePtr<FGLTFJsonAnimationSampler,TDefaultDelete<FGLTFJsonAnimationSampler>_> *)
             (this->Samplers).Array.AllocatorInstance.Data,(this->Samplers).Array.ArrayNum);
  pFVar1 = (this->Samplers).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Channels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dac30

void * __thiscall
FGLTFJsonAnimationChannel::_scalar_deleting_destructor_
          (FGLTFJsonAnimationChannel *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dac60

void * __thiscall
FGLTFJsonAnimationChannelTarget::_scalar_deleting_destructor_
          (FGLTFJsonAnimationChannelTarget *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dac90

void * __thiscall
FGLTFJsonAnimationSampler::_scalar_deleting_destructor_
          (FGLTFJsonAnimationSampler *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dacc0

void * __thiscall
FGLTFJsonAnisotropyExtension::_scalar_deleting_destructor_
          (FGLTFJsonAnisotropyExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dacf0

void * __thiscall FGLTFJsonAsset::_scalar_deleting_destructor_(FGLTFJsonAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Copyright).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Generator).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dad50

void * __thiscall
FGLTFJsonAttributes::_scalar_deleting_destructor_(FGLTFJsonAttributes *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Weights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Joints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TexCoords).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dadb0

void * __thiscall FGLTFJsonBuffer::_scalar_deleting_destructor_(FGLTFJsonBuffer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->URI).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dae10

void * __thiscall
FGLTFJsonBufferView::_scalar_deleting_destructor_(FGLTFJsonBufferView *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dae60

void * __thiscall FGLTFJsonCamera::_scalar_deleting_destructor_(FGLTFJsonCamera *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5daeb0

void * __thiscall
FGLTFJsonClearCoatExtension::_scalar_deleting_destructor_
          (FGLTFJsonClearCoatExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5daee0

void * __thiscall FGLTFJsonColor4::_scalar_deleting_destructor_(FGLTFJsonColor4 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5daf10

void * __thiscall
FGLTFJsonIORExtension::_scalar_deleting_destructor_(FGLTFJsonIORExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5daf40

void * __thiscall FGLTFJsonImage::_scalar_deleting_destructor_(FGLTFJsonImage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->URI).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dafa0

void * __thiscall
FGLTFJsonIridescenceExtension::_scalar_deleting_destructor_
          (FGLTFJsonIridescenceExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dafd0

void * __thiscall FGLTFJsonLight::_scalar_deleting_destructor_(FGLTFJsonLight *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db020

void * __thiscall
FGLTFJsonLightIES::_scalar_deleting_destructor_(FGLTFJsonLightIES *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MimeType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->URI).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db080

void * __thiscall
FGLTFJsonLightIESInstance::_scalar_deleting_destructor_
          (FGLTFJsonLightIESInstance *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db0b0

void * __thiscall
FGLTFJsonLightMap::_scalar_deleting_destructor_(FGLTFJsonLightMap *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db100

void * __thiscall
FGLTFJsonMaterial::_scalar_deleting_destructor_(FGLTFJsonMaterial *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x638);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db150

void * __thiscall
FGLTFJsonMaterialVariant::_scalar_deleting_destructor_(FGLTFJsonMaterialVariant *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db1a0

void * __thiscall
FGLTFJsonMaterialVariantMapping::_scalar_deleting_destructor_
          (FGLTFJsonMaterialVariantMapping *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Variants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db1f0

void * __thiscall FGLTFJsonMesh::_scalar_deleting_destructor_(FGLTFJsonMesh *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->TargetNames).AllocatorInstance.Data,(this->TargetNames).ArrayNum);
  pFVar1 = (this->TargetNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGLTFJsonPrimitive,int>
            ((FGLTFJsonPrimitive *)(this->Primitives).AllocatorInstance.Data,
             (this->Primitives).ArrayNum);
  pFVar1 = (this->Primitives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db270

void * __thiscall FGLTFJsonNode::_scalar_deleting_destructor_(FGLTFJsonNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db2d0

void * __thiscall
FGLTFJsonNormalTextureInfo::_scalar_deleting_destructor_
          (FGLTFJsonNormalTextureInfo *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db300

void * __thiscall
FGLTFJsonOcclusionTextureInfo::_scalar_deleting_destructor_
          (FGLTFJsonOcclusionTextureInfo *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db330

void * __thiscall
FGLTFJsonOrthographic::_scalar_deleting_destructor_(FGLTFJsonOrthographic *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db360

void * __thiscall
FGLTFJsonPBRMetallicRoughness::_scalar_deleting_destructor_
          (FGLTFJsonPBRMetallicRoughness *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db390

void * __thiscall
FGLTFJsonPerspective::_scalar_deleting_destructor_(FGLTFJsonPerspective *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db3c0

void * __thiscall
FGLTFJsonPrimitive::_scalar_deleting_destructor_(FGLTFJsonPrimitive *this,uint param_1)

{
  ~FGLTFJsonPrimitive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db400

void * __thiscall
FGLTFJsonQuaternion::_scalar_deleting_destructor_(FGLTFJsonQuaternion *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db430

void * __thiscall FGLTFJsonRoot::_scalar_deleting_destructor_(FGLTFJsonRoot *this,uint param_1)

{
  ~FGLTFJsonRoot(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x298);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db470

void * __thiscall
FGLTFJsonSampler::_scalar_deleting_destructor_(FGLTFJsonSampler *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db4c0

void * __thiscall FGLTFJsonScene::_scalar_deleting_destructor_(FGLTFJsonScene *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db520

void * __thiscall
FGLTFJsonSheenExtension::_scalar_deleting_destructor_(FGLTFJsonSheenExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db550

void * __thiscall FGLTFJsonSkin::_scalar_deleting_destructor_(FGLTFJsonSkin *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Joints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db5b0

void * __thiscall
FGLTFJsonSpecularExtension::_scalar_deleting_destructor_
          (FGLTFJsonSpecularExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db5e0

void * __thiscall
FGLTFJsonSpecularGlossinessExtension::_scalar_deleting_destructor_
          (FGLTFJsonSpecularGlossinessExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db610

void * __thiscall
FGLTFJsonSpotLight::_scalar_deleting_destructor_(FGLTFJsonSpotLight *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db640

void * __thiscall FGLTFJsonTarget::_scalar_deleting_destructor_(FGLTFJsonTarget *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db670

void * __thiscall
FGLTFJsonTexture::_scalar_deleting_destructor_(FGLTFJsonTexture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db6c0

void * __thiscall
FGLTFJsonTextureInfo::_scalar_deleting_destructor_(FGLTFJsonTextureInfo *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db6f0

void * __thiscall
FGLTFJsonTextureTransform::_scalar_deleting_destructor_
          (FGLTFJsonTextureTransform *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db720

void * __thiscall
FGLTFJsonTransmissionExtension::_scalar_deleting_destructor_
          (FGLTFJsonTransmissionExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db750

void * __thiscall
FGLTFJsonVector4::_scalar_deleting_destructor_(FGLTFJsonVector4 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db780

void * __thiscall
FGLTFLandscapeMeshConverter::_scalar_deleting_destructor_
          (FGLTFLandscapeMeshConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULandscapeComponent_const_*,UMaterialInterface_const_*>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db7e0

void * __thiscall
FGLTFLevelSequenceConverter::_scalar_deleting_destructor_
          (FGLTFLevelSequenceConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULevel_const_*,ULevelSequence_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db840

void * __thiscall
FGLTFLevelSequenceDataConverter::_scalar_deleting_destructor_
          (FGLTFLevelSequenceDataConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db8a0

void * __thiscall
FGLTFLightConverter::_scalar_deleting_destructor_(FGLTFLightConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db900

void * __thiscall
FGLTFLightIESConverter::_scalar_deleting_destructor_(FGLTFLightIESConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db960

void * __thiscall
FGLTFLightIESInstanceConverter::_scalar_deleting_destructor_
          (FGLTFLightIESInstanceConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5db9c0

void * __thiscall
FGLTFLightMapConverter::_scalar_deleting_destructor_(FGLTFLightMapConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dba20

void * __thiscall
FGLTFMaterialConverter::_scalar_deleting_destructor_(FGLTFMaterialConverter *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->UVDegenerateChecker).field_0x50 = 0;
  pvVar1 = *(void **)&(this->UVDegenerateChecker).field_0x48;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->UVDegenerateChecker).field_0x8);
  *(undefined4 *)&(this->UVBoundsCalculator).field_0x50 = 0;
  pvVar1 = *(void **)&(this->UVBoundsCalculator).field_0x48;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->UVBoundsCalculator).field_0x8);
  *(undefined4 *)&(this->UVOverlapChecker).field_0x50 = 0;
  pvVar1 = *(void **)&(this->UVOverlapChecker).field_0x48;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->UVOverlapChecker).field_0x8);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,FGLTFJsonMaterial_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbaf0

void * __thiscall
FGLTFMaterialVariantConverter::_scalar_deleting_destructor_
          (FGLTFMaterialVariantConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbb50

void * __thiscall
FGLTFMemoryArchive::_scalar_deleting_destructor_(FGLTFMemoryArchive *this,uint param_1)

{
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbba0

void * __thiscall
FGLTFNormalBufferConverter::_scalar_deleting_destructor_
          (FGLTFNormalBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbc00

void * __thiscall
FGLTFNormalBufferConverterRaw::_scalar_deleting_destructor_
          (FGLTFNormalBufferConverterRaw *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbc60

void * __thiscall
FGLTFNormalDeltaBufferConverter::_scalar_deleting_destructor_
          (FGLTFNormalDeltaBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbcc0

void * __thiscall
FGLTFNormalMapPreview::_scalar_deleting_destructor_(FGLTFNormalMapPreview *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbd30

void * __thiscall
FGLTFPositionBufferConverter::_scalar_deleting_destructor_
          (FGLTFPositionBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbd90

void * __thiscall
FGLTFPositionBufferConverterRaw::_scalar_deleting_destructor_
          (FGLTFPositionBufferConverterRaw *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbdf0

void * __thiscall
FGLTFPositionDeltaBufferConverter::_scalar_deleting_destructor_
          (FGLTFPositionDeltaBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbe50

void * __thiscall
FGLTFSamplerConverter::_scalar_deleting_destructor_(FGLTFSamplerConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,FGLTFJsonSampler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,FGLTFJsonSampler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbeb0

void * __thiscall
FGLTFSceneConverter::_scalar_deleting_destructor_(FGLTFSceneConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbf10

void * __thiscall
FGLTFSimpleTexture2DPreview::_scalar_deleting_destructor_
          (FGLTFSimpleTexture2DPreview *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbf80

void * __thiscall
FGLTFSkeletalBoneConverter::_scalar_deleting_destructor_
          (FGLTFSkeletalBoneConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,int>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dbfe0

void * __thiscall
FGLTFSkeletalMeshConverter::_scalar_deleting_destructor_
          (FGLTFSkeletalMeshConverter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,int>
            ((TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_> *)
             (this->MeshSectionConverter).Outputs.AllocatorInstance.Data,
             (this->MeshSectionConverter).Outputs.ArrayNum);
  pFVar1 = (this->MeshSectionConverter).Outputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MeshSectionConverter)._padding_ = 0;
  pvVar2 = (void *)(this->MeshSectionConverter)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MeshSectionConverter)._padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc090

void * __thiscall
FGLTFSkeletalSocketConverter::_scalar_deleting_destructor_
          (FGLTFSkeletalSocketConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc0f0

void * __thiscall
FGLTFSkinConverter::_scalar_deleting_destructor_(FGLTFSkinConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,USkeletalMesh_const_*>,FGLTFJsonSkin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc150

void * __thiscall
FGLTFSplineMeshConverter::_scalar_deleting_destructor_(FGLTFSplineMeshConverter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,int>
            ((TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_> *)
             (this->MeshSectionConverter).Outputs.AllocatorInstance.Data,
             (this->MeshSectionConverter).Outputs.ArrayNum);
  pFVar1 = (this->MeshSectionConverter).Outputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MeshSectionConverter)._padding_ = 0;
  pvVar2 = (void *)(this->MeshSectionConverter)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MeshSectionConverter)._padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc200

void * __thiscall
FGLTFStaticMeshConverter::_scalar_deleting_destructor_(FGLTFStaticMeshConverter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,int>
            ((TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_> *)
             (this->MeshSectionConverter).Outputs.AllocatorInstance.Data,
             (this->MeshSectionConverter).Outputs.ArrayNum);
  pFVar1 = (this->MeshSectionConverter).Outputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MeshSectionConverter)._padding_ = 0;
  pvVar2 = (void *)(this->MeshSectionConverter)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,FGLTFMeshSection_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MeshSectionConverter)._padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,FGLTFJsonMesh_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc2b0

void * __thiscall
FGLTFStaticSocketConverter::_scalar_deleting_destructor_
          (FGLTFStaticSocketConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFJsonNode_*,UStaticMesh_const_*,FName>,FGLTFJsonNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc310

void * __thiscall
FGLTFTangentBufferConverter::_scalar_deleting_destructor_
          (FGLTFTangentBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc370

void * __thiscall
FGLTFTangentBufferConverterRaw::_scalar_deleting_destructor_
          (FGLTFTangentBufferConverterRaw *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector4<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc3d0

void * __thiscall
FGLTFTexture2DConverter::_scalar_deleting_destructor_(FGLTFTexture2DConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc430

void * __thiscall
FGLTFTextureLightMapConverter::_scalar_deleting_destructor_
          (FGLTFTextureLightMapConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc490

void * __thiscall
FGLTFTextureRenderTarget2DConverter::_scalar_deleting_destructor_
          (FGLTFTextureRenderTarget2DConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc4f0

void * __thiscall
FGLTFUVBoundsCalculator::_scalar_deleting_destructor_(FGLTFUVBoundsCalculator *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,UE::Math::TBox2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc550

void * __thiscall
FGLTFUVBufferConverter::_scalar_deleting_destructor_(FGLTFUVBufferConverter *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc5b0

void * __thiscall
FGLTFUVBufferConverterRaw::_scalar_deleting_destructor_
          (FGLTFUVBufferConverterRaw *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector2<float>_>_>,FGLTFJsonAccessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc610

void * __thiscall
FGLTFUVDegenerateChecker::_scalar_deleting_destructor_(FGLTFUVDegenerateChecker *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc670

void * __thiscall
FGLTFUVOverlapChecker::_scalar_deleting_destructor_(FGLTFUVOverlapChecker *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FMeshDescription_const_*,FMeshAttributesArray<int>,int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc6d0

void * __thiscall
IGLTFBufferAdapter::_scalar_deleting_destructor_(IGLTFBufferAdapter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc700

void * __thiscall IGLTFJsonArray::_scalar_deleting_destructor_(IGLTFJsonArray *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc730

void * __thiscall
IGLTFJsonIndexedObject::_scalar_deleting_destructor_(IGLTFJsonIndexedObject *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc760

void * __thiscall IGLTFJsonObject::_scalar_deleting_destructor_(IGLTFJsonObject *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc790

void * __thiscall IGLTFJsonValue::_scalar_deleting_destructor_(IGLTFJsonValue *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc7c0

void * __thiscall IGLTFJsonWriter::_scalar_deleting_destructor_(IGLTFJsonWriter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc7f0

void * __thiscall
UGLTFAnimSequenceExporter::_scalar_deleting_destructor_
          (UGLTFAnimSequenceExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc850

void * __thiscall
UGLTFExportOptions::_scalar_deleting_destructor_(UGLTFExportOptions *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGLTFExportOptions__6B_;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultInputBakeSettings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DefaultInputBakeSettings);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc8f0

void * __thiscall UGLTFExporter::_scalar_deleting_destructor_(UGLTFExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc950

void * __thiscall
UGLTFLevelExporter::_scalar_deleting_destructor_(UGLTFLevelExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dc9b0

void * __thiscall
UGLTFLevelSequenceExporter::_scalar_deleting_destructor_
          (UGLTFLevelSequenceExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dca10

void * __thiscall
UGLTFLevelVariantSetsExporter::_scalar_deleting_destructor_
          (UGLTFLevelVariantSetsExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dca70

void * __thiscall
UGLTFMaterialExportOptions::_scalar_deleting_destructor_
          (UGLTFMaterialExportOptions *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGLTFMaterialExportOptions__6B_;
  *(undefined4 *)&(this->Inputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Inputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Inputs);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dcb10

void * __thiscall
UGLTFMaterialExporter::_scalar_deleting_destructor_(UGLTFMaterialExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dcb70

void * __thiscall
UGLTFProxyOptions::_scalar_deleting_destructor_(UGLTFProxyOptions *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGLTFProxyOptions__6B_;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultInputBakeSettings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DefaultInputBakeSettings);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dcc10

void * __thiscall
UGLTFSkeletalMeshExporter::_scalar_deleting_destructor_
          (UGLTFSkeletalMeshExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e5dcc70

void * __thiscall
UGLTFStaticMeshExporter::_scalar_deleting_destructor_(UGLTFStaticMeshExporter *this,uint param_1)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeGLTFAnimSequenceExporter @ 14e5f0da0

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFAnimSequenceExporter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFExportOptions @ 14e5f0db0

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFExportOptions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFExporter @ 14e5f0dc0

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFExporter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFExporter_init @ 14e5f0dd0

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFExporter_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFLevelExporter @ 14e5f0de0

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFLevelExporter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFLevelSequenceExporter @ 14e5f0df0

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFLevelSequenceExporter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFLevelVariantSetsExporter @ 14e5f0e00

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFLevelVariantSetsExporter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFMaterialExporter @ 14e5f0e10

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFMaterialExporter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFMaterialUserData @ 14e5f0e20

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFMaterialUserData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFProxyOptions @ 14e5f0e30

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFProxyOptions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFSkeletalMeshExporter @ 14e5f0e40

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFSkeletalMeshExporter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGLTFStaticMeshExporter @ 14e5f0e50

void __cdecl EmptyLinkFunctionForGeneratedCodeGLTFStaticMeshExporter(void)

{
  return;
}

// GetTypeHash @ 14e5fec10

uint __cdecl GetTypeHash(FMeshAttributesArray<int> *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)&param_1->field_0x8;
  uVar6 = (ulonglong)iVar2;
  puVar7 = *(uint **)param_1;
  puVar1 = puVar7 + uVar6;
  while( true ) {
    if (*(int *)&param_1->field_0x8 != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar7 == puVar1) break;
    uVar3 = *puVar7;
    uVar4 = (uint)uVar6 - uVar3 ^ uVar3 >> 0xd;
    uVar8 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar5 = (uVar3 - uVar8) - uVar4 ^ uVar8 >> 0xd;
    uVar3 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xc;
    uVar8 = (uVar8 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar4 = (uVar5 - uVar8) - uVar3 ^ uVar8 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
    uVar5 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar6 = (ulonglong)((uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf);
    puVar7 = puVar7 + 1;
  }
  return (uint)uVar6;
}

// GetTypeHash @ 14e5fecf0

uint __cdecl GetTypeHash(FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)&param_1->field_0x8;
  uVar6 = (ulonglong)iVar2;
  pvVar7 = *(void **)param_1;
  pvVar1 = (void *)((longlong)pvVar7 + uVar6 * 8);
  while( true ) {
    if (*(int *)&param_1->field_0x8 != iVar2) {
      `TCheckedPointerIterator<UE::Math::TIntVector4<unsigned_short>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pvVar7 == pvVar1) break;
    uVar3 = (*FCrc::MemCrc32Func)(pvVar7,8,0);
    uVar4 = (uint)uVar6 - uVar3 ^ uVar3 >> 0xd;
    uVar8 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar5 = (uVar3 - uVar8) - uVar4 ^ uVar8 >> 0xd;
    uVar3 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xc;
    uVar8 = (uVar8 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar4 = (uVar5 - uVar8) - uVar3 ^ uVar8 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
    uVar5 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar6 = (ulonglong)((uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf);
    pvVar7 = (void *)((longlong)pvVar7 + 8);
  }
  return (uint)uVar6;
}

// GetTypeHash @ 14e5fede0

uint __cdecl GetTypeHash(FMeshAttributesArray<UE::Math::TVector2<float>_> *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)&param_1->field_0x8;
  uVar6 = (ulonglong)iVar2;
  pvVar7 = *(void **)param_1;
  pvVar1 = (void *)((longlong)pvVar7 + uVar6 * 8);
  while( true ) {
    if (*(int *)&param_1->field_0x8 != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pvVar7 == pvVar1) break;
    uVar3 = FCrc::MemCrc_DEPRECATED(pvVar7,8,0);
    uVar4 = (uint)uVar6 - uVar3 ^ uVar3 >> 0xd;
    uVar8 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar5 = (uVar3 - uVar8) - uVar4 ^ uVar8 >> 0xd;
    uVar3 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xc;
    uVar8 = (uVar8 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar4 = (uVar5 - uVar8) - uVar3 ^ uVar8 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
    uVar5 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar6 = (ulonglong)((uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf);
    pvVar7 = (void *)((longlong)pvVar7 + 8);
  }
  return (uint)uVar6;
}

// GetTypeHash @ 14e5feed0

uint __cdecl GetTypeHash(FMeshAttributesArray<UE::Math::TVector4<float>_> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&param_1->field_0x8;
  uVar5 = (ulonglong)iVar1;
  pvVar6 = *(void **)param_1;
  pvVar7 = (void *)(uVar5 * 0x10 + (longlong)pvVar6);
  while( true ) {
    if (*(int *)&param_1->field_0x8 != iVar1) {
      `TCheckedPointerIterator<UE::Math::TVector4<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pvVar6 == pvVar7) break;
    uVar2 = FCrc::MemCrc_DEPRECATED(pvVar6,0x10,0);
    uVar3 = (uint)uVar5 - uVar2 ^ uVar2 >> 0xd;
    uVar8 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
    uVar4 = (uVar2 - uVar8) - uVar3 ^ uVar8 >> 0xd;
    uVar2 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
    uVar8 = (uVar8 - uVar2) - uVar4 ^ uVar2 << 0x10;
    uVar3 = (uVar4 - uVar8) - uVar2 ^ uVar8 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar8 ^ uVar3 >> 3;
    uVar4 = (uVar8 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar5 = (ulonglong)((uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf);
    pvVar6 = (void *)((longlong)pvVar6 + 0x10);
  }
  return (uint)uVar5;
}

// GetTypeHash @ 14e5fefc0

uint __cdecl GetTypeHash(FMeshAttributesArray<UE::Math::TVector<float>_> *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)&param_1->field_0x8;
  uVar6 = (ulonglong)iVar2;
  pvVar7 = *(void **)param_1;
  pvVar1 = (void *)((longlong)pvVar7 + uVar6 * 0xc);
  while( true ) {
    if (*(int *)&param_1->field_0x8 != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pvVar7 == pvVar1) break;
    uVar3 = FCrc::MemCrc_DEPRECATED(pvVar7,0xc,0);
    uVar4 = (uint)uVar6 - uVar3 ^ uVar3 >> 0xd;
    uVar8 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar5 = (uVar3 - uVar8) - uVar4 ^ uVar8 >> 0xd;
    uVar3 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xc;
    uVar8 = (uVar8 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar4 = (uVar5 - uVar8) - uVar3 ^ uVar8 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
    uVar5 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar6 = (ulonglong)((uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf);
    pvVar7 = (void *)((longlong)pvVar7 + 0xc);
  }
  return (uint)uVar6;
}

// GetTypeHash @ 14e5ff0b0

uint __cdecl GetTypeHash(FMeshAttributesArray<FColor> *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)&param_1->field_0x8;
  uVar6 = (ulonglong)iVar2;
  puVar7 = *(uint **)param_1;
  puVar1 = puVar7 + uVar6;
  while( true ) {
    if (*(int *)&param_1->field_0x8 != iVar2) {
      `TCheckedPointerIterator<FColor_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar7 == puVar1) break;
    uVar3 = *puVar7;
    uVar4 = (uint)uVar6 - uVar3 ^ uVar3 >> 0xd;
    uVar8 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar5 = (uVar3 - uVar8) - uVar4 ^ uVar8 >> 0xd;
    uVar3 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xc;
    uVar8 = (uVar8 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar4 = (uVar5 - uVar8) - uVar3 ^ uVar8 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
    uVar5 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar6 = (ulonglong)((uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf);
    puVar7 = puVar7 + 1;
  }
  return (uint)uVar6;
}

// GetTypeHash @ 14e5ff190

uint __cdecl
GetTypeHash(TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  puVar3 = *(undefined8 **)param_1;
  iVar2 = *(int *)(puVar3 + 1);
  uVar7 = (ulonglong)iVar2;
  puVar8 = (uint *)*puVar3;
  puVar1 = puVar8 + uVar7;
  while( true ) {
    if (*(int *)(puVar3 + 1) != iVar2) {
      `TCheckedPointerIterator<FColor_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar8 == puVar1) break;
    uVar4 = *puVar8;
    uVar5 = (uint)uVar7 - uVar4 ^ uVar4 >> 0xd;
    uVar9 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar6 = (uVar4 - uVar9) - uVar5 ^ uVar9 >> 0xd;
    uVar4 = (uVar5 - uVar6) - uVar9 ^ uVar6 >> 0xc;
    uVar9 = (uVar9 - uVar4) - uVar6 ^ uVar4 << 0x10;
    uVar5 = (uVar6 - uVar9) - uVar4 ^ uVar9 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar5 >> 3;
    uVar6 = (uVar9 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar7 = (ulonglong)((uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xf);
    puVar8 = puVar8 + 1;
  }
  return (uint)uVar7;
}

// GetTypeHash @ 14e5ff270

uint __cdecl GetTypeHash(FGLTFMaterialArray *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)&param_1->field_0x8;
  uVar6 = (ulonglong)iVar2;
  puVar7 = *(ulonglong **)param_1;
  puVar1 = puVar7 + uVar6;
  while( true ) {
    if (*(int *)&param_1->field_0x8 != iVar2) {
      `TCheckedPointerIterator<UMaterialInterface_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar7 == puVar1) break;
    uVar3 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    uVar4 = (uint)uVar6 - uVar3 ^ uVar3 >> 0xd;
    uVar8 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar5 = (uVar3 - uVar8) - uVar4 ^ uVar8 >> 0xd;
    uVar3 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xc;
    uVar8 = (uVar8 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar4 = (uVar5 - uVar8) - uVar3 ^ uVar8 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
    uVar5 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar6 = (ulonglong)((uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf);
    puVar7 = puVar7 + 1;
  }
  return (uint)uVar6;
}

// HasVertexColors @ 14e601340

bool __cdecl `anonymous_namespace'::HasVertexColors(FColorVertexBuffer *param_1)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  longlong *local_res8;
  
  if (param_1 == (FColorVertexBuffer *)0x0) {
    return false;
  }
  IGLTFBufferAdapter::GetColors((FColorVertexBuffer *)&local_res8);
  lVar1 = (**(code **)(*local_res8 + 8))(local_res8);
  if (lVar1 != 0) {
    uVar2 = 0;
    if (param_1->NumVertices != 0) {
      do {
        if ((FColor_u_0)((FColor_u_0 *)((ulonglong)(uVar2 * param_1->Stride) + lVar1))->Bits !=
            FColor::White.field0_0x0) {
          bVar3 = true;
          goto LAB_14e6013a9;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_1->NumVertices);
    }
  }
  bVar3 = false;
LAB_14e6013a9:
  if (local_res8 != (longlong *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return bVar3;
}

// ValidateVertexBuffer @ 14e615f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`anonymous_namespace'::ValidateVertexBuffer
          (FGLTFConvertBuilder *param_1,FStaticMeshVertexBuffer *param_2,wchar_t *param_3)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  longlong *local_res10;
  FString local_38 [3];
  
  if (param_2 != (FStaticMeshVertexBuffer *)0x0) {
    IGLTFBufferAdapter::GetTangents((FStaticMeshVertexBuffer *)&local_res10);
    puVar5 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10);
    if (puVar5 != (undefined8 *)0x0) {
      uVar1 = param_2->NumVertices;
      uVar6 = (ulonglong)uVar1;
      bVar2 = false;
      if (param_2->bUseHighPrecisionTangentBasis == false) {
        bVar4 = false;
        if (uVar1 != 0) {
          do {
            auVar8 = pmovsxbd(in_XMM1,*(undefined4 *)((longlong)puVar5 + 4));
            fVar11 = (float)auVar8._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
            fVar12 = (float)auVar8._4_4_ * _UNK_151040074;
            local_38[0].Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)CONCAT44(fVar12,fVar11);
            dVar7 = (double)fVar11;
            auVar10._0_8_ = (double)fVar12;
            auVar10._8_8_ = 0;
            if (((__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
                || (auVar10._0_8_ =
                         (double)CONCAT44((uint)((ulonglong)auVar10._0_8_ >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(auVar10._0_8_,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff),
                   auVar10._8_8_ = 0, __real_3f1a36e2e0000000 < auVar10._0_8_)) ||
               (__real_38d1b717 <
                (float)((uint)((float)auVar8._8_4_ * _UNK_151040078) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff))) {
              bVar3 = 0;
            }
            else {
              bVar3 = 1;
            }
            auVar8 = pmovsxbd(auVar10,*(undefined4 *)puVar5);
            bVar2 = (bool)(bVar2 | bVar3);
            dVar7 = (double)((float)auVar8._0_4_ * ___xmm_3c0102043c0102043c0102043c010204);
            in_XMM1._0_8_ = (double)((float)auVar8._4_4_ * _UNK_151040074);
            in_XMM1._8_8_ = 0;
            if (((__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
                || (in_XMM1._0_8_ =
                         (double)CONCAT44((uint)((ulonglong)in_XMM1._0_8_ >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(in_XMM1._0_8_,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff),
                   in_XMM1._8_8_ = 0, __real_3f1a36e2e0000000 < in_XMM1._0_8_)) ||
               (__real_38d1b717 <
                (float)((uint)((float)auVar8._8_4_ * _UNK_151040078) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff))) {
              bVar3 = 0;
            }
            else {
              bVar3 = 1;
            }
            bVar4 = (bool)(bVar4 | bVar3);
            puVar5 = puVar5 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        bVar4 = false;
        if (uVar1 != 0) {
          do {
            auVar8 = pmovsxwd(in_XMM1,puVar5[1]);
            dVar7 = (double)((float)auVar8._0_4_ * ___xmm_38000100380001003800010038000100);
            auVar9._0_8_ = (double)((float)auVar8._4_4_ * _UNK_150d565e4);
            auVar9._8_8_ = 0;
            if (((__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
                || (auVar9._0_8_ = (double)CONCAT44((uint)((ulonglong)auVar9._0_8_ >> 0x20) &
                                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                    SUB84(auVar9._0_8_,0) &
                                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff),
                   auVar9._8_8_ = 0, __real_3f1a36e2e0000000 < auVar9._0_8_)) ||
               (__real_38d1b717 <
                (float)((uint)((float)auVar8._8_4_ * _UNK_150d565e8) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff))) {
              bVar3 = 0;
            }
            else {
              bVar3 = 1;
            }
            auVar8 = pmovsxwd(auVar9,*puVar5);
            bVar2 = (bool)(bVar2 | bVar3);
            fVar11 = (float)auVar8._0_4_ * ___xmm_38000100380001003800010038000100;
            fVar12 = (float)auVar8._4_4_ * _UNK_150d565e4;
            local_38[0].Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)CONCAT44(fVar12,fVar11);
            dVar7 = (double)fVar11;
            in_XMM1._0_8_ = (double)fVar12;
            in_XMM1._8_8_ = 0;
            if (((__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
                || (in_XMM1._0_8_ =
                         (double)CONCAT44((uint)((ulonglong)in_XMM1._0_8_ >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(in_XMM1._0_8_,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff),
                   in_XMM1._8_8_ = 0, __real_3f1a36e2e0000000 < in_XMM1._0_8_)) ||
               (__real_38d1b717 <
                (float)((uint)((float)auVar8._8_4_ * _UNK_150d565e8) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff))) {
              bVar3 = 0;
            }
            else {
              bVar3 = 1;
            }
            bVar4 = (bool)(bVar4 | bVar3);
            puVar5 = puVar5 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      if (bVar2) {
        ::FString::PrintfImpl
                  (local_38,
                   L"Mesh %s has some nearly zero-length normals which may not be supported in some glTF applications. Consider checking \'Recompute Normals\' in the asset settings"
                  );
        FGLTFLogBuilder::LogSuggestion((FGLTFLogBuilder *)param_1,local_38);
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
        }
      }
      if (bVar4) {
        ::FString::PrintfImpl
                  (local_38,
                   L"Mesh %s has some nearly zero-length tangents which may not be supported in some glTF applications. Consider checking \'Recompute Tangents\' in the asset settings"
                  );
        FGLTFLogBuilder::LogSuggestion((FGLTFLogBuilder *)param_1,local_38);
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_res10 != (longlong *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
    }
  }
  return;
}

// Z_Construct_UClass_UGLTFAnimSequenceExporter_NoRegister @ 14e620230

UClass * __cdecl Z_Construct_UClass_UGLTFAnimSequenceExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFAnimSequenceExporter",
               &Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton,
               UGLTFAnimSequenceExporter::StaticRegisterNativesUGLTFAnimSequenceExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFAnimSequenceExporter>,
               InternalVTableHelperCtorCaller<UGLTFAnimSequenceExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton;
}

// Z_Construct_UClass_UGLTFExporter_NoRegister @ 14e6202f0

UClass * __cdecl Z_Construct_UClass_UGLTFExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFExporter",
               &Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton,
               UGLTFExporter::StaticRegisterNativesUGLTFExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFExporter>,InternalVTableHelperCtorCaller<UGLTFExporter>,
               local_res8,UExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton;
}

// Z_Construct_UClass_UGLTFLevelExporter_NoRegister @ 14e6203b0

UClass * __cdecl Z_Construct_UClass_UGLTFLevelExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelExporter",
               &Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton,
               UGLTFLevelExporter::StaticRegisterNativesUGLTFLevelExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFLevelExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton;
}

// Z_Construct_UClass_UGLTFLevelSequenceExporter_NoRegister @ 14e620470

UClass * __cdecl Z_Construct_UClass_UGLTFLevelSequenceExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelSequenceExporter",
               &Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton,
               UGLTFLevelSequenceExporter::StaticRegisterNativesUGLTFLevelSequenceExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFLevelSequenceExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelSequenceExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton;
}

// Z_Construct_UClass_UGLTFLevelVariantSetsExporter_NoRegister @ 14e620530

UClass * __cdecl Z_Construct_UClass_UGLTFLevelVariantSetsExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelVariantSetsExporter",
               &Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton,
               UGLTFLevelVariantSetsExporter::StaticRegisterNativesUGLTFLevelVariantSetsExporter,
               0x78,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFLevelVariantSetsExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelVariantSetsExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton;
}

// Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister @ 14e6205f0

UClass * __cdecl Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFMaterialExportOptions",
               &Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton,
               UGLTFMaterialExportOptions::StaticRegisterNativesUGLTFMaterialExportOptions,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFMaterialExportOptions>,
               InternalVTableHelperCtorCaller<UGLTFMaterialExportOptions>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton;
}

// Z_Construct_UClass_UGLTFMaterialExporter_NoRegister @ 14e6206b0

UClass * __cdecl Z_Construct_UClass_UGLTFMaterialExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFMaterialExporter",
               &Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton,
               UGLTFMaterialExporter::StaticRegisterNativesUGLTFMaterialExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFMaterialExporter>,
               InternalVTableHelperCtorCaller<UGLTFMaterialExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton;
}

// Z_Construct_UClass_UGLTFProxyOptions_NoRegister @ 14e620770

UClass * __cdecl Z_Construct_UClass_UGLTFProxyOptions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFProxyOptions",
               &Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton,
               UGLTFProxyOptions::StaticRegisterNativesUGLTFProxyOptions,0x90,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGLTFProxyOptions>,
               InternalVTableHelperCtorCaller<UGLTFProxyOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton;
}

// Z_Construct_UClass_UGLTFSkeletalMeshExporter_NoRegister @ 14e620820

UClass * __cdecl Z_Construct_UClass_UGLTFSkeletalMeshExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFSkeletalMeshExporter",
               &Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton,
               UGLTFSkeletalMeshExporter::StaticRegisterNativesUGLTFSkeletalMeshExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFSkeletalMeshExporter>,
               InternalVTableHelperCtorCaller<UGLTFSkeletalMeshExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton;
}

// Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister @ 14e6208e0

UClass * __cdecl Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFStaticMeshExporter",
               &Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton,
               UGLTFStaticMeshExporter::StaticRegisterNativesUGLTFStaticMeshExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFStaticMeshExporter>,
               InternalVTableHelperCtorCaller<UGLTFStaticMeshExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton;
}

// IMPLEMENT_MODULE_GLTFExporter @ 14e620d80

void __cdecl IMPLEMENT_MODULE_GLTFExporter(void)

{
  return;
}

// Black'' @ 150465af0

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonColor3::Black__(void)

{
  return;
}

// Black'' @ 150465b00

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonColor4::Black__(void)

{
  return;
}

// Identity'' @ 150465b10

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonMatrix2::Identity__(void)

{
  return;
}

// Identity'' @ 150465b20

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonMatrix3::Identity__(void)

{
  return;
}

// Identity'' @ 150465b30

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonMatrix4::Identity__(void)

{
  return;
}

// Identity'' @ 150465b40

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonTransform::Identity__(void)

{
  return;
}

// One'' @ 150465b50

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonVector2::One__(void)

{
  return;
}

// One'' @ 150465b60

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonVector3::One__(void)

{
  return;
}

// One'' @ 150465b70

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonVector4::One__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150465b80

void __cdecl
`dynamic_atexit_destructor_for_'FGLTFSimpleElementNormalMapPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150465b90

void __cdecl `dynamic_atexit_destructor_for_'FGLTFSimpleTexture2DPS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 150465ba0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// White'' @ 150465c20

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonColor3::White__(void)

{
  return;
}

// White'' @ 150465c30

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonColor4::White__(void)

{
  return;
}

// Zero'' @ 150465c40

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonVector2::Zero__(void)

{
  return;
}

// Zero'' @ 150465c50

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonVector3::Zero__(void)

{
  return;
}

// Zero'' @ 150465c60

void __cdecl `dynamic_atexit_destructor_for_'FGLTFJsonVector4::Zero__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AlphaCutoff'' @ 150465c70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AlphaCutoff__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AlphaCutoff.Data.AllocatorInstance.Data;
  if (AlphaCutoff.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AlphaCutoff.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AlphaMode'' @ 150465c90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AlphaMode__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AlphaMode.Data.AllocatorInstance.Data;
  if (AlphaMode.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AlphaMode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyRotation'' @ 150465cb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyRotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyRotation.Data.AllocatorInstance.Data;
  if (AnisotropyRotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyRotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyStrength'' @ 150465cd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyStrength__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyStrength.Data.AllocatorInstance.Data;
  if (AnisotropyStrength.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyStrength.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture'' @ 150465cf0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture.Data.AllocatorInstance.Data;
  if (AnisotropyTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture_OffsetScale'' @ 150465d10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__AnisotropyTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Offset_X'' @ 150465d30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Offset_X.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Offset_Y'' @ 150465d50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Rotation'' @ 150465d70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Rotation.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Scale_X'' @ 150465d90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Scale_X.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture_Scale_Y'' @ 150465db0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture_TexCoord'' @ 150465dd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__AnisotropyTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_TexCoord.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AnisotropyTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AnisotropyTexture_TilingMethod'' @ 150465df0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__AnisotropyTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AnisotropyTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (AnisotropyTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (AnisotropyTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorFactor'' @ 150465e10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorFactor.Data.AllocatorInstance.Data;
  if (BaseColorFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorFactor_A'' @ 150465e30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorFactor_A__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorFactor_A.Data.AllocatorInstance.Data;
  if (BaseColorFactor_A.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorFactor_A.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorFactor_RGB'' @ 150465e50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorFactor_RGB__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorFactor_RGB.Data.AllocatorInstance.Data;
  if (BaseColorFactor_RGB.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorFactor_RGB.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorInputMasks'' @ 150465e70

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__BaseColorInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorInputMasks.AllocatorInstance.Data;
  if (BaseColorInputMasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorInputMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture'' @ 150465e90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture.Data.AllocatorInstance.Data;
  if (BaseColorTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture_OffsetScale'' @ 150465eb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__BaseColorTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (BaseColorTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture_Offset_X'' @ 150465ed0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Offset_X.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture_Offset_Y'' @ 150465ef0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture_Rotation'' @ 150465f10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Rotation.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture_Scale_X'' @ 150465f30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Scale_X.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture_Scale_Y'' @ 150465f50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (BaseColorTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture_TexCoord'' @ 150465f70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__BaseColorTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_TexCoord.Data.AllocatorInstance.Data;
  if (BaseColorTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BaseColorTexture_TilingMethod'' @ 150465f90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__BaseColorTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BaseColorTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (BaseColorTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BaseColorTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BoneMap'' @ 150465fb0

void __cdecl `FGLTFMeshSection::GetBoneMap'::__l2::_dynamic_atexit_destructor_for__BoneMap__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BoneMap.AllocatorInstance.Data;
  if (BoneMap.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BoneMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatFactor'' @ 150465fd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatFactor.Data.AllocatorInstance.Data;
  if (ClearCoatFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatInputMasks'' @ 150465ff0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__ClearCoatInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatInputMasks.AllocatorInstance.Data;
  if (ClearCoatInputMasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatInputMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalScale'' @ 150466010

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatNormalScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalScale.Data.AllocatorInstance.Data;
  if (ClearCoatNormalScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatNormalScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture'' @ 150466030

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatNormalTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatNormalTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_OffsetScale'' @ 150466050

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatNormalTexture_OffsetScale.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Offset_X'' @ 150466070

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Offset_X.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Offset_Y'' @ 150466090

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Rotation'' @ 1504660b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Rotation.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Scale_X'' @ 1504660d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Scale_X.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_Scale_Y'' @ 1504660f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_TexCoord'' @ 150466110

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_TexCoord.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (ClearCoatNormalTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatNormalTexture_TilingMethod'' @ 150466130

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatNormalTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatNormalTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (ClearCoatNormalTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatNormalTexture_TilingMethod.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessFactor'' @ 150466150

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatRoughnessFactor__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessFactor.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessInputMasks'' @ 150466170

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__ClearCoatRoughnessInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessInputMasks.AllocatorInstance.Data;
  if (ClearCoatRoughnessInputMasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessInputMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture'' @ 150466190

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_OffsetScale'' @ 1504661b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Offset_X'' @ 1504661d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Offset_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Offset_X.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Offset_Y'' @ 1504661f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Rotation'' @ 150466210

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Rotation.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Rotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Rotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Scale_X'' @ 150466230

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Scale_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Scale_X.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_Scale_Y'' @ 150466250

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_TexCoord'' @ 150466270

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_TexCoord.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_TexCoord.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatRoughnessTexture_TilingMethod'' @ 150466290

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatRoughnessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (ClearCoatRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture'' @ 1504662b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture.Data.AllocatorInstance.Data;
  if (ClearCoatTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture_OffsetScale'' @ 1504662d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Offset_X'' @ 1504662f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Offset_X.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Offset_Y'' @ 150466310

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Rotation'' @ 150466330

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Rotation.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Scale_X'' @ 150466350

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Scale_X.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture_Scale_Y'' @ 150466370

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture_TexCoord'' @ 150466390

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__ClearCoatTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_TexCoord.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ClearCoatTexture_TilingMethod'' @ 1504663b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__ClearCoatTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClearCoatTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (ClearCoatTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClearCoatTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Color_A'' @ 1504663d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__Color_A__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Color_A.Data.AllocatorInstance.Data;
  if (Color_A.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Color_A.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Color_RGB'' @ 1504663f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__Color_RGB__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Color_RGB.Data.AllocatorInstance.Data;
  if (Color_RGB.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Color_RGB.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultColorInputMasks'' @ 150466410

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__DefaultColorInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultColorInputMasks.AllocatorInstance.Data;
  if (DefaultColorInputMasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultColorInputMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseFactor'' @ 150466430

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseFactor.Data.AllocatorInstance.Data;
  if (DiffuseFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseFactor_A'' @ 150466450

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseFactor_A__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseFactor_A.Data.AllocatorInstance.Data;
  if (DiffuseFactor_A.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseFactor_A.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseFactor_RGB'' @ 150466470

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseFactor_RGB__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseFactor_RGB.Data.AllocatorInstance.Data;
  if (DiffuseFactor_RGB.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseFactor_RGB.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture'' @ 150466490

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture.Data.AllocatorInstance.Data;
  if (DiffuseTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture_OffsetScale'' @ 1504664b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_OffsetScale__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (DiffuseTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture_Offset_X'' @ 1504664d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Offset_X.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture_Offset_Y'' @ 1504664f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture_Rotation'' @ 150466510

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Rotation.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture_Scale_X'' @ 150466530

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Scale_X.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture_Scale_Y'' @ 150466550

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (DiffuseTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture_TexCoord'' @ 150466570

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__DiffuseTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_TexCoord.Data.AllocatorInstance.Data;
  if (DiffuseTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DiffuseTexture_TilingMethod'' @ 150466590

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__DiffuseTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffuseTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (DiffuseTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DiffuseTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveFactor'' @ 1504665b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveFactor.Data.AllocatorInstance.Data;
  if (EmissiveFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveStrength'' @ 1504665d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveStrength__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveStrength.Data.AllocatorInstance.Data;
  if (EmissiveStrength.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveStrength.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture'' @ 1504665f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture.Data.AllocatorInstance.Data;
  if (EmissiveTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture_OffsetScale'' @ 150466610

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__EmissiveTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (EmissiveTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture_Offset_X'' @ 150466630

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Offset_X.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture_Offset_Y'' @ 150466650

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture_Rotation'' @ 150466670

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Rotation.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture_Scale_X'' @ 150466690

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Scale_X.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture_Scale_Y'' @ 1504666b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (EmissiveTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture_TexCoord'' @ 1504666d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__EmissiveTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_TexCoord.Data.AllocatorInstance.Data;
  if (EmissiveTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmissiveTexture_TilingMethod'' @ 1504666f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__EmissiveTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmissiveTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (EmissiveTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmissiveTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GlossinessFactor'' @ 150466710

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__GlossinessFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GlossinessFactor.Data.AllocatorInstance.Data;
  if (GlossinessFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GlossinessFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IOR'' @ 150466730

void __cdecl UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IOR__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IOR.Data.AllocatorInstance.Data;
  if (IOR.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IOR.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceFactor'' @ 150466750

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceFactor.Data.AllocatorInstance.Data;
  if (IridescenceFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceIOR'' @ 150466770

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceIOR__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceIOR.Data.AllocatorInstance.Data;
  if (IridescenceIOR.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceIOR.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture'' @ 150466790

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture.Data.AllocatorInstance.Data;
  if (IridescenceTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture_OffsetScale'' @ 1504667b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (IridescenceTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (IridescenceTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture_Offset_X'' @ 1504667d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Offset_X.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture_Offset_Y'' @ 1504667f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture_Rotation'' @ 150466810

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Rotation.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture_Scale_X'' @ 150466830

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Scale_X.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture_Scale_Y'' @ 150466850

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__IridescenceTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (IridescenceTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture_TexCoord'' @ 150466870

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_TexCoord.Data.AllocatorInstance.Data;
  if (IridescenceTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceTexture_TilingMethod'' @ 150466890

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (IridescenceTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (IridescenceTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessMaximum'' @ 1504668b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessMaximum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessMaximum.Data.AllocatorInstance.Data;
  if (IridescenceThicknessMaximum.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessMaximum.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessMinimum'' @ 1504668d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessMinimum__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessMinimum.Data.AllocatorInstance.Data;
  if (IridescenceThicknessMinimum.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessMinimum.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture'' @ 1504668f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_OffsetScale'' @ 150466910

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_OffsetScale.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Offset_X'' @ 150466930

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Offset_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Offset_X.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Offset_Y'' @ 150466950

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Offset_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Offset_Y.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Rotation'' @ 150466970

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Rotation.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Rotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Rotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Scale_X'' @ 150466990

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Scale_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Scale_X.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_Scale_Y'' @ 1504669b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_Scale_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_Scale_Y.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_TexCoord'' @ 1504669d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_TexCoord.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_TexCoord.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IridescenceThicknessTexture_TilingMethod'' @ 1504669f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__IridescenceThicknessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IridescenceThicknessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (IridescenceThicknessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (IridescenceThicknessTexture_TilingMethod.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogGLTFExporter'' @ 150466a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGLTFExporter__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGLTFExporter);
  return;
}

// `dynamic_atexit_destructor_for_'MetallicFactor'' @ 150466a30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__MetallicFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicFactor.Data.AllocatorInstance.Data;
  if (MetallicFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicInputMasks'' @ 150466a50

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__MetallicInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicInputMasks.AllocatorInstance.Data;
  if (MetallicInputMasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicInputMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture'' @ 150466a70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__MetallicRoughnessTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_OffsetScale'' @ 150466a90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Offset_X'' @ 150466ab0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Offset_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_Offset_X.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Offset_Y'' @ 150466ad0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Rotation'' @ 150466af0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Rotation.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Rotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_Rotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Scale_X'' @ 150466b10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (MetallicRoughnessTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_Scale_Y'' @ 150466b30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (MetallicRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_TexCoord'' @ 150466b50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_TexCoord.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_TexCoord.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'MetallicRoughnessTexture_TilingMethod'' @ 150466b70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__MetallicRoughnessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MetallicRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (MetallicRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (MetallicRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalScale'' @ 150466b90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalScale.Data.AllocatorInstance.Data;
  if (NormalScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture'' @ 150466bb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture.Data.AllocatorInstance.Data;
  if (NormalTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture_OffsetScale'' @ 150466bd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_OffsetScale__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (NormalTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture_Offset_X'' @ 150466bf0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Offset_X.Data.AllocatorInstance.Data;
  if (NormalTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture_Offset_Y'' @ 150466c10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (NormalTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture_Rotation'' @ 150466c30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Rotation.Data.AllocatorInstance.Data;
  if (NormalTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture_Scale_X'' @ 150466c50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Scale_X.Data.AllocatorInstance.Data;
  if (NormalTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture_Scale_Y'' @ 150466c70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (NormalTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture_TexCoord'' @ 150466c90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_TexCoord.Data.AllocatorInstance.Data;
  if (NormalTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NormalTexture_TilingMethod'' @ 150466cb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__NormalTexture_TilingMethod__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NormalTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (NormalTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NormalTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionInputMasks'' @ 150466cd0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__OcclusionInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionInputMasks.AllocatorInstance.Data;
  if (OcclusionInputMasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionInputMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionStrength'' @ 150466cf0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionStrength__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionStrength.Data.AllocatorInstance.Data;
  if (OcclusionStrength.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionStrength.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture'' @ 150466d10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture.Data.AllocatorInstance.Data;
  if (OcclusionTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture_OffsetScale'' @ 150466d30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__OcclusionTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (OcclusionTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture_Offset_X'' @ 150466d50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Offset_X.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture_Offset_Y'' @ 150466d70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture_Rotation'' @ 150466d90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Rotation.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture_Scale_X'' @ 150466db0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Scale_X.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture_Scale_Y'' @ 150466dd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (OcclusionTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture_TexCoord'' @ 150466df0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__OcclusionTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_TexCoord.Data.AllocatorInstance.Data;
  if (OcclusionTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OcclusionTexture_TilingMethod'' @ 150466e10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__OcclusionTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OcclusionTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (OcclusionTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OcclusionTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OffsetScale'' @ 150466e30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OffsetScale.Data.AllocatorInstance.Data;
  if (OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OffsetX'' @ 150466e50

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__OffsetX__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OffsetX.Data.AllocatorInstance.Data;
  if (OffsetX.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OffsetX.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OffsetY'' @ 150466e70

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__OffsetY__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OffsetY.Data.AllocatorInstance.Data;
  if (OffsetY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OffsetY.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OpacityInputMasks'' @ 150466e90

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__OpacityInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OpacityInputMasks.AllocatorInstance.Data;
  if (OpacityInputMasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OpacityInputMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Rotation'' @ 150466eb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Rotation.Data.AllocatorInstance.Data;
  if (Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RoughnessFactor'' @ 150466ed0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__RoughnessFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RoughnessFactor.Data.AllocatorInstance.Data;
  if (RoughnessFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RoughnessFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RoughnessInputMasks'' @ 150466ef0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__RoughnessInputMasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RoughnessInputMasks.AllocatorInstance.Data;
  if (RoughnessInputMasks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RoughnessInputMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ScaleX'' @ 150466f10

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__ScaleX__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ScaleX.Data.AllocatorInstance.Data;
  if (ScaleX.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ScaleX.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ScaleY'' @ 150466f30

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__ScaleY__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ScaleY.Data.AllocatorInstance.Data;
  if (ScaleY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ScaleY.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ShadingModelToMaterialInformation'' @ 150466f50

void __cdecl
UE::Interchange::GLTFMaterials::_dynamic_atexit_destructor_for__ShadingModelToMaterialInformation__
          (void)

{
  ShadingModelToMaterialInformation._72_4_ = 0;
  if (ShadingModelToMaterialInformation._64_8_ != 0) {
    FMemory::Free((void *)ShadingModelToMaterialInformation._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ShadingModelToMaterialInformation);
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorFactor'' @ 150466f90

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorFactor.Data.AllocatorInstance.Data;
  if (SheenColorFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture'' @ 150466fb0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture.Data.AllocatorInstance.Data;
  if (SheenColorTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture_OffsetScale'' @ 150466fd0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenColorTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (SheenColorTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture_Offset_X'' @ 150466ff0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Offset_X.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture_Offset_Y'' @ 150467010

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture_Rotation'' @ 150467030

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Rotation.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture_Scale_X'' @ 150467050

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Scale_X.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture_Scale_Y'' @ 150467070

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (SheenColorTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture_TexCoord'' @ 150467090

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenColorTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_TexCoord.Data.AllocatorInstance.Data;
  if (SheenColorTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenColorTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenColorTexture_TilingMethod'' @ 1504670b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenColorTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenColorTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (SheenColorTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenColorTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessFactor'' @ 1504670d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenRoughnessFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessFactor.Data.AllocatorInstance.Data;
  if (SheenRoughnessFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture'' @ 1504670f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SheenRoughnessTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_OffsetScale'' @ 150467110

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture_OffsetScale.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Offset_X'' @ 150467130

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenRoughnessTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Offset_Y'' @ 150467150

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenRoughnessTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Rotation'' @ 150467170

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Rotation.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenRoughnessTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Scale_X'' @ 150467190

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_Scale_Y'' @ 1504671b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_TexCoord'' @ 1504671d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (SheenRoughnessTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SheenRoughnessTexture_TilingMethod'' @ 1504671f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SheenRoughnessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SheenRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (SheenRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SheenRoughnessTexture_TilingMethod.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecFactor'' @ 150467210

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecFactor.Data.AllocatorInstance.Data;
  if (SpecFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularFactor'' @ 150467230

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularFactor.Data.AllocatorInstance.Data;
  if (SpecularFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture'' @ 150467250

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularGlossinessTexture__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_OffsetScale'' @ 150467270

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_OffsetScale.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_OffsetScale.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Offset_X'' @ 150467290

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Offset_X.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Offset_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Offset_X.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Offset_Y'' @ 1504672b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Offset_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Offset_Y.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Rotation'' @ 1504672d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Rotation.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Rotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Rotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Scale_X'' @ 1504672f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Scale_X.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Scale_X.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Scale_X.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_Scale_Y'' @ 150467310

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_Scale_Y.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_Scale_Y.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_TexCoord'' @ 150467330

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_TexCoord.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_TexCoord.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_TexCoord.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularGlossinessTexture_TilingMethod'' @ 150467350

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularGlossinessTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularGlossinessTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (SpecularGlossinessTexture_TilingMethod.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularGlossinessTexture_TilingMethod.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture'' @ 150467370

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture.Data.AllocatorInstance.Data;
  if (SpecularTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture_OffsetScale'' @ 150467390

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (SpecularTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture_Offset_X'' @ 1504673b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Offset_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Offset_X.Data.AllocatorInstance.Data;
  if (SpecularTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture_Offset_Y'' @ 1504673d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Offset_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (SpecularTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture_Rotation'' @ 1504673f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Rotation__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Rotation.Data.AllocatorInstance.Data;
  if (SpecularTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture_Scale_X'' @ 150467410

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Scale_X__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Scale_X.Data.AllocatorInstance.Data;
  if (SpecularTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture_Scale_Y'' @ 150467430

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_Scale_Y__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (SpecularTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture_TexCoord'' @ 150467450

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__SpecularTexture_TexCoord__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_TexCoord.Data.AllocatorInstance.Data;
  if (SpecularTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SpecularTexture_TilingMethod'' @ 150467470

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__SpecularTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SpecularTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (SpecularTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SpecularTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150467490

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FGLTFSimpleElementNormalMapPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1504674b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FGLTFSimpleTexture2DPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'TexCoord'' @ 1504674d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TexCoord.Data.AllocatorInstance.Data;
  if (TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TilingMethod'' @ 1504674f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::PostFix::_dynamic_atexit_destructor_for__TilingMethod__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TilingMethod.Data.AllocatorInstance.Data;
  if (TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionFactor'' @ 150467510

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__TransmissionFactor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionFactor.Data.AllocatorInstance.Data;
  if (TransmissionFactor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionFactor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture'' @ 150467530

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::_dynamic_atexit_destructor_for__TransmissionTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture.Data.AllocatorInstance.Data;
  if (TransmissionTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture_OffsetScale'' @ 150467550

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_OffsetScale__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_OffsetScale.Data.AllocatorInstance.Data;
  if (TransmissionTexture_OffsetScale.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (TransmissionTexture_OffsetScale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture_Offset_X'' @ 150467570

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Offset_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Offset_X.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Offset_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Offset_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture_Offset_Y'' @ 150467590

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Offset_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Offset_Y.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Offset_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Offset_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture_Rotation'' @ 1504675b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Rotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Rotation.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Rotation.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Rotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture_Scale_X'' @ 1504675d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Scale_X__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Scale_X.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Scale_X.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Scale_X.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture_Scale_Y'' @ 1504675f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_Scale_Y__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_Scale_Y.Data.AllocatorInstance.Data;
  if (TransmissionTexture_Scale_Y.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_Scale_Y.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture_TexCoord'' @ 150467610

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_TexCoord__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_TexCoord.Data.AllocatorInstance.Data;
  if (TransmissionTexture_TexCoord.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransmissionTexture_TexCoord.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransmissionTexture_TilingMethod'' @ 150467630

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::
_dynamic_atexit_destructor_for__TransmissionTexture_TilingMethod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransmissionTexture_TilingMethod.Data.AllocatorInstance.Data;
  if (TransmissionTexture_TilingMethod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (TransmissionTexture_TilingMethod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasAnisotropyTextureAndOrRotation'' @ 150467650

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasAnisotropyTextureAndOrRotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasAnisotropyTextureAndOrRotation.Data.AllocatorInstance.Data;
  if (bHasAnisotropyTextureAndOrRotation.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasAnisotropyTextureAndOrRotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasBaseColorTexture'' @ 150467670

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasBaseColorTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasBaseColorTexture.Data.AllocatorInstance.Data;
  if (bHasBaseColorTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasBaseColorTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasClearCoatTexture'' @ 150467690

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasClearCoatTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasClearCoatTexture.Data.AllocatorInstance.Data;
  if (bHasClearCoatTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasClearCoatTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasDiffuseSpecGlossTexture'' @ 1504676b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasDiffuseSpecGlossTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasDiffuseSpecGlossTexture.Data.AllocatorInstance.Data;
  if (bHasDiffuseSpecGlossTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasDiffuseSpecGlossTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasEmissiveTexture'' @ 1504676d0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasEmissiveTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasEmissiveTexture.Data.AllocatorInstance.Data;
  if (bHasEmissiveTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasEmissiveTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasIridescence'' @ 1504676f0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasIridescence__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasIridescence.Data.AllocatorInstance.Data;
  if (bHasIridescence.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasIridescence.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasMetallicRoughnessTexture'' @ 150467710

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasMetallicRoughnessTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasMetallicRoughnessTexture.Data.AllocatorInstance.Data;
  if (bHasMetallicRoughnessTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasMetallicRoughnessTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasNormalTexture'' @ 150467730

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasNormalTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasNormalTexture.Data.AllocatorInstance.Data;
  if (bHasNormalTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasNormalTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasOcclusionTexture'' @ 150467750

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasOcclusionTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasOcclusionTexture.Data.AllocatorInstance.Data;
  if (bHasOcclusionTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasOcclusionTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasSheenTexture'' @ 150467770

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasSheenTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasSheenTexture.Data.AllocatorInstance.Data;
  if (bHasSheenTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasSheenTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasSpecularTexture'' @ 150467790

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasSpecularTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasSpecularTexture.Data.AllocatorInstance.Data;
  if (bHasSpecularTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasSpecularTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'bHasTransmissionTexture'' @ 1504677b0

void __cdecl
UE::Interchange::GLTFMaterials::Inputs::Configuration::
_dynamic_atexit_destructor_for__bHasTransmissionTexture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = bHasTransmissionTexture.Data.AllocatorInstance.Data;
  if (bHasTransmissionTexture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (bHasTransmissionTexture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

