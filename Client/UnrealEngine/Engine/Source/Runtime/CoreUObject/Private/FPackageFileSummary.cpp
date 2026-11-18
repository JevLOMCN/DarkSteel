// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// ~FPackageFileSummary @ 141ed5be0

void __thiscall FPackageFileSummary::~FPackageFileSummary(FPackageFileSummary *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChunkIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompatibleWithEngineVersion).Branch.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SavedByEngineVersion).Branch.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Generations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocalizationId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PackageName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomVersionContainer).Versions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FPackageFileSummary @ 14212b930

FPackageFileSummary * __thiscall FPackageFileSummary::FPackageFileSummary(FPackageFileSummary *this)

{
  memset(this,0,0x158);
  return this;
}

// IsFileVersionValid @ 1421432c0

bool __thiscall FPackageFileSummary::IsFileVersionValid(FPackageFileSummary *this)

{
  return true;
}

// SetCustomVersionContainer @ 14214ff70

void __thiscall
FPackageFileSummary::SetCustomVersionContainer
          (FPackageFileSummary *this,FCustomVersionContainer *param_1)

{
  FCustomVersionContainer *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this_00 = &this->CustomVersionContainer;
  if (this_00 != param_1) {
    iVar2 = (this->CustomVersionContainer).Versions.ArrayMax;
    piVar1 = &(this->CustomVersionContainer).Versions.ArrayMax;
    _Src = (param_1->Versions).AllocatorInstance.Data;
    iVar3 = (param_1->Versions).ArrayNum;
    (this->CustomVersionContainer).Versions.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,iVar2,(ForAnyElementType *)this_00,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this_00->Versions).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x28);
      }
    }
  }
  FCustomVersionContainer::SortByKey(this_00);
  return;
}

// SetFileVersions @ 1421500a0

void __thiscall
FPackageFileSummary::SetFileVersions
          (FPackageFileSummary *this,int param_1,int param_2,int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (0x20a < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EpicUE4 <= EUnrealEngineObjectUE4Version::VER_UE4_AUTOMATIC_VERSION",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageFileSummary.cpp"
                       ,0x247,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x3fa < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EpicUE5 <= (int32)EUnrealEngineObjectUE5Version::AUTOMATIC_VERSION",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageFileSummary.cpp"
                       ,0x248,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->FileVersionUE).FileVersionUE4 = param_1;
  this->FileVersionLicenseeUE = param_3;
  this->bUnversioned = param_4;
  (this->FileVersionUE).FileVersionUE5 = param_2;
  return;
}

// SetPackageFlags @ 142150520

void __thiscall FPackageFileSummary::SetPackageFlags(FPackageFileSummary *this,uint param_1)

{
  this->PackageFlags = param_1 & 0xbfff7fee;
  return;
}

