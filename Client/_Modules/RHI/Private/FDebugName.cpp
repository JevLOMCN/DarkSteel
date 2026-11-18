// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 7

// FDebugName @ 145c861a0

FDebugName * __thiscall FDebugName::FDebugName(FDebugName *this,FName param_1)

{
  this->Name = param_1;
  this->Number = 0;
  return this;
}

// FDebugName @ 145c861c0

FDebugName * __thiscall FDebugName::FDebugName(FDebugName *this,FName param_1,int param_2)

{
  this->Name = param_1;
  this->Number = param_2;
  return this;
}

// FDebugName @ 145c861e0

FDebugName * __thiscall FDebugName::FDebugName(FDebugName *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->Number = 0;
  return this;
}

// operator= @ 145c8b8f0

FDebugName * __thiscall FDebugName::operator=(FDebugName *this,FName param_1)

{
  this->Name = param_1;
  this->Number = 0;
  return this;
}

// AppendString @ 145c914c0

void __thiscall FDebugName::AppendString(FDebugName *this,TStringBuilderBase<wchar_t> *param_1)

{
  ::FName::AppendString(&this->Name,param_1);
  if (this->Number != 0) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'_';
    param_1->CurPos = param_1->CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%u");
  }
  return;
}

// ToString @ 145cc4940

FString * __thiscall FDebugName::ToString(FDebugName *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FName::AppendString(&this->Name,__return_storage_ptr__);
  if (this->Number != 0) {
    ::FString::AppendfImpl(__return_storage_ptr__,L"_%u");
  }
  return __return_storage_ptr__;
}

// ToStringInternal @ 145cc4bf0

uint __thiscall FDebugName::ToStringInternal(FDebugName *this,wchar_t *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_2 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x877,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar5 = param_2 - 1;
  uVar3 = ::FName::ToStringInternal(&this->Name,param_1,param_2);
  if ((this->Number == 0) || (uVar5 <= uVar3)) {
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
  }
  else {
    iVar4 = TCString<wchar_t>::SnprintfImpl(param_1 + uVar3,param_2 - uVar3,L"_%d");
    uVar3 = uVar3 + iVar4;
    if (iVar4 < 0) {
      uVar3 = uVar5;
    }
  }
  return uVar3;
}

