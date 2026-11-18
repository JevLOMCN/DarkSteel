// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FFileManifestList @ 143223320

FFileManifestList * __thiscall
BuildPatchServices::FFileManifestList::FFileManifestList(FFileManifestList *this)

{
  (this->FileList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileList).ArrayNum = 0;
  (this->FileList).ArrayMax = 0;
  return this;
}

// OnPostLoad @ 14325c510

void __thiscall BuildPatchServices::FFileManifestList::OnPostLoad(FFileManifestList *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  <lambda_1> local_res8 [8];
  uint local_res10;
  
  AlgoImpl::
  IntroSortInternal<BuildPatchServices::FFileManifest,int,_BuildPatchServices::FFileManifestList::OnPostLoad_::__l2::<lambda_1>,TLess<FString>_>
            ((FFileManifest *)(this->FileList).AllocatorInstance.Data,(this->FileList).ArrayNum,
             local_res8[0],(TLess<FString>)local_res8[0]);
  local_res10 = (this->FileList).ArrayNum;
  uVar3 = (ulonglong)(int)local_res10;
  pFVar8 = (this->FileList).AllocatorInstance.Data;
  pFVar6 = pFVar8 + 0x50;
  pFVar7 = pFVar8 + uVar3 * 0x60;
  while( true ) {
    if ((this->FileList).ArrayNum != (int)uVar3) {
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    iVar2 = *(int *)pFVar6;
    lVar5 = 0;
    lVar4 = *(longlong *)(pFVar6 + -8);
    lVar1 = lVar4 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (*(int *)pFVar6 != iVar2) {
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar4 == lVar1) break;
      lVar5 = lVar5 + (ulonglong)*(uint *)(lVar4 + 0x14);
      lVar4 = lVar4 + 0x18;
    }
    uVar3 = (ulonglong)local_res10;
    pFVar8 = pFVar8 + 0x60;
    *(longlong *)(pFVar6 + 8) = lVar5;
    pFVar6 = pFVar6 + 0x60;
  }
  return;
}

