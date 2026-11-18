// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// GetDataSize @ 14dfc66a0

uint __thiscall FHairGroupPlatformData::FCards::GetDataSize(FCards *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  pFVar11 = (this->LODs).AllocatorInstance.Data;
  local_res18 = (this->LODs).ArrayNum;
  uVar10 = (ulonglong)(int)local_res18;
  local_res10 = 0;
  local_res20 = pFVar11 + uVar10 * 0x428;
  while( true ) {
    pFVar7 = local_res20;
    if ((this->LODs).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar7) break;
    iVar1 = *(int *)(pFVar11 + 0x2c);
    iVar2 = *(int *)(pFVar11 + 0x3c);
    iVar3 = *(int *)(pFVar11 + 0x4c);
    iVar4 = *(int *)(pFVar11 + 0x6c);
    iVar5 = *(int *)(pFVar11 + 0x7c);
    iVar6 = *(int *)(pFVar11 + 0xcc);
    uVar8 = ::GetDataSize((FHairStrandsBulkData *)(pFVar11 + 0xd0));
    uVar9 = ::GetDataSize((FHairStrandsInterpolationBulkData *)(pFVar11 + 0x390));
    local_res10 = local_res10 +
                  uVar9 + uVar8 + (iVar6 + (iVar3 + iVar1) * 4 + iVar5 + iVar4 + iVar2) * 4;
    uVar10 = (ulonglong)local_res18;
    pFVar11 = pFVar11 + 0x428;
  }
  return local_res10;
}

// GetResourcesSize @ 14dfc9230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FHairGroupResources::FCards::GetResourcesSize(FCards *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LODs).ArrayNum;
  uVar9 = 0;
  pFVar10 = (this->LODs).AllocatorInstance.Data;
  pFVar8 = pFVar10 + (longlong)iVar1 * 0x30;
LAB_14dfc9260:
  do {
    if ((this->LODs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupResources::FCards::FLOD_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar8) {
      return uVar9;
    }
    iVar7 = 0;
    if (*(longlong *)pFVar10 != 0) {
      lVar2 = *(longlong *)(*(longlong *)pFVar10 + 0x1d8);
      iVar7 = (*(int *)(lVar2 + 0x7c) + (*(int *)(lVar2 + 0x4c) + *(int *)(lVar2 + 0x2c)) * 4 +
               *(int *)(lVar2 + 0x5c) + *(int *)(lVar2 + 0x3c)) * 4;
    }
    if (*(longlong *)(pFVar10 + 8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(pFVar10 + 8) + 0x60);
      if (lVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
      }
      iVar7 = iVar7 + iVar4;
    }
    if (*(FHairStrandsRestResource **)(pFVar10 + 0x10) != (FHairStrandsRestResource *)0x0) {
      uVar5 = FHairStrandsRestResource::GetResourcesSize
                        (*(FHairStrandsRestResource **)(pFVar10 + 0x10));
      iVar7 = iVar7 + uVar5;
    }
    lVar2 = *(longlong *)(pFVar10 + 0x18);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x60);
      if (lVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10);
      }
      lVar2 = *(longlong *)(lVar2 + 0x80);
      if (lVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
      }
      iVar7 = iVar7 + iVar6 + iVar4;
    }
    lVar2 = *(longlong *)(pFVar10 + 0x20);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x60);
      if (lVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10);
      }
      lVar2 = *(longlong *)(lVar2 + 0x80);
      if (lVar2 != 0) {
        uVar9 = uVar9 + iVar7 + *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10) + iVar4;
        pFVar10 = pFVar10 + 0x30;
        goto LAB_14dfc9260;
      }
      iVar7 = iVar7 + iVar4;
    }
    uVar9 = uVar9 + iVar7;
    pFVar10 = pFVar10 + 0x30;
  } while( true );
}

// HasValidData @ 14e01a040

bool __thiscall FHairGroupPlatformData::FCards::HasValidData(FCards *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LODs).ArrayNum;
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x428;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (0 < *(int *)(pFVar2 + 0x28)) {
      return true;
    }
    pFVar2 = pFVar2 + 0x428;
  }
  return false;
}

// IsValid @ 14e020ce0

bool __thiscall FHairGroupInstance::FCards::IsValid(FCards *this,int param_1)

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
    if (*(longlong *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0x68) != 0) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14e020d70

bool __thiscall FHairGroupInstance::FCards::IsValid(FCards *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LODs).ArrayNum;
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupInstance::FCards::FLOD_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)pFVar2 != 0) {
      return true;
    }
    pFVar2 = pFVar2 + 0x68;
  }
  return false;
}

