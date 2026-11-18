// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// GetUnicodeBlockRange @ 14250fa40

FUnicodeBlockRange * __cdecl
FUnicodeBlockRange::GetUnicodeBlockRange
          (FUnicodeBlockRange *__return_storage_ptr__,EUnicodeBlockRange param_1)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined6 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  FUnicodeBlockRange *pFVar8;
  
  if (VariationSelectorsSupplement < param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FUnicodeBlockRange *)(*pcVar1)();
      return pFVar8;
    }
  }
  uVar4 = *(undefined6 *)&UnicodeBlockRanges[param_1].field_0x2;
  pwVar2 = UnicodeBlockRanges[param_1].DisplayNameKey;
  pwVar3 = UnicodeBlockRanges[param_1].DisplayNameLiteral;
  iVar5 = UnicodeBlockRanges[param_1].RangeLower;
  iVar6 = UnicodeBlockRanges[param_1].RangeUpper;
  __return_storage_ptr__->Index = UnicodeBlockRanges[param_1].Index;
  *(undefined6 *)&__return_storage_ptr__->field_0x2 = uVar4;
  __return_storage_ptr__->DisplayNameKey = pwVar2;
  __return_storage_ptr__->DisplayNameLiteral = pwVar3;
  __return_storage_ptr__->RangeLower = iVar5;
  __return_storage_ptr__->RangeUpper = iVar6;
  return __return_storage_ptr__;
}

// GetUnicodeBlockRanges @ 14250fac0

TArrayView<FUnicodeBlockRange_const_,int> * __cdecl
FUnicodeBlockRange::GetUnicodeBlockRanges
          (TArrayView<FUnicodeBlockRange_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = UnicodeBlockRanges;
  __return_storage_ptr__->ArrayNum = 0x110;
  return __return_storage_ptr__;
}

