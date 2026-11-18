// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// Accumulate @ 14dfb64c0

void __thiscall
FGroomBindingAssetMemoryStats::Accumulate
          (FGroomBindingAssetMemoryStats *this,FGroomBindingAssetMemoryStats *param_1)

{
  uint *puVar1;
  
  (this->CPU).Guides = (this->CPU).Guides + (param_1->CPU).Guides;
  puVar1 = &(this->CPU).Strands;
  *puVar1 = *puVar1 + (param_1->CPU).Strands;
  puVar1 = &(this->CPU).Cards;
  *puVar1 = *puVar1 + (param_1->CPU).Cards;
  (this->GPU).Guides = (this->GPU).Guides + (param_1->GPU).Guides;
  puVar1 = &(this->GPU).Strands;
  *puVar1 = *puVar1 + (param_1->GPU).Strands;
  puVar1 = &(this->GPU).Cards;
  *puVar1 = *puVar1 + (param_1->GPU).Cards;
  return;
}

// Get @ 14dfc55a0

FGroomBindingAssetMemoryStats * __cdecl
FGroomBindingAssetMemoryStats::Get
          (FGroomBindingAssetMemoryStats *__return_storage_ptr__,FHairGroupPlatformData *param_1,
          FHairGroupResource *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  FHairGroupResource *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FGroomBindingAssetMemoryStats *pFVar14;
  int iVar15;
  FHairStrandsRootBulkData *pFVar16;
  uint uVar17;
  int iVar18;
  FHairStrandsRootBulkData *pFVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_res8 [8];
  FHairGroupPlatformData *local_res10;
  FHairGroupResource *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_58;
  undefined1 local_57 [3];
  uint local_54;
  uint local_50;
  
  (__return_storage_ptr__->CPU).Guides = 0;
  (__return_storage_ptr__->CPU).Strands = 0;
  *(undefined8 *)&(__return_storage_ptr__->CPU).Cards = 0;
  (__return_storage_ptr__->GPU).Strands = 0;
  (__return_storage_ptr__->GPU).Cards = 0;
  iVar18 = (param_1->SimRootBulkDatas).ArrayNum;
  pFVar19 = (FHairStrandsRootBulkData *)(param_1->SimRootBulkDatas).AllocatorInstance.Data;
  pFVar16 = pFVar19 + iVar18;
  local_res10 = param_1;
  local_res18 = param_2;
  while( true ) {
    if ((param_1->SimRootBulkDatas).ArrayNum != iVar18) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FHairStrandsRootBulkData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar19 == pFVar16) break;
    uVar11 = (__return_storage_ptr__->CPU).Guides;
    uVar10 = FHairStrandsRootBulkData::GetDataSize(pFVar19);
    (__return_storage_ptr__->CPU).Guides = uVar10 + uVar11;
    pFVar19 = pFVar19 + 1;
  }
  iVar18 = (param_1->RenRootBulkDatas).ArrayNum;
  pFVar19 = (FHairStrandsRootBulkData *)(param_1->RenRootBulkDatas).AllocatorInstance.Data;
  pFVar16 = pFVar19 + iVar18;
  while( true ) {
    if ((param_1->RenRootBulkDatas).ArrayNum != iVar18) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FHairStrandsRootBulkData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar19 == pFVar16) break;
    uVar11 = (__return_storage_ptr__->CPU).Strands;
    uVar10 = FHairStrandsRootBulkData::GetDataSize(pFVar19);
    (__return_storage_ptr__->CPU).Strands = uVar10 + uVar11;
    pFVar19 = pFVar19 + 1;
  }
  if (param_2->SimRootResources != (FHairStrandsRestRootResource *)0x0) {
    uVar11 = (__return_storage_ptr__->GPU).Guides;
    uVar10 = FHairStrandsRestRootResource::GetResourcesSize(param_2->SimRootResources);
    (__return_storage_ptr__->GPU).Guides = uVar10 + uVar11;
  }
  if (param_2->RenRootResources != (FHairStrandsRestRootResource *)0x0) {
    uVar11 = FHairStrandsRestRootResource::GetResourcesSize(param_2->RenRootResources);
    puVar1 = &(__return_storage_ptr__->GPU).Strands;
    *puVar1 = *puVar1 + uVar11;
  }
  local_50 = (param_1->CardsRootBulkDatas).ArrayNum;
  local_54 = 0;
  if (local_50 != 0) {
    do {
      uVar11 = local_54;
      uVar17 = ~local_54;
      uVar10 = 0;
      if ((int)local_54 < (param_1->CardsRootBulkDatas).ArrayNum) {
        uVar10 = uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FGroomBindingAssetMemoryStats *)(*pcVar6)();
        return pFVar14;
      }
      pFVar25 = (param_1->CardsRootBulkDatas).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
      iVar18 = *(int *)(pFVar25 + 8);
      pFVar19 = *(FHairStrandsRootBulkData **)pFVar25;
      pFVar16 = pFVar19 + iVar18;
      while( true ) {
        if (*(int *)(pFVar25 + 8) != iVar18) {
          local_58 = 0;
          `TCheckedPointerIterator<FHairStrandsRootBulkData_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_58);
        }
        uVar10 = local_54;
        pFVar8 = local_res18;
        if (pFVar19 == pFVar16) break;
        uVar10 = (__return_storage_ptr__->CPU).Cards;
        uVar12 = FHairStrandsRootBulkData::GetDataSize(pFVar19);
        (__return_storage_ptr__->CPU).Cards = uVar12 + uVar10;
        pFVar19 = pFVar19 + 1;
      }
      uVar12 = 0;
      if ((int)local_54 < (local_res18->CardsRootResources).ArrayNum) {
        uVar12 = uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FGroomBindingAssetMemoryStats *)(*pcVar6)();
        return pFVar14;
      }
      plVar3 = *(longlong **)
                ((pFVar8->CardsRootResources).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
      if (plVar3 != (longlong *)0x0) {
        plVar20 = (longlong *)*plVar3;
        iVar18 = 0;
        lVar7 = plVar3[1];
        plVar2 = plVar20 + (int)lVar7;
        while( true ) {
          if ((int)plVar3[1] != (int)lVar7) {
            local_57[0] = 0;
            `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*_const,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_57);
          }
          if (plVar20 == plVar2) break;
          lVar4 = *plVar20;
          lVar5 = *(longlong *)(lVar4 + 0x68);
          if (lVar5 == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = *(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10);
          }
          lVar5 = *(longlong *)(lVar4 + 0x88);
          if (lVar5 == 0) {
            iVar24 = 0;
          }
          else {
            iVar24 = *(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10);
          }
          lVar5 = *(longlong *)(lVar4 + 0xa8);
          if (lVar5 == 0) {
            iVar23 = 0;
          }
          else {
            iVar23 = *(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10);
          }
          lVar5 = *(longlong *)(lVar4 + 200);
          if (lVar5 == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = *(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10);
          }
          lVar5 = *(longlong *)(lVar4 + 0xf0);
          if (lVar5 == 0) {
            iVar21 = 0;
          }
          else {
            iVar21 = *(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10);
          }
          lVar5 = *(longlong *)(lVar4 + 0x110);
          if (lVar5 == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(lVar5 + 0x14) * *(int *)(lVar5 + 0x10);
          }
          lVar4 = *(longlong *)(lVar4 + 0x130);
          iVar15 = iVar13 + iVar21 + iVar22 + iVar23 + iVar24 + iVar15;
          if (lVar4 == 0) {
            iVar18 = iVar18 + iVar15;
            plVar20 = plVar20 + 1;
          }
          else {
            iVar18 = iVar18 + *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10) + iVar15;
            plVar20 = plVar20 + 1;
          }
        }
        puVar1 = &(__return_storage_ptr__->GPU).Cards;
        *puVar1 = *puVar1 + iVar18;
        uVar10 = local_54;
      }
      local_54 = uVar10 + 1;
      param_1 = local_res10;
    } while (local_54 < local_50);
  }
  return __return_storage_ptr__;
}

// GetTotalCPUSize @ 14dfca2f0

uint __thiscall FGroomBindingAssetMemoryStats::GetTotalCPUSize(FGroomBindingAssetMemoryStats *this)

{
  return (this->GPU).Cards + (this->GPU).Strands + (this->GPU).Guides;
}

// GetTotalGPUSize @ 14dfca320

uint __thiscall FGroomBindingAssetMemoryStats::GetTotalGPUSize(FGroomBindingAssetMemoryStats *this)

{
  return (this->CPU).Cards + (this->CPU).Strands + (this->CPU).Guides;
}

