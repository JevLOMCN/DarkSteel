// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// operator== @ 142a58530

bool __thiscall
FFilePackageStoreEntryRef::operator==
          (FFilePackageStoreEntryRef *this,FFilePackageStoreEntryRef *param_1)

{
  TFilePackageStoreEntryCArrayView<FSHAHash> *pTVar1;
  FFilePackageStoreEntry *pFVar2;
  FFilePackageStoreEntry *pFVar3;
  FFilePackageStoreEntrySoftReferences *pFVar4;
  int iVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  size_t sVar9;
  void *pvVar10;
  void *_Buf2;
  void *pvVar11;
  
  pFVar2 = this->Entry;
  pFVar3 = param_1->Entry;
  uVar8 = (ulonglong)(pFVar2->ImportedPackages).OffsetToDataFromThis;
  pvVar11 = (void *)((longlong)&(pFVar2->ImportedPackages).ArrayNum + uVar8);
  uVar6 = (ulonglong)(pFVar3->ImportedPackages).OffsetToDataFromThis;
  sVar9 = uVar8 + ((ulonglong)(pFVar2->ImportedPackages).ArrayNum * 8 - (longlong)pvVar11) +
          (longlong)pFVar2;
  pvVar10 = (void *)((longlong)&(pFVar3->ImportedPackages).ArrayNum + uVar6);
  if ((sVar9 == ((ulonglong)(pFVar3->ImportedPackages).ArrayNum * 8 - (longlong)pvVar10) + uVar6 +
                (longlong)pFVar3) &&
     ((pvVar11 == pvVar10 || (iVar5 = memcmp(pvVar11,pvVar10,sVar9), iVar5 == 0)))) {
    pTVar1 = &pFVar3->ShaderMapHashes;
    uVar6 = (ulonglong)(pFVar2->ShaderMapHashes).OffsetToDataFromThis;
    uVar8 = (ulonglong)(pFVar3->ShaderMapHashes).OffsetToDataFromThis;
    pvVar10 = (void *)((longlong)&(pFVar2->ShaderMapHashes).ArrayNum + uVar6);
    pvVar11 = (void *)((longlong)&pTVar1->ArrayNum + uVar8);
    sVar9 = ((ulonglong)(pFVar2->ShaderMapHashes).ArrayNum * 0x14 - (longlong)pvVar10) + uVar6 + 8 +
            (longlong)pFVar2;
    if ((sVar9 == ((ulonglong)pTVar1->ArrayNum * 0x14 - (longlong)pvVar11) + uVar8 +
                  (longlong)pTVar1) &&
       ((pvVar10 == pvVar11 || (iVar5 = memcmp(pvVar10,pvVar11,sVar9), iVar5 == 0)))) {
      pFVar4 = this->SoftReferences;
      pvVar7 = (void *)0x0;
      pvVar10 = pvVar7;
      pvVar11 = pvVar7;
      if (pFVar4 != (FFilePackageStoreEntrySoftReferences *)0x0) {
        uVar6 = (ulonglong)(pFVar4->Indices).OffsetToDataFromThis;
        pvVar11 = (void *)((longlong)&(pFVar4->Indices).ArrayNum + uVar6);
        pvVar10 = (void *)(((ulonglong)(pFVar4->Indices).ArrayNum * 4 - (longlong)pvVar11) + uVar6 +
                          (longlong)pFVar4);
      }
      pFVar4 = param_1->SoftReferences;
      _Buf2 = pvVar7;
      if (pFVar4 != (FFilePackageStoreEntrySoftReferences *)0x0) {
        uVar6 = (ulonglong)(pFVar4->Indices).OffsetToDataFromThis;
        _Buf2 = (void *)((longlong)&(pFVar4->Indices).ArrayNum + uVar6);
        pvVar7 = (void *)(((ulonglong)(pFVar4->Indices).ArrayNum * 4 - (longlong)_Buf2) + uVar6 +
                         (longlong)pFVar4);
      }
      if ((pvVar10 == pvVar7) &&
         ((pvVar11 == _Buf2 || (iVar5 = memcmp(pvVar11,_Buf2,(size_t)pvVar10), iVar5 == 0)))) {
        return true;
      }
    }
  }
  return false;
}

