// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FTemporaryCachingModeScope @ 142ad79e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTemporaryCachingModeScope * __thiscall
UAssetRegistryHelpers::FTemporaryCachingModeScope::FTemporaryCachingModeScope
          (FTemporaryCachingModeScope *this,bool param_1)

{
  bool bVar1;
  UAssetRegistryImpl *pUVar2;
  longlong *plVar3;
  
  pUVar2 = UAssetRegistryImpl::Get();
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UAssetRegistryImpl *)0x0))
  {
    plVar3 = &pUVar2->_padding_;
    if (pUVar2 == (UAssetRegistryImpl *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    plVar3 = &pUVar2->_padding_;
  }
  bVar1 = (bool)(**(code **)(*plVar3 + 0x1c0))();
  this->PreviousCachingMode = bVar1;
  pUVar2 = UAssetRegistryImpl::Get();
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UAssetRegistryImpl *)0x0))
  {
    plVar3 = &pUVar2->_padding_;
    if (pUVar2 == (UAssetRegistryImpl *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    plVar3 = &pUVar2->_padding_;
  }
  (**(code **)(*plVar3 + 0x1b0))(plVar3,param_1);
  return this;
}

// ~FTemporaryCachingModeScope @ 142adaf20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryHelpers::FTemporaryCachingModeScope::~FTemporaryCachingModeScope
          (FTemporaryCachingModeScope *this)

{
  UAssetRegistryImpl *pUVar1;
  longlong *plVar2;
  
  pUVar1 = UAssetRegistryImpl::Get();
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UAssetRegistryImpl *)0x0))
  {
    plVar2 = &pUVar1->_padding_;
    if (pUVar1 == (UAssetRegistryImpl *)0x0) {
      plVar2 = (longlong *)0x0;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    plVar2 = &pUVar1->_padding_;
  }
                    /* WARNING: Could not recover jumptable at 0x000142adaf72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x1b0))(plVar2,this->PreviousCachingMode);
  return;
}

