// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// GetViewInfo @ 145caf450

/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

FViewInfo __thiscall FRHIViewDesc::FTexture::GetViewInfo(FTexture *this,FRHITexture *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  FViewInfo FVar6;
  byte *pbVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  longlong *in_R8;
  FName local_res8;
  FString local_38;
  
  if ((in_R8 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0x125,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  if ((this->Dimension == Unknown) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dimension != EDimension::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0x126,
                         L"A texture dimension must be specified when creating a texture view. Use SetDimension() or SetDimensionFromTexture()."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  pbVar7 = (byte *)(**(code **)(*in_R8 + 0x20))();
  if (((pbVar7[0x32] == 2) && (this->Dimension != Texture3D)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Desc.IsTexture3D() || Dimension == EDimension::Texture3D",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0x12a,L"Views of 3D textures must use 3D dimension."), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  if (((pbVar7[0x32] != 2) && (this->Dimension == Texture3D)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.IsTexture3D() || Dimension != EDimension::Texture3D",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,299,
                         L"The underlying texture resource must be a 3D texture to create a 3D dimension view."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  if (((pbVar7[0x32] != 3) && (pbVar7[0x32] != 4)) &&
     ((((this->field_0x2 & 0x70) - 0x30 & 0xef) == 0 &&
      (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("Desc.IsTextureCube() || (Dimension != EDimension::TextureCube && Dimension != EDimension::TextureCubeArray)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                          ,300,
                          L"The underlying texture resource must be a cube (or cube array) to create a cube dimension view."
                         ), bVar4)))) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  if ((((this->MipRange).Num == '\0') && ((this->MipRange).First != '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipRange.Num > 0 || MipRange.First == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0x12e,
                         L"MipRange.Num cannot be zero, unless creating a view of the entire range."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  if (((uint)pbVar7[0x30] < (uint)(this->MipRange).Num + (uint)(this->MipRange).First) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipRange.First + MipRange.Num <= Desc.NumMips",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0x133,
                         L"Mip range (first: %d, num: %d) is out of bounds for texture description (num mips: %d)."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  if ((((this->ArrayRange).Num == 0) && ((this->ArrayRange).First != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayRange.Num > 0 || ArrayRange.First == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0x135,
                         L"ArrayRange.Num cannot be zero, unless creating a view of the entire range."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  if ((pbVar7[0x32] == 3) || (pbVar7[0x32] == 4)) {
    uVar8 = *(ushort *)(pbVar7 + 0x2e);
    uVar2 = uVar8 * 6;
  }
  else {
    uVar8 = *(ushort *)(pbVar7 + 0x2e);
    uVar2 = uVar8;
  }
  uVar9 = (this->ArrayRange).Num;
  uVar10 = (this->ArrayRange).First;
  if (uVar9 != 0) {
    uVar8 = uVar9;
  }
  if ((this->Dimension == NumBits) || (this->Dimension == TextureCubeArray)) {
    uVar10 = uVar10 * 6;
    uVar8 = uVar8 * 6;
  }
  if (((uint)uVar2 < (uint)uVar8 + (uint)uVar10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewArrayFirst + ViewArrayNum <= TextureArraySize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0x14b,
                         L"Array range (first: %d, num: %d) is out of bounds for texture description (array size: %d)."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FViewInfo)(*pcVar3)();
    return FVar6;
  }
  uVar8 = *(ushort *)(pbVar7 + 0x2e);
  if ((this->Dimension == Texture2DArray) && ((pbVar7[0x32] == 3 || (pbVar7[0x32] == 4)))) {
    uVar8 = uVar8 * 6;
  }
  param_1->_padding_ = 0;
  bVar5 = *(byte *)((longlong)&this->_padding_ + 1);
  if (bVar5 == 0) {
    bVar5 = pbVar7[0x33];
  }
  *(byte *)((longlong)&param_1->_padding_ + 5) = bVar5;
  *(byte *)((longlong)&param_1->_padding_ + 4) = this->Plane;
  pbVar1 = (byte *)((longlong)&param_1->_padding_ + 6);
  *pbVar1 = *pbVar1 ^ (this->Dimension ^ *(byte *)((longlong)&param_1->_padding_ + 6)) & 7;
  switch(this->Plane) {
  case 2:
  case 5:
  case 6:
    break;
  case 3:
    if (((*pbVar7 & 4) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(Desc.Flags, ETextureCreateFlags::DepthStencilTargetable)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0x16e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FViewInfo)(*pcVar3)();
      return FVar6;
    }
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      *(undefined1 *)((longlong)&param_1->_padding_ + 5) = 0x2c;
    }
    break;
  case 4:
    if (((*pbVar7 & 4) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(Desc.Flags, ETextureCreateFlags::DepthStencilTargetable)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0x176,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FViewInfo)(*pcVar3)();
      return FVar6;
    }
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x15f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FViewInfo)(*pcVar3)();
      return FVar6;
    }
  case 0:
  case 1:
    if (*(char *)((longlong)&this->_padding_ + 1) == ',') {
      if (((*pbVar7 & 4) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumHasAnyFlags(Desc.Flags, ETextureCreateFlags::DepthStencilTargetable)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                             ,0x168,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar6 = (FViewInfo)(*pcVar3)();
        return FVar6;
      }
      *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 3;
    }
  }
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 5);
  if ((bVar5 != 0) && (GPixelFormats[bVar5].Supported == 0)) {
    local_res8 = *(FName *)(in_R8 + 3);
    ::FName::ToString(&local_res8,&local_38);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.Format == PF_Unknown || GPixelFormats[Info.Format].Supported",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x183,
                       L"Unsupported format (%d: %s) requested in view of texture resource: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FViewInfo)(*pcVar3)();
      return FVar6;
    }
  }
  uVar2 = (this->ArrayRange).First;
  *(ushort *)&param_1->_padding_ = uVar2;
  uVar9 = (this->ArrayRange).Num;
  if (uVar9 == 0) {
    uVar9 = uVar8;
  }
  *(ushort *)((longlong)&param_1->_padding_ + 2) = uVar9;
  if ((uVar2 == 0) && (uVar9 == uVar8)) {
    bVar5 = 0x10;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)&param_1->_padding_ + 6) =
       *(byte *)((longlong)&param_1->_padding_ + 6) & 0xef | bVar5;
  return (FViewInfo)param_1;
}

