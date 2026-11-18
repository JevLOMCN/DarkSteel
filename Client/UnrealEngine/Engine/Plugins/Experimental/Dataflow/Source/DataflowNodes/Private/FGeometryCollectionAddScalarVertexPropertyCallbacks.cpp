// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 4

// ~FGeometryCollectionAddScalarVertexPropertyCallbacks @ 14dace3e0

void __thiscall
FGeometryCollectionAddScalarVertexPropertyCallbacks::
~FGeometryCollectionAddScalarVertexPropertyCallbacks
          (FGeometryCollectionAddScalarVertexPropertyCallbacks *this)

{
  return;
}

// GetName @ 14dad5520

FName __thiscall
FGeometryCollectionAddScalarVertexPropertyCallbacks::GetName
          (FGeometryCollectionAddScalarVertexPropertyCallbacks *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = Name;
  return in_RDX;
}

// GetRenderingParameters @ 14dad62e0

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollectionAddScalarVertexPropertyCallbacks::GetRenderingParameters
          (FGeometryCollectionAddScalarVertexPropertyCallbacks *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType _Src;
  FName *pFVar2;
  FString *pFVar3;
  longlong lVar4;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FRenderingParameter local_68;
  
  pFVar2 = ::FName::FName(&local_res20,"3DView");
  ::FName::FName(&local_res10,L"Collection");
  local_80 = 1;
  local_88.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  ::FName::FName(&local_res18,"FGeometryCollection");
  pFVar3 = ::FString::FString(&local_78,L"SurfaceRender");
  ::FString::FString(&local_68.Name,pFVar3);
  _Src.Data = local_88.Data;
  local_68.Type = local_res18;
  lVar4 = (longlong)local_80;
  local_68.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Outputs.ArrayNum = local_80;
  if (local_80 == 0) {
    local_68.Outputs.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_68.Outputs.AllocatorInstance,local_80,
               &local_68.Outputs.ArrayMax);
    memcpy(local_68.Outputs.AllocatorInstance.Data,_Src.Data,lVar4 << 3);
  }
  local_68.ViewMode = *pFVar2;
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<UE::Dataflow::FRenderingParameter,UE::Dataflow::FRenderingParameter,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,&local_68,1);
  if (local_68.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Outputs.AllocatorInstance.Data);
  }
  if (local_68.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Name.Data.AllocatorInstance.Data);
  }
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// GetTargetGroupNames @ 14dad6990

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollectionAddScalarVertexPropertyCallbacks::GetTargetGroupNames
          (FGeometryCollectionAddScalarVertexPropertyCallbacks *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName FVar1;
  
  FVar1 = FGeometryCollection::VerticesGroup;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&__return_storage_ptr__->AllocatorInstance,1,&__return_storage_ptr__->ArrayMax)
  ;
  *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = FVar1;
  return __return_storage_ptr__;
}

