// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 5

// StaticStruct @ 146ac2fd0

UScriptStruct * __cdecl FRestrictedGameplayTagTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRestrictedGameplayTagTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FRestrictedGameplayTagTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow,(UObject *)pUVar1,
                         L"RestrictedGameplayTagTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FRestrictedGameplayTagTableRow.OuterSingleton;
}

// FRestrictedGameplayTagTableRow @ 146acc160

FRestrictedGameplayTagTableRow * __thiscall
FRestrictedGameplayTagTableRow::FRestrictedGameplayTagTableRow
          (FRestrictedGameplayTagTableRow *this,FRestrictedGameplayTagTableRow *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRestrictedGameplayTagTableRow__6B_;
  if (this != param_1) {
    this->_padding_ = param_1->_padding_;
    ::FString::operator=((FString *)&this->_padding_,(FString *)&param_1->_padding_);
    this->bAllowNonRestrictedChildren = param_1->bAllowNonRestrictedChildren;
  }
  return this;
}

// operator= @ 146ace4c0

FRestrictedGameplayTagTableRow * __thiscall
FRestrictedGameplayTagTableRow::operator=
          (FRestrictedGameplayTagTableRow *this,FRestrictedGameplayTagTableRow *param_1)

{
  if (this != param_1) {
    this->_padding_ = param_1->_padding_;
    ::FString::operator=((FString *)&this->_padding_,(FString *)&param_1->_padding_);
    this->bAllowNonRestrictedChildren = param_1->bAllowNonRestrictedChildren;
  }
  return this;
}

// operator== @ 146ace7b0

bool __thiscall
FRestrictedGameplayTagTableRow::operator==
          (FRestrictedGameplayTagTableRow *this,FRestrictedGameplayTagTableRow *param_1)

{
  if (this->bAllowNonRestrictedChildren == param_1->bAllowNonRestrictedChildren) {
    return this->_padding_ == param_1->_padding_;
  }
  return false;
}

// operator!= @ 146ace920

bool __thiscall
FRestrictedGameplayTagTableRow::operator!=
          (FRestrictedGameplayTagTableRow *this,FRestrictedGameplayTagTableRow *param_1)

{
  if (this->bAllowNonRestrictedChildren != param_1->bAllowNonRestrictedChildren) {
    return this->_padding_ != param_1->_padding_;
  }
  return false;
}

