// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14732b680

UScriptStruct * __cdecl FStaticParameterSetRuntimeData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticParameterSetRuntimeData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticParameterSetRuntimeData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticParameterSetRuntimeData,(UObject *)pUVar1,
                         L"StaticParameterSetRuntimeData");
  }
  return Z_Registration_Info_UScriptStruct_FStaticParameterSetRuntimeData.OuterSingleton;
}

// FStaticParameterSetRuntimeData @ 147f66690

FStaticParameterSetRuntimeData * __thiscall
FStaticParameterSetRuntimeData::FStaticParameterSetRuntimeData
          (FStaticParameterSetRuntimeData *this,FStaticParameterSetRuntimeData *param_1)

{
  int *piVar1;
  FMaterialLayersFunctionsRuntimeData *pFVar2;
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  piVar1 = &(this->StaticSwitchParameters).ArrayMax;
  (this->StaticSwitchParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->StaticSwitchParameters).ArrayNum;
  pFVar5 = (param_1->StaticSwitchParameters).AllocatorInstance.Data;
  (this->StaticSwitchParameters).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->StaticSwitchParameters).AllocatorInstance.Data,pFVar5,(longlong)iVar4 * 0x28);
  }
  pFVar2 = &this->MaterialLayers;
  (pFVar2->Layers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MaterialLayers).Layers.ArrayMax;
  iVar4 = (param_1->MaterialLayers).Layers.ArrayNum;
  pFVar5 = (param_1->MaterialLayers).Layers.AllocatorInstance.Data;
  (this->MaterialLayers).Layers.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,(ForAnyElementType *)pFVar2,iVar4,piVar1);
    ConstructItems<TObjectPtr<UMaterialFunctionInterface>,TObjectPtr<UMaterialFunctionInterface>,int>
              ((pFVar2->Layers).AllocatorInstance.Data,
               (TObjectPtr<UMaterialFunctionInterface> *)pFVar5,iVar4);
  }
  pTVar3 = &(this->MaterialLayers).Blends;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MaterialLayers).Blends.ArrayMax;
  iVar4 = (param_1->MaterialLayers).Blends.ArrayNum;
  pFVar5 = (param_1->MaterialLayers).Blends.AllocatorInstance.Data;
  (this->MaterialLayers).Blends.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TObjectPtr<UMaterialFunctionInterface>,TObjectPtr<UMaterialFunctionInterface>,int>
              ((pTVar3->AllocatorInstance).Data,(TObjectPtr<UMaterialFunctionInterface> *)pFVar5,
               iVar4);
  }
  (this->MaterialLayers).LayerStackCache.Object = (param_1->MaterialLayers).LayerStackCache.Object;
  pTVar6 = (param_1->MaterialLayers).LayerStackCache.SharedReferenceCount.ReferenceController;
  (this->MaterialLayers).LayerStackCache.SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->field_0x40 = this->field_0x40 ^ (this->bHasMaterialLayers ^ param_1->bHasMaterialLayers) & 1
  ;
  return this;
}

