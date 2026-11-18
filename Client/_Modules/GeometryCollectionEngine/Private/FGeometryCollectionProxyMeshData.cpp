// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 3

// StaticStruct @ 14639a0d0

UScriptStruct * __cdecl FGeometryCollectionProxyMeshData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionProxyMeshData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionProxyMeshData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionProxyMeshData,
                         (UObject *)pUVar1,L"GeometryCollectionProxyMeshData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionProxyMeshData.OuterSingleton;
}

// GetMeshTransform @ 1463b6250

TTransform<float> * __thiscall
FGeometryCollectionProxyMeshData::GetMeshTransform
          (FGeometryCollectionProxyMeshData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<float> *pTVar4;
  
  if ((-1 < param_1) && (param_1 < (this->MeshTransforms).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->MeshTransforms).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TTransform<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return (TTransform<float> *)
           ((this->MeshTransforms).AllocatorInstance.Data + (longlong)param_1 * 0x30);
  }
  return &UE::Math::TTransform<float>::Identity;
}

// Reset @ 1463c3c80

void __thiscall FGeometryCollectionProxyMeshData::Reset(FGeometryCollectionProxyMeshData *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->ProxyMeshes).ArrayNum = 0;
  if ((this->ProxyMeshes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->ProxyMeshes).ArrayMax);
  }
  (this->MeshTransforms).ArrayNum = 0;
  if ((this->MeshTransforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&(this->MeshTransforms).AllocatorInstance,0,
               &(this->MeshTransforms).ArrayMax);
  }
  piVar1 = &(this->MeshOverrideMaterials).ArrayMax;
  pFVar3 = (this->MeshOverrideMaterials).AllocatorInstance.Data;
  iVar2 = (this->MeshOverrideMaterials).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<FGeometryCollectionProxyMeshMaterials,int>
              ((FGeometryCollectionProxyMeshMaterials *)pFVar3,iVar2);
    (this->MeshOverrideMaterials).ArrayNum = 0;
    return;
  }
  DestructItems<FGeometryCollectionProxyMeshMaterials,int>
            ((FGeometryCollectionProxyMeshMaterials *)pFVar3,iVar2);
  (this->MeshOverrideMaterials).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MeshOverrideMaterials).AllocatorInstance,0,piVar1);
  }
  return;
}

