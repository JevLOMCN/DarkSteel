// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 1

// ~FRegexPattern @ 14d0f0170

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FRegexPattern::~FRegexPattern(FRegexPattern *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Implementation).SharedReferenceCount.ReferenceController);
  return;
}

