// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// GetAttachedAttribute @ 14c97e7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetAttachedAttribute
          (FDynamicMeshAttributeSet *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar4;
  
  pTVar3 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&this->GenericAttributes,param_1);
  if (pTVar3 != (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    return *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
    return pTVar4;
  }
  return _DAT_00000008;
}

