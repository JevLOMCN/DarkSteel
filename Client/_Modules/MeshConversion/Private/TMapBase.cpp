// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 2

// FindChecked @ 1443d5d80

TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> * __thiscall
TMapBase<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>_>
::FindChecked(TMapBase<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>_>
              *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *pTVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *)(*pcVar3)();
  return pTVar7;
}

// FindChecked @ 1443d5e40

FSkinWeightsVertexAttributesRef * __thiscall
TMapBase<FName,FSkinWeightsVertexAttributesRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>_>
::FindChecked(TMapBase<FName,FSkinWeightsVertexAttributesRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>_>
              *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSkinWeightsVertexAttributesRef *pFVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FSkinWeightsVertexAttributesRef *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FSkinWeightsVertexAttributesRef *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar7 = (FSkinWeightsVertexAttributesRef *)(*pcVar3)();
  return pFVar7;
}

