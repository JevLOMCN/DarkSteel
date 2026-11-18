// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 6

// StaticStruct @ 146ac2f50

UScriptStruct * __cdecl FGameplayTagTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagTableRow,(UObject *)pUVar1,
                         L"GameplayTagTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.OuterSingleton;
}

// FGameplayTagTableRow @ 146acc040

FGameplayTagTableRow * __thiscall
FGameplayTagTableRow::FGameplayTagTableRow(FGameplayTagTableRow *this,FGameplayTagTableRow *param_1)

{
  this->_padding_ = (longlong)&___7FGameplayTagTableRow__6B_;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->DevComment).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DevComment).Data.ArrayNum = 0;
  (this->DevComment).Data.ArrayMax = 0;
  if (this != param_1) {
    this->Tag = param_1->Tag;
    ::FString::operator=(&this->DevComment,&param_1->DevComment);
  }
  return this;
}

// operator= @ 146ace480

FGameplayTagTableRow * __thiscall
FGameplayTagTableRow::operator=(FGameplayTagTableRow *this,FGameplayTagTableRow *param_1)

{
  if (this != param_1) {
    this->Tag = param_1->Tag;
    ::FString::operator=(&this->DevComment,&param_1->DevComment);
  }
  return this;
}

// operator== @ 146ace610

bool __thiscall
FGameplayTagTableRow::operator==(FGameplayTagTableRow *this,FGameplayTagTableRow *param_1)

{
  return this->Tag == param_1->Tag;
}

// operator!= @ 146ace8e0

bool __thiscall
FGameplayTagTableRow::operator!=(FGameplayTagTableRow *this,FGameplayTagTableRow *param_1)

{
  return this->Tag != param_1->Tag;
}

// operator< @ 146acee60

bool __thiscall
FGameplayTagTableRow::operator<(FGameplayTagTableRow *this,FGameplayTagTableRow *param_1)

{
  int iVar1;
  
  iVar1 = UE::ComparisonUtility::CompareWithNumericSuffix(this->Tag,param_1->Tag);
  return SUB41((uint)iVar1 >> 0x1f,0);
}

