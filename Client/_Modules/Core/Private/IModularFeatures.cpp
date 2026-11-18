// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~IModularFeatures @ 14158a490

void __thiscall IModularFeatures::~IModularFeatures(IModularFeatures *this)

{
  *this = (IModularFeatures)&___7IModularFeatures__6B_;
  return;
}

// Get @ 1415c4c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

IModularFeatures * __cdecl IModularFeatures::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&ModularFeatures.ModularFeaturesMapCriticalSection,4000);
      ModularFeatures.ModularFeatureRegisteredEvent._0_8_ = 0;
      ModularFeatures.ModularFeatureRegisteredEvent._8_8_ = 0;
      ModularFeatures.ModularFeatureRegisteredEvent._16_8_ = ___xmm_00000000000000020000000000000000
      ;
      ModularFeatures.ModularFeatureRegisteredEvent._24_8_ = _UNK_150631d48;
      ModularFeatures.ModularFeatureUnregisteredEvent._0_8_ = 0;
      ModularFeatures.ModularFeatureUnregisteredEvent._8_8_ = 0;
      ModularFeatures.ModularFeatureUnregisteredEvent._16_8_ =
           ___xmm_00000000000000020000000000000000;
      ModularFeatures.ModularFeatureUnregisteredEvent._24_8_ = _UNK_150631d48;
      atexit(`IModularFeatures::Get'::__l2::_dynamic_atexit_destructor_for__ModularFeatures__);
      _Init_thread_footer(&::_TSS0);
      return (IModularFeatures *)&ModularFeatures;
    }
  }
  return (IModularFeatures *)&ModularFeatures;
}

