// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// StaticStruct @ 146399d50

UScriptStruct * __cdecl FGeometryCollectionEmbeddedExemplar::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionEmbeddedExemplar.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionEmbeddedExemplar.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar,
                         (UObject *)pUVar1,L"GeometryCollectionEmbeddedExemplar");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionEmbeddedExemplar.OuterSingleton;
}

// FGeometryCollectionEmbeddedExemplar @ 1463a17b0

FGeometryCollectionEmbeddedExemplar * __thiscall
FGeometryCollectionEmbeddedExemplar::FGeometryCollectionEmbeddedExemplar
          (FGeometryCollectionEmbeddedExemplar *this)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,L"None");
  (this->StaticMeshExemplar).AssetPath.PackageName.ComparisonIndex = 0;
  (this->StaticMeshExemplar).AssetPath.PackageName.Number = 0;
  (this->StaticMeshExemplar).AssetPath.AssetName.ComparisonIndex = 0;
  (this->StaticMeshExemplar).AssetPath.AssetName.Number = 0;
  (this->StaticMeshExemplar).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticMeshExemplar).SubPathString.Data.ArrayNum = 0;
  (this->StaticMeshExemplar).SubPathString.Data.ArrayMax = 0;
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  FSoftObjectPath::SetPath(&this->StaticMeshExemplar,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->StartCullDistance = 0.0;
  this->EndCullDistance = 0.0;
  this->InstanceCount = 0;
  return this;
}

