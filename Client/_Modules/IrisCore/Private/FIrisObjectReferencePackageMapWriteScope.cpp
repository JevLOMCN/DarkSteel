// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// FIrisObjectReferencePackageMapWriteScope @ 144326bc0

FIrisObjectReferencePackageMapWriteScope * __thiscall
UE::Net::FIrisObjectReferencePackageMapWriteScope::FIrisObjectReferencePackageMapWriteScope
          (FIrisObjectReferencePackageMapWriteScope *this,UIrisObjectReferencePackageMap *param_1,
          FIrisPackageMapExports *param_2)

{
  bool bVar1;
  undefined1 local_res8 [8];
  
  this->PackageMap = param_1;
  if (param_1 != (UIrisObjectReferencePackageMap *)0x0) {
    if (param_2 != (FIrisPackageMapExports *)0x0) {
      if (param_1->PackageMapExportsForReading != param_2) {
LAB_144326bf4:
        FIrisPackageMapExports::Reset(param_2);
        this->PackageMap->PackageMapExportsForWriting = param_2;
        return this;
      }
      bVar1 = `UE::Net::FIrisObjectReferencePackageMapWriteScope::
              FIrisObjectReferencePackageMapWriteScope'::__l6::<lambda_1>::operator()(local_res8);
      if (bVar1) goto LAB_144326bf4;
    }
    this->PackageMap->PackageMapExportsForWriting = (FIrisPackageMapExports *)0x0;
  }
  return this;
}

// ~FIrisObjectReferencePackageMapWriteScope @ 144326ff0

void __thiscall
UE::Net::FIrisObjectReferencePackageMapWriteScope::~FIrisObjectReferencePackageMapWriteScope
          (FIrisObjectReferencePackageMapWriteScope *this)

{
  if (this->PackageMap != (UIrisObjectReferencePackageMap *)0x0) {
    this->PackageMap->PackageMapExportsForWriting = (FIrisPackageMapExports *)0x0;
  }
  return;
}

// operator() @ 1504bc950

bool __thiscall
`UE::Net::FIrisObjectReferencePackageMapWriteScope::FIrisObjectReferencePackageMapWriteScope'::__l6
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5087294423155343504>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5087294423155343504>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

