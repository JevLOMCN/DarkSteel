// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// GetDataSize @ 14dfc67a0

uint __thiscall FHairGroupPlatformData::FMeshes::GetDataSize(FMeshes *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  iVar6 = (this->LODs).ArrayNum;
  uVar9 = 0;
  pFVar7 = (this->LODs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar6 * 0x98;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FHairGroupPlatformData::FMeshes::FLOD_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pFVar1 = pFVar7 + 0x2c;
    pFVar2 = pFVar7 + 0xc;
    pFVar3 = pFVar7 + 0x4c;
    pFVar4 = pFVar7 + 0x3c;
    pFVar5 = pFVar7 + 0x1c;
    pFVar7 = pFVar7 + 0x98;
    uVar9 = uVar9 + (*(int *)pFVar3 + (*(int *)pFVar1 + *(int *)pFVar2) * 4 + *(int *)pFVar4 +
                    *(int *)pFVar5) * 4;
  }
  return uVar9;
}

// GetResourcesSize @ 14dfc95e0

uint __thiscall FHairGroupResources::FMeshes::GetResourcesSize(FMeshes *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->LODs).ArrayNum;
  uVar8 = 0;
  pFVar7 = (this->LODs).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
LAB_14dfc9610:
  do {
    if ((this->LODs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairGroupResources::FMeshes::FLOD_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return uVar8;
    }
    iVar5 = 0;
    if (*(longlong *)pFVar7 != 0) {
      lVar3 = *(longlong *)(*(longlong *)pFVar7 + 0x1a0);
      iVar5 = (*(int *)(lVar3 + 0x4c) + (*(int *)(lVar3 + 0x2c) + *(int *)(lVar3 + 0xc)) * 4 +
               *(int *)(lVar3 + 0x3c) + *(int *)(lVar3 + 0x1c)) * 4;
    }
    lVar3 = *(longlong *)(pFVar7 + 8);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x60);
      if (lVar4 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
      }
      lVar3 = *(longlong *)(lVar3 + 0x80);
      if (lVar3 != 0) {
        uVar8 = uVar8 + iVar5 + *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10) + iVar6;
        pFVar7 = pFVar7 + 0x18;
        goto LAB_14dfc9610;
      }
      iVar5 = iVar5 + iVar6;
    }
    uVar8 = uVar8 + iVar5;
    pFVar7 = pFVar7 + 0x18;
  } while( true );
}

// HasValidData @ 14e01a0b0

bool __thiscall FHairGroupPlatformData::FMeshes::HasValidData(FMeshes *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LODs).ArrayNum;
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x98;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupPlatformData::FMeshes::FLOD_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (0 < *(int *)(pFVar2 + 8)) {
      return true;
    }
    pFVar2 = pFVar2 + 0x98;
  }
  return false;
}

// IsValid @ 14e020e10

bool __thiscall FHairGroupInstance::FMeshes::IsValid(FMeshes *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->LODs).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(longlong *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0x30) != 0) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14e020ea0

bool __thiscall FHairGroupInstance::FMeshes::IsValid(FMeshes *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LODs).ArrayNum;
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupInstance::FMeshes::FLOD_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)pFVar2 != 0) {
      return true;
    }
    pFVar2 = pFVar2 + 0x30;
  }
  return false;
}

