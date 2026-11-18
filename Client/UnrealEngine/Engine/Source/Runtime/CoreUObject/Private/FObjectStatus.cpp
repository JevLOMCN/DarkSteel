// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// IsInSavePackage @ 1422123d0

bool __thiscall
UE::SavePackageUtilities::FObjectStatus::IsInSavePackage
          (FObjectStatus *this,TObjectPtr<UObject> param_1,UPackage *param_2)

{
  byte bVar1;
  byte bVar2;
  UPackage *pUVar3;
  bool bVar4;
  
  bVar2 = this->field_0x40;
  if (this->bIsInSavePackageValid) goto LAB_14221244c;
  if (*(UObject **)param_1.field0_0x0 == (UObject *)0x0) {
    pUVar3 = (UPackage *)0x0;
  }
  else {
    pUVar3 = CoreUObject::Private::GetPackage(*(UObject **)param_1.field0_0x0);
  }
  if (GC::GIsIncrementalReachabilityPending == false) {
LAB_14221245c:
    if (pUVar3 != (UPackage *)0x0) goto LAB_142212431;
LAB_142212461:
    bVar4 = param_2 == (UPackage *)0x0;
  }
  else {
    if (pUVar3 != (UPackage *)0x0) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    if (GC::GIsIncrementalReachabilityPending == false) goto LAB_14221245c;
    if (pUVar3 == (UPackage *)0x0) goto LAB_142212461;
    GC::MarkAsReachable((UObject *)pUVar3);
LAB_142212431:
    bVar4 = pUVar3 == param_2;
  }
  bVar1 = this->field_0x40;
  bVar2 = bVar1 & 0xbf | bVar4 << 6 | 0x20;
  this->bIsInSavePackageValid = true;
  this->bIsInSavePackage = bVar4;
LAB_14221244c:
  return (bool)(bVar2 >> 6 & 1);
}

