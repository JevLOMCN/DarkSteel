// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticStruct @ 14978cef0

UScriptStruct * __cdecl FPCGKernelAttributeKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGKernelAttributeKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGKernelAttributeKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGKernelAttributeKey,(UObject *)pUVar1,
                         L"PCGKernelAttributeKey");
  }
  return Z_Registration_Info_UScriptStruct_FPCGKernelAttributeKey.OuterSingleton;
}

// FPCGKernelAttributeKey @ 1497df830

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGKernelAttributeKey * __thiscall
FPCGKernelAttributeKey::FPCGKernelAttributeKey
          (FPCGKernelAttributeKey *this,FPCGAttributePropertySelector *param_1,
          EPCGKernelAttributeType param_2)

{
  FName FVar1;
  FName FVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  undefined4 uVar5;
  int iVar6;
  FNameEntryId FVar7;
  uint uVar8;
  FString local_28 [2];
  
  (this->Identifier).Name.ComparisonIndex = 0;
  (this->Identifier).Name.Number = 0;
  (this->Identifier).MetadataDomain.Flag = Default;
  (this->Identifier).MetadataDomain.CustomFlag = -1;
  (this->Identifier).MetadataDomain.DebugName.ComparisonIndex = 0;
  (this->Identifier).MetadataDomain.DebugName.Number = 0;
  this->Type = param_2;
  *(undefined8 *)&(this->Name).field_0x8 = 0;
  *(undefined8 *)&(this->Name).field_0x10 = 0;
  *(undefined8 *)&(this->Name).field_0x18 = 0;
  *(undefined4 *)&(this->Name).field_0x20 = 0;
  *(undefined8 *)&(this->Name).field_0x28 = 0;
  *(undefined8 *)&(this->Name).field_0x30 = 0;
  (this->Name).field_0x38 = 0;
  *(undefined ***)&this->Name = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  FPCGAttributePropertySelector::ImportFromOtherSelector
            ((FPCGAttributePropertySelector *)&this->Name,param_1);
  if (*(int *)&(this->Name).field_0x8 == 0) {
    if (*(longlong *)&(this->Name).field_0xc == 0) {
      FVar1.ComparisonIndex.Value = *(uint *)&(this->Name).field_0x14;
      FVar1.Number = *(uint *)&(this->Name).field_0x18;
      if (PCGDataConstants::DataDomainName == (FName)0x0) {
        uVar5 = PCGMetadataDomainID::Data._0_4_;
        iVar6 = PCGMetadataDomainID::Data.CustomFlag;
        FVar7.Value = PCGMetadataDomainID::Data.DebugName.ComparisonIndex.Value;
        uVar8 = PCGMetadataDomainID::Data.DebugName.Number;
      }
      else {
        uVar5 = PCGMetadataDomainID::Default._0_4_;
        iVar6 = PCGMetadataDomainID::Default.CustomFlag;
        FVar7.Value = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
        uVar8 = PCGMetadataDomainID::Default.DebugName.Number;
      }
      if (((FVar1 != (this->Identifier).Name) ||
          ((EPCGMetadataDomainFlag)uVar5 != (this->Identifier).MetadataDomain.Flag)) ||
         (iVar6 != (this->Identifier).MetadataDomain.CustomFlag)) {
        (this->Identifier).Name = FVar1;
        (this->Identifier).MetadataDomain.Flag = (char)uVar5;
        *(int3 *)&(this->Identifier).MetadataDomain.field_0x1 = (int3)((uint)uVar5 >> 8);
        (this->Identifier).MetadataDomain.CustomFlag = iVar6;
        FVar2.Number = uVar8;
        FVar2.ComparisonIndex.Value = FVar7.Value;
        (this->Identifier).MetadataDomain.DebugName = FVar2;
      }
      return this;
    }
    if ((byte)LogPCG._0_1_ < 2) goto LAB_1497df8d6;
    pFVar3 = FPCGAttributePropertySelector::ToString
                       ((FPCGAttributePropertySelector *)&this->Name,local_28,false);
    if ((pFVar3->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  else {
    if ((byte)LogPCG._0_1_ < 2) goto LAB_1497df8d6;
    FPCGAttributePropertySelector::ToString
              ((FPCGAttributePropertySelector *)&this->Name,local_28,false);
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogPCG);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
LAB_1497df8d6:
  (this->Identifier).MetadataDomain = PCGMetadataDomainID::Invalid;
  return this;
}

// operator== @ 1497e38c0

bool __thiscall
FPCGKernelAttributeKey::operator==(FPCGKernelAttributeKey *this,FPCGKernelAttributeKey *param_1)

{
  if ((((this->Type == param_1->Type) && ((this->Identifier).Name == (param_1->Identifier).Name)) &&
      ((this->Identifier).MetadataDomain.Flag == (param_1->Identifier).MetadataDomain.Flag)) &&
     ((this->Identifier).MetadataDomain.CustomFlag ==
      (param_1->Identifier).MetadataDomain.CustomFlag)) {
    return true;
  }
  return false;
}

// IsValid @ 149821230

bool __thiscall FPCGKernelAttributeKey::IsValid(FPCGKernelAttributeKey *this)

{
  return (this->Identifier).MetadataDomain.Flag != Invalid;
}

// SetSelector @ 149840c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGKernelAttributeKey::SetSelector
          (FPCGKernelAttributeKey *this,FPCGAttributePropertySelector *param_1)

{
  FName FVar1;
  FName FVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  undefined4 uVar5;
  int iVar6;
  FNameEntryId FVar7;
  uint uVar8;
  FString local_28 [2];
  
  FPCGAttributePropertySelector::ImportFromOtherSelector
            ((FPCGAttributePropertySelector *)&this->Name,param_1);
  if (*(int *)&(this->Name).field_0x8 == 0) {
    if (*(longlong *)&(this->Name).field_0xc == 0) {
      FVar1.ComparisonIndex.Value = *(uint *)&(this->Name).field_0x14;
      FVar1.Number = *(uint *)&(this->Name).field_0x18;
      if (PCGDataConstants::DataDomainName == (FName)0x0) {
        uVar5 = PCGMetadataDomainID::Data._0_4_;
        iVar6 = PCGMetadataDomainID::Data.CustomFlag;
        FVar7.Value = PCGMetadataDomainID::Data.DebugName.ComparisonIndex.Value;
        uVar8 = PCGMetadataDomainID::Data.DebugName.Number;
      }
      else {
        uVar5 = PCGMetadataDomainID::Default._0_4_;
        iVar6 = PCGMetadataDomainID::Default.CustomFlag;
        FVar7.Value = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
        uVar8 = PCGMetadataDomainID::Default.DebugName.Number;
      }
      if (((FVar1 != (this->Identifier).Name) ||
          ((EPCGMetadataDomainFlag)uVar5 != (this->Identifier).MetadataDomain.Flag)) ||
         (iVar6 != (this->Identifier).MetadataDomain.CustomFlag)) {
        (this->Identifier).Name = FVar1;
        (this->Identifier).MetadataDomain.Flag = (char)uVar5;
        *(int3 *)&(this->Identifier).MetadataDomain.field_0x1 = (int3)((uint)uVar5 >> 8);
        (this->Identifier).MetadataDomain.CustomFlag = iVar6;
        FVar2.Number = uVar8;
        FVar2.ComparisonIndex.Value = FVar7.Value;
        (this->Identifier).MetadataDomain.DebugName = FVar2;
      }
      return;
    }
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149840d03;
    FPCGAttributePropertySelector::ToString
              ((FPCGAttributePropertySelector *)&this->Name,local_28,false);
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149840d03;
    pFVar3 = FPCGAttributePropertySelector::ToString
                       ((FPCGAttributePropertySelector *)&this->Name,local_28,false);
    if ((pFVar3->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogPCG);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
LAB_149840d03:
  (this->Identifier).MetadataDomain = PCGMetadataDomainID::Invalid;
  return;
}

// UpdateIdentifierFromSelector @ 14984d490

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPCGKernelAttributeKey::UpdateIdentifierFromSelector(FPCGKernelAttributeKey *this)

{
  FName FVar1;
  FName FVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  undefined4 uVar5;
  int iVar6;
  FNameEntryId FVar7;
  uint uVar8;
  FString local_28 [2];
  
  if (*(int *)&(this->Name).field_0x8 == 0) {
    if (*(longlong *)&(this->Name).field_0xc == 0) {
      FVar1.ComparisonIndex.Value = *(uint *)&(this->Name).field_0x14;
      FVar1.Number = *(uint *)&(this->Name).field_0x18;
      if (PCGDataConstants::DataDomainName == (FName)0x0) {
        uVar5 = PCGMetadataDomainID::Data._0_4_;
        iVar6 = PCGMetadataDomainID::Data.CustomFlag;
        FVar7.Value = PCGMetadataDomainID::Data.DebugName.ComparisonIndex.Value;
        uVar8 = PCGMetadataDomainID::Data.DebugName.Number;
      }
      else {
        uVar5 = PCGMetadataDomainID::Default._0_4_;
        iVar6 = PCGMetadataDomainID::Default.CustomFlag;
        FVar7.Value = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
        uVar8 = PCGMetadataDomainID::Default.DebugName.Number;
      }
      if (((FVar1 == (this->Identifier).Name) &&
          ((EPCGMetadataDomainFlag)uVar5 == (this->Identifier).MetadataDomain.Flag)) &&
         (iVar6 == (this->Identifier).MetadataDomain.CustomFlag)) {
        return false;
      }
      (this->Identifier).Name = FVar1;
      (this->Identifier).MetadataDomain.Flag = (char)uVar5;
      *(int3 *)&(this->Identifier).MetadataDomain.field_0x1 = (int3)((uint)uVar5 >> 8);
      (this->Identifier).MetadataDomain.CustomFlag = iVar6;
      FVar2.Number = uVar8;
      FVar2.ComparisonIndex.Value = FVar7.Value;
      (this->Identifier).MetadataDomain.DebugName = FVar2;
      return true;
    }
    if ((byte)LogPCG._0_1_ < 2) goto LAB_14984d536;
    FPCGAttributePropertySelector::ToString
              ((FPCGAttributePropertySelector *)&this->Name,local_28,false);
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogPCG._0_1_ < 2) goto LAB_14984d536;
    pFVar3 = FPCGAttributePropertySelector::ToString
                       ((FPCGAttributePropertySelector *)&this->Name,local_28,false);
    if ((pFVar3->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogPCG);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
LAB_14984d536:
  (this->Identifier).MetadataDomain = PCGMetadataDomainID::Invalid;
  return true;
}

