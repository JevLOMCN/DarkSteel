// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 2

// GetMaterialRelevance<FFastGeoMeshComponent> @ 14da13170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __cdecl
FMeshComponentHelper::GetMaterialRelevance<FFastGeoMeshComponent>
          (FFastGeoMeshComponent *param_1,EShaderPlatform param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UMaterial *this;
  FMaterialRelevance FVar5;
  UMaterialInterface *this_00;
  uint uVar6;
  undefined6 in_register_00000012;
  FFastGeoMeshComponent *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar7 = (FFastGeoMeshComponent *)CONCAT62(in_register_00000012,param_2);
  lVar2 = pFVar7->_padding_;
  iVar8 = 0;
  param_1->_padding_ = 0;
  iVar4 = (**(code **)(lVar2 + 0x60))(pFVar7);
  if (0 < iVar4) {
    do {
      this = (UMaterial *)(**(code **)(pFVar7->_padding_ + 0x58))(pFVar7,iVar8);
      if (this == (UMaterial *)0x0) {
        this = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      FVar5 = UMaterialInterface::GetRelevance_Concurrent
                        ((UMaterialInterface *)this,(EShaderPlatform)local_res8);
      uVar6 = (uint)param_1->_padding_ >> 0x12;
      uVar11 = *(ulonglong *)FVar5.field0_0x0;
      param_1->_padding_ = param_1->_padding_ | uVar11;
      uVar11 = uVar11 >> 0x12 & 0x3fff;
      lVar2 = pFVar7->_padding_;
      uVar10 = (uint)uVar11;
      if (((byte)uVar11 & 0x3f) < ((byte)uVar6 & 0x3f)) {
        uVar10 = uVar6;
      }
      iVar8 = iVar8 + 1;
      uVar6 = (uint)param_1->_padding_;
      *(uint *)&param_1->_padding_ = (uVar10 << 0x12 ^ uVar6) & 0xfc0000 ^ uVar6;
      iVar4 = (**(code **)(lVar2 + 0x60))(pFVar7);
    } while (iVar8 < iVar4);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetMaterialSlotsOverlayMaterial<FFastGeoMeshComponent>(pFVar7,&local_38);
  bVar3 = true;
  iVar4 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar9.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar9.Data == pFVar1) break;
    if (*(UMaterialInterface **)FVar9.Data == (UMaterialInterface *)0x0) {
      bVar3 = false;
      FVar9.Data = FVar9.Data + 8;
    }
    else {
      FVar5 = UMaterialInterface::GetRelevance_Concurrent
                        (*(UMaterialInterface **)FVar9.Data,(EShaderPlatform)local_res10);
      uVar6 = (uint)param_1->_padding_ >> 0x12;
      uVar11 = *(ulonglong *)FVar5.field0_0x0;
      param_1->_padding_ = param_1->_padding_ | uVar11;
      uVar11 = uVar11 >> 0x12 & 0x3fff;
      uVar10 = (uint)uVar11;
      if (((byte)uVar11 & 0x3f) < ((byte)uVar6 & 0x3f)) {
        uVar10 = uVar6;
      }
      uVar6 = (uint)param_1->_padding_;
      *(uint *)&param_1->_padding_ = (uVar10 << 0x12 ^ uVar6) & 0xfc0000 ^ uVar6;
      FVar9.Data = FVar9.Data + 8;
    }
  }
  if (!bVar3) {
    this_00 = (UMaterialInterface *)(**(code **)(pFVar7->_padding_ + 0x108))(pFVar7);
    if (this_00 != (UMaterialInterface *)0x0) {
      FVar5 = UMaterialInterface::GetRelevance_Concurrent(this_00,(EShaderPlatform)local_res8);
      uVar6 = (uint)param_1->_padding_ >> 0x12;
      uVar11 = *(ulonglong *)FVar5.field0_0x0;
      param_1->_padding_ = param_1->_padding_ | uVar11;
      uVar11 = uVar11 >> 0x12 & 0x3fff;
      uVar10 = (uint)uVar11;
      if (((byte)uVar11 & 0x3f) < ((byte)uVar6 & 0x3f)) {
        uVar10 = uVar6;
      }
      uVar6 = (uint)param_1->_padding_;
      *(uint *)&param_1->_padding_ = (uVar10 << 0x12 ^ uVar6) & 0xfc0000 ^ uVar6;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return (FMaterialRelevance)(FMaterialRelevance_u_0)param_1;
}

// GetMaterialSlotsOverlayMaterial<FFastGeoMeshComponent> @ 14da13a00

/* WARNING: Removing unreachable block (ram,0x00014da13a57) */
/* WARNING: Removing unreachable block (ram,0x00014da13a68) */
/* WARNING: Removing unreachable block (ram,0x00014da13a6f) */
/* WARNING: Removing unreachable block (ram,0x00014da13a73) */
/* WARNING: Removing unreachable block (ram,0x00014da13a7c) */
/* WARNING: Removing unreachable block (ram,0x00014da13a89) */
/* WARNING: Removing unreachable block (ram,0x00014da13a9b) */
/* WARNING: Removing unreachable block (ram,0x00014da13aaa) */
/* WARNING: Removing unreachable block (ram,0x00014da13aad) */
/* WARNING: Removing unreachable block (ram,0x00014da13ab1) */
/* WARNING: Removing unreachable block (ram,0x00014da13ae6) */
/* WARNING: Removing unreachable block (ram,0x00014da13ae7) */
/* WARNING: Removing unreachable block (ram,0x00014da13af5) */
/* WARNING: Removing unreachable block (ram,0x00014da13afe) */
/* WARNING: Removing unreachable block (ram,0x00014da13b01) */
/* WARNING: Removing unreachable block (ram,0x00014da13b05) */
/* WARNING: Removing unreachable block (ram,0x00014da13b3a) */
/* WARNING: Removing unreachable block (ram,0x00014da13b3b) */
/* WARNING: Removing unreachable block (ram,0x00014da13b4c) */
/* WARNING: Removing unreachable block (ram,0x00014da13b4f) */
/* WARNING: Removing unreachable block (ram,0x00014da13b53) */
/* WARNING: Removing unreachable block (ram,0x00014da13b82) */
/* WARNING: Removing unreachable block (ram,0x00014da13b83) */
/* WARNING: Removing unreachable block (ram,0x00014da13b93) */
/* WARNING: Removing unreachable block (ram,0x00014da13b9b) */
/* WARNING: Removing unreachable block (ram,0x00014da13ba0) */
/* WARNING: Removing unreachable block (ram,0x00014da13ba6) */
/* WARNING: Removing unreachable block (ram,0x00014da13bb5) */
/* WARNING: Removing unreachable block (ram,0x00014da13bd8) */

void __cdecl
FMeshComponentHelper::GetMaterialSlotsOverlayMaterial<FFastGeoMeshComponent>
          (FFastGeoMeshComponent *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
           (**(code **)(param_1->_padding_ + 0x100))();
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=(param_2,pTVar1);
  (**(code **)(param_1->_padding_ + 0xf8))(param_1);
  return;
}

