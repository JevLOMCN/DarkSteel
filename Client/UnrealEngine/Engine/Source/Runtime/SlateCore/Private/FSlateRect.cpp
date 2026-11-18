// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// InitFromString @ 142510730

bool __thiscall FSlateRect::InitFromString(FSlateRect *this,FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FParse::Value(pwVar2,L"Left=",&this->Left);
  if (bVar1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(pwVar2,L"Top=",&this->Top);
    if (bVar1) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar1 = FParse::Value(pwVar2,L"Right=",&this->Right);
      if (bVar1) {
        if ((param_1->Data).ArrayNum != 0) {
          pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar1 = FParse::Value(pwVar3,L"Bottom=",&this->Bottom);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// ToString @ 142520b50

FString * __thiscall FSlateRect::ToString(FSlateRect *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Left=%3.3f Top=%3.3f Right=%3.3f Bottom=%3.3f");
  return __return_storage_ptr__;
}

