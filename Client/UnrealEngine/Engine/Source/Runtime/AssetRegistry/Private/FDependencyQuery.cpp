// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// FDependencyQuery @ 142b4e040

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

FDependencyQuery * __thiscall
UE::AssetRegistry::FDependencyQuery::FDependencyQuery(FDependencyQuery *this)

{
  (this->RequiredUnions).AllocatorInstance.SecondaryData =
       (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
  (this->RequiredUnions).ArrayNum = 0;
  (this->RequiredUnions).ArrayMax = 1;
  this->Required = None;
  this->Excluded = None;
  return this;
}

// ~FDependencyQuery @ 142b4f260

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall UE::AssetRegistry::FDependencyQuery::~FDependencyQuery(FDependencyQuery *this)

{
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->RequiredUnions).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// operator= @ 142b7e290

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

FDependencyQuery * __thiscall
UE::AssetRegistry::FDependencyQuery::operator=(FDependencyQuery *this,FDependencyQuery *param_1)

{
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar1;
  
  this->Required = param_1->Required;
  this->Excluded = param_1->Excluded;
  if (&this->RequiredUnions != &param_1->RequiredUnions) {
    if ((param_1->RequiredUnions).AllocatorInstance.SecondaryData ==
        (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      (this->RequiredUnions).AllocatorInstance.InlineData[0] =
           (param_1->RequiredUnions).AllocatorInstance.InlineData[0];
    }
    FVar1 = (this->RequiredUnions).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->RequiredUnions).AllocatorInstance.SecondaryData =
         (param_1->RequiredUnions).AllocatorInstance.SecondaryData;
    (param_1->RequiredUnions).AllocatorInstance.SecondaryData =
         (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
    (this->RequiredUnions).ArrayNum = (param_1->RequiredUnions).ArrayNum;
    (this->RequiredUnions).ArrayMax = (param_1->RequiredUnions).ArrayMax;
    (param_1->RequiredUnions).ArrayNum = 0;
    (param_1->RequiredUnions).ArrayMax = 1;
  }
  return this;
}

