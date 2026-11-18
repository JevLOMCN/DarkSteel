// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// CopyVersionsFromArchive @ 14e08fa90

void __thiscall
FHairDescriptionVersion::CopyVersionsFromArchive(FHairDescriptionVersion *this,FArchive *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined4 uVar4;
  FHairDescriptionVersion *pFVar5;
  
  this->bIsValid = true;
  uVar4 = *(undefined4 *)&param_1->field_0x44;
  (this->UEVersion).FileVersionUE4 = *(undefined4 *)&param_1->field_0x40;
  (this->UEVersion).FileVersionUE5 = uVar4;
  this->LicenseeVersion = *(int *)&param_1->field_0x48;
  pFVar5 = (FHairDescriptionVersion *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
  if (this != pFVar5) {
    iVar2 = (this->CustomVersions).Versions.ArrayMax;
    piVar1 = &(this->CustomVersions).Versions.ArrayMax;
    _Src = (pFVar5->CustomVersions).Versions.AllocatorInstance.Data;
    iVar3 = (pFVar5->CustomVersions).Versions.ArrayNum;
    (this->CustomVersions).Versions.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->CustomVersions).Versions.AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x28);
    }
  }
  return;
}

// CopyVersionsToArchive @ 14e08fb40

void __thiscall
FHairDescriptionVersion::CopyVersionsToArchive(FHairDescriptionVersion *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsValid == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairDescription.cpp"
                       ,0x93,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x110))(param_1,this->UEVersion);
  (**(code **)(*(longlong *)param_1 + 0x118))(param_1,this->LicenseeVersion);
                    /* WARNING: Could not recover jumptable at 0x00014e08fbae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x68))(param_1,this);
  return;
}

