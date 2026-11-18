// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1488a2970

UScriptStruct * __cdecl FTextureLODGroup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTextureLODGroup.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTextureLODGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTextureLODGroup,(UObject *)pUVar1,
                         L"TextureLODGroup");
  }
  return Z_Registration_Info_UScriptStruct_FTextureLODGroup.OuterSingleton;
}

// FTextureLODGroup @ 1488aedf0

FTextureLODGroup * __thiscall FTextureLODGroup::FTextureLODGroup(FTextureLODGroup *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FName FVar3;
  longlong lVar4;
  ETextureSamplerFilter EVar5;
  FNameEntryId FVar6;
  EPlatformMemorySizeBucket EVar7;
  int iVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  undefined1 local_res8 [8];
  
  (this->Group).Value = '\0';
  this->MipGenSettings = '\x01';
  this->MipLoadOptions = AllMips;
  this->LODBias_VT = 0;
  this->MinLODSize = 1;
  this->MaxLODSize_VT = 0;
  this->OptionalLODBias = 0;
  this->MaxLODMipCount = 0x20;
  this->LODBias = 0;
  this->LODBias_Smaller = -1;
  this->LODBias_Smallest = -1;
  this->NumStreamedMips = -1;
  this->MaxLODSize = 0x1000;
  this->MaxLODSize_Smaller = -1;
  this->MaxLODSize_Smallest = -1;
  this->OptionalMaxLODSize = 0x1000;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
  (this->MinMagFilter).ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  (this->MinMagFilter).Number = 0;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
  (this->MipFilter).ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
  (this->MipFilter).Number = 0;
  this->HighPriorityLoad = '\0';
  this->CookPlatformTilingDisabled = '\0';
  this->DuplicateNonOptionalMips = '\0';
  this->DownscaleOptions = Default;
  this->LossyCompressionAmount = '\0';
  this->Downscale = 1.0;
  this->VirtualTextureTileCountBias = 0;
  this->VirtualTextureTileSizeBias = 0;
  this->MaxAniso = 0;
  EVar7 = FGenericPlatformMemory::GetMemorySizeBucket();
  if (EVar7 == Smaller) {
    if (0 < this->LODBias_Smaller) {
      this->LODBias = this->LODBias_Smaller;
    }
LAB_1488aeebf:
    iVar8 = this->MaxLODSize_Smaller;
    if (iVar8 < 1) goto LAB_1488aeec9;
  }
  else {
    if (EVar7 != Smallest) goto LAB_1488aeec9;
    iVar8 = this->LODBias_Smallest;
    if ((0 < iVar8) || (iVar8 = this->LODBias_Smaller, 0 < iVar8)) {
      this->LODBias = iVar8;
    }
    iVar8 = this->MaxLODSize_Smallest;
    if (iVar8 < 1) goto LAB_1488aeebf;
  }
  this->MaxLODSize = iVar8;
LAB_1488aeec9:
  iVar8 = 1;
  if (this->MaxLODSize != 0) {
    iVar8 = this->MaxLODSize;
  }
  uVar2 = (ulonglong)(iVar8 - 1) * 2 + 1;
  FVar3 = this->MinMagFilter;
  lVar4 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  this->MaxLODMipCount = (int)lVar4;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar9.Number = 0;
  FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar6.Value);
  if (FVar3 == FVar9) {
    FVar3 = this->MipFilter;
    FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar10.Number = 0;
    FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar6.Value);
    EVar5 = (FVar3 != FVar10) + Bilinear;
  }
  else {
    FVar3 = this->MinMagFilter;
    FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar11.Number = 0;
    FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar6.Value);
    if (FVar3 == FVar11) {
      EVar5 = Point;
    }
    else {
      FVar3 = this->MipFilter;
      FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
      FVar12.Number = 0;
      FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar6.Value);
      EVar5 = (FVar3 != FVar12) + AnisotropicPoint;
    }
  }
  this->Filter = EVar5;
  this->VirtualTextureStreamingPriority = Normal;
  return this;
}

// operator== @ 1488b3990

bool __thiscall FTextureLODGroup::operator==(FTextureLODGroup *this,FTextureLODGroup *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTextureLODGroup.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTextureLODGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTextureLODGroup,(UObject *)pUVar2,
                         L"TextureLODGroup");
  }
  bVar1 = UScriptStruct::CompareScriptStruct
                    (Z_Registration_Info_UScriptStruct_FTextureLODGroup.OuterSingleton,this,param_1,
                     0);
  return bVar1;
}

// SetupGroup @ 1488e0030

void __thiscall FTextureLODGroup::SetupGroup(FTextureLODGroup *this)

{
  ulonglong uVar1;
  FName FVar2;
  longlong lVar3;
  EPlatformMemorySizeBucket EVar4;
  int iVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  undefined1 local_res8 [8];
  
  EVar4 = FGenericPlatformMemory::GetMemorySizeBucket();
  if (EVar4 == Smaller) {
    if (0 < this->LODBias_Smaller) {
      this->LODBias = this->LODBias_Smaller;
    }
LAB_1488e0070:
    iVar5 = this->MaxLODSize_Smaller;
    if (iVar5 < 1) goto LAB_1488e007a;
  }
  else {
    if (EVar4 != Smallest) goto LAB_1488e007a;
    iVar5 = this->LODBias_Smallest;
    if ((0 < iVar5) || (iVar5 = this->LODBias_Smaller, 0 < iVar5)) {
      this->LODBias = iVar5;
    }
    iVar5 = this->MaxLODSize_Smallest;
    if (iVar5 < 1) goto LAB_1488e0070;
  }
  this->MaxLODSize = iVar5;
LAB_1488e007a:
  FVar2 = this->MinMagFilter;
  iVar5 = 1;
  if (this->MaxLODSize != 0) {
    iVar5 = this->MaxLODSize;
  }
  uVar1 = (ulonglong)(iVar5 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  this->MaxLODMipCount = (int)lVar3;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  if (FVar2 != FVar7) {
    FVar2 = this->MinMagFilter;
    FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar6.Value);
    if (FVar2 != FVar9) {
      FVar2 = this->MipFilter;
      FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
      FVar10.Number = 0;
      FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar6.Value);
      this->Filter = (FVar2 != FVar10) + AnisotropicPoint;
      this->VirtualTextureStreamingPriority = Normal;
      return;
    }
    this->Filter = Point;
    this->VirtualTextureStreamingPriority = Normal;
    return;
  }
  FVar2 = this->MipFilter;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar8.Number = 0;
  FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
  this->Filter = (FVar2 != FVar8) + Bilinear;
  this->VirtualTextureStreamingPriority = Normal;
  return;
}

