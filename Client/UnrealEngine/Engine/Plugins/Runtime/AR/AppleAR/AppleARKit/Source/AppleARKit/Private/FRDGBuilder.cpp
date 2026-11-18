// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 1

// AllocParameters<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters> @ 14cfcdb10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPostBasePassViewExtensionParameters * __thiscall
FRDGBuilder::AllocParameters<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters>
          (FRDGBuilder *this)

{
  FPostBasePassViewExtensionParameters *pFVar1;
  
  pFVar1 = FRDGAllocator::Alloc<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters>
                     ((FRDGAllocator *)&this->_padding_);
  return pFVar1;
}

