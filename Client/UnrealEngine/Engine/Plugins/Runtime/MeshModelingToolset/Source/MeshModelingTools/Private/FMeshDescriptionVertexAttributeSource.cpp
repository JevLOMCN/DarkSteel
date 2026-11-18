// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// GetAttribute @ 14ccfd990

TUniquePtr<IMeshVertexAttributeAdapter,TDefaultDelete<IMeshVertexAttributeAdapter>_> __thiscall
FMeshDescriptionVertexAttributeSource::GetAttribute
          (FMeshDescriptionVertexAttributeSource *this,FName param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshDescription *pFVar2;
  FMeshElementContainer *pFVar3;
  FAttributesSetEntry *pFVar4;
  undefined8 *puVar5;
  FName in_R8;
  
  pFVar3 = FMeshElementChannels::Get(this->Mesh->VertexElements,0);
  pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar3->Attributes,in_R8);
  if ((((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar4->Ptr).Ptr, pFVar1->Type == 3))
      && (pFVar1->Extent == 1)) && (pFVar1 != (FMeshAttributeArraySetBase *)0x0)) {
    puVar5 = ::operator_new(0x20);
    if (puVar5 != (undefined8 *)0x0) {
      pFVar2 = this->Mesh;
      *puVar5 = &___7FMeshDescriptionVertexAttributeAdapter__6B_;
      puVar5[1] = pFVar2;
      *(FName *)(puVar5 + 2) = in_R8;
      puVar5[3] = pFVar1;
      goto LAB_14ccfda0e;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_14ccfda0e:
  *(undefined8 **)param_1 = puVar5;
  return (TUniquePtr<IMeshVertexAttributeAdapter,TDefaultDelete<IMeshVertexAttributeAdapter>_>)
         param_1;
}

// GetAttributeElementNum @ 14ccfda50

int __thiscall
FMeshDescriptionVertexAttributeSource::GetAttributeElementNum
          (FMeshDescriptionVertexAttributeSource *this)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get(this->Mesh->VertexElements,0);
  return (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
}

// GetAttributeList @ 14ccfdbf0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FMeshDescriptionVertexAttributeSource::GetAttributeList
          (FMeshDescriptionVertexAttributeSource *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FMeshElementContainer *pFVar1;
  <lambda_1> local_18;
  
  pFVar1 = FMeshElementChannels::Get(this->Mesh->VertexElements,0);
  local_18.VertexAttribs = (TAttributesSet<FVertexID> *)&pFVar1->Attributes;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18.Result = __return_storage_ptr__;
  TAttributesSet<FVertexID>::
  ForEach<_FMeshDescriptionVertexAttributeSource::GetAttributeList_::__l2::<lambda_1>_>
            (local_18.VertexAttribs,&local_18);
  return __return_storage_ptr__;
}

