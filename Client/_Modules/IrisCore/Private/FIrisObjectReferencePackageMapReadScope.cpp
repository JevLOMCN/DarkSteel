// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FIrisObjectReferencePackageMapReadScope @ 144326b90

FIrisObjectReferencePackageMapReadScope * __thiscall
UE::Net::FIrisObjectReferencePackageMapReadScope::FIrisObjectReferencePackageMapReadScope
          (FIrisObjectReferencePackageMapReadScope *this,UIrisObjectReferencePackageMap *param_1,
          FIrisPackageMapExports *param_2,FNetTokenResolveContext *param_3)

{
  FNetTokenStoreState *pFVar1;
  
  this->PackageMap = param_1;
  if (param_1 != (UIrisObjectReferencePackageMap *)0x0) {
    param_1->PackageMapExportsForReading = param_2;
    pFVar1 = param_3->RemoteNetTokenStoreState;
    (param_1->NetTokenResolveContext).NetTokenStore = param_3->NetTokenStore;
    (param_1->NetTokenResolveContext).RemoteNetTokenStoreState = pFVar1;
  }
  return this;
}

// ~FIrisObjectReferencePackageMapReadScope @ 144326fd0

void __thiscall
UE::Net::FIrisObjectReferencePackageMapReadScope::~FIrisObjectReferencePackageMapReadScope
          (FIrisObjectReferencePackageMapReadScope *this)

{
  if (this->PackageMap != (UIrisObjectReferencePackageMap *)0x0) {
    this->PackageMap->PackageMapExportsForReading = (FIrisPackageMapExports *)0x0;
  }
  return;
}

