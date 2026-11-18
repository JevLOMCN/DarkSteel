// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetMaterialRelevance<UMeshComponent> @ 14789e890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __cdecl
FMeshComponentHelper::GetMaterialRelevance<UMeshComponent>
          (UMeshComponent *param_1,EShaderPlatform param_2)

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
  UMeshComponent *pUVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar7 = (UMeshComponent *)CONCAT62(in_register_00000012,param_2);
  lVar2 = pUVar7->_padding_;
  iVar8 = 0;
  param_1->_padding_ = 0;
  iVar4 = (**(code **)(lVar2 + 0x810))(pUVar7);
  if (0 < iVar4) {
    do {
      this = (UMaterial *)(**(code **)(pUVar7->_padding_ + 0x690))(pUVar7,iVar8);
      if (this == (UMaterial *)0x0) {
        this = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      FVar5 = UMaterialInterface::GetRelevance_Concurrent
                        ((UMaterialInterface *)this,(EShaderPlatform)local_res8);
      uVar6 = (uint)param_1->_padding_ >> 0x12;
      uVar11 = *(ulonglong *)FVar5.field0_0x0;
      param_1->_padding_ = param_1->_padding_ | uVar11;
      uVar11 = uVar11 >> 0x12 & 0x3fff;
      lVar2 = pUVar7->_padding_;
      uVar10 = (uint)uVar11;
      if (((byte)uVar11 & 0x3f) < ((byte)uVar6 & 0x3f)) {
        uVar10 = uVar6;
      }
      iVar8 = iVar8 + 1;
      uVar6 = (uint)param_1->_padding_;
      *(uint *)&param_1->_padding_ = (uVar10 << 0x12 ^ uVar6) & 0xfc0000 ^ uVar6;
      iVar4 = (**(code **)(lVar2 + 0x810))(pUVar7);
    } while (iVar8 < iVar4);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetMaterialSlotsOverlayMaterial<UMeshComponent>(pUVar7,&local_38);
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
  if ((!bVar3) &&
     ((this_00 = (pUVar7->OverlayMaterial).field0_0x0.DebugPtr, this_00 != (UMaterialInterface *)0x0
      || (this_00 = (UMaterialInterface *)(**(code **)(pUVar7->_padding_ + 0xb18))(pUVar7),
         this_00 != (UMaterialInterface *)0x0)))) {
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
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return (FMaterialRelevance)(FMaterialRelevance_u_0)param_1;
}

// GetMaterialSlotsOverlayMaterial<UMeshComponent> @ 14789ea80

/* WARNING: Removing unreachable block (ram,0x00014789eb22) */
/* WARNING: Removing unreachable block (ram,0x00014789eb30) */
/* WARNING: Removing unreachable block (ram,0x00014789eb37) */
/* WARNING: Removing unreachable block (ram,0x00014789eb3b) */
/* WARNING: Removing unreachable block (ram,0x00014789eb44) */
/* WARNING: Removing unreachable block (ram,0x00014789eb51) */
/* WARNING: Removing unreachable block (ram,0x00014789eb63) */
/* WARNING: Removing unreachable block (ram,0x00014789eb73) */
/* WARNING: Removing unreachable block (ram,0x00014789eb76) */
/* WARNING: Removing unreachable block (ram,0x00014789eb7a) */
/* WARNING: Removing unreachable block (ram,0x00014789ebaf) */
/* WARNING: Removing unreachable block (ram,0x00014789ebb0) */
/* WARNING: Removing unreachable block (ram,0x00014789ebbd) */
/* WARNING: Removing unreachable block (ram,0x00014789ebc7) */
/* WARNING: Removing unreachable block (ram,0x00014789ebca) */
/* WARNING: Removing unreachable block (ram,0x00014789ebce) */
/* WARNING: Removing unreachable block (ram,0x00014789ec03) */
/* WARNING: Removing unreachable block (ram,0x00014789ec04) */
/* WARNING: Removing unreachable block (ram,0x00014789ec16) */
/* WARNING: Removing unreachable block (ram,0x00014789ec19) */
/* WARNING: Removing unreachable block (ram,0x00014789ec1d) */
/* WARNING: Removing unreachable block (ram,0x00014789ec4c) */
/* WARNING: Removing unreachable block (ram,0x00014789ec4d) */
/* WARNING: Removing unreachable block (ram,0x00014789ec5d) */
/* WARNING: Removing unreachable block (ram,0x00014789ec65) */
/* WARNING: Removing unreachable block (ram,0x00014789ec6a) */
/* WARNING: Removing unreachable block (ram,0x00014789ec70) */
/* WARNING: Removing unreachable block (ram,0x00014789ec7f) */
/* WARNING: Removing unreachable block (ram,0x00014789ecaa) */

void __cdecl
FMeshComponentHelper::GetMaterialSlotsOverlayMaterial<UMeshComponent>
          (UMeshComponent *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (param_2 != &param_1->MaterialSlotsOverlayMaterial) {
    iVar2 = (param_1->MaterialSlotsOverlayMaterial).ArrayNum;
    piVar1 = &param_2->ArrayMax;
    pFVar3 = (param_1->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
    param_2->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,*piVar1,&param_2->AllocatorInstance,iVar2,piVar1);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                ((param_2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar3,iVar2);
    }
  }
  (**(code **)(param_1->_padding_ + 0xb10))(param_1);
  return;
}

// GetMaterialRelevance<FStaticMeshSceneProxyDesc> @ 14876f570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __cdecl
FMeshComponentHelper::GetMaterialRelevance<FStaticMeshSceneProxyDesc>
          (FStaticMeshSceneProxyDesc *param_1,EShaderPlatform param_2)

{
  FScriptContainerElement *pFVar1;
  UMaterialInterface *this;
  bool bVar2;
  int iVar3;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar4;
  TObjectPtr<UMaterialInterface> *pTVar5;
  UMaterial *pUVar6;
  UMaterial *pUVar7;
  FMaterialRelevance FVar8;
  uint uVar9;
  undefined6 in_register_00000012;
  FStaticMeshSceneProxyDesc *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pFVar10 = (FStaticMeshSceneProxyDesc *)CONCAT62(in_register_00000012,param_2);
  param_1->_padding_ = 0;
  pUVar7 = (UMaterial *)0x0;
  do {
    iVar3 = 0;
    if (pFVar10->StaticMesh != (UStaticMesh *)0x0) {
      iVar3 = (pFVar10->StaticMesh->StaticMaterials).ArrayNum;
    }
    iVar11 = (int)pUVar7;
    if (iVar3 <= iVar11) {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&local_48 !=
          &pFVar10->MaterialSlotsOverlayMaterial) {
        uVar13 = (pFVar10->MaterialSlotsOverlayMaterial).ArrayNum;
        pFVar1 = (pFVar10->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
        local_40 = (ulonglong)uVar13;
        if (uVar13 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar13,0,&local_48,uVar13,(int *)((longlong)&local_40 + 4));
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    (local_48.Data,(TObjectPtr<UMaterialInterface> *)pFVar1,uVar13);
        }
      }
      iVar3 = (int)local_40;
      bVar2 = true;
      pFVar1 = local_48.Data + (longlong)(int)local_40 * 8;
      FVar12.Data = local_48.Data;
      while( true ) {
        if ((int)local_40 != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar12.Data == pFVar1) break;
        if (*(UMaterialInterface **)FVar12.Data == (UMaterialInterface *)0x0) {
          bVar2 = false;
          FVar12.Data = FVar12.Data + 8;
        }
        else {
          FVar8 = UMaterialInterface::GetRelevance_Concurrent
                            (*(UMaterialInterface **)FVar12.Data,(EShaderPlatform)local_res10);
          uVar9 = (uint)param_1->_padding_ >> 0x12;
          uVar14 = *(ulonglong *)FVar8.field0_0x0;
          param_1->_padding_ = param_1->_padding_ | uVar14;
          uVar14 = uVar14 >> 0x12 & 0x3fff;
          uVar13 = (uint)uVar14;
          if (((byte)uVar14 & 0x3f) < ((byte)uVar9 & 0x3f)) {
            uVar13 = uVar9;
          }
          uVar9 = (uint)param_1->_padding_;
          *(uint *)&param_1->_padding_ = (uVar13 << 0x12 ^ uVar9) & 0xfc0000 ^ uVar9;
          FVar12.Data = FVar12.Data + 8;
        }
      }
      if ((!bVar2) &&
         (this = (pFVar10->OverlayMaterial).field0_0x0.DebugPtr, this != (UMaterialInterface *)0x0))
      {
        FVar8 = UMaterialInterface::GetRelevance_Concurrent(this,(EShaderPlatform)local_res8);
        uVar9 = (uint)param_1->_padding_ >> 0x12;
        uVar14 = *(ulonglong *)FVar8.field0_0x0;
        param_1->_padding_ = param_1->_padding_ | uVar14;
        uVar14 = uVar14 >> 0x12 & 0x3fff;
        uVar13 = (uint)uVar14;
        if (((byte)uVar14 & 0x3f) < ((byte)uVar9 & 0x3f)) {
          uVar13 = uVar9;
        }
        uVar9 = (uint)param_1->_padding_;
        *(uint *)&param_1->_padding_ = (uVar13 << 0x12 ^ uVar9) & 0xfc0000 ^ uVar9;
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return (FMaterialRelevance)(FMaterialRelevance_u_0)param_1;
    }
    if (((iVar11 < 0) || ((pFVar10->OverrideMaterials).ArrayNum <= iVar11)) ||
       (pTVar4 = &TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                            (&pFVar10->OverrideMaterials,iVar11)->field0_0x0,
       pTVar4->DebugPtr == (UMaterialInterface *)0x0)) {
      pUVar7 = (UMaterial *)0x0;
      if (pFVar10->StaticMesh != (UStaticMesh *)0x0) {
        pUVar7 = (UMaterial *)UStaticMesh::GetMaterial(pFVar10->StaticMesh,iVar11);
        goto LAB_14876f609;
      }
LAB_14876f64d:
      if (pUVar7 == (UMaterial *)0x0) {
LAB_14876f652:
        pUVar7 = UMaterial::GetDefaultMaterial(MD_Surface);
      }
    }
    else {
      pTVar5 = TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                         (&pFVar10->OverrideMaterials,iVar11);
      pUVar7 = (UMaterial *)(pTVar5->field0_0x0).DebugPtr;
LAB_14876f609:
      if (pUVar7 == (UMaterial *)0x0) goto LAB_14876f652;
      UObject::ConditionalPostLoad((UObject *)pUVar7);
      bVar2 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                        (pFVar10,(FMaterialAudit *)0x0);
      if ((bVar2) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
        local_38 = 0;
        uStack_30 = 0;
        pUVar6 = (UMaterial *)(**(code **)(pUVar7->_padding_ + 0x3a8))(pUVar7,&local_38);
        if (pUVar6 != (UMaterial *)0x0) {
          pUVar7 = pUVar6;
        }
        goto LAB_14876f64d;
      }
    }
    FVar8 = UMaterialInterface::GetRelevance_Concurrent
                      ((UMaterialInterface *)pUVar7,(EShaderPlatform)local_res8);
    uVar9 = (uint)param_1->_padding_ >> 0x12;
    uVar14 = *(ulonglong *)FVar8.field0_0x0;
    param_1->_padding_ = param_1->_padding_ | uVar14;
    uVar14 = uVar14 >> 0x12 & 0x3fff;
    uVar13 = (uint)uVar14;
    if (((byte)uVar14 & 0x3f) < ((byte)uVar9 & 0x3f)) {
      uVar13 = uVar9;
    }
    uVar9 = (uint)param_1->_padding_;
    *(uint *)&param_1->_padding_ = (uVar13 << 0x12 ^ uVar9) & 0xfc0000 ^ uVar9;
    pUVar7 = (UMaterial *)(ulonglong)(iVar11 + 1);
  } while( true );
}

