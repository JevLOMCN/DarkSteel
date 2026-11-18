// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// Store @ 14d4039b0

wchar_t * __thiscall
TraceServices::FSymbolStringAllocator::Store
          (FSymbolStringAllocator *this,TStringView<wchar_t> *param_1)

{
  wchar_t **ppwVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = param_1->Size;
  uVar8 = uVar2 + 1;
  this->TotalUsedSize = this->TotalUsedSize + (ulonglong)uVar8 * 2;
  if (this->BlockSize < uVar8) {
    this->NumAllocatedBlocks = this->NumAllocatedBlocks + 1;
    this->TotalAllocatedSize = this->TotalAllocatedSize + (ulonglong)(uVar8 * 2);
    pwVar6 = (wchar_t *)(**(code **)((longlong)*this->Allocator + 8))();
    if (0 < (int)uVar2) {
      memcpy(pwVar6,param_1->DataPtr,(longlong)(int)uVar2 * 2);
    }
    pwVar6[uVar2] = L'\0';
    return pwVar6;
  }
  uVar5 = this->BlockRemaining;
  ppwVar1 = &this->Block;
  if (uVar5 < uVar8) {
    this->NumAllocatedBlocks = this->NumAllocatedBlocks + 1;
    this->TotalAllocatedSize = this->TotalAllocatedSize + (ulonglong)(this->BlockSize * 2);
    pwVar6 = (wchar_t *)(**(code **)((longlong)*this->Allocator + 8))();
    *ppwVar1 = pwVar6;
    uVar5 = this->BlockSize;
    this->BlockRemaining = uVar5;
  }
  uVar7 = uVar5 - 1;
  if ((int)uVar2 < (int)(uVar5 - 1)) {
    uVar7 = uVar2;
  }
  if (0 < (int)uVar7) {
    memcpy(*ppwVar1,param_1->DataPtr,(longlong)(int)uVar7 * 2);
  }
  if ((uVar8 != uVar7 + 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StringSize == CopiedSize + 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\SymbolStringAllocator.cpp"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pwVar6 = (wchar_t *)(*pcVar3)();
    return pwVar6;
  }
  (*ppwVar1)[uVar2] = L'\0';
  pwVar6 = *ppwVar1;
  this->BlockRemaining = this->BlockRemaining - uVar8;
  *ppwVar1 = pwVar6 + uVar8;
  return pwVar6;
}

