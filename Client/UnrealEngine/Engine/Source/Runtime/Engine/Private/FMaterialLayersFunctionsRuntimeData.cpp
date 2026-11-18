// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1472ed050

UScriptStruct * __cdecl FMaterialLayersFunctionsRuntimeData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialLayersFunctionsRuntimeData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialLayersFunctionsRuntimeData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData,
                         (UObject *)pUVar1,L"MaterialLayersFunctionsRuntimeData");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialLayersFunctionsRuntimeData.OuterSingleton;
}

// operator= @ 147ef37f0

FMaterialLayersFunctionsRuntimeData * __thiscall
FMaterialLayersFunctionsRuntimeData::operator=
          (FMaterialLayersFunctionsRuntimeData *this,FMaterialLayersFunctionsRuntimeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMaterialLayerStackFunctionsCache *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Layers,&param_1->Layers);
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Blends,&param_1->Blends);
  pTVar1 = (param_1->LayerStackCache).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->LayerStackCache).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->LayerStackCache).SharedReferenceCount.ReferenceController;
  (this->LayerStackCache).Object = pFVar2;
  (this->LayerStackCache).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// ~FMaterialLayersFunctionsRuntimeData @ 148affd10

void __thiscall
FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
          (FMaterialLayersFunctionsRuntimeData *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LayerStackCache).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Blends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SerializeFromMismatchedTag @ 148b04700

bool __thiscall
FMaterialLayersFunctionsRuntimeData::SerializeFromMismatchedTag
          (FMaterialLayersFunctionsRuntimeData *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  return false;
}

