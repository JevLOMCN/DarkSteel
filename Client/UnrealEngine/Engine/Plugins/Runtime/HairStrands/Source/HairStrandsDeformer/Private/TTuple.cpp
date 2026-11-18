// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 1

// TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements><TObjectPtr<UGroomAsset>_const_&,UE::Groom::Private::FGroupElements_&> @ 14e2593c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements> * __thiscall
TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements>::
TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements><TObjectPtr<UGroomAsset>_const_&,UE::Groom::Private::FGroupElements_&>
          (TTuple<TObjectPtr<UGroomAsset>,UE::Groom::Private::FGroupElements> *this,
          TObjectPtr<UGroomAsset> *param_1,FGroupElements *param_2)

{
  int iVar1;
  UGroomAsset *pUVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UGroomAsset **)this = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UGroomAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  puVar4 = &this->field_0x8;
  *(undefined8 *)puVar4 = 0;
  iVar1 = (param_2->GroupIndices).ArrayNum;
  pFVar3 = (param_2->GroupIndices).AllocatorInstance.Data;
  *(int *)&this->field_0x10 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,(ForAnyElementType *)puVar4,iVar1,(int *)&this->field_0x14);
    memcpy(*(void **)puVar4,pFVar3,(longlong)iVar1 << 2);
  }
  puVar4 = &this->field_0x18;
  *(undefined8 *)puVar4 = 0;
  iVar1 = (param_2->GroupOffsets).ArrayNum;
  pFVar3 = (param_2->GroupOffsets).AllocatorInstance.Data;
  *(int *)&this->field_0x20 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0x24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,(ForAnyElementType *)puVar4,iVar1,(int *)&this->field_0x24);
    memcpy(*(void **)puVar4,pFVar3,(longlong)iVar1 << 2);
  }
  puVar4 = &this->field_0x28;
  *(undefined8 *)puVar4 = 0;
  iVar1 = (param_2->GroupInstances).ArrayNum;
  pFVar3 = (param_2->GroupInstances).AllocatorInstance.Data;
  *(int *)&this->field_0x30 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0x34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,(ForAnyElementType *)puVar4,iVar1,(int *)&this->field_0x34);
    ConstructItems<TRefCountPtr<FHairGroupInstance_const_>,TRefCountPtr<FHairGroupInstance_const_>,int>
              (*(void **)puVar4,(TRefCountPtr<FHairGroupInstance_const_> *)pFVar3,iVar1);
  }
  return this;
}

