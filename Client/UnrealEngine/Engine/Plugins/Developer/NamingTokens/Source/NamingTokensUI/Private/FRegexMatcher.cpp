// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 1

// ~FRegexMatcher @ 14d0f0140

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FRegexMatcher::~FRegexMatcher(FRegexMatcher *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Implementation).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Pattern).Implementation.SharedReferenceCount.ReferenceController);
  return;
}

