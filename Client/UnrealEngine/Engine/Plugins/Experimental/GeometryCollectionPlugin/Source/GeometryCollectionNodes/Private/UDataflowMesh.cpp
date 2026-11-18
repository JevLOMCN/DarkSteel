// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 3

// AddMaterials<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&> @ 14e8f5360

void __thiscall
UDataflowMesh::
AddMaterials<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
          (UDataflowMesh *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pTVar1 = &this->Materials;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&pTVar1->AllocatorInstance,&(this->Materials).ArrayNum,
                       &(this->Materials).ArrayMax);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8,
               (TObjectPtr<UMaterialInterface> *)(param_1->AllocatorInstance).Data,iVar2);
  }
  return;
}

// SetDynamicMesh<UE::Geometry::FDynamicMesh3_const_&> @ 14e905040

void __thiscall
UDataflowMesh::SetDynamicMesh<UE::Geometry::FDynamicMesh3_const_&>
          (UDataflowMesh *this,FDynamicMesh3 *param_1)

{
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar1;
  FDynamicMesh3 *pFVar2;
  FDynamicMesh3 *pFVar3;
  longlong local_18 [2];
  
  pTVar1 = &this->DynamicMesh;
  if (pTVar1->Ptr == (FDynamicMesh3 *)0x0) {
    pFVar3 = ::operator_new(0x230);
    if (pFVar3 == (FDynamicMesh3 *)0x0) {
      pFVar3 = (FDynamicMesh3 *)0x0;
    }
    else {
      pFVar3 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar3,param_1);
    }
    if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                   *)local_18) {
      if (pFVar3 != (FDynamicMesh3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e9050be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar3->_padding_)(pFVar3,1);
        return;
      }
    }
    else {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar2 != (FDynamicMesh3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e9050a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar2->_padding_)(pFVar2,1);
        return;
      }
    }
  }
  else {
    UE::Geometry::FDynamicMesh3::operator=(pTVar1->Ptr,param_1);
  }
  return;
}

// SetDynamicMesh<UE::Geometry::FDynamicMesh3> @ 14e9050e0

void __thiscall
UDataflowMesh::SetDynamicMesh<UE::Geometry::FDynamicMesh3>
          (UDataflowMesh *this,FDynamicMesh3 *param_1)

{
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar1;
  FDynamicMesh3 *pFVar2;
  FDynamicMesh3 *pFVar3;
  longlong local_18 [2];
  
  pTVar1 = &this->DynamicMesh;
  if (pTVar1->Ptr == (FDynamicMesh3 *)0x0) {
    pFVar3 = ::operator_new(0x230);
    if (pFVar3 == (FDynamicMesh3 *)0x0) {
      pFVar3 = (FDynamicMesh3 *)0x0;
    }
    else {
      pFVar3 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar3,param_1);
    }
    if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                   *)local_18) {
      if (pFVar3 != (FDynamicMesh3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e90515e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar3->_padding_)(pFVar3,1);
        return;
      }
    }
    else {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar2 != (FDynamicMesh3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e905144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar2->_padding_)(pFVar2,1);
        return;
      }
    }
  }
  else {
    UE::Geometry::FDynamicMesh3::operator=(pTVar1->Ptr,param_1);
  }
  return;
}

