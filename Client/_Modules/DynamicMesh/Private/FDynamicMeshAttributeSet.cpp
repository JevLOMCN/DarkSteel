// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// GetSkinWeightsAttribute @ 14c8117d0

TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute
          (FDynamicMeshAttributeSet *this,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar6;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar7;
  undefined1 *puVar8;
  
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->SkinWeightAttributes).field_0x8 !=
      *(int *)&(this->SkinWeightAttributes).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SkinWeightAttributes).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->SkinWeightAttributes).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->SkinWeightAttributes).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar5 * 0x18) == param_1) {
          pTVar6 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                           *)&this->SkinWeightAttributes,param_1);
          if (pTVar6 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
                         *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                       (*pcVar2)();
              return pTVar7;
            }
          }
          return *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                  &pTVar6->field_0x8;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  return (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
}

