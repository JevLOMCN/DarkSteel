// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FNumberFormattingOptions @ 141734bd0

FNumberFormattingOptions * __thiscall
FNumberFormattingOptions::FNumberFormattingOptions(FNumberFormattingOptions *this)

{
  this->AlwaysSign = false;
  this->UseGrouping = true;
  this->RoundingMode = HalfToEven;
  this->IndicateNearlyInteger = false;
  this->MinimumIntegralDigits = 1;
  this->MaximumIntegralDigits = 0x144;
  this->MinimumFractionalDigits = 0;
  this->MaximumFractionalDigits = 3;
  return this;
}

// DefaultNoGrouping @ 141750190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FNumberFormattingOptions * __cdecl FNumberFormattingOptions::DefaultNoGrouping(void)

{
  undefined1 uStack_25;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      uStack_24 = (undefined4)___xmm_00000000000001440000000100000000;
      iStack_20 = (int)((ulonglong)___xmm_00000000000001440000000100000000 >> 0x20);
      iStack_1c = (int)_UNK_150676978;
      iStack_18 = (int)((ulonglong)_UNK_150676978 >> 0x20);
      Options._0_8_ = (ulonglong)CONCAT41(uStack_24,uStack_25) << 0x18;
      Options.MaximumIntegralDigits = iStack_1c;
      Options.MinimumIntegralDigits = iStack_20;
      Options.MaximumFractionalDigits = 3;
      Options.MinimumFractionalDigits = iStack_18;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &Options;
}

// DefaultWithGrouping @ 141750240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FNumberFormattingOptions * __cdecl FNumberFormattingOptions::DefaultWithGrouping(void)

{
  undefined1 uStack_25;
  ERoundingMode EStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      EStack_24 = (ERoundingMode)___xmm_00000000000001440000000100000000;
      iStack_20 = (int)((ulonglong)___xmm_00000000000001440000000100000000 >> 0x20);
      iStack_1c = (int)_UNK_150676978;
      iStack_18 = (int)((ulonglong)_UNK_150676978 >> 0x20);
      Options._3_1_ = uStack_25;
      Options.AlwaysSign = false;
      Options.UseGrouping = true;
      Options.IndicateNearlyInteger = false;
      Options.RoundingMode = EStack_24;
      Options.MaximumIntegralDigits = iStack_1c;
      Options.MinimumIntegralDigits = iStack_20;
      Options.MaximumFractionalDigits = 3;
      Options.MinimumFractionalDigits = iStack_18;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &Options;
}

// IsIdentical @ 141766d60

bool __thiscall
FNumberFormattingOptions::IsIdentical
          (FNumberFormattingOptions *this,FNumberFormattingOptions *param_1)

{
  if ((((this->AlwaysSign == param_1->AlwaysSign) && (this->UseGrouping == param_1->UseGrouping)) &&
      (this->RoundingMode == param_1->RoundingMode)) &&
     (((this->MinimumIntegralDigits == param_1->MinimumIntegralDigits &&
       (this->MaximumIntegralDigits == param_1->MaximumIntegralDigits)) &&
      ((this->MinimumFractionalDigits == param_1->MinimumFractionalDigits &&
       (this->MaximumFractionalDigits == param_1->MaximumFractionalDigits)))))) {
    return true;
  }
  return false;
}

