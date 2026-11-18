// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 12

// StaticStruct @ 14ad71cf0

UScriptStruct * __cdecl FMetasoundFrontendClassMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassMetadata,(UObject *)pUVar1
                         ,L"MetasoundFrontendClassMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassMetadata.OuterSingleton;
}

// FMetasoundFrontendClassMetadata @ 14ad9a450

FMetasoundFrontendClassMetadata * __thiscall
FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata
          (FMetasoundFrontendClassMetadata *this)

{
  (this->Version).Major = 1;
  (this->Version).Minor = 0;
  (this->ClassName).Namespace.ComparisonIndex = 0;
  (this->ClassName).Namespace.Number = 0;
  (this->ClassName).Name.ComparisonIndex = 0;
  (this->ClassName).Name.Number = 0;
  (this->ClassName).Variant.ComparisonIndex = 0;
  (this->ClassName).Variant.Number = 0;
  (this->ChangeID).A = 0;
  (this->ChangeID).B = 0;
  (this->ChangeID).C = 0;
  (this->ChangeID).D = 0;
  this->Type = Invalid;
  this->AccessFlags = 2;
  return this;
}

// AddAccessFlags @ 14ada5570

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
FMetasoundFrontendClassMetadata::AddAccessFlags
          (FMetasoundFrontendClassMetadata *this,EMetasoundFrontendClassAccessFlags param_1)

{
  this->AccessFlags = this->AccessFlags | param_1;
  return;
}

// ClearAccessFlags @ 14ada76c0

void __thiscall
FMetasoundFrontendClassMetadata::ClearAccessFlags(FMetasoundFrontendClassMetadata *this)

{
  this->AccessFlags = 0;
  return;
}

// GenerateClassMetadata @ 14adbb2a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClassMetadata * __cdecl
FMetasoundFrontendClassMetadata::GenerateClassMetadata
          (FMetasoundFrontendClassMetadata *__return_storage_ptr__,FNodeClassMetadata *param_1,
          EMetasoundFrontendClassType param_2)

{
  FName FVar1;
  FName FVar2;
  int iVar3;
  FName *pFVar4;
  FName *pFVar5;
  FName *pFVar6;
  
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Namespace.Number = 0;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Name.Number = 0;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassName).Variant.Number = 0;
  (__return_storage_ptr__->ChangeID).A = 0;
  (__return_storage_ptr__->ChangeID).B = 0;
  (__return_storage_ptr__->ChangeID).C = 0;
  (__return_storage_ptr__->ChangeID).D = 0;
  (__return_storage_ptr__->Version).Major = 1;
  (__return_storage_ptr__->Version).Minor = 0;
  __return_storage_ptr__->AccessFlags = 2;
  __return_storage_ptr__->Type = param_2;
  pFVar4 = Metasound::FNodeClassName::GetVariant(&param_1->ClassName);
  pFVar5 = Metasound::FNodeClassName::GetName(&param_1->ClassName);
  pFVar6 = Metasound::FNodeClassName::GetNamespace(&param_1->ClassName);
  FVar1 = *pFVar5;
  FVar2 = *pFVar4;
  (__return_storage_ptr__->ClassName).Namespace = *pFVar6;
  (__return_storage_ptr__->ClassName).Name = FVar1;
  (__return_storage_ptr__->ClassName).Variant = FVar2;
  iVar3 = param_1->MinorVersion;
  (__return_storage_ptr__->Version).Major = param_1->MajorVersion;
  (__return_storage_ptr__->Version).Minor = iVar3;
  return __return_storage_ptr__;
}

// GetAccessFlags @ 14adbbee0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

EMetasoundFrontendClassAccessFlags __thiscall
FMetasoundFrontendClassMetadata::GetAccessFlags(FMetasoundFrontendClassMetadata *this)

{
  return this->AccessFlags;
}

// GetType @ 14adc2f60

EMetasoundFrontendClassType __thiscall
FMetasoundFrontendClassMetadata::GetType(FMetasoundFrontendClassMetadata *this)

{
  return this->Type;
}

// GetVersion @ 14adc3c20

FMetasoundFrontendVersionNumber * __thiscall
FMetasoundFrontendClassMetadata::GetVersion(FMetasoundFrontendClassMetadata *this)

{
  return &this->Version;
}

// RemoveAccessFlags @ 14adce1e0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
FMetasoundFrontendClassMetadata::RemoveAccessFlags
          (FMetasoundFrontendClassMetadata *this,EMetasoundFrontendClassAccessFlags param_1)

{
  this->AccessFlags = this->AccessFlags & ~param_1;
  return;
}

// SetAccessFlags @ 14add06e0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
FMetasoundFrontendClassMetadata::SetAccessFlags
          (FMetasoundFrontendClassMetadata *this,EMetasoundFrontendClassAccessFlags param_1)

{
  this->AccessFlags = param_1;
  return;
}

// SetClassName @ 14add06f0

void __thiscall
FMetasoundFrontendClassMetadata::SetClassName
          (FMetasoundFrontendClassMetadata *this,FMetasoundFrontendClassName *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FGuid *pFVar5;
  FGuid local_18;
  
  if ((((this->ClassName).Namespace != param_1->Namespace) ||
      ((this->ClassName).Name != param_1->Name)) || ((this->ClassName).Variant != param_1->Variant))
  {
    FVar1 = param_1->Name;
    (this->ClassName).Namespace = param_1->Namespace;
    (this->ClassName).Name = FVar1;
    (this->ClassName).Variant = param_1->Variant;
    pFVar5 = FGuid::NewGuid(&local_18);
    uVar2 = pFVar5->B;
    uVar3 = pFVar5->C;
    uVar4 = pFVar5->D;
    (this->ChangeID).A = pFVar5->A;
    (this->ChangeID).B = uVar2;
    (this->ChangeID).C = uVar3;
    (this->ChangeID).D = uVar4;
  }
  return;
}

// SetVersion @ 14add0e60

void __thiscall
FMetasoundFrontendClassMetadata::SetVersion
          (FMetasoundFrontendClassMetadata *this,FMetasoundFrontendVersionNumber *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  if (((this->Version).Major != param_1->Major) || ((this->Version).Minor != param_1->Minor)) {
    this->Version = *param_1;
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->ChangeID).A = pFVar4->A;
    (this->ChangeID).B = uVar1;
    (this->ChangeID).C = uVar2;
    (this->ChangeID).D = uVar3;
  }
  return;
}

