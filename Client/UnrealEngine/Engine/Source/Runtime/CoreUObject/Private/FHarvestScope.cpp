// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FHarvestScope @ 1421fe6f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::FHarvestScope::FHarvestScope(FHarvestScope *this,FHarvestScope *param_1)

{
  ForElementType<ESaveRealm> FVar1;
  
  this->Harvester = param_1->Harvester;
  (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData =
       (ForElementType<ESaveRealm>)0x0;
  if ((param_1->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData ==
      (ForElementType<ESaveRealm>)0x0) {
    *(undefined8 *)(this->PreviousExportHarvestingRealms).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->PreviousExportHarvestingRealms).AllocatorInstance.InlineData;
  }
  FVar1 = (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData =
       (param_1->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData;
  (param_1->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData =
       (ForElementType<ESaveRealm>)0x0;
  (this->PreviousExportHarvestingRealms).ArrayNum =
       (param_1->PreviousExportHarvestingRealms).ArrayNum;
  (this->PreviousExportHarvestingRealms).ArrayMax =
       (param_1->PreviousExportHarvestingRealms).ArrayMax;
  (param_1->PreviousExportHarvestingRealms).ArrayNum = 0;
  (param_1->PreviousExportHarvestingRealms).ArrayMax = 2;
  this->bActive = param_1->bActive;
  param_1->bActive = false;
  return this;
}

// FHarvestScope @ 1421fe780

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FHarvestScope * __thiscall
FPackageHarvester::FHarvestScope::FHarvestScope(FHarvestScope *this,FPackageHarvester *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<ESaveRealm> _Dst;
  ForElementType<ESaveRealm> _Src;
  
  this->Harvester = param_1;
  (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData =
       (ForElementType<ESaveRealm>)0x0;
  _Src = (param_1->CurrentExportHarvestingRealms).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->CurrentExportHarvestingRealms).ArrayNum;
  (this->PreviousExportHarvestingRealms).ArrayNum = iVar2;
  if (_Src == (ForElementType<ESaveRealm>)0x0) {
    _Src = (ForElementType<ESaveRealm>)&param_1->CurrentExportHarvestingRealms;
  }
  piVar1 = &(this->PreviousExportHarvestingRealms).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 2;
    this->bActive = true;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
              (4,4,iVar2,0,&(this->PreviousExportHarvestingRealms).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<ESaveRealm>)0x0) {
      _Dst = (ForElementType<ESaveRealm>)&this->PreviousExportHarvestingRealms;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 2);
    this->bActive = true;
  }
  return this;
}

// ~FHarvestScope @ 142200f60

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FPackageHarvester::FHarvestScope::~FHarvestScope(FHarvestScope *this)

{
  ForElementType<ESaveRealm> FVar1;
  
  if (this->bActive != false) {
    TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
              (&this->Harvester->CurrentExportHarvestingRealms,&this->PreviousExportHarvestingRealms
              );
  }
  FVar1 = (this->PreviousExportHarvestingRealms).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)FVar1);
    return;
  }
  return;
}

// IsEmpty @ 142212190

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FPackageHarvester::FHarvestScope::IsEmpty(FHarvestScope *this)

{
  return (this->Harvester->CurrentExportHarvestingRealms).ArrayNum == 0;
}

