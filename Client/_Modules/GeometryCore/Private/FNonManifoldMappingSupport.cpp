// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 6

// FNonManifoldMappingSupport @ 143567c90

FNonManifoldMappingSupport * __thiscall
UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport
          (FNonManifoldMappingSupport *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *this_00;
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar3;
  FNonManifoldMappingSupport *pFVar4;
  
  this->NonManifoldSrcVIDsAttribute = (FNonManifoldSourceVertexIdAttribute *)0x0;
  this->DynamicMesh = param_1;
  this_00 = (param_1->AttributeSet).Ptr;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    bVar2 = FDynamicMeshAttributeSet::HasAttachedAttribute(this_00,NonManifoldMeshVIDsAttrName);
    if (bVar2) {
      pTVar3 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                       *)&this_00->GenericAttributes,NonManifoldMeshVIDsAttrName);
      if (pTVar3 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                     *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FNonManifoldMappingSupport *)(*pcVar1)();
          return pFVar4;
        }
      }
      this->NonManifoldSrcVIDsAttribute =
           *(FNonManifoldSourceVertexIdAttribute **)&pTVar3->field_0x8;
    }
  }
  return this;
}

// AttachNonManifoldVertexMappingData @ 143578430

bool __cdecl
UE::Geometry::FNonManifoldMappingSupport::AttachNonManifoldVertexMappingData
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FDynamicMesh3 *param_2)

{
  bool bVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TArrayView<int_const_,int> *pTVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FDynamicMeshAttributeSet *this;
  TArrayView<int_const_,int> local_28;
  TArrayView<int_const_,int> local_18;
  
  pFVar4 = (param_2->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  pFVar2 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar4;
  }
  if ((param_1->ArrayNum <
       (int)((param_2->VertexRefCounts).RefCounts.CurBlockUsed +
            (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200)) ||
     (pFVar2 == (FDynamicMeshAttributeSet *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = FDynamicMeshAttributeSet::HasAttachedAttribute(pFVar2,NonManifoldMeshVIDsAttrName);
    if (bVar1) {
      FDynamicMeshAttributeSet::RemoveAttribute(pFVar2,NonManifoldMeshVIDsAttrName);
    }
    pFVar2 = ::operator_new(0x38);
    pFVar4 = this;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)param_2;
      pFVar2->_padding_ = (longlong)&___7FNonManifoldSourceVertexIdAttribute_Geometry_UE__6B_;
      pFVar2->ParentMesh = (FDynamicMesh3 *)0x0;
      (pFVar2->UVLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->UVLayers).Array.ArrayNum = 0;
      (pFVar2->UVLayers).Array.ArrayMax = 0;
      TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&pFVar2->ParentMesh);
      *(undefined1 *)&(pFVar2->NormalLayers).Array.AllocatorInstance.Data = 0;
      pFVar4 = pFVar2;
    }
    pFVar4->_padding_ = (longlong)NonManifoldMeshVIDsAttrName;
    pFVar2 = (param_2->AttributeSet).Ptr;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      this = pFVar2;
    }
    FDynamicMeshAttributeSet::AttachAttribute
              (this,NonManifoldMeshVIDsAttrName,
               (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
    pTVar3 = TArrayView<int_const_,int>::
             TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                       (&local_18,param_1);
    local_28.DataPtr = pTVar3->DataPtr;
    local_28.ArrayNum = pTVar3->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
    FNonManifoldSourceVertexIdAttribute::InitializeFromArray
              ((FNonManifoldSourceVertexIdAttribute *)pFVar4,&local_28);
    bVar1 = true;
  }
  return bVar1;
}

// GetOriginalNonManifoldVertexID @ 1435b2200

int __thiscall
UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
          (FNonManifoldMappingSupport *this,int param_1)

{
  if (this->NonManifoldSrcVIDsAttribute != (FNonManifoldSourceVertexIdAttribute *)0x0) {
    return *(int *)(*(longlong *)
                     ((this->NonManifoldSrcVIDsAttribute->SourceVertexIds).Blocks.AllocatorInstance.
                      Data + (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4
                   );
  }
  return param_1;
}

// IsNonManifoldVertexInSource @ 1435ba560

bool __thiscall
UE::Geometry::FNonManifoldMappingSupport::IsNonManifoldVertexInSource
          (FNonManifoldMappingSupport *this)

{
  if ((this->NonManifoldSrcVIDsAttribute != (FNonManifoldSourceVertexIdAttribute *)0x0) &&
     (this->NonManifoldSrcVIDsAttribute->bValid != false)) {
    return true;
  }
  return false;
}

// RemoveNonManifoldVertexMappingData @ 1435bfc20

void __cdecl
UE::Geometry::FNonManifoldMappingSupport::RemoveNonManifoldVertexMappingData(FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *this;
  bool bVar1;
  
  this = (param_1->AttributeSet).Ptr;
  if (this != (FDynamicMeshAttributeSet *)0x0) {
    bVar1 = FDynamicMeshAttributeSet::HasAttachedAttribute(this,NonManifoldMeshVIDsAttrName);
    if (bVar1) {
      FDynamicMeshAttributeSet::RemoveAttribute(this,NonManifoldMeshVIDsAttrName);
      return;
    }
  }
  return;
}

// Reset @ 1435c0380

void __thiscall
UE::Geometry::FNonManifoldMappingSupport::Reset
          (FNonManifoldMappingSupport *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *this_00;
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar3;
  
  this->NonManifoldSrcVIDsAttribute = (FNonManifoldSourceVertexIdAttribute *)0x0;
  this->DynamicMesh = param_1;
  this_00 = (param_1->AttributeSet).Ptr;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    bVar2 = FDynamicMeshAttributeSet::HasAttachedAttribute(this_00,NonManifoldMeshVIDsAttrName);
    if (bVar2) {
      pTVar3 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                       *)&this_00->GenericAttributes,NonManifoldMeshVIDsAttrName);
      if (pTVar3 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                     *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this->NonManifoldSrcVIDsAttribute =
           *(FNonManifoldSourceVertexIdAttribute **)&pTVar3->field_0x8;
    }
  }
  return;
}

