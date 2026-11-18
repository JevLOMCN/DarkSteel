// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// CreateAndRegister @ 141e94280

FStore * __thiscall FixedTagPrivate::FStoreManager::CreateAndRegister(FStoreManager *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FStore *pFVar5;
  FStore *pFVar6;
  uint uVar7;
  
  if ((this == (FStoreManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FStore *)(*pcVar2)();
    return pFVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar4 = this->ProbeIndex;
  uVar1 = uVar4 + 0x8000;
  do {
    if (uVar1 <= uVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x195,
                         L"Failed to allocated asset registry fixed tag store. Might be caused by a FAssetDataTagMapSharedView or FAssetRegistryState leak."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FStore *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FStore *)0x0;
LAB_141e94320:
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      return pFVar5;
    }
    uVar7 = uVar4 & 0x3fff;
    if (this->Data[uVar7] == (FStore *)0x0) {
      pFVar6 = ::operator_new(200);
      pFVar5 = (FStore *)0x0;
      if (pFVar6 != (FStore *)0x0) {
        (pFVar6->Pairs).DataPtr = (FNumberedPair *)0x0;
        (pFVar6->Pairs).ArrayNum = 0;
        (pFVar6->NumberlessPairs).DataPtr = (FNumberlessPair *)0x0;
        (pFVar6->NumberlessPairs).ArrayNum = 0;
        (pFVar6->AnsiStringOffsets).DataPtr = (uint *)0x0;
        (pFVar6->AnsiStringOffsets).ArrayNum = 0;
        (pFVar6->AnsiStrings).DataPtr = (char *)0x0;
        (pFVar6->AnsiStrings).ArrayNum = 0;
        (pFVar6->WideStringOffsets).DataPtr = (uint *)0x0;
        (pFVar6->WideStringOffsets).ArrayNum = 0;
        (pFVar6->WideStrings).DataPtr = (wchar_t *)0x0;
        (pFVar6->WideStrings).ArrayNum = 0;
        (pFVar6->NumberlessNames).DataPtr = (FDisplayNameEntryId *)0x0;
        (pFVar6->NumberlessNames).ArrayNum = 0;
        (pFVar6->Names).DataPtr = (FName *)0x0;
        (pFVar6->Names).ArrayNum = 0;
        (pFVar6->NumberlessExportPaths).DataPtr = (FNumberlessExportPath *)0x0;
        (pFVar6->NumberlessExportPaths).ArrayNum = 0;
        (pFVar6->ExportPaths).DataPtr = (FAssetRegistryExportPath *)0x0;
        (pFVar6->ExportPaths).ArrayNum = 0;
        (pFVar6->Texts).DataPtr = (FMarshalledText *)0x0;
        (pFVar6->Texts).ArrayNum = 0;
        pFVar6->Index = uVar7;
        pFVar6->Data = (void *)0x0;
        (pFVar6->RefCount).Counter = 0;
        pFVar5 = pFVar6;
      }
      this->Data[uVar7] = pFVar5;
      this->ProbeIndex = uVar7 + 1 & 0x3fff;
      pFVar5 = this->Data[uVar7];
      goto LAB_141e94320;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

