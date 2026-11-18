// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 5

// Emplace<FName_const_&> @ 14ec1d980

FName * __thiscall TOptional<FName>::Emplace<FName_const_&>(TOptional<FName> *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  
  FVar1 = *param_1;
  (this->field0_0x0).TypedValue = FVar1;
  if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x171,
                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FName *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FName *)this;
}

// operator-> @ 14ec247e0

FPreparedClientChanges * __thiscall
TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedClientChanges>::operator->
          (TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedClientChanges> *this
          )

{
  code *pcVar1;
  bool bVar2;
  FPreparedClientChanges *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPreparedClientChanges *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 14ec24830

FPreparedServiceChanges * __thiscall
TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedServiceChanges>::operator->
          (TOptional<UE::Online::Private::FSchemaCategoryInstanceBase::FPreparedServiceChanges>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FPreparedServiceChanges *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPreparedServiceChanges *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 14ec24880

FName * __thiscall TOptional<FName>::operator->(TOptional<FName> *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((this->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FName *)this;
}

// operator* @ 14ec24920

FName * __thiscall TOptional<FName>::operator*(TOptional<FName> *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((this->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FName *)this;
}

