// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 6

// GetAttributesRef<float> @ 144368660

TMeshAttributesRef<FVertexInstanceID,float> __thiscall
TAttributesSet<FVertexInstanceID>::GetAttributesRef<float>
          (TAttributesSet<FVertexInstanceID> *this,FName param_1)

{
  longlong lVar1;
  TTuple<FName,FAttributesSetEntry> *pTVar2;
  longlong *plVar3;
  FName in_R8;
  
  pTVar2 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,in_R8);
  plVar3 = (longlong *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, *(int *)(lVar1 + 8) == 3)) &&
     (*(int *)(lVar1 + 0xc) == 1)) {
    *(longlong *)param_1 = lVar1;
    return (TMeshAttributesRef<FVertexInstanceID,float>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexInstanceID,float>)param_1;
}

// GetAttributesRef<UE::Math::TVector2<float>_> @ 1443686b0

TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_> __thiscall
TAttributesSet<FVertexInstanceID>::GetAttributesRef<UE::Math::TVector2<float>_>
          (TAttributesSet<FVertexInstanceID> *this,FName param_1)

{
  longlong lVar1;
  TTuple<FName,FAttributesSetEntry> *pTVar2;
  longlong *plVar3;
  FName in_R8;
  
  pTVar2 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,in_R8);
  plVar3 = (longlong *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, *(int *)(lVar1 + 8) == 2)) &&
     (*(int *)(lVar1 + 0xc) == 1)) {
    *(longlong *)param_1 = lVar1;
    return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_>)param_1;
}

// GetAttributesRef<UE::Math::TVector4<float>_> @ 144368700

TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector4<float>_> __thiscall
TAttributesSet<FVertexInstanceID>::GetAttributesRef<UE::Math::TVector4<float>_>
          (TAttributesSet<FVertexInstanceID> *this,FName param_1)

{
  longlong lVar1;
  TTuple<FName,FAttributesSetEntry> *pTVar2;
  longlong *plVar3;
  FName in_R8;
  
  pTVar2 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,in_R8);
  plVar3 = (longlong *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, *(int *)(lVar1 + 8) == 0)) &&
     (*(int *)(lVar1 + 0xc) == 1)) {
    *(longlong *)param_1 = lVar1;
    return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector4<float>_>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector4<float>_>)param_1;
}

// GetAttributesRef<UE::Math::TVector<float>_> @ 144368750

TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> __thiscall
TAttributesSet<FVertexID>::GetAttributesRef<UE::Math::TVector<float>_>
          (TAttributesSet<FVertexID> *this,FName param_1)

{
  longlong lVar1;
  TTuple<FName,FAttributesSetEntry> *pTVar2;
  longlong *plVar3;
  FName in_R8;
  
  pTVar2 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,in_R8);
  plVar3 = (longlong *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, *(int *)(lVar1 + 8) == 1)) &&
     (*(int *)(lVar1 + 0xc) == 1)) {
    *(longlong *)param_1 = lVar1;
    return (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>)param_1;
}

// GetAttributesRef<UE::Math::TVector<float>_> @ 1443687a0

TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> __thiscall
TAttributesSet<FVertexInstanceID>::GetAttributesRef<UE::Math::TVector<float>_>
          (TAttributesSet<FVertexInstanceID> *this,FName param_1)

{
  longlong lVar1;
  TTuple<FName,FAttributesSetEntry> *pTVar2;
  longlong *plVar3;
  FName in_R8;
  
  pTVar2 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,in_R8);
  plVar3 = (longlong *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, *(int *)(lVar1 + 8) == 1)) &&
     (*(int *)(lVar1 + 0xc) == 1)) {
    *(longlong *)param_1 = lVar1;
    return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_>)param_1;
}

// GetAttributesRef<bool> @ 1443687f0

TMeshAttributesRef<FEdgeID,bool> __thiscall
TAttributesSet<FEdgeID>::GetAttributesRef<bool>(TAttributesSet<FEdgeID> *this,FName param_1)

{
  longlong lVar1;
  TTuple<FName,FAttributesSetEntry> *pTVar2;
  longlong *plVar3;
  FName in_R8;
  
  pTVar2 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,in_R8);
  plVar3 = (longlong *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, *(int *)(lVar1 + 8) == 5)) &&
     (*(int *)(lVar1 + 0xc) == 1)) {
    *(longlong *)param_1 = lVar1;
    return (TMeshAttributesRef<FEdgeID,bool>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FEdgeID,bool>)param_1;
}

