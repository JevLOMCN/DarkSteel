// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 109

// FCustomizableObjectInstanceDescriptor @ 14ab9f490

FCustomizableObjectInstanceDescriptor * __thiscall
FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor
          (FCustomizableObjectInstanceDescriptor *this)

{
  (this->CustomizableObject).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  (this->BoolParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolParameters).ArrayNum = 0;
  (this->BoolParameters).ArrayMax = 0;
  (this->IntParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntParameters).ArrayNum = 0;
  (this->IntParameters).ArrayMax = 0;
  (this->FloatParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatParameters).ArrayNum = 0;
  (this->FloatParameters).ArrayMax = 0;
  (this->TextureParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameters).ArrayNum = 0;
  (this->TextureParameters).ArrayMax = 0;
  (this->SkeletalMeshParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshParameters).ArrayNum = 0;
  (this->SkeletalMeshParameters).ArrayMax = 0;
  (this->MaterialParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialParameters).ArrayNum = 0;
  (this->MaterialParameters).ArrayMax = 0;
  (this->VectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameters).ArrayNum = 0;
  (this->VectorParameters).ArrayMax = 0;
  (this->ProjectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectorParameters).ArrayNum = 0;
  (this->ProjectorParameters).ArrayMax = 0;
  (this->TransformParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformParameters).ArrayNum = 0;
  (this->TransformParameters).ArrayMax = 0;
  this->State = 0;
  this->bBuildParameterRelevancy = false;
  this->bStreamingEnabled = false;
  *(undefined8 *)&this->MinLOD = 0;
  *(undefined8 *)&(this->MinLOD).field_0x8 = 0;
  *(undefined8 *)&(this->MinLOD).field_0x20 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x28 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinLOD).field_0x34 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MinLOD).field_0x40 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x48 = 0;
  *(undefined8 *)&this->QualitySettingMinLODs = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x8 = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x20 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x28 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x2c = 0x80;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x34 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x40 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x48 = 0;
  *(undefined8 *)&this->FirstRequestedLOD = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x8 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x20 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x28 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x34 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x40 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 0;
  return this;
}

// ~FCustomizableObjectInstanceDescriptor @ 14aba2360

void __thiscall
FCustomizableObjectInstanceDescriptor::~FCustomizableObjectInstanceDescriptor
          (FCustomizableObjectInstanceDescriptor *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FirstRequestedLOD).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FirstRequestedLOD);
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QualitySettingMinLODs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QualitySettingMinLODs);
  *(undefined4 *)&(this->MinLOD).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MinLOD).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MinLOD);
  DestructItems<FCustomizableObjectTransformParameterValue,int>
            ((FCustomizableObjectTransformParameterValue *)
             (this->TransformParameters).AllocatorInstance.Data,(this->TransformParameters).ArrayNum
            );
  pFVar2 = (this->TransformParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableObjectProjectorParameterValue,int>
            ((FCustomizableObjectProjectorParameterValue *)
             (this->ProjectorParameters).AllocatorInstance.Data,(this->ProjectorParameters).ArrayNum
            );
  pFVar2 = (this->ProjectorParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableObjectVectorParameterValue,int>
            ((FCustomizableObjectVectorParameterValue *)
             (this->VectorParameters).AllocatorInstance.Data,(this->VectorParameters).ArrayNum);
  pFVar2 = (this->VectorParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableObjectMaterialParameterValue,int>
            ((FCustomizableObjectMaterialParameterValue *)
             (this->MaterialParameters).AllocatorInstance.Data,(this->MaterialParameters).ArrayNum);
  pFVar2 = (this->MaterialParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>
            ((FCustomizableObjectSkeletalMeshParameterValue *)
             (this->SkeletalMeshParameters).AllocatorInstance.Data,
             (this->SkeletalMeshParameters).ArrayNum);
  pFVar2 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableObjectTextureParameterValue,int>
            ((FCustomizableObjectTextureParameterValue *)
             (this->TextureParameters).AllocatorInstance.Data,(this->TextureParameters).ArrayNum);
  pFVar2 = (this->TextureParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableObjectFloatParameterValue,int>
            ((FCustomizableObjectFloatParameterValue *)
             (this->FloatParameters).AllocatorInstance.Data,(this->FloatParameters).ArrayNum);
  pFVar2 = (this->FloatParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableObjectIntParameterValue,int>
            ((FCustomizableObjectIntParameterValue *)(this->IntParameters).AllocatorInstance.Data,
             (this->IntParameters).ArrayNum);
  pFVar2 = (this->IntParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableObjectBoolParameterValue,int>
            ((FCustomizableObjectBoolParameterValue *)(this->BoolParameters).AllocatorInstance.Data,
             (this->BoolParameters).ArrayNum);
  pFVar2 = (this->BoolParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14abc0800

FCustomizableObjectInstanceDescriptor * __thiscall
FCustomizableObjectInstanceDescriptor::operator=
          (FCustomizableObjectInstanceDescriptor *this,
          FCustomizableObjectInstanceDescriptor *param_1)

{
  TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FCustomizableObjectMaterialParameterValue,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FCustomizableObjectMaterialParameterValue,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_> *pTVar18;
  UCustomizableObject *pUVar19;
  FScriptContainerElement *pFVar20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar19 = (param_1->CustomizableObject).field0_0x0.DebugPtr,
     pUVar19 != (UCustomizableObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  pTVar1 = &param_1->BoolParameters;
  pTVar2 = &this->BoolParameters;
  (this->CustomizableObject).field0_0x0 = (param_1->CustomizableObject).field0_0x0;
  if (pTVar2 != pTVar1) {
    DestructItems<FCustomizableObjectBoolParameterValue,int>
              ((FCustomizableObjectBoolParameterValue *)(pTVar2->AllocatorInstance).Data,
               (this->BoolParameters).ArrayNum);
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BoolParameters).ArrayNum = (param_1->BoolParameters).ArrayNum;
    (this->BoolParameters).ArrayMax = (param_1->BoolParameters).ArrayMax;
    (param_1->BoolParameters).ArrayNum = 0;
    (param_1->BoolParameters).ArrayMax = 0;
  }
  pTVar3 = &param_1->IntParameters;
  pTVar4 = &this->IntParameters;
  if (pTVar4 != pTVar3) {
    DestructItems<FCustomizableObjectIntParameterValue,int>
              ((FCustomizableObjectIntParameterValue *)(pTVar4->AllocatorInstance).Data,
               (this->IntParameters).ArrayNum);
    pFVar20 = (pTVar4->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IntParameters).ArrayNum = (param_1->IntParameters).ArrayNum;
    (this->IntParameters).ArrayMax = (param_1->IntParameters).ArrayMax;
    (param_1->IntParameters).ArrayNum = 0;
    (param_1->IntParameters).ArrayMax = 0;
  }
  pTVar5 = &param_1->FloatParameters;
  pTVar6 = &this->FloatParameters;
  if (pTVar6 != pTVar5) {
    DestructItems<FCustomizableObjectFloatParameterValue,int>
              ((FCustomizableObjectFloatParameterValue *)(pTVar6->AllocatorInstance).Data,
               (this->FloatParameters).ArrayNum);
    pFVar20 = (pTVar6->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FloatParameters).ArrayNum = (param_1->FloatParameters).ArrayNum;
    (this->FloatParameters).ArrayMax = (param_1->FloatParameters).ArrayMax;
    (param_1->FloatParameters).ArrayNum = 0;
    (param_1->FloatParameters).ArrayMax = 0;
  }
  pTVar7 = &param_1->TextureParameters;
  pTVar8 = &this->TextureParameters;
  if (pTVar8 != pTVar7) {
    DestructItems<FCustomizableObjectTextureParameterValue,int>
              ((FCustomizableObjectTextureParameterValue *)(pTVar8->AllocatorInstance).Data,
               (this->TextureParameters).ArrayNum);
    pFVar20 = (pTVar8->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TextureParameters).ArrayNum = (param_1->TextureParameters).ArrayNum;
    (this->TextureParameters).ArrayMax = (param_1->TextureParameters).ArrayMax;
    (param_1->TextureParameters).ArrayNum = 0;
    (param_1->TextureParameters).ArrayMax = 0;
  }
  pTVar9 = &param_1->SkeletalMeshParameters;
  pTVar10 = &this->SkeletalMeshParameters;
  if (pTVar10 != pTVar9) {
    DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>
              ((FCustomizableObjectSkeletalMeshParameterValue *)(pTVar10->AllocatorInstance).Data,
               (this->SkeletalMeshParameters).ArrayNum);
    pFVar20 = (pTVar10->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SkeletalMeshParameters).ArrayNum = (param_1->SkeletalMeshParameters).ArrayNum;
    (this->SkeletalMeshParameters).ArrayMax = (param_1->SkeletalMeshParameters).ArrayMax;
    (param_1->SkeletalMeshParameters).ArrayNum = 0;
    (param_1->SkeletalMeshParameters).ArrayMax = 0;
  }
  pTVar11 = &param_1->MaterialParameters;
  pTVar12 = &this->MaterialParameters;
  if (pTVar12 != pTVar11) {
    DestructItems<FCustomizableObjectMaterialParameterValue,int>
              ((FCustomizableObjectMaterialParameterValue *)(pTVar12->AllocatorInstance).Data,
               (this->MaterialParameters).ArrayNum);
    pFVar20 = (pTVar12->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MaterialParameters).ArrayNum = (param_1->MaterialParameters).ArrayNum;
    (this->MaterialParameters).ArrayMax = (param_1->MaterialParameters).ArrayMax;
    (param_1->MaterialParameters).ArrayNum = 0;
    (param_1->MaterialParameters).ArrayMax = 0;
  }
  pTVar13 = &param_1->VectorParameters;
  pTVar14 = &this->VectorParameters;
  if (pTVar14 != pTVar13) {
    DestructItems<FCustomizableObjectVectorParameterValue,int>
              ((FCustomizableObjectVectorParameterValue *)(pTVar14->AllocatorInstance).Data,
               (this->VectorParameters).ArrayNum);
    pFVar20 = (pTVar14->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VectorParameters).ArrayNum = (param_1->VectorParameters).ArrayNum;
    (this->VectorParameters).ArrayMax = (param_1->VectorParameters).ArrayMax;
    (param_1->VectorParameters).ArrayNum = 0;
    (param_1->VectorParameters).ArrayMax = 0;
  }
  pTVar15 = &param_1->ProjectorParameters;
  pTVar16 = &this->ProjectorParameters;
  if (pTVar16 != pTVar15) {
    DestructItems<FCustomizableObjectProjectorParameterValue,int>
              ((FCustomizableObjectProjectorParameterValue *)(pTVar16->AllocatorInstance).Data,
               (this->ProjectorParameters).ArrayNum);
    pFVar20 = (pTVar16->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar16->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ProjectorParameters).ArrayNum = (param_1->ProjectorParameters).ArrayNum;
    (this->ProjectorParameters).ArrayMax = (param_1->ProjectorParameters).ArrayMax;
    (param_1->ProjectorParameters).ArrayNum = 0;
    (param_1->ProjectorParameters).ArrayMax = 0;
  }
  pTVar17 = &param_1->TransformParameters;
  pTVar18 = &this->TransformParameters;
  if (pTVar18 != pTVar17) {
    DestructItems<FCustomizableObjectTransformParameterValue,int>
              ((FCustomizableObjectTransformParameterValue *)(pTVar18->AllocatorInstance).Data,
               (this->TransformParameters).ArrayNum);
    pFVar20 = (pTVar18->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar18->AllocatorInstance).Data = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TransformParameters).ArrayNum = (param_1->TransformParameters).ArrayNum;
    (this->TransformParameters).ArrayMax = (param_1->TransformParameters).ArrayMax;
    (param_1->TransformParameters).ArrayNum = 0;
    (param_1->TransformParameters).ArrayMax = 0;
  }
  this->State = param_1->State;
  this->bBuildParameterRelevancy = param_1->bBuildParameterRelevancy;
  this->bStreamingEnabled = param_1->bStreamingEnabled;
  if (&this->MinLOD != &param_1->MinLOD) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)&this->MinLOD,
               (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)&param_1->MinLOD);
  }
  if (&this->QualitySettingMinLODs != &param_1->QualitySettingMinLODs) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)&this->QualitySettingMinLODs,
               (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)&param_1->QualitySettingMinLODs);
  }
  if (&this->FirstRequestedLOD != &param_1->FirstRequestedLOD) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)&this->FirstRequestedLOD,
               (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)&param_1->FirstRequestedLOD);
  }
  return this;
}

// operator= @ 14abc0b20

FCustomizableObjectInstanceDescriptor * __thiscall
FCustomizableObjectInstanceDescriptor::operator=
          (FCustomizableObjectInstanceDescriptor *this,
          FCustomizableObjectInstanceDescriptor *param_1)

{
  TArray<FCustomizableObjectMaterialParameterValue,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UCustomizableObject *pUVar4;
  FCustomizableObjectMaterialParameterValue *pFVar5;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar4 = (param_1->CustomizableObject).field0_0x0.DebugPtr,
     pUVar4 != (UCustomizableObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CustomizableObject).field0_0x0 = (param_1->CustomizableObject).field0_0x0;
  TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoolParameters,&param_1->BoolParameters);
  TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&this->IntParameters,&param_1->IntParameters);
  TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&this->FloatParameters,&param_1->FloatParameters);
  TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&this->TextureParameters,&param_1->TextureParameters);
  TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&this->SkeletalMeshParameters,&param_1->SkeletalMeshParameters);
  pTVar1 = &this->MaterialParameters;
  if (pTVar1 != &param_1->MaterialParameters) {
    DestructItems<FCustomizableObjectMaterialParameterValue,int>
              ((FCustomizableObjectMaterialParameterValue *)(pTVar1->AllocatorInstance).Data,
               (this->MaterialParameters).ArrayNum);
    iVar3 = (param_1->MaterialParameters).ArrayNum;
    piVar2 = &(this->MaterialParameters).ArrayMax;
    pFVar5 = (FCustomizableObjectMaterialParameterValue *)
             (param_1->MaterialParameters).AllocatorInstance.Data;
    (this->MaterialParameters).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FCustomizableObjectMaterialParameterValue,FCustomizableObjectMaterialParameterValue,int>
                ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
    }
  }
  TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&this->VectorParameters,&param_1->VectorParameters);
  TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&this->ProjectorParameters,&param_1->ProjectorParameters);
  TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_>::operator=
            (&this->TransformParameters,&param_1->TransformParameters);
  this->State = param_1->State;
  this->bBuildParameterRelevancy = param_1->bBuildParameterRelevancy;
  this->bStreamingEnabled = param_1->bStreamingEnabled;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->MinLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&param_1->MinLOD);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->QualitySettingMinLODs,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&param_1->QualitySettingMinLODs);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->FirstRequestedLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&param_1->FirstRequestedLOD);
  return this;
}

// StaticStruct @ 14ac038d0

UScriptStruct * __cdecl FCustomizableObjectInstanceDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor,
                         (UObject *)pUVar1,L"CustomizableObjectInstanceDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.OuterSingleton;
}

// FCustomizableObjectInstanceDescriptor @ 14ac08e50

FCustomizableObjectInstanceDescriptor * __thiscall
FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor
          (FCustomizableObjectInstanceDescriptor *this,UCustomizableObject *param_1)

{
  (this->CustomizableObject).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  (this->BoolParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolParameters).ArrayNum = 0;
  (this->BoolParameters).ArrayMax = 0;
  (this->IntParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntParameters).ArrayNum = 0;
  (this->IntParameters).ArrayMax = 0;
  (this->FloatParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatParameters).ArrayNum = 0;
  (this->FloatParameters).ArrayMax = 0;
  (this->TextureParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameters).ArrayNum = 0;
  (this->TextureParameters).ArrayMax = 0;
  (this->SkeletalMeshParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshParameters).ArrayNum = 0;
  (this->SkeletalMeshParameters).ArrayMax = 0;
  (this->MaterialParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialParameters).ArrayNum = 0;
  (this->MaterialParameters).ArrayMax = 0;
  (this->VectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameters).ArrayNum = 0;
  (this->VectorParameters).ArrayMax = 0;
  (this->ProjectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectorParameters).ArrayNum = 0;
  (this->ProjectorParameters).ArrayMax = 0;
  (this->TransformParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformParameters).ArrayNum = 0;
  (this->TransformParameters).ArrayMax = 0;
  this->State = 0;
  this->bBuildParameterRelevancy = false;
  this->bStreamingEnabled = false;
  *(undefined8 *)&this->MinLOD = 0;
  *(undefined8 *)&(this->MinLOD).field_0x8 = 0;
  *(undefined8 *)&(this->MinLOD).field_0x20 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x28 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinLOD).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinLOD).field_0x34 = 0;
  *(undefined8 *)&(this->MinLOD).field_0x40 = 0;
  *(undefined4 *)&(this->MinLOD).field_0x48 = 0;
  *(undefined8 *)&this->QualitySettingMinLODs = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x8 = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x20 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x28 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x2c = 0x80;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x34 = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x40 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x48 = 0;
  *(undefined8 *)&this->FirstRequestedLOD = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x8 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x20 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x28 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x34 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x40 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCustomizableObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CustomizableObject).field0_0x0.DebugPtr = param_1;
  ReloadParameters(this);
  return this;
}

// operator() @ 14ac0e210

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l178::<lambda_10>::operator()
          (void *this,FCustomizableObjectSkeletalMeshParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// operator() @ 14ac0e2b0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l201::<lambda_11>::operator()
          (void *this,FCustomizableObjectMaterialParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// operator() @ 14ac0fe40

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l58::<lambda_1>::operator()
          (void *this,FCustomizableObjectBoolParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// operator() @ 14ac10210

void __thiscall
`FCustomizableObjectInstanceDescriptor::GetParameters'::__l77::<lambda_1>::operator()
          (void *this,FCustomizableObjectProjector *param_1,FRangeIndex *param_2)

{
  float fVar1;
  ECustomizableObjectProjectorType EVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_4c;
  TVector<float>_u_0 local_40 [4];
  
  EVar2 = param_1->ProjectionType;
  if (EVar2 != Planar) {
    if (EVar2 == Cylindrical) {
      plVar3 = *(longlong **)this;
      fVar1 = (param_1->Scale).field0_0x0._s_0.Z;
      fVar6 = (float)((uint)((param_1->Scale).field0_0x0._s_0.X * __real_3f000000) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff);
      if ((*plVar3 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_58._s_0.X = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
      local_4c._s_0.X =
           (float)((uint)(param_1->Up).field0_0x0._s_0.X ^ __xmm_80000000800000008000000080000000);
      local_4c._s_0.Y =
           (float)((uint)(param_1->Up).field0_0x0._s_0.Y ^ __xmm_80000000800000008000000080000000);
      local_4c._s_0.Z =
           (float)((uint)(param_1->Up).field0_0x0._s_0.Z ^ __xmm_80000000800000008000000080000000);
      local_40[0]._0_4_ =
           (uint)(param_1->Direction).field0_0x0._s_0.X ^ __xmm_80000000800000008000000080000000;
      local_40[0]._4_4_ =
           (uint)(param_1->Direction).field0_0x0._s_0.Y ^ __xmm_80000000800000008000000080000000;
      local_40[0]._8_4_ =
           (uint)(param_1->Direction).field0_0x0._s_0.Z ^ __xmm_80000000800000008000000080000000;
      local_58._s_0.Y = fVar6;
      local_58._s_0.Z = fVar6;
      UE::Mutable::Private::FParameters::SetProjectorValue
                ((FParameters *)*plVar3,*(int *)((longlong)this + 8),&param_1->Position,
                 (TVector<float> *)&local_40[0]._s_0,(TVector<float> *)&local_4c._s_0,
                 (TVector<float> *)&local_58._s_0,param_1->Angle,param_2);
      return;
    }
    if (EVar2 != Wrapping) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                         ,0x2ed,L"");
      if (!bVar5) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)this;
  if ((*plVar3 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::Mutable::Private::FParameters::SetProjectorValue
            ((FParameters *)*plVar3,*(int *)((longlong)this + 8),&param_1->Position,
             &param_1->Direction,&param_1->Up,&param_1->Scale,param_1->Angle,param_2);
  return;
}

// operator() @ 14ac11810

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l64::<lambda_2>::operator()
          (void *this,FCustomizableObjectIntParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// operator() @ 14ac11c10

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l67::<lambda_3>::operator()
          (void *this,FString *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < **(int **)this) {
    do {
      plVar2 = *(longlong **)((longlong)this + 8);
      if ((*plVar2 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar7 = UE::Mutable::Private::FParameters::GetIntPossibleValueName
                         ((FParameters *)*plVar2,**(int **)((longlong)this + 0x10),iVar8);
      iVar6 = (param_1->Data).ArrayNum;
      iVar1 = (pFVar7->Data).ArrayNum;
      if (iVar6 == iVar1) {
        if (iVar6 < 2) {
          return true;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
        bVar4 = iVar6 == 0;
      }
      else {
        bVar4 = iVar1 + iVar6 == 1;
      }
      if (bVar4) {
        return true;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < **(int **)this);
  }
  return false;
}

// operator() @ 14ac11cd0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l99::<lambda_4>::operator()
          (void *this,FCustomizableObjectFloatParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// operator() @ 14ac11d70

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l120::<lambda_5>::operator()
          (void *this,FCustomizableObjectVectorParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// operator() @ 14ac11e10

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l126::<lambda_6>::operator()
          (void *this,FCustomizableObjectTransformParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// operator() @ 14ac11eb0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'[::E]::<lambda_7>::operator()
          (void *this,FCustomizableObjectProjectorParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// operator() @ 14ac11f50

void __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l146::<lambda_8>::operator()
          (void *this,FCustomizableObjectProjector *param_1,
          TSharedPtr<UE::Mutable::Private::FRangeIndex,1> *param_2)

{
  TVector<float> *pTVar1;
  TVector<float> *pTVar2;
  TVector<float> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  ECustomizableObjectProjectorType EVar8;
  float fVar9;
  float fVar10;
  EProjectorType local_res8 [2];
  
  plVar4 = *(longlong **)this;
  if (*plVar4 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = &param_1->Scale;
  pTVar2 = &param_1->Up;
  pTVar3 = &param_1->Direction;
  UE::Mutable::Private::FParameters::GetProjectorValue
            ((FParameters *)*plVar4,*(int *)((longlong)this + 8),local_res8,&param_1->Position,
             pTVar3,pTVar2,pTVar1,&param_1->Angle,param_2->Object);
  EVar8 = ProjectorUtils::GetEquivalentProjectorType(local_res8[0]);
  param_1->ProjectionType = EVar8;
  uVar6 = __xmm_80000000800000008000000080000000;
  if (EVar8 == Cylindrical) {
    fVar9 = (param_1->Direction).field0_0x0._s_0.Z;
    fVar10 = (float)((uint)(param_1->Direction).field0_0x0._s_0.Y ^
                    __xmm_80000000800000008000000080000000);
    (pTVar3->field0_0x0)._s_0.X =
         (float)((uint)(pTVar3->field0_0x0)._s_0.X ^ __xmm_80000000800000008000000080000000);
    (param_1->Direction).field0_0x0._s_0.Y = fVar10;
    (param_1->Direction).field0_0x0._s_0.Z = (float)((uint)fVar9 ^ uVar6);
    fVar9 = (param_1->Up).field0_0x0._s_0.Z;
    fVar10 = (param_1->Up).field0_0x0._s_0.Y;
    (pTVar2->field0_0x0)._s_0.X = (float)((uint)(pTVar2->field0_0x0)._s_0.X ^ uVar6);
    (param_1->Up).field0_0x0._s_0.Y = (float)((uint)fVar10 ^ uVar6);
    (param_1->Up).field0_0x0._s_0.Z = (float)((uint)fVar9 ^ uVar6);
    (param_1->Scale).field0_0x0._s_0.Z = (float)((uint)(pTVar1->field0_0x0)._s_0.X ^ uVar6);
    fVar9 = (param_1->Scale).field0_0x0._s_0.Y;
    fVar9 = fVar9 + fVar9;
    (param_1->Scale).field0_0x0._s_0.Y = fVar9;
    (pTVar1->field0_0x0)._s_0.X = fVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14ac120a0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l155::<lambda_9>::operator()
          (void *this,FCustomizableObjectTextureParameterValue *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->ParameterName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)**(undefined8 **)this);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    puVar2 = *(uint **)((longlong)this + 8);
    if ((((puVar2[3] == 0 && puVar2[2] == 0) && puVar2[1] == 0) && *puVar2 == 0) ||
       (((puVar2[3] != (param_1->Id).D || puVar2[2] != (param_1->Id).C) ||
        puVar2[1] != (param_1->Id).B) || *puVar2 != (param_1->Id).A)) {
      return false;
    }
  }
  return true;
}

// AddValueToFloatRange @ 14ac14d10

int __thiscall
FCustomizableObjectInstanceDescriptor::AddValueToFloatRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  uint uVar6;
  undefined4 local_18 [4];
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObject *)0x0) {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar4 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Float);
    if (uVar4 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar4 < (this->FloatParameters).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      local_18[0] = 0x3f000000;
      pFVar1 = (this->FloatParameters).AllocatorInstance.Data;
      if ((*(undefined4 **)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x28) <= local_18) &&
         (local_18 <
          *(undefined4 **)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x28) +
          *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x34))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      iVar5 = *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30);
      if (iVar5 == *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x34)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x28),
                           (int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x34));
      }
      *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) = iVar5 + 1;
      *(undefined4 *)
       (*(longlong *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x28) + (longlong)iVar5 * 4) =
           local_18[0];
      return iVar5;
    }
  }
  return -1;
}

// AddValueToIntRange @ 14ac14e60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCustomizableObjectInstanceDescriptor::AddValueToIntRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  int *piVar1;
  UCustomizableObject *this_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  ForAnyElementType _Src_00;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *pUVar6;
  FString *pFVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar6 = UCustomizableObject::GetPrivate(this_00);
    uVar4 = UCustomizableObjectPrivate::FindParameterTyped(pUVar6,param_1,Int);
    if (uVar4 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar4 < (this->IntParameters).ArrayNum) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      pFVar11 = (this->IntParameters).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x40;
      pUVar6 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      iVar5 = UCustomizableObjectPrivate::FindParameter(pUVar6,(FString *)pFVar11);
      pUVar6 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      pFVar7 = UCustomizableObjectPrivate::GetIntParameterAvailableOption(pUVar6,iVar5,0);
      local_18.Data = (FScriptContainerElement *)0x0;
      local_10 = (pFVar7->Data).ArrayNum;
      lVar9 = (longlong)local_10;
      _Src = (pFVar7->Data).AllocatorInstance.Data;
      if (local_10 == 0) {
        local_c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_10,0,&local_18,local_10,&local_c);
        memcpy(local_18.Data,_Src,lVar9 * 2);
      }
      if ((*(ForAnyElementType **)&pFVar11[0x30].field_0x0 <= &local_18) &&
         (&local_18 <
          *(ForAnyElementType **)&pFVar11[0x30].field_0x0 + (longlong)*(int *)(pFVar11 + 0x3c) * 2))
      {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      iVar5 = *(int *)(pFVar11 + 0x38);
      if (iVar5 == *(int *)(pFVar11 + 0x3c)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)(pFVar11 + 0x30),(int *)(pFVar11 + 0x3c));
      }
      _Src_00.Data = local_18.Data;
      lVar9 = *(longlong *)&pFVar11[0x30].field_0x0;
      *(int *)(pFVar11 + 0x38) = iVar5 + 1;
      pFVar10 = (ForAnyElementType *)(lVar9 + (longlong)iVar5 * 0x10);
      pFVar10->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
      lVar9 = (longlong)local_10;
      *(int *)&pFVar10[1].Data = local_10;
      if (local_10 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_10,0,pFVar10,local_10,piVar1);
        memcpy(pFVar10->Data,_Src_00.Data,lVar9 * 2);
      }
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
      return iVar5;
    }
  }
  return -1;
}

// AddValueToProjectorRange @ 14ac150e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCustomizableObjectInstanceDescriptor::AddValueToProjectorRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  undefined8 *puVar1;
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UCustomizableObjectPrivate *this_01;
  uint uVar8;
  longlong lVar9;
  TVector<float>_u_0 local_48 [2];
  TVector<float>_u_0 aTStack_30 [3];
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar6 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Projector);
    if (uVar6 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar6 < (this->ProjectorParameters).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      pFVar2 = (this->ProjectorParameters).AllocatorInstance.Data;
      UCustomizableObject::GetProjectorParameterDefaultValue
                ((this->CustomizableObject).field0_0x0.DebugPtr,
                 (FCustomizableObjectProjector *)local_48,param_1);
      if (((*(undefined1 **)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 0x58) <= local_48) &&
          (local_48 <
           *(undefined1 **)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 0x58) +
           (longlong)*(int *)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 100) * 0x38)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 0x60);
      if (iVar7 == *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 100)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x438,(ForAnyElementType *)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 0x58),
                           (int *)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 100));
      }
      *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 0x60) = iVar7 + 1;
      lVar9 = (longlong)iVar7 * 0x38;
      lVar3 = *(longlong *)(pFVar2 + (longlong)(int)uVar6 * 0x68 + 0x58);
      *(undefined8 *)(lVar9 + lVar3) = local_48[0]._0_8_;
      ((undefined8 *)(lVar9 + lVar3))[1] = local_48._8_8_;
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar3);
      *puVar1 = local_48[1]._4_8_;
      puVar1[1] = aTStack_30[0]._0_8_;
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar3);
      *puVar1 = aTStack_30._8_8_;
      puVar1[1] = aTStack_30[1]._4_8_;
      *(undefined8 *)(lVar9 + 0x30 + lVar3) = aTStack_30[2]._0_8_;
      return iVar7;
    }
  }
  return -1;
}

// AddValueToTextureRange @ 14ac15290

int __thiscall
FCustomizableObjectInstanceDescriptor::AddValueToTextureRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UCustomizableObjectPrivate *this_01;
  uint uVar7;
  UObject *local_18 [2];
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObject *)0x0) {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar5 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Texture);
    if (uVar5 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar5 < (this->TextureParameters).ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      local_18[0] = (UObject *)0x0;
      pFVar1 = (this->TextureParameters).AllocatorInstance.Data;
      if ((*(UObject ***)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x28) <= local_18) &&
         (local_18 <
          *(UObject ***)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x28) +
          *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x34))) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      iVar6 = *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30);
      if (iVar6 == *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x28),
                           (int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x34));
      }
      lVar2 = *(longlong *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x28);
      *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30) = iVar6 + 1;
      *(UObject **)(lVar2 + (longlong)iVar6 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_18[0]);
      }
      return iVar6;
    }
  }
  return -1;
}

// CreateLayer @ 14ac17980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::CreateLayer
          (FCustomizableObjectInstanceDescriptor *this,FName *param_1,int param_2)

{
  UCustomizableObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UCustomizableObjectPrivate *pUVar7;
  FString *pFVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  FCustomizableObjectInstanceDescriptor *local_res20;
  undefined4 local_b8 [2];
  UObject *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FName local_58;
  FString local_50;
  FString local_40 [2];
  
  ::FName::ToString(param_1,&local_88);
  bVar4 = IsMultilayerProjector(this,&local_88);
  if (!bVar4) goto LAB_14ac17ebb;
  iVar5 = NumProjectorLayers(this,param_1);
  ::FString::ConcatFF(&local_50,&local_88,&NUM_LAYERS_PARAMETER_POSTFIX);
  SetFloatParameterSelectedOption(this,&local_50,(float)(iVar5 + 1),-1);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  AddValueToProjectorRange(this,&local_88);
  ::FString::ConcatFF(&local_98,&local_88,&IMAGE_PARAMETER_POSTFIX);
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObject *)0x0) {
    pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
    uVar6 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,&local_98,Texture);
    if (uVar6 != 0xffffffff) {
      uVar9 = 0;
      if ((int)uVar6 < (this->TextureParameters).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_b0 = (UObject *)0x0;
      pFVar2 = (this->TextureParameters).AllocatorInstance.Data;
      if (((*(UObject ***)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x28) <= &local_b0) &&
          (&local_b0 <
           *(UObject ***)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x28) +
           *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x34))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x30);
      if (iVar5 == *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x34)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x28),
                           (int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x34));
      }
      *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x30) = iVar5 + 1;
      *(UObject **)
       (*(longlong *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x28) + (longlong)iVar5 * 8) = local_b0
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_b0);
      }
    }
  }
  iVar5 = UCustomizableObject::GetEnumParameterDefaultValue
                    ((this->CustomizableObject).field0_0x0.DebugPtr,&local_98);
  pFVar8 = UCustomizableObject::GetEnumParameterValue
                     ((this->CustomizableObject).field0_0x0.DebugPtr,&local_98,iVar5);
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  lVar10 = (longlong)local_a8.Data.ArrayNum;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (local_a8.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_a8.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,pFVar2,lVar10 * 2);
  }
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    bVar4 = UCustomizableObject::IsCompiled(pUVar1);
    if ((bVar4) ||
       (local_res20 = this,
       bVar4 = `FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_res20), bVar4)) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 != (UCustomizableObject *)0x0) {
        pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
        iVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,&local_98,Int);
        if (iVar5 != -1) {
          SetIntParameterSelectedOption(this,iVar5,&local_a8,param_2);
          goto LAB_14ac17d3e;
        }
      }
      if ((byte)LogMutable._0_1_ < 3) goto LAB_14ac17d3e;
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        local_58 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_58,&local_78);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      local_40[0].Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
    else {
      ::FString::PrintfImpl(local_40,L"Calling function: %hs.  %s");
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar7,local_40);
    }
    if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
    }
  }
LAB_14ac17d3e:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_68,&local_88,&OPACITY_PARAMETER_POSTFIX);
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObject *)0x0) {
    pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
    uVar6 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,&local_68,Float);
    if (uVar6 != 0xffffffff) {
      uVar9 = 0;
      if ((int)uVar6 < (this->FloatParameters).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_b8[0] = 0x3f000000;
      pFVar2 = (this->FloatParameters).AllocatorInstance.Data;
      if (((*(undefined4 **)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x28) <= local_b8) &&
          (local_b8 <
           *(undefined4 **)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x28) +
           *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x34))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x30);
      if (iVar5 == *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x34)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x28),
                           (int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x34));
      }
      *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x30) = iVar5 + 1;
      *(undefined4 *)
       (*(longlong *)(pFVar2 + (longlong)(int)uVar6 * 0x38 + 0x28) + (longlong)iVar5 * 4) =
           local_b8[0];
    }
  }
  fVar11 = UCustomizableObject::GetFloatParameterDefaultValue
                     ((this->CustomizableObject).field0_0x0.DebugPtr,&local_68);
  SetFloatParameterSelectedOption(this,&local_68,fVar11,param_2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14ac17ebb:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// FindTypedParameterIndex @ 14ac1ae10

int __thiscall
FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,
          EMutableParameterType param_2)

{
  UCustomizableObject *this_00;
  int iVar1;
  UCustomizableObjectPrivate *this_01;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObject *)0x0) {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    iVar1 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,param_2);
    return iVar1;
  }
  return -1;
}

// GetBoolParameterSelectedOption @ 14ac1d620

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCustomizableObjectInstanceDescriptor::GetBoolParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UCustomizableObjectPrivate *pUVar6;
  uint uVar7;
  FName local_res8;
  FString local_18;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar6 = UCustomizableObject::GetPrivate(pUVar1);
    UCustomizableObjectPrivate::FindParameter(pUVar6,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 != (UCustomizableObject *)0x0) {
      pUVar6 = UCustomizableObject::GetPrivate(pUVar1);
      uVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar6,param_1,Bool);
      if (uVar5 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar5 < (this->BoolParameters).ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        return (bool)(this->BoolParameters).AllocatorInstance.Data
                     [(longlong)(int)uVar5 * 0x28 + 0x10];
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res8 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res8,&local_18);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// GetBuildParameterRelevancy @ 14ac1d7b0

bool __thiscall
FCustomizableObjectInstanceDescriptor::GetBuildParameterRelevancy
          (FCustomizableObjectInstanceDescriptor *this)

{
  return this->bBuildParameterRelevancy;
}

// GetColorParameterSelectedOption @ 14ac1d7f0

/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __thiscall
FCustomizableObjectInstanceDescriptor::GetColorParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FLinearColor *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UCustomizableObject *pUVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  UCustomizableObjectPrivate *pUVar8;
  FLinearColor *pFVar9;
  FName local_res8;
  FString local_48;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar2 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar8 = UCustomizableObject::GetPrivate(pUVar2);
    UCustomizableObjectPrivate::FindParameter(pUVar8,param_1);
    pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar2 != (UCustomizableObject *)0x0) {
      pUVar8 = UCustomizableObject::GetPrivate(pUVar2);
      iVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar8,param_1,Color);
      if (iVar7 != -1) {
        if ((iVar7 < 0) || ((this->VectorParameters).ArrayNum <= iVar7)) {
          local_28 = 0.0;
          fStack_24 = 0.0;
          fStack_20 = 0.0;
          fStack_1c = 0.0;
          local_38 = local_28;
          fStack_34 = fStack_24;
          fStack_30 = fStack_20;
          fStack_2c = fStack_1c;
        }
        else {
          if ((iVar7 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FLinearColor *)(*pcVar3)();
            return pFVar9;
          }
          pFVar1 = (this->VectorParameters).AllocatorInstance.Data + (longlong)iVar7 * 0x30 + 0x10;
          uVar4 = *(undefined8 *)pFVar1;
          uVar5 = *(undefined8 *)(pFVar1 + 8);
          local_38 = (float)uVar4;
          fStack_34 = (float)((ulonglong)uVar4 >> 0x20);
          fStack_30 = (float)uVar5;
          fStack_2c = (float)((ulonglong)uVar5 >> 0x20);
        }
        goto LAB_14ac1d992;
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_48);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  local_38 = FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE.field0_0x0._0_4_;
  fStack_34 = FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE.field0_0x0._4_4_;
  fStack_30 = FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE.field0_0x0._8_4_;
  fStack_2c = FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE.field0_0x0._12_4_;
LAB_14ac1d992:
  (__return_storage_ptr__->field0_0x0)._s_0.R = local_38;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fStack_34;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fStack_30;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fStack_2c;
  return __return_storage_ptr__;
}

// GetCurrentState @ 14ac1dc10

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FCustomizableObjectInstanceDescriptor::GetCurrentState
          (FCustomizableObjectInstanceDescriptor *this,FString *__return_storage_ptr__)

{
  UCustomizableObject *this_00;
  UCustomizableObjectPrivate *this_01;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this_01 = UCustomizableObject::GetPrivate(this_00);
  UCustomizableObjectPrivate::GetStateName(this_01,__return_storage_ptr__,this->State);
  return __return_storage_ptr__;
}

// GetCustomizableObject @ 14ac1dc90

UCustomizableObject * __thiscall
FCustomizableObjectInstanceDescriptor::GetCustomizableObject
          (FCustomizableObjectInstanceDescriptor *this)

{
  return (this->CustomizableObject).field0_0x0.DebugPtr;
}

// GetFirstRequestedLOD @ 14ac1de30

TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_> *
__thiscall
FCustomizableObjectInstanceDescriptor::GetFirstRequestedLOD
          (FCustomizableObjectInstanceDescriptor *this)

{
  return &this->FirstRequestedLOD;
}

// GetFloatParameterSelectedOption @ 14ac1de50

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FCustomizableObjectInstanceDescriptor::GetFloatParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UCustomizableObjectPrivate *pUVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  int local_res8 [2];
  FName local_res20;
  FString local_38;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar7,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
      uVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,param_1,Float);
    }
    if (((-1 < local_res8[0]) && (-1 < (int)uVar5)) &&
       ((int)uVar5 < (this->FloatParameters).ArrayNum)) {
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar4 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar7,local_res8);
      if ((!bVar4) || (param_2 == -1)) {
        uVar6 = 0;
        if ((int)uVar5 < (this->FloatParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar10 = (float)(*pcVar3)();
          return fVar10;
        }
        return *(float *)((this->FloatParameters).AllocatorInstance.Data +
                         (longlong)(int)uVar5 * 0x38 + 0x10);
      }
      uVar8 = 0;
      uVar6 = uVar8;
      if ((int)uVar5 < (this->FloatParameters).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      if ((-1 < param_2) &&
         (lVar9 = (longlong)(int)uVar5 * 0x38,
         param_2 < *(int *)((this->FloatParameters).AllocatorInstance.Data + lVar9 + 0x30))) {
        uVar6 = uVar8;
        if ((int)uVar5 < (this->FloatParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar10 = (float)(*pcVar3)();
          return fVar10;
        }
        pFVar2 = (this->FloatParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar2 + lVar9 + 0x30)) {
          uVar8 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar10 = (float)(*pcVar3)();
          return fVar10;
        }
        return *(float *)(*(longlong *)(pFVar2 + lVar9 + 0x28) + (longlong)param_2 * 4);
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res20 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res20,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return 0.0;
}

// GetFloatValueRange @ 14ac1e150

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCustomizableObjectInstanceDescriptor::GetFloatValueRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return -1;
    }
  }
  else {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar3 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Float);
    if (-1 < (int)uVar3) {
      uVar4 = 0;
      if ((int)uVar3 < (this->FloatParameters).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      return *(int *)((this->FloatParameters).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x38 + 0x30);
    }
  }
  return -1;
}

// GetIntParameterSelectedOption @ 14ac1e810

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FCustomizableObjectInstanceDescriptor::GetIntParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UCustomizableObjectPrivate *pUVar7;
  FString *pFVar8;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  FName local_res20;
  FString local_38;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar7,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
      uVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,param_1,Int);
    }
    if (((-1 < local_res8[0]) && (-1 < (int)uVar5)) && ((int)uVar5 < (this->IntParameters).ArrayNum)
       ) {
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar4 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar7,local_res8);
      if ((!bVar4) || (param_2 == -1)) {
        uVar6 = 0;
        if ((int)uVar5 < (this->IntParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar3)();
          return pFVar8;
        }
        return (FString *)
               ((this->IntParameters).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x40 + 0x10);
      }
      uVar9 = 0;
      uVar6 = uVar9;
      if ((int)uVar5 < (this->IntParameters).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      if ((-1 < param_2) &&
         (lVar10 = (longlong)(int)uVar5 * 0x40,
         param_2 < *(int *)((this->IntParameters).AllocatorInstance.Data + lVar10 + 0x38))) {
        uVar6 = uVar9;
        if ((int)uVar5 < (this->IntParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar3)();
          return pFVar8;
        }
        pFVar2 = (this->IntParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar2 + lVar10 + 0x38)) {
          uVar9 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar3)();
          return pFVar8;
        }
        return (FString *)((longlong)param_2 * 0x10 + *(longlong *)(pFVar2 + lVar10 + 0x30));
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res20 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res20,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return &FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME;
}

// GetIntValueRange @ 14ac1eb20

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCustomizableObjectInstanceDescriptor::GetIntValueRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return -1;
    }
  }
  else {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar3 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Int);
    if (-1 < (int)uVar3) {
      uVar4 = 0;
      if ((int)uVar3 < (this->IntParameters).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      return *(int *)((this->IntParameters).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x40 + 0x38);
    }
  }
  return -1;
}

// GetLayer @ 14ac1ec00

FMultilayerProjectorLayer * __thiscall
FCustomizableObjectInstanceDescriptor::GetLayer
          (FCustomizableObjectInstanceDescriptor *this,
          FMultilayerProjectorLayer *__return_storage_ptr__,FName *param_1,int param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FName::ToString(param_1,&local_18);
  (__return_storage_ptr__->Image).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Image).Data.ArrayNum = 0;
  (__return_storage_ptr__->Image).Data.ArrayMax = 0;
  bVar1 = IsMultilayerProjector(this,&local_18);
  if (bVar1) {
    FMultilayerProjectorLayer::Read(__return_storage_ptr__,this,&local_18,param_2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMaterialParameterSelectedOption @ 14ac1ed00

/* WARNING: Enum "Type": Some values do not have unique names */

UMaterialInterface * __thiscall
FCustomizableObjectInstanceDescriptor::GetMaterialParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UCustomizableObjectPrivate *pUVar7;
  UMaterialInterface *pUVar8;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  FName local_res20;
  FString local_38;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar7,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
      uVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,param_1,Material);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar5)) {
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar4 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar7,local_res8);
      if ((!bVar4) || (param_2 == -1)) {
        uVar6 = 0;
        if ((int)uVar5 < (this->MaterialParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UMaterialInterface *)(*pcVar3)();
          return pUVar8;
        }
        return *(UMaterialInterface **)
                ((this->MaterialParameters).AllocatorInstance.Data +
                (longlong)(int)uVar5 * 0x38 + 0x10);
      }
      uVar9 = 0;
      uVar6 = uVar9;
      if ((int)uVar5 < (this->MaterialParameters).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMaterialInterface *)(*pcVar3)();
        return pUVar8;
      }
      if ((-1 < param_2) &&
         (lVar10 = (longlong)(int)uVar5 * 0x38,
         param_2 < *(int *)((this->MaterialParameters).AllocatorInstance.Data + lVar10 + 0x30))) {
        uVar6 = uVar9;
        if ((int)uVar5 < (this->MaterialParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UMaterialInterface *)(*pcVar3)();
          return pUVar8;
        }
        pFVar2 = (this->MaterialParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar2 + lVar10 + 0x30)) {
          uVar9 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UMaterialInterface *)(*pcVar3)();
          return pUVar8;
        }
        return *(UMaterialInterface **)
                (*(longlong *)(pFVar2 + lVar10 + 0x28) + (longlong)param_2 * 8);
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res20 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res20,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetParameters @ 14ac20930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FParameters,1> * __thiscall
FCustomizableObjectInstanceDescriptor::GetParameters
          (FCustomizableObjectInstanceDescriptor *this,
          TSharedPtr<UE::Mutable::Private::FParameters,1> *__return_storage_ptr__)

{
  int iVar1;
  UCustomizableObject *this_00;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FParameters *pFVar9;
  bool bVar10;
  EParameterType EVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  UCustomizableObjectPrivate *pUVar15;
  TSharedPtr<UE::Mutable::Private::FModel,1> *pTVar16;
  UModelResources *pUVar17;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *pTVar18;
  FString *pFVar19;
  FGuid *pFVar20;
  ulonglong uVar21;
  FSharedReferencer<1> FVar22;
  ulonglong uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  FRangeIndex *pFVar26;
  uint uVar27;
  FRangeIndex *pFVar28;
  FScriptContainerElement *pFVar29;
  int iVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auStackY_238 [32];
  TSharedPtr<UE::Mutable::Private::FParameters,1> local_208;
  uint local_1f8;
  undefined1 local_1f4;
  undefined1 local_1f3;
  undefined1 local_1f2;
  undefined1 local_1f1;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 local_1ee;
  undefined1 local_1ed;
  undefined1 local_1ec [4];
  FScriptContainerElement *local_1e8;
  FRangeIndex *local_1e0;
  int local_1d8;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_1d0;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_1c0;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_1b0;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_1a0;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_190;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_180;
  TVector4<float>_u_0 local_168;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *local_158;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *local_150;
  int local_148;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  TMatrix<float> local_108;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  local_158 = __return_storage_ptr__;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    bVar10 = UCustomizableObject::IsCompiled(this_00);
    if (bVar10) {
      pUVar15 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      pTVar16 = UCustomizableObjectPrivate::GetModel(pUVar15);
      if (pTVar16->Object != (FModel *)0x0) {
        pUVar15 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        pUVar17 = UCustomizableObjectPrivate::GetModelResourcesChecked(pUVar15);
        pUVar15 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        pTVar16 = UCustomizableObjectPrivate::GetModel(pUVar15);
        local_140.Object = pTVar16->Object;
        local_140.SharedReferenceCount.ReferenceController =
             (pTVar16->SharedReferenceCount).ReferenceController;
        if (local_140.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UE::Mutable::Private::FModel::NewParameters
                  (&local_208,&local_140,(FParameters *)0x0,&pUVar17->TextureParameterDefaultValues,
                   &pUVar17->SkeletalMeshParameterDefaultValues,
                   &pUVar17->MaterialParameterDefaultValues);
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        local_1d8 = UE::Mutable::Private::FParameters::GetCount(local_208.Object);
        uVar31 = 0;
        local_1f8 = 0;
        uVar21 = uVar31;
        if (local_1d8 < 1) {
LAB_14ac20f4f:
          __return_storage_ptr__->Object = local_208.Object;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               local_208.SharedReferenceCount.ReferenceController;
          local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_208.Object = (FParameters *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return __return_storage_ptr__;
        }
LAB_14ac20ad7:
        iVar30 = (int)uVar21;
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        pFVar19 = UE::Mutable::Private::FParameters::GetName(local_208.Object,iVar30);
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        pFVar20 = UE::Mutable::Private::FParameters::GetUid(local_208.Object,iVar30);
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        EVar11 = UE::Mutable::Private::FParameters::GetType(local_208.Object,iVar30);
        uVar13 = 0;
        switch(EVar11) {
        case Bool:
          iVar14 = (this->BoolParameters).ArrayNum;
          pFVar29 = (this->BoolParameters).AllocatorInstance.Data;
          local_1e8 = pFVar29 + (longlong)iVar14 * 0x28;
          do {
            if ((this->BoolParameters).ArrayNum != iVar14) {
              local_1f4 = 0;
              `TCheckedPointerIterator<FCustomizableObjectBoolParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1f4);
            }
            if (pFVar29 == local_1e8) break;
            iVar12 = *(int *)(pFVar29 + 8);
            iVar1 = (pFVar19->Data).ArrayNum;
            if (iVar12 == iVar1) {
              if (iVar12 < 2) goto LAB_14ac20c44;
              iVar12 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)pFVar29,
                                  (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
              bVar10 = iVar12 == 0;
            }
            else {
              bVar10 = iVar12 + iVar1 == 1;
            }
            if (bVar10) goto LAB_14ac20c44;
            if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
               (((pFVar20->D == *(uint *)(pFVar29 + 0x20) && pFVar20->C == *(uint *)(pFVar29 + 0x1c)
                 ) && pFVar20->B == *(uint *)(pFVar29 + 0x18)) &&
                pFVar20->A == *(uint *)(pFVar29 + 0x14))) goto LAB_14ac20c44;
            pFVar29 = pFVar29 + 0x28;
          } while( true );
        case Int:
          local_1f8 = (this->IntParameters).ArrayNum;
          uVar21 = (ulonglong)(int)local_1f8;
          pFVar29 = (this->IntParameters).AllocatorInstance.Data;
          pFVar25 = pFVar29 + uVar21 * 0x40;
          do {
            if ((this->IntParameters).ArrayNum != (int)uVar21) {
              local_1f3 = 0;
              `TCheckedPointerIterator<FCustomizableObjectIntParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1f3);
            }
            if (pFVar29 == pFVar25) break;
            iVar14 = *(int *)(pFVar29 + 8);
            iVar12 = (pFVar19->Data).ArrayNum;
            if (iVar14 == iVar12) {
              if (iVar14 < 2) goto LAB_14ac20d28;
              iVar14 = wcscmp(*(wchar_t **)pFVar29,(wchar_t *)(pFVar19->Data).AllocatorInstance.Data
                             );
              bVar10 = iVar14 == 0;
            }
            else {
              bVar10 = iVar14 + iVar12 == 1;
            }
            if (bVar10) goto LAB_14ac20d28;
            if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
               (((pFVar20->D == *(uint *)(pFVar29 + 0x2c) && pFVar20->C == *(uint *)(pFVar29 + 0x28)
                 ) && pFVar20->B == *(uint *)(pFVar29 + 0x24)) &&
                pFVar20->A == *(uint *)(pFVar29 + 0x20))) goto LAB_14ac20d28;
            uVar21 = (ulonglong)local_1f8;
            pFVar29 = pFVar29 + 0x40;
          } while( true );
        case Float:
          local_1f8 = (this->FloatParameters).ArrayNum;
          uVar21 = (ulonglong)(int)local_1f8;
          pFVar29 = (this->FloatParameters).AllocatorInstance.Data;
          pFVar25 = pFVar29 + uVar21 * 0x38;
          do {
            if ((this->FloatParameters).ArrayNum != (int)uVar21) {
              local_1f2 = 0;
              `TCheckedPointerIterator<FCustomizableObjectFloatParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1f2);
            }
            if (pFVar29 == pFVar25) break;
            iVar14 = *(int *)(pFVar29 + 8);
            iVar12 = (pFVar19->Data).ArrayNum;
            if (iVar14 == iVar12) {
              if (iVar14 < 2) goto LAB_14ac21038;
              iVar14 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)pFVar29,
                                  (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
              bVar10 = iVar14 == 0;
            }
            else {
              bVar10 = iVar14 + iVar12 == 1;
            }
            if (bVar10) goto LAB_14ac21038;
            if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
               (((pFVar20->D == *(uint *)(pFVar29 + 0x20) && pFVar20->C == *(uint *)(pFVar29 + 0x1c)
                 ) && pFVar20->B == *(uint *)(pFVar29 + 0x18)) &&
                pFVar20->A == *(uint *)(pFVar29 + 0x14))) goto LAB_14ac21038;
            uVar21 = (ulonglong)local_1f8;
            pFVar29 = pFVar29 + 0x38;
          } while( true );
        case Color:
          local_1f8 = (this->VectorParameters).ArrayNum;
          uVar21 = (ulonglong)(int)local_1f8;
          pFVar29 = (this->VectorParameters).AllocatorInstance.Data;
          pFVar25 = pFVar29 + uVar21 * 0x30;
          do {
            if ((this->VectorParameters).ArrayNum != (int)uVar21) {
              local_1f1 = 0;
              `TCheckedPointerIterator<FCustomizableObjectVectorParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1f1);
            }
            if (pFVar29 == pFVar25) break;
            iVar14 = *(int *)(pFVar29 + 8);
            iVar12 = (pFVar19->Data).ArrayNum;
            if (iVar14 == iVar12) {
              if (iVar14 < 2) goto LAB_14ac2126e;
              iVar14 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)pFVar29,
                                  (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
              bVar10 = iVar14 == 0;
            }
            else {
              bVar10 = iVar14 + iVar12 == 1;
            }
            if (bVar10) goto LAB_14ac2126e;
            if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
               (((pFVar20->D == *(uint *)(pFVar29 + 0x2c) && pFVar20->C == *(uint *)(pFVar29 + 0x28)
                 ) && pFVar20->B == *(uint *)(pFVar29 + 0x24)) &&
                pFVar20->A == *(uint *)(pFVar29 + 0x20))) goto LAB_14ac2126e;
            uVar21 = (ulonglong)local_1f8;
            pFVar29 = pFVar29 + 0x30;
          } while( true );
        case Projector:
          iVar30 = (this->ProjectorParameters).ArrayNum;
          uVar23 = (ulonglong)iVar30;
          pFVar26 = (FRangeIndex *)(this->ProjectorParameters).AllocatorInstance.Data;
          local_1e8 = (FScriptContainerElement *)CONCAT44(local_1e8._4_4_,iVar30);
          pFVar28 = (FRangeIndex *)((longlong)pFVar26 + uVar23 * 0x68);
          local_1e0 = pFVar28;
          while( true ) {
            iVar30 = (int)uVar21;
            if ((this->ProjectorParameters).ArrayNum != (int)uVar23) {
              local_1ef = 0;
              `TCheckedPointerIterator<FCustomizableObjectProjectorParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1ef);
            }
            if (pFVar26 == pFVar28) break;
            iVar14 = *(int *)&(pFVar26->Parameters).SharedReferenceCount.ReferenceController;
            iVar12 = (pFVar19->Data).ArrayNum;
            if (iVar14 == iVar12) {
              if (1 < iVar14) {
                iVar14 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)(pFVar26->Parameters).Object,
                                    (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
                bVar10 = iVar14 == 0;
                goto LAB_14ac215c5;
              }
LAB_14ac21605:
              local_150 = &local_208;
              local_148 = iVar30;
              `FCustomizableObjectInstanceDescriptor::GetParameters'::__l77::<lambda_1>::operator()
                        (&local_150,(FCustomizableObjectProjector *)&pFVar26->Parameter,
                         (FRangeIndex *)0x0);
              if ((local_208.Object == (FParameters *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
                return pTVar18;
              }
              UE::Mutable::Private::FParameters::NewRangeIndex(local_208.Object,&local_1b0,iVar30);
              if ((local_1b0.Object != (FRangeIndex *)0x0) &&
                 (uVar23 = uVar31, pFVar28 = local_1e0, 0 < pFVar26[2].Parameter)) {
                do {
                  if ((local_1b0.Object == (FRangeIndex *)0x0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar10)) {
                    pcVar3 = (code *)swi(3);
                    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
                    return pTVar18;
                  }
                  uVar27 = (uint)uVar23;
                  UE::Mutable::Private::FRangeIndex::SetPosition(local_1b0.Object,0,uVar27);
                  pFVar28 = local_1b0.Object;
                  uVar24 = uVar13;
                  if ((int)uVar27 < pFVar26[2].Parameter) {
                    uVar24 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar3 = (code *)swi(3);
                    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
                    return pTVar18;
                  }
                  `FCustomizableObjectInstanceDescriptor::GetParameters'::__l77::<lambda_1>::
                  operator()(&local_150,
                             (FCustomizableObjectProjector *)
                             ((longlong)(int)uVar27 * 0x38 +
                             (longlong)
                             pFVar26[2].Parameters.SharedReferenceCount.ReferenceController),pFVar28
                            );
                  uVar23 = (ulonglong)(uVar27 + 1);
                } while ((int)(uVar27 + 1) < pFVar26[2].Parameter);
                uVar21 = (ulonglong)local_1f8;
                pFVar28 = local_1e0;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1b0.SharedReferenceCount.ReferenceController);
            }
            else {
              bVar10 = iVar14 + iVar12 == 1;
LAB_14ac215c5:
              if (bVar10) goto LAB_14ac21605;
              if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
                 (((pFVar20->D == *(uint *)((longlong)&pFVar26[2].Parameters.Object + 4) &&
                   pFVar20->C == *(uint *)&pFVar26[2].Parameters.Object) &&
                  pFVar20->B == pFVar26[1].Values.ArrayMax) &&
                  pFVar20->A == pFVar26[1].Values.ArrayNum)) goto LAB_14ac21605;
            }
            uVar23 = (ulonglong)local_1e8 & 0xffffffff;
            pFVar26 = (FRangeIndex *)&pFVar26[2].Values;
          }
          break;
        case Image:
          iVar14 = (this->TextureParameters).ArrayNum;
          uVar21 = (ulonglong)iVar14;
          pFVar29 = (this->TextureParameters).AllocatorInstance.Data;
          local_1e8 = (FScriptContainerElement *)CONCAT44(local_1e8._4_4_,iVar14);
          pFVar25 = pFVar29 + uVar21 * 0x38;
          do {
            if ((this->TextureParameters).ArrayNum != (int)uVar21) {
              local_1ee = 0;
              `TCheckedPointerIterator<FCustomizableObjectTextureParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1ee);
            }
            if (pFVar29 == pFVar25) break;
            iVar14 = *(int *)(pFVar29 + 8);
            iVar12 = (pFVar19->Data).ArrayNum;
            if (iVar14 == iVar12) {
              if (iVar14 < 2) goto LAB_14ac217db;
              iVar14 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)pFVar29,
                                  (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
              bVar10 = iVar14 == 0;
            }
            else {
              bVar10 = iVar14 + iVar12 == 1;
            }
            if (bVar10) goto LAB_14ac217db;
            if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
               (((pFVar20->D == *(uint *)(pFVar29 + 0x24) && pFVar20->C == *(uint *)(pFVar29 + 0x20)
                 ) && pFVar20->B == *(uint *)(pFVar29 + 0x1c)) &&
                pFVar20->A == *(uint *)(pFVar29 + 0x18))) goto LAB_14ac217db;
            uVar21 = (ulonglong)local_1e8 & 0xffffffff;
            pFVar29 = pFVar29 + 0x38;
          } while( true );
        case Mesh:
          iVar14 = (this->SkeletalMeshParameters).ArrayNum;
          uVar21 = (ulonglong)iVar14;
          pFVar29 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
          local_1e8 = (FScriptContainerElement *)CONCAT44(local_1e8._4_4_,iVar14);
          pFVar25 = pFVar29 + uVar21 * 0x38;
          do {
            if ((this->SkeletalMeshParameters).ArrayNum != (int)uVar21) {
              local_1ed = 0;
              `TCheckedPointerIterator<FCustomizableObjectSkeletalMeshParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1ed);
            }
            if (pFVar29 == pFVar25) break;
            iVar14 = *(int *)(pFVar29 + 8);
            iVar12 = (pFVar19->Data).ArrayNum;
            if (iVar14 == iVar12) {
              if (iVar14 < 2) goto LAB_14ac21a07;
              iVar14 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)pFVar29,
                                  (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
              bVar10 = iVar14 == 0;
            }
            else {
              bVar10 = iVar14 + iVar12 == 1;
            }
            if (bVar10) goto LAB_14ac21a07;
            if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
               (((pFVar20->D == *(uint *)(pFVar29 + 0x24) && pFVar20->C == *(uint *)(pFVar29 + 0x20)
                 ) && pFVar20->B == *(uint *)(pFVar29 + 0x1c)) &&
                pFVar20->A == *(uint *)(pFVar29 + 0x18))) goto LAB_14ac21a07;
            uVar21 = (ulonglong)local_1e8 & 0xffffffff;
            pFVar29 = pFVar29 + 0x38;
          } while( true );
        case Material:
          iVar14 = (this->MaterialParameters).ArrayNum;
          uVar21 = (ulonglong)iVar14;
          pFVar29 = (this->MaterialParameters).AllocatorInstance.Data;
          local_1e8 = (FScriptContainerElement *)CONCAT44(local_1e8._4_4_,iVar14);
          pFVar25 = pFVar29 + uVar21 * 0x38;
          do {
            if ((this->MaterialParameters).ArrayNum != (int)uVar21) {
              local_1ec[0] = 0;
              `TCheckedPointerIterator<FCustomizableObjectMaterialParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_1ec);
            }
            if (pFVar29 == pFVar25) break;
            iVar14 = *(int *)(pFVar29 + 8);
            iVar12 = (pFVar19->Data).ArrayNum;
            if (iVar14 == iVar12) {
              if (iVar14 < 2) goto LAB_14ac21c37;
              iVar14 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)pFVar29,
                                  (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
              bVar10 = iVar14 == 0;
            }
            else {
              bVar10 = iVar14 + iVar12 == 1;
            }
            if (bVar10) goto LAB_14ac21c37;
            if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
               (((pFVar20->D == *(uint *)(pFVar29 + 0x24) && pFVar20->C == *(uint *)(pFVar29 + 0x20)
                 ) && pFVar20->B == *(uint *)(pFVar29 + 0x1c)) &&
                pFVar20->A == *(uint *)(pFVar29 + 0x18))) goto LAB_14ac21c37;
            uVar21 = (ulonglong)local_1e8 & 0xffffffff;
            pFVar29 = pFVar29 + 0x38;
          } while( true );
        default:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                              ,0x350,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
            return pTVar18;
          }
          break;
        case Matrix:
          local_1f8 = (this->TransformParameters).ArrayNum;
          uVar21 = (ulonglong)(int)local_1f8;
          pFVar29 = (this->TransformParameters).AllocatorInstance.Data;
          pFVar25 = pFVar29 + uVar21 * 0x80;
          do {
            if ((this->TransformParameters).ArrayNum != (int)uVar21) {
              local_1f0 = 0;
              `TCheckedPointerIterator<FCustomizableObjectTransformParameterValue_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1f0);
            }
            if (pFVar29 == pFVar25) break;
            iVar14 = *(int *)(pFVar29 + 8);
            iVar12 = (pFVar19->Data).ArrayNum;
            if (iVar14 == iVar12) {
              if (iVar14 < 2) goto LAB_14ac2136a;
              iVar14 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)pFVar29,
                                  (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
              bVar10 = iVar14 == 0;
            }
            else {
              bVar10 = iVar14 + iVar12 == 1;
            }
            if (bVar10) goto LAB_14ac2136a;
            if ((((pFVar20->D != 0 || pFVar20->C != 0) || pFVar20->B != 0) || pFVar20->A != 0) &&
               (((pFVar20->D == *(uint *)(pFVar29 + 0x7c) && pFVar20->C == *(uint *)(pFVar29 + 0x78)
                 ) && pFVar20->B == *(uint *)(pFVar29 + 0x74)) &&
                pFVar20->A == *(uint *)(pFVar29 + 0x70))) goto LAB_14ac2136a;
            uVar21 = (ulonglong)local_1f8;
            pFVar29 = pFVar29 + 0x80;
          } while( true );
        }
        goto LAB_14ac20ee2;
      }
    }
  }
  __return_storage_ptr__->Object = (FParameters *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
LAB_14ac2136a:
  if ((local_208.Object == (FParameters *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
    return pTVar18;
  }
  local_118 = *(double *)(pFVar29 + 0x20);
  dStack_110 = *(double *)(pFVar29 + 0x28);
  dVar4 = *(double *)(pFVar29 + 0x10);
  dVar8 = *(double *)(pFVar29 + 0x18);
  dVar7 = dVar8 + dVar8;
  dVar33 = local_118 + local_118;
  dVar5 = (dVar4 + dVar4) * dVar4;
  auVar34 = blendpd(*(undefined1 (*) [16])(pFVar29 + 0x50),*(undefined1 (*) [16])(pFVar29 + 0x60),2)
  ;
  dVar32 = dVar7 * *(double *)(pFVar29 + 0x10);
  local_128 = *(undefined8 *)(pFVar29 + 0x10);
  uStack_120 = *(undefined8 *)(pFVar29 + 0x18);
  dVar4 = dStack_110 * (dVar4 + dVar4);
  dVar6 = *(double *)(pFVar29 + 0x10) * dVar33;
  local_108.M[0][1] = (float)((dStack_110 * dVar33 + dVar32) * *(double *)(pFVar29 + 0x50));
  local_108.M[0][0] =
       (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
               (dVar33 * local_118 + dVar7 * dVar8)) * *(double *)(pFVar29 + 0x50));
  local_108.M[0][2] = (float)(auVar34._0_8_ * (dVar6 - dVar7 * dStack_110));
  local_108.M[0][3] = 0.0;
  local_108.M[1][1] =
       (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar33 * local_118 + dVar5)) *
              *(double *)(pFVar29 + 0x58));
  local_108.M[1][0] =
       (float)(SUB168(*(undefined1 (*) [16])(pFVar29 + 0x50),8) * (dVar32 - dStack_110 * dVar33));
  local_108.M[1][2] =
       (float)((dVar4 + dVar33 * *(double *)(pFVar29 + 0x18)) * *(double *)(pFVar29 + 0x58));
  local_108.M[1][3] = 0.0;
  local_108.M[3][0] = (float)*(double *)(pFVar29 + 0x30);
  local_108.M[3][1] = (float)*(double *)(pFVar29 + 0x38);
  local_108.M[2][1] =
       (float)(*(double *)(pFVar29 + 0x60) * (dVar33 * *(double *)(pFVar29 + 0x18) - dVar4));
  local_108.M[2][0] = (float)((dVar7 * dStack_110 + dVar6) * *(double *)(pFVar29 + 0x60));
  local_108.M[2][2] =
       (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar5 + dVar7 * dVar8)) *
              *(double *)(pFVar29 + 0x60));
  local_108.M[2][3] = 0.0;
  local_108.M[3][2] = (float)*(double *)(pFVar29 + 0x40);
  local_108.M[3][3] = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
  UE::Mutable::Private::FParameters::SetMatrixValue
            (local_208.Object,iVar30,&local_108,(FRangeIndex *)0x0);
  goto LAB_14ac20ee2;
LAB_14ac21c37:
  if ((local_208.Object == (FParameters *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
    return pTVar18;
  }
  UE::Mutable::Private::FParameters::NewRangeIndex(local_208.Object,&local_180,iVar30);
  if (local_180.Object == (FRangeIndex *)0x0) {
    if ((local_208.Object == (FParameters *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
      return pTVar18;
    }
    UE::Mutable::Private::FParameters::SetMaterialValue
              (local_208.Object,iVar30,*(UMaterialInterface **)(pFVar29 + 0x10),(FRangeIndex *)0x0);
    FVar22.ReferenceController = local_180.SharedReferenceCount.ReferenceController;
  }
  else {
    FVar22.ReferenceController = local_180.SharedReferenceCount.ReferenceController;
    uVar21 = uVar31;
    uVar23 = uVar31;
    if (0 < *(int *)(pFVar29 + 0x30)) {
      do {
        if ((local_180.Object == (FRangeIndex *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        uVar24 = (uint)uVar21;
        UE::Mutable::Private::FRangeIndex::SetPosition(local_180.Object,0,uVar24);
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        pFVar9 = local_208.Object;
        local_1e0 = local_180.Object;
        uVar27 = uVar13;
        if ((int)uVar24 < *(int *)(pFVar29 + 0x30)) {
          uVar27 = ~uVar24 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        UE::Mutable::Private::FParameters::SetMaterialValue
                  (pFVar9,iVar30,*(UMaterialInterface **)(uVar23 + *(longlong *)(pFVar29 + 0x28)),
                   local_1e0);
        FVar22.ReferenceController = local_180.SharedReferenceCount.ReferenceController;
        uVar21 = (ulonglong)(uVar24 + 1);
        uVar23 = uVar23 + 8;
      } while ((int)(uVar24 + 1) < *(int *)(pFVar29 + 0x30));
    }
  }
  goto LAB_14ac20ed6;
LAB_14ac21a07:
  if ((local_208.Object == (FParameters *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
    return pTVar18;
  }
  UE::Mutable::Private::FParameters::NewRangeIndex(local_208.Object,&local_190,iVar30);
  if (local_190.Object == (FRangeIndex *)0x0) {
    if ((local_208.Object == (FParameters *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
      return pTVar18;
    }
    UE::Mutable::Private::FParameters::SetMeshValue
              (local_208.Object,iVar30,*(USkeletalMesh **)(pFVar29 + 0x10),(FRangeIndex *)0x0);
    FVar22.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
  }
  else {
    FVar22.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
    uVar21 = uVar31;
    uVar23 = uVar31;
    if (0 < *(int *)(pFVar29 + 0x30)) {
      do {
        if ((local_190.Object == (FRangeIndex *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        uVar24 = (uint)uVar21;
        UE::Mutable::Private::FRangeIndex::SetPosition(local_190.Object,0,uVar24);
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        pFVar9 = local_208.Object;
        local_1e0 = local_190.Object;
        uVar27 = uVar13;
        if ((int)uVar24 < *(int *)(pFVar29 + 0x30)) {
          uVar27 = ~uVar24 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        UE::Mutable::Private::FParameters::SetMeshValue
                  (pFVar9,iVar30,*(USkeletalMesh **)(uVar23 + *(longlong *)(pFVar29 + 0x28)),
                   local_1e0);
        FVar22.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
        uVar21 = (ulonglong)(uVar24 + 1);
        uVar23 = uVar23 + 8;
      } while ((int)(uVar24 + 1) < *(int *)(pFVar29 + 0x30));
    }
  }
  goto LAB_14ac20ed6;
LAB_14ac217db:
  if ((local_208.Object == (FParameters *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
    return pTVar18;
  }
  UE::Mutable::Private::FParameters::NewRangeIndex(local_208.Object,&local_1a0,iVar30);
  if (local_1a0.Object == (FRangeIndex *)0x0) {
    if ((local_208.Object == (FParameters *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
      return pTVar18;
    }
    UE::Mutable::Private::FParameters::SetImageValue
              (local_208.Object,iVar30,*(UTexture **)(pFVar29 + 0x10),(FRangeIndex *)0x0);
    FVar22.ReferenceController = local_1a0.SharedReferenceCount.ReferenceController;
  }
  else {
    FVar22.ReferenceController = local_1a0.SharedReferenceCount.ReferenceController;
    uVar21 = uVar31;
    uVar23 = uVar31;
    if (0 < *(int *)(pFVar29 + 0x30)) {
      do {
        if ((local_1a0.Object == (FRangeIndex *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        uVar24 = (uint)uVar21;
        UE::Mutable::Private::FRangeIndex::SetPosition(local_1a0.Object,0,uVar24);
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        pFVar9 = local_208.Object;
        local_1e0 = local_1a0.Object;
        uVar27 = uVar13;
        if ((int)uVar24 < *(int *)(pFVar29 + 0x30)) {
          uVar27 = ~uVar24 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        UE::Mutable::Private::FParameters::SetImageValue
                  (pFVar9,iVar30,*(UTexture **)(uVar23 + *(longlong *)(pFVar29 + 0x28)),local_1e0);
        FVar22.ReferenceController = local_1a0.SharedReferenceCount.ReferenceController;
        uVar21 = (ulonglong)(uVar24 + 1);
        uVar23 = uVar23 + 8;
      } while ((int)(uVar24 + 1) < *(int *)(pFVar29 + 0x30));
    }
  }
  goto LAB_14ac20ed6;
LAB_14ac2126e:
  if ((local_208.Object == (FParameters *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
    return pTVar18;
  }
  local_168._0_8_ = *(undefined8 *)(pFVar29 + 0x10);
  local_168._8_8_ = *(undefined8 *)(pFVar29 + 0x18);
  UE::Mutable::Private::FParameters::SetColourValue
            (local_208.Object,iVar30,(TVector4<float> *)&local_168._s_0,(FRangeIndex *)0x0);
  goto LAB_14ac20ee2;
LAB_14ac21038:
  if ((local_208.Object == (FParameters *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
    return pTVar18;
  }
  UE::Mutable::Private::FParameters::NewRangeIndex(local_208.Object,&local_1c0,iVar30);
  if (local_1c0.Object == (FRangeIndex *)0x0) {
    if ((local_208.Object == (FParameters *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
      return pTVar18;
    }
    UE::Mutable::Private::FParameters::SetFloatValue
              (local_208.Object,iVar30,*(float *)(pFVar29 + 0x10),(FRangeIndex *)0x0);
    FVar22.ReferenceController = local_1c0.SharedReferenceCount.ReferenceController;
  }
  else {
    FVar22.ReferenceController = local_1c0.SharedReferenceCount.ReferenceController;
    uVar21 = uVar31;
    uVar23 = uVar31;
    if (0 < *(int *)(pFVar29 + 0x30)) {
      do {
        if ((local_1c0.Object == (FRangeIndex *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        uVar24 = (uint)uVar21;
        UE::Mutable::Private::FRangeIndex::SetPosition(local_1c0.Object,0,uVar24);
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        pFVar9 = local_208.Object;
        local_1e0 = local_1c0.Object;
        uVar27 = uVar13;
        if ((int)uVar24 < *(int *)(pFVar29 + 0x30)) {
          uVar27 = ~uVar24 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        UE::Mutable::Private::FParameters::SetFloatValue
                  (pFVar9,iVar30,*(float *)(*(longlong *)(pFVar29 + 0x28) + uVar23),local_1e0);
        FVar22.ReferenceController = local_1c0.SharedReferenceCount.ReferenceController;
        uVar21 = (ulonglong)(uVar24 + 1);
        uVar23 = uVar23 + 4;
      } while ((int)(uVar24 + 1) < *(int *)(pFVar29 + 0x30));
    }
  }
  goto LAB_14ac20ed6;
LAB_14ac20d28:
  if ((local_208.Object == (FParameters *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
    return pTVar18;
  }
  UE::Mutable::Private::FParameters::NewRangeIndex(local_208.Object,&local_1d0,iVar30);
  if (local_1d0.Object == (FRangeIndex *)0x0) {
    pUVar15 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
    iVar14 = UCustomizableObjectPrivate::FindIntParameterValue
                       (pUVar15,iVar30,(FString *)(pFVar29 + 0x10));
    if ((local_208.Object == (FParameters *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
      return pTVar18;
    }
    UE::Mutable::Private::FParameters::SetIntValue
              (local_208.Object,iVar30,iVar14,(FRangeIndex *)0x0);
    FVar22.ReferenceController = local_1d0.SharedReferenceCount.ReferenceController;
  }
  else {
    FVar22.ReferenceController = local_1d0.SharedReferenceCount.ReferenceController;
    uVar21 = uVar31;
    if (0 < *(int *)(pFVar29 + 0x38)) {
      do {
        if ((local_1d0.Object == (FRangeIndex *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        uVar24 = (uint)uVar21;
        UE::Mutable::Private::FRangeIndex::SetPosition(local_1d0.Object,0,uVar24);
        uVar13 = 0;
        if ((int)uVar24 < *(int *)(pFVar29 + 0x38)) {
          uVar13 = ~uVar24 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        lVar2 = *(longlong *)(pFVar29 + 0x30);
        pUVar15 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        iVar14 = UCustomizableObjectPrivate::FindIntParameterValue
                           (pUVar15,iVar30,(FString *)((longlong)(int)uVar24 * 0x10 + lVar2));
        if ((local_208.Object == (FParameters *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
          return pTVar18;
        }
        UE::Mutable::Private::FParameters::SetIntValue
                  (local_208.Object,iVar30,iVar14,local_1d0.Object);
        uVar21 = (ulonglong)(uVar24 + 1);
        FVar22.ReferenceController = local_1d0.SharedReferenceCount.ReferenceController;
      } while ((int)(uVar24 + 1) < *(int *)(pFVar29 + 0x38));
    }
  }
LAB_14ac20ed6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
LAB_14ac20ee2:
  local_1f8 = iVar30 + 1;
  __return_storage_ptr__ = local_158;
  uVar21 = (ulonglong)local_1f8;
  if (local_1d8 <= (int)local_1f8) goto LAB_14ac20f4f;
  goto LAB_14ac20ad7;
LAB_14ac20c44:
  if ((local_208.Object == (FParameters *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar18 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(*pcVar3)();
    return pTVar18;
  }
  UE::Mutable::Private::FParameters::SetBoolValue
            (local_208.Object,iVar30,(bool)pFVar29[0x10],(FRangeIndex *)0x0);
  goto LAB_14ac20ee2;
}

// GetProjector @ 14ac22990

/* WARNING: Enum "Type": Some values do not have unique names */

FCustomizableObjectProjector * __thiscall
FCustomizableObjectInstanceDescriptor::GetProjector
          (FCustomizableObjectInstanceDescriptor *this,
          FCustomizableObjectProjector *__return_storage_ptr__,FString *param_1,int param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  UCustomizableObject *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  UCustomizableObjectPrivate *pUVar13;
  FCustomizableObjectProjector *pFVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  int local_res8 [2];
  FName local_48;
  FString local_40;
  
  pUVar13 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
  local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar13,param_1);
  pUVar4 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar4 == (UCustomizableObject *)0x0) {
    uVar11 = 0xffffffff;
  }
  else {
    pUVar13 = UCustomizableObject::GetPrivate(pUVar4);
    uVar11 = UCustomizableObjectPrivate::FindParameterTyped(pUVar13,param_1,Projector);
  }
  if ((-1 < local_res8[0]) && (-1 < (int)uVar11)) {
    pUVar13 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
    bVar10 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar13,local_res8);
    if ((!bVar10) || (param_2 == -1)) {
      uVar12 = 0;
      if ((int)uVar11 < (this->ProjectorParameters).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FCustomizableObjectProjector *)(*pcVar7)();
        return pFVar14;
      }
      lVar17 = (longlong)(int)uVar11 * 0x68;
      pFVar6 = (this->ProjectorParameters).AllocatorInstance.Data;
      uVar3 = *(undefined8 *)(pFVar6 + lVar17 + 0x10 + 8);
      uVar8 = *(undefined8 *)(pFVar6 + lVar17 + 0x20);
      uVar9 = *(undefined8 *)(pFVar6 + lVar17 + 0x20 + 8);
      *(undefined8 *)&(__return_storage_ptr__->Position).field0_0x0 =
           *(undefined8 *)(pFVar6 + lVar17 + 0x10);
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 8) = uVar3;
      pFVar5 = pFVar6 + lVar17 + 0x30;
      uVar18 = *(undefined4 *)pFVar5;
      uVar19 = *(undefined4 *)(pFVar5 + 4);
      uVar20 = *(undefined4 *)(pFVar5 + 8);
      uVar21 = *(undefined4 *)(pFVar5 + 0xc);
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Direction).field0_0x0 + 4) = uVar8;
      *(undefined8 *)&(__return_storage_ptr__->Up).field0_0x0 = uVar9;
      uVar22 = (undefined4)*(undefined8 *)(pFVar6 + lVar17 + 0x40);
      fVar23 = (float)((ulonglong)*(undefined8 *)(pFVar6 + lVar17 + 0x40) >> 0x20);
      goto LAB_14ac22caa;
    }
    uVar16 = 0;
    uVar12 = uVar16;
    if ((int)uVar11 < (this->ProjectorParameters).ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      pFVar14 = (FCustomizableObjectProjector *)(*pcVar7)();
      return pFVar14;
    }
    if ((-1 < param_2) &&
       (lVar17 = (longlong)(int)uVar11 * 0x68,
       param_2 < *(int *)((this->ProjectorParameters).AllocatorInstance.Data + lVar17 + 0x60))) {
      uVar12 = uVar16;
      if ((int)uVar11 < (this->ProjectorParameters).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FCustomizableObjectProjector *)(*pcVar7)();
        return pFVar14;
      }
      pFVar5 = (this->ProjectorParameters).AllocatorInstance.Data;
      if (param_2 < *(int *)(pFVar5 + lVar17 + 0x60)) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FCustomizableObjectProjector *)(*pcVar7)();
        return pFVar14;
      }
      lVar17 = *(longlong *)(pFVar5 + lVar17 + 0x58);
      lVar15 = (longlong)param_2 * 0x38;
      uVar3 = ((undefined8 *)(lVar15 + lVar17))[1];
      puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar17);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)&(__return_storage_ptr__->Position).field0_0x0 =
           *(undefined8 *)(lVar15 + lVar17);
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 8) = uVar3;
      pfVar2 = (float *)(lVar15 + 0x20 + lVar17);
      uVar18 = *pfVar2;
      uVar19 = pfVar2[1];
      uVar20 = pfVar2[2];
      uVar21 = pfVar2[3];
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Direction).field0_0x0 + 4) = uVar8;
      *(undefined8 *)&(__return_storage_ptr__->Up).field0_0x0 = uVar9;
      uVar3 = *(undefined8 *)(lVar15 + 0x30 + lVar17);
      uVar22 = (undefined4)uVar3;
      fVar23 = (float)((ulonglong)uVar3 >> 0x20);
      goto LAB_14ac22caa;
    }
  }
  if (2 < (byte)LogMutable._0_1_) {
    pUVar4 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar4 == (UCustomizableObject *)0x0) {
      ::FString::FString(&local_40,L"None");
    }
    else {
      local_48 = (FName)pUVar4->_padding_;
      ::FName::ToString(&local_48,&local_40);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  uVar9 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Up.field0_0x0._0_8_;
  uVar8 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Direction.field0_0x0.
          _4_8_;
  uVar3 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._8_8_;
  *(undefined8 *)&(__return_storage_ptr__->Position).field0_0x0 =
       FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Position.field0_0x0._0_8_
  ;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 8) = uVar3;
  uVar21 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Scale.field0_0x0._s_0
           .Z;
  uVar20 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Scale.field0_0x0._s_0
           .Y;
  uVar19 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Scale.field0_0x0._s_0
           .X;
  uVar18 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Up.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Direction).field0_0x0 + 4) = uVar8;
  *(undefined8 *)&(__return_storage_ptr__->Up).field0_0x0 = uVar9;
  uVar22 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._48_4_;
  fVar23 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Angle;
LAB_14ac22caa:
  (__return_storage_ptr__->Up).field0_0x0._s_0.Z = (float)uVar18;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.X = (float)uVar19;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = (float)uVar20;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Z = (float)uVar21;
  __return_storage_ptr__->ProjectionType = (char)uVar22;
  *(int3 *)&__return_storage_ptr__->field_0x31 = (int3)((uint)uVar22 >> 8);
  __return_storage_ptr__->Angle = fVar23;
  return __return_storage_ptr__;
}

// GetProjectorAngle @ 14ac22ce0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorAngle
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UCustomizableObjectPrivate *pUVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  int local_res8 [2];
  FName local_res20;
  FString local_38;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar7,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
      uVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,param_1,Projector);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar5)) {
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar4 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar7,local_res8);
      if ((!bVar4) || (param_2 == -1)) {
        uVar6 = 0;
        if ((int)uVar5 < (this->ProjectorParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar10 = (float)(*pcVar3)();
          return fVar10;
        }
        return *(float *)((this->ProjectorParameters).AllocatorInstance.Data +
                         (longlong)(int)uVar5 * 0x68 + 0x44);
      }
      uVar8 = 0;
      uVar6 = uVar8;
      if ((int)uVar5 < (this->ProjectorParameters).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      if ((-1 < param_2) &&
         (lVar9 = (longlong)(int)uVar5 * 0x68,
         param_2 < *(int *)((this->ProjectorParameters).AllocatorInstance.Data + lVar9 + 0x60))) {
        uVar6 = uVar8;
        if ((int)uVar5 < (this->ProjectorParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar10 = (float)(*pcVar3)();
          return fVar10;
        }
        pFVar2 = (this->ProjectorParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar2 + lVar9 + 0x60)) {
          uVar8 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar10 = (float)(*pcVar3)();
          return fVar10;
        }
        return *(float *)((longlong)param_2 * 0x38 + 0x34 + *(longlong *)(pFVar2 + lVar9 + 0x58));
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res20 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res20,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return 0.0;
}

// GetProjectorDirection @ 14ac22ff0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorDirection
          (FCustomizableObjectInstanceDescriptor *this,TVector<double> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  UCustomizableObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  UCustomizableObjectPrivate *pUVar9;
  TVector<double> *pTVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int local_res8 [2];
  FName local_48;
  FString local_40;
  
  pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar9,param_1);
    pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UCustomizableObject *)0x0) {
      uVar7 = 0xffffffff;
    }
    else {
      pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
      uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar9,param_1,Projector);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar7)) {
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar9,local_res8);
      if ((!bVar6) || (param_2 == -1)) {
        uVar8 = 0;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        lVar13 = (longlong)(int)uVar7 * 0x68;
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        fVar1 = *(float *)(pFVar4 + lVar13 + 0x20);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(pFVar4 + lVar13 + 0x1c);
        fVar2 = *(float *)(pFVar4 + lVar13 + 0x24);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
      uVar12 = 0;
      uVar8 = uVar12;
      if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar5)();
        return pTVar10;
      }
      if ((-1 < param_2) &&
         (lVar13 = (longlong)(int)uVar7 * 0x68,
         param_2 < *(int *)((this->ProjectorParameters).AllocatorInstance.Data + lVar13 + 0x60))) {
        uVar8 = uVar12;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar4 + lVar13 + 0x60)) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        lVar13 = *(longlong *)(pFVar4 + lVar13 + 0x58);
        lVar11 = (longlong)param_2 * 0x38;
        fVar1 = *(float *)(lVar11 + 0x10 + lVar13);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(lVar11 + 0xc + lVar13);
        fVar2 = *(float *)(lVar11 + 0x14 + lVar13);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_40,L"None");
      }
      else {
        local_48 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_48,&local_40);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = -0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = -0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = -0.0;
  return __return_storage_ptr__;
}

// GetProjectorParameterType @ 14ac23370

/* WARNING: Enum "Type": Some values do not have unique names */

ECustomizableObjectProjectorType __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorParameterType
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ECustomizableObjectProjectorType EVar5;
  uint uVar6;
  uint uVar7;
  UCustomizableObjectPrivate *pUVar8;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  FName local_res20;
  FString local_38;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar8 = UCustomizableObject::GetPrivate(pUVar1);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar8,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      uVar6 = 0xffffffff;
    }
    else {
      pUVar8 = UCustomizableObject::GetPrivate(pUVar1);
      uVar6 = UCustomizableObjectPrivate::FindParameterTyped(pUVar8,param_1,Projector);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar6)) {
      pUVar8 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar4 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar8,local_res8);
      if ((!bVar4) || (param_2 == -1)) {
        uVar7 = 0;
        if ((int)uVar6 < (this->ProjectorParameters).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        return (ECustomizableObjectProjectorType)
               (this->ProjectorParameters).AllocatorInstance.Data
               [(longlong)(int)uVar6 * 0x68 + 0x40];
      }
      uVar9 = 0;
      uVar7 = uVar9;
      if ((int)uVar6 < (this->ProjectorParameters).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      if ((-1 < param_2) &&
         (lVar10 = (longlong)(int)uVar6 * 0x68,
         param_2 < *(int *)((this->ProjectorParameters).AllocatorInstance.Data + lVar10 + 0x60))) {
        uVar7 = uVar9;
        if ((int)uVar6 < (this->ProjectorParameters).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        pFVar2 = (this->ProjectorParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar2 + lVar10 + 0x60)) {
          uVar9 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        return *(ECustomizableObjectProjectorType *)
                ((longlong)param_2 * 0x38 + 0x30 + *(longlong *)(pFVar2 + lVar10 + 0x58));
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res20 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res20,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return Planar;
}

// GetProjectorPosition @ 14ac23670

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorPosition
          (FCustomizableObjectInstanceDescriptor *this,TVector<double> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  UCustomizableObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  UCustomizableObjectPrivate *pUVar9;
  TVector<double> *pTVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int local_res8 [2];
  FName local_48;
  FString local_40;
  
  pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar9,param_1);
    pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UCustomizableObject *)0x0) {
      uVar7 = 0xffffffff;
    }
    else {
      pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
      uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar9,param_1,Projector);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar7)) {
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar9,local_res8);
      if ((!bVar6) || (param_2 == -1)) {
        uVar8 = 0;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        lVar13 = (longlong)(int)uVar7 * 0x68;
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        fVar1 = *(float *)(pFVar4 + lVar13 + 0x14);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(pFVar4 + lVar13 + 0x10);
        fVar2 = *(float *)(pFVar4 + lVar13 + 0x18);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
      uVar12 = 0;
      uVar8 = uVar12;
      if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar5)();
        return pTVar10;
      }
      if ((-1 < param_2) &&
         (lVar13 = (longlong)(int)uVar7 * 0x68,
         param_2 < *(int *)((this->ProjectorParameters).AllocatorInstance.Data + lVar13 + 0x60))) {
        uVar8 = uVar12;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar4 + lVar13 + 0x60)) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        lVar13 = *(longlong *)(pFVar4 + lVar13 + 0x58);
        lVar11 = (longlong)param_2 * 0x38;
        fVar1 = *(float *)(lVar11 + 4 + lVar13);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(lVar11 + lVar13);
        fVar2 = *(float *)(lVar11 + 8 + lVar13);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_40,L"None");
      }
      else {
        local_48 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_48,&local_40);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = -0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = -0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = -0.0;
  return __return_storage_ptr__;
}

// GetProjectorScale @ 14ac239f0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorScale
          (FCustomizableObjectInstanceDescriptor *this,TVector<double> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  UCustomizableObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  UCustomizableObjectPrivate *pUVar9;
  TVector<double> *pTVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int local_res8 [2];
  FName local_48;
  FString local_40;
  
  pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar9,param_1);
    pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UCustomizableObject *)0x0) {
      uVar7 = 0xffffffff;
    }
    else {
      pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
      uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar9,param_1,Projector);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar7)) {
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar9,local_res8);
      if ((!bVar6) || (param_2 == -1)) {
        uVar8 = 0;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        lVar13 = (longlong)(int)uVar7 * 0x68;
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        fVar1 = *(float *)(pFVar4 + lVar13 + 0x38);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(pFVar4 + lVar13 + 0x34);
        fVar2 = *(float *)(pFVar4 + lVar13 + 0x3c);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
      uVar12 = 0;
      uVar8 = uVar12;
      if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar5)();
        return pTVar10;
      }
      if ((-1 < param_2) &&
         (lVar13 = (longlong)(int)uVar7 * 0x68,
         param_2 < *(int *)((this->ProjectorParameters).AllocatorInstance.Data + lVar13 + 0x60))) {
        uVar8 = uVar12;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar4 + lVar13 + 0x60)) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        lVar13 = *(longlong *)(pFVar4 + lVar13 + 0x58);
        lVar11 = (longlong)param_2 * 0x38;
        fVar1 = *(float *)(lVar11 + 0x28 + lVar13);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(lVar11 + 0x24 + lVar13);
        fVar2 = *(float *)(lVar11 + 0x2c + lVar13);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_40,L"None");
      }
      else {
        local_48 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_48,&local_40);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = -0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = -0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = -0.0;
  return __return_storage_ptr__;
}

// GetProjectorUp @ 14ac23d70

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorUp
          (FCustomizableObjectInstanceDescriptor *this,TVector<double> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  UCustomizableObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  UCustomizableObjectPrivate *pUVar9;
  TVector<double> *pTVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int local_res8 [2];
  FName local_48;
  FString local_40;
  
  pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar9,param_1);
    pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UCustomizableObject *)0x0) {
      uVar7 = 0xffffffff;
    }
    else {
      pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
      uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar9,param_1,Projector);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar7)) {
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar9,local_res8);
      if ((!bVar6) || (param_2 == -1)) {
        uVar8 = 0;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        lVar13 = (longlong)(int)uVar7 * 0x68;
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        fVar1 = *(float *)(pFVar4 + lVar13 + 0x2c);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(pFVar4 + lVar13 + 0x28);
        fVar2 = *(float *)(pFVar4 + lVar13 + 0x30);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
      uVar12 = 0;
      uVar8 = uVar12;
      if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar5)();
        return pTVar10;
      }
      if ((-1 < param_2) &&
         (lVar13 = (longlong)(int)uVar7 * 0x68,
         param_2 < *(int *)((this->ProjectorParameters).AllocatorInstance.Data + lVar13 + 0x60))) {
        uVar8 = uVar12;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar4 + lVar13 + 0x60)) {
          uVar12 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
        lVar13 = *(longlong *)(pFVar4 + lVar13 + 0x58);
        lVar11 = (longlong)param_2 * 0x38;
        fVar1 = *(float *)(lVar11 + 0x1c + lVar13);
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(lVar11 + 0x18 + lVar13);
        fVar2 = *(float *)(lVar11 + 0x20 + lVar13);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_40,L"None");
      }
      else {
        local_48 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_48,&local_40);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = -0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = -0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = -0.0;
  return __return_storage_ptr__;
}

// GetProjectorValue @ 14ac240f0

void __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorValue
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,float *param_6,
          ECustomizableObjectProjectorType *param_7,int param_8)

{
  TVector<float>_u_0 local_48;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  GetProjectorValueF(this,param_1,(TVector<float> *)&local_48._s_0,(TVector<float> *)&local_38._s_0,
                     (TVector<float> *)&local_28._s_0,(TVector<float> *)&local_18._s_0,param_6,
                     param_7,param_8);
  (param_2->field0_0x0)._s_0.X = (double)local_48._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)local_48._s_0.Y;
  (param_2->field0_0x0)._s_0.Z = (double)local_48._s_0.Z;
  (param_3->field0_0x0)._s_0.X = (double)local_38._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)local_38._s_0.Y;
  (param_3->field0_0x0)._s_0.Z = (double)local_38._s_0.Z;
  (param_4->field0_0x0)._s_0.X = (double)local_28._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)local_28._s_0.Y;
  (param_4->field0_0x0)._s_0.Z = (double)local_28._s_0.Z;
  (param_5->field0_0x0)._s_0.X = (double)local_18._s_0.X;
  (param_5->field0_0x0)._s_0.Y = (double)local_18._s_0.Y;
  (param_5->field0_0x0)._s_0.Z = (double)local_18._s_0.Z;
  return;
}

// GetProjectorValueF @ 14ac24220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorValueF
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4,TVector<float> *param_5,float *param_6,
          ECustomizableObjectProjectorType *param_7,int param_8)

{
  UCustomizableObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UCustomizableObjectPrivate *pUVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int local_res8 [2];
  FName local_38;
  FString local_30;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    pUVar5 = UCustomizableObject::GetPrivate(pUVar1);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar5,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      pUVar5 = UCustomizableObject::GetPrivate(pUVar1);
      uVar4 = UCustomizableObjectPrivate::FindParameterTyped(pUVar5,param_1,Projector);
    }
    if ((local_res8[0] < 0) || ((int)uVar4 < 0)) {
      if (2 < (byte)LogMutable._0_1_) {
        pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
        if (pUVar1 == (UCustomizableObject *)0x0) {
          ::FString::FString(&local_30,L"None");
        }
        else {
          local_38 = (FName)pUVar1->_padding_;
          ::FName::ToString(&local_38,&local_30);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      uVar6 = 0;
      if ((int)uVar4 < (this->ProjectorParameters).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->ProjectorParameters).AllocatorInstance.Data;
      pUVar5 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar3 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar5,local_res8);
      if ((bVar3) && (param_8 != -1)) {
        if (((param_8 < 0) || (*(int *)(pFVar7 + (longlong)(int)uVar4 * 0x68 + 0x60) <= param_8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ProjectorParameter.RangeValues.IsValidIndex(RangeIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                               ,0x8ac,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = 0;
        if (param_8 < *(int *)(pFVar7 + (longlong)(int)uVar4 * 0x68 + 0x60)) {
          uVar6 = (uint)~param_8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar7 = (FScriptContainerElement *)
                 ((longlong)param_8 * 0x38 +
                 *(longlong *)(pFVar7 + (longlong)(int)uVar4 * 0x68 + 0x58));
      }
      else {
        pFVar7 = pFVar7 + (longlong)(int)uVar4 * 0x68 + 0x10;
      }
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)&param_2->field0_0x0 = *(undefined8 *)pFVar7;
        (param_2->field0_0x0)._s_0.Z = *(float *)(pFVar7 + 8);
        *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(pFVar7 + 0xc);
        (param_3->field0_0x0)._s_0.Z = *(float *)(pFVar7 + 0x14);
        *(undefined8 *)&param_4->field0_0x0 = *(undefined8 *)(pFVar7 + 0x18);
        (param_4->field0_0x0)._s_0.Z = *(float *)(pFVar7 + 0x20);
        *(undefined8 *)&param_5->field0_0x0 = *(undefined8 *)(pFVar7 + 0x24);
        (param_5->field0_0x0)._s_0.Z = *(float *)(pFVar7 + 0x2c);
        *param_6 = *(float *)(pFVar7 + 0x34);
        *param_7 = (ECustomizableObjectProjectorType)pFVar7[0x30];
      }
    }
  }
  return;
}

// GetProjectorValueRange @ 14ac24520

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCustomizableObjectInstanceDescriptor::GetProjectorValueRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return -1;
    }
  }
  else {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar3 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Projector);
    if (-1 < (int)uVar3) {
      uVar4 = 0;
      if ((int)uVar3 < (this->ProjectorParameters).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      return *(int *)((this->ProjectorParameters).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x68 + 0x60);
    }
  }
  return -1;
}

// GetSkeletalMeshParameterSelectedOption @ 14ac24df0

/* WARNING: Enum "Type": Some values do not have unique names */

USkeletalMesh * __thiscall
FCustomizableObjectInstanceDescriptor::GetSkeletalMeshParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UCustomizableObjectPrivate *pUVar7;
  USkeletalMesh *pUVar8;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  FName local_res20;
  FString local_38;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar7,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
      uVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,param_1,SkeletalMesh);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar5)) {
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar4 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar7,local_res8);
      if ((!bVar4) || (param_2 == -1)) {
        uVar6 = 0;
        if ((int)uVar5 < (this->SkeletalMeshParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (USkeletalMesh *)(*pcVar3)();
          return pUVar8;
        }
        return *(USkeletalMesh **)
                ((this->SkeletalMeshParameters).AllocatorInstance.Data +
                (longlong)(int)uVar5 * 0x38 + 0x10);
      }
      uVar9 = 0;
      uVar6 = uVar9;
      if ((int)uVar5 < (this->SkeletalMeshParameters).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (USkeletalMesh *)(*pcVar3)();
        return pUVar8;
      }
      if ((-1 < param_2) &&
         (lVar10 = (longlong)(int)uVar5 * 0x38,
         param_2 < *(int *)((this->SkeletalMeshParameters).AllocatorInstance.Data + lVar10 + 0x30)))
      {
        uVar6 = uVar9;
        if ((int)uVar5 < (this->SkeletalMeshParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (USkeletalMesh *)(*pcVar3)();
          return pUVar8;
        }
        pFVar2 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar2 + lVar10 + 0x30)) {
          uVar9 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (USkeletalMesh *)(*pcVar3)();
          return pUVar8;
        }
        return *(USkeletalMesh **)(*(longlong *)(pFVar2 + lVar10 + 0x28) + (longlong)param_2 * 8);
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res20 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res20,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return (USkeletalMesh *)0x0;
}

// GetState @ 14ac25190

int __thiscall
FCustomizableObjectInstanceDescriptor::GetState(FCustomizableObjectInstanceDescriptor *this)

{
  return this->State;
}

// GetTextureParameterSelectedOption @ 14ac25220

/* WARNING: Enum "Type": Some values do not have unique names */

UTexture * __thiscall
FCustomizableObjectInstanceDescriptor::GetTextureParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UCustomizableObjectPrivate *pUVar7;
  UTexture *pUVar8;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  FName local_res20;
  FString local_38;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
    local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar7,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
      uVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,param_1,Texture);
    }
    if ((-1 < local_res8[0]) && (-1 < (int)uVar5)) {
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      bVar4 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar7,local_res8);
      if ((!bVar4) || (param_2 == -1)) {
        uVar6 = 0;
        if ((int)uVar5 < (this->TextureParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UTexture *)(*pcVar3)();
          return pUVar8;
        }
        return *(UTexture **)
                ((this->TextureParameters).AllocatorInstance.Data +
                (longlong)(int)uVar5 * 0x38 + 0x10);
      }
      uVar9 = 0;
      uVar6 = uVar9;
      if ((int)uVar5 < (this->TextureParameters).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UTexture *)(*pcVar3)();
        return pUVar8;
      }
      if ((-1 < param_2) &&
         (lVar10 = (longlong)(int)uVar5 * 0x38,
         param_2 < *(int *)((this->TextureParameters).AllocatorInstance.Data + lVar10 + 0x30))) {
        uVar6 = uVar9;
        if ((int)uVar5 < (this->TextureParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UTexture *)(*pcVar3)();
          return pUVar8;
        }
        pFVar2 = (this->TextureParameters).AllocatorInstance.Data;
        if (param_2 < *(int *)(pFVar2 + lVar10 + 0x30)) {
          uVar9 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UTexture *)(*pcVar3)();
          return pUVar8;
        }
        return *(UTexture **)(*(longlong *)(pFVar2 + lVar10 + 0x28) + (longlong)param_2 * 8);
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res20 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res20,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return (UTexture *)0x0;
}

// GetTextureValueRange @ 14ac25520

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FCustomizableObjectInstanceDescriptor::GetTextureValueRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return -1;
    }
  }
  else {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar3 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Texture);
    if (-1 < (int)uVar3) {
      uVar4 = 0;
      if ((int)uVar3 < (this->TextureParameters).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      return *(int *)((this->TextureParameters).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0x38 + 0x30);
    }
  }
  return -1;
}

// GetTransformParameterSelectedOption @ 14ac25750

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
FCustomizableObjectInstanceDescriptor::GetTransformParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,TTransform<double> *__return_storage_ptr__,
          FString *param_1)

{
  UCustomizableObject *pUVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  __m128d _Var7;
  __m128d _Var8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  UCustomizableObjectPrivate *pUVar12;
  TTransform<double> *pTVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  FName local_res8;
  FString local_28;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    pUVar12 = UCustomizableObject::GetPrivate(pUVar1);
    UCustomizableObjectPrivate::FindParameter(pUVar12,param_1);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 != (UCustomizableObject *)0x0) {
      pUVar12 = UCustomizableObject::GetPrivate(pUVar1);
      uVar10 = UCustomizableObjectPrivate::FindParameterTyped(pUVar12,param_1,Transform);
      if (uVar10 != 0xffffffff) {
        if (((int)uVar10 < 0) || ((this->TransformParameters).ArrayNum <= (int)uVar10)) {
          pTVar13 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          uVar11 = 0;
          if ((int)uVar10 < (this->TransformParameters).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            pTVar13 = (TTransform<double> *)(*pcVar2)();
            return pTVar13;
          }
          pTVar13 = (TTransform<double> *)
                    ((this->TransformParameters).AllocatorInstance.Data +
                    (longlong)(int)uVar10 * 0x80 + 0x10);
        }
        dVar3 = (pTVar13->Rotation).XY.m128d_f64[1];
        dVar4 = (pTVar13->Rotation).ZW.m128d_f64[0];
        dVar5 = (pTVar13->Rotation).ZW.m128d_f64[1];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
        dVar3 = (pTVar13->Translation).XY.m128d_f64[0];
        dVar6 = (pTVar13->Translation).XY.m128d_f64[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
        dVar4 = (pTVar13->Translation).ZW.m128d_f64[0];
        dVar5 = (pTVar13->Translation).ZW.m128d_f64[1];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
        uVar14 = *(undefined4 *)(pTVar13->Scale3D).XY.m128d_f64;
        uVar15 = *(undefined4 *)((longlong)(pTVar13->Scale3D).XY.m128d_f64 + 4);
        uVar16 = *(undefined4 *)((pTVar13->Scale3D).XY.m128d_f64 + 1);
        uVar17 = *(undefined4 *)((longlong)(pTVar13->Scale3D).XY.m128d_f64 + 0xc);
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
        uVar18 = *(undefined4 *)(pTVar13->Scale3D).ZW.m128d_f64;
        uVar19 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 4);
        uVar20 = *(undefined4 *)((pTVar13->Scale3D).ZW.m128d_f64 + 1);
        uVar21 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 0xc);
        goto LAB_14ac25945;
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  _Var7.m128d_f64 =
       FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY.m128d_f64;
  _Var8 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var7.m128d_f64;
  _Var7 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var8.m128d_f64;
  uVar14 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY.m128d_f64
           [0]._0_4_;
  uVar15 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY.m128d_f64
           [0]._4_4_;
  uVar16 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY.m128d_f64
           [1]._0_4_;
  uVar17 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY.m128d_f64
           [1]._4_4_;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var7.m128d_f64;
  uVar18 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW.m128d_f64
           [0]._0_4_;
  uVar19 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW.m128d_f64
           [0]._4_4_;
  uVar20 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW.m128d_f64
           [1]._0_4_;
  uVar21 = FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW.m128d_f64
           [1]._4_4_;
LAB_14ac25945:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar14;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar15;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar16;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar17;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar18;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar19;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar20;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar21;
  return __return_storage_ptr__;
}

// HasAnyParameters @ 14ac25a70

bool __thiscall
FCustomizableObjectInstanceDescriptor::HasAnyParameters(FCustomizableObjectInstanceDescriptor *this)

{
  if (((((this->BoolParameters).ArrayNum == 0) && ((this->IntParameters).ArrayNum == 0)) &&
      ((this->FloatParameters).ArrayNum == 0)) &&
     ((((this->TextureParameters).ArrayNum == 0 && ((this->ProjectorParameters).ArrayNum == 0)) &&
      (((this->TransformParameters).ArrayNum == 0 && ((this->VectorParameters).ArrayNum == 0)))))) {
    return false;
  }
  return true;
}

// IsMultilayerProjector @ 14ac279e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCustomizableObjectInstanceDescriptor::IsMultilayerProjector
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UCustomizableObjectPrivate *pUVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    return false;
  }
  pUVar5 = UCustomizableObject::GetPrivate(pUVar1);
  iVar3 = UCustomizableObjectPrivate::FindParameterTyped(pUVar5,param_1,Projector);
  if (iVar3 == -1) {
    `FCustomizableObjectInstanceDescriptor::IsMultilayerProjector'::__l8::<lambda_1>::operator()
              (local_res8);
    return false;
  }
  ::FString::ConcatFF(&local_18,param_1,&NUM_LAYERS_PARAMETER_POSTFIX);
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  iVar3 = -1;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    iVar4 = -1;
  }
  else {
    pUVar5 = UCustomizableObject::GetPrivate(pUVar1);
    iVar4 = UCustomizableObjectPrivate::FindParameterTyped(pUVar5,&local_18,Float);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar4 == -1) {
    `FCustomizableObjectInstanceDescriptor::IsMultilayerProjector'::__l11::<lambda_2>::operator()
              (local_res8);
    bVar2 = false;
  }
  else {
    ::FString::ConcatFF(&local_18,param_1,&IMAGE_PARAMETER_POSTFIX);
    pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UCustomizableObject *)0x0) {
      iVar4 = -1;
    }
    else {
      pUVar5 = UCustomizableObject::GetPrivate(pUVar1);
      iVar4 = UCustomizableObjectPrivate::FindParameterTyped(pUVar5,&local_18,Int);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (iVar4 == -1) {
      `FCustomizableObjectInstanceDescriptor::IsMultilayerProjector'::__l14::<lambda_3>::operator()
                (local_res8);
      bVar2 = false;
    }
    else {
      ::FString::ConcatFF(&local_18,param_1,&OPACITY_PARAMETER_POSTFIX);
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 != (UCustomizableObject *)0x0) {
        pUVar5 = UCustomizableObject::GetPrivate(pUVar1);
        iVar3 = UCustomizableObjectPrivate::FindParameterTyped(pUVar5,&local_18,Float);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (iVar3 == -1) {
        `FCustomizableObjectInstanceDescriptor::IsMultilayerProjector'::__l17::<lambda_4>::
        operator()(local_res8);
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
  }
  return bVar2;
}

// LoadDescriptor @ 14ac28f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::LoadDescriptor
          (FCustomizableObjectInstanceDescriptor *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  int *piVar4;
  longlong *plVar5;
  FFastPathLoadBuffer *pFVar6;
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  EMutableParameterType EVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  FString *pFVar19;
  UCustomizableObjectPrivate *pUVar20;
  FScriptContainerElement *pFVar21;
  FSoftObjectPath *pFVar22;
  UObject *pUVar23;
  UClass *pUVar24;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar25;
  FScriptContainerElement *pFVar26;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> *pTVar28;
  uint uVar29;
  ulonglong uVar30;
  ForAnyElementType FVar31;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  char cVar36;
  FScriptContainerElement FVar37;
  undefined1 auStackY_308 [32];
  int local_2b4;
  char local_2b0 [16];
  FString local_2a0;
  uint local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280 [2];
  UTexture *local_278;
  USkeletalMesh *local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_268;
  TArray<FString,TSizedDefaultAllocator<32>_> local_258;
  TArray<FString,TSizedDefaultAllocator<32>_> local_248;
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  FCustomizableObjectInstanceDescriptor *local_228;
  longlong local_220;
  TArray<float,TSizedDefaultAllocator<32>_> local_218;
  TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> local_208;
  int local_1f8 [2];
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FArchiveState *local_1c0;
  FLinearColor_u_0 local_1b8;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TVector<float>_u_0 local_188 [2];
  TVector<float>_u_0 aTStack_170 [2];
  uint local_158;
  float fStack_154;
  FString local_150;
  FString local_140;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  FSoftObjectPath local_108;
  FSoftObjectPath local_e8;
  double local_c8 [2];
  double local_b8 [2];
  undefined1 local_a8 [24];
  double dStack_90;
  undefined1 local_88 [24];
  double dStack_70;
  ulonglong local_68;
  
  cVar36 = local_2b0[0];
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_228 = this;
  local_1c0 = (FArchiveState *)param_1;
  if ((this->CustomizableObject).field0_0x0.DebugPtr == (UCustomizableObject *)0x0) {
    if ((byte)LogMutable._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    return;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_28c = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_28c = (uint)(local_2b0[0] != '\0');
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28c,4);
    if (1 < local_28c) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar16 = local_28c;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14ac29032;
  }
  else {
    uVar16 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  cVar36 = uVar16 != 0;
LAB_14ac29032:
  piVar2 = &this->State;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_220 = 0x2a;
  local_290 = UCustomizableObject::GetParameterCount((this->CustomizableObject).field0_0x0.DebugPtr)
  ;
  if (cVar36 == '\0') {
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_290,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_290);
      }
    }
    else {
      local_290 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
  }
  uVar12 = _UNK_1522bb2b8;
  uVar11 = ___xmm_42c80000412000004120000000000000;
  uVar10 = _UNK_150689648;
  uVar9 = ___xmm_3f800000000000000000000000000000;
  local_2b4 = 0;
  lVar32 = 0x2a;
  if ((int)local_290 < 1) {
    return;
  }
LAB_14ac29120:
  local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar33 = -1;
  local_2a0.Data.ArrayNum = 0;
  local_2a0.Data.ArrayMax = 0;
  if (cVar36 == '\0') {
    ::operator<<(param_1,&local_2a0);
    EVar14 = UCustomizableObject::GetParameterTypeByName
                       ((this->CustomizableObject).field0_0x0.DebugPtr,&local_2a0);
  }
  else {
    pFVar19 = UCustomizableObject::GetParameterName
                        ((this->CustomizableObject).field0_0x0.DebugPtr,local_2b4);
    if (&local_2a0 != pFVar19) {
      iVar33 = (pFVar19->Data).ArrayNum;
      pFVar26 = (pFVar19->Data).AllocatorInstance.Data;
      local_2a0.Data.ArrayNum = iVar33;
      if ((iVar33 == 0) && (local_2a0.Data.ArrayMax == 0)) {
        local_2a0.Data.ArrayNum = 0;
        local_2a0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar33,local_2a0.Data.ArrayMax,(ForAnyElementType *)&local_2a0,iVar33,
                   &local_2a0.Data.ArrayMax);
        if (iVar33 != 0) {
          memcpy(local_2a0.Data.AllocatorInstance.Data,pFVar26,(longlong)iVar33 * 2);
        }
      }
    }
    pUVar20 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
    EVar14 = UCustomizableObjectPrivate::GetParameterType(pUVar20,local_2b4);
    iVar33 = local_2b4;
  }
  switch(EVar14) {
  case Bool:
    pFVar6 = ((FArchiveState *)param_1)->ActiveFPLB;
    FVar37 = (FScriptContainerElement)0x0;
    puVar1 = (uint *)((longlong)pFVar6->StartFastPathLoadBuffer + 4);
    if (pFVar6->EndFastPathLoadBuffer < puVar1) {
      local_280[0] = 0;
      (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))(param_1,local_280,4);
      if (1 < local_280[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar16 = local_280[0];
      if (param_1->ArIsLoading == 0) goto LAB_14ac2925d;
    }
    else {
      uVar16 = *(uint *)pFVar6->StartFastPathLoadBuffer;
      pFVar6->StartFastPathLoadBuffer = (uchar *)puVar1;
    }
    FVar37 = (FScriptContainerElement)(uVar16 != 0);
LAB_14ac2925d:
    iVar33 = (this->BoolParameters).ArrayNum;
    pFVar21 = (this->BoolParameters).AllocatorInstance.Data;
    pFVar26 = pFVar21 + (longlong)iVar33 * 0x28;
    do {
      if ((this->BoolParameters).ArrayNum != iVar33) {
        local_2b0[1] = 0;
        `TCheckedPointerIterator<FCustomizableObjectBoolParameterValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2b0 + 1);
      }
      if (pFVar21 == pFVar26) break;
      iVar18 = *(int *)(pFVar21 + 8);
      if (iVar18 == local_2a0.Data.ArrayNum) {
        if (iVar18 < 2) goto LAB_14ac292c1;
        iVar18 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar21,(wchar_t *)local_2a0.Data.AllocatorInstance.Data);
        bVar15 = iVar18 == 0;
      }
      else {
        bVar15 = iVar18 + local_2a0.Data.ArrayNum == 1;
      }
      if (bVar15) goto LAB_14ac292c1;
      pFVar21 = pFVar21 + 0x28;
    } while( true );
  case Int:
    this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
    local_284 = 0;
    local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.Data.ArrayNum = 0;
    local_1f0.Data.ArrayMax = 0;
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    if (this_00 == (UCustomizableObject *)0x0) {
      uVar16 = 0xffffffff;
      pUVar20 = UCustomizableObject::GetPrivate((UCustomizableObject *)0x0);
    }
    else {
      pUVar20 = UCustomizableObject::GetPrivate(this_00);
      uVar16 = UCustomizableObjectPrivate::FindParameterTyped(pUVar20,&local_2a0,Int);
      pUVar20 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      uVar29 = 0;
      if ((int)uVar16 < (this->IntParameters).ArrayNum) {
        uVar29 = ~uVar16 >> 0x1f;
      }
      if (uVar29 != 0) goto LAB_14ac294fd;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
LAB_14ac294fd:
    local_1f8[0] = UCustomizableObjectPrivate::FindParameter
                             (pUVar20,(FString *)
                                      ((this->IntParameters).AllocatorInstance.Data +
                                      (longlong)(int)uVar16 * 0x40));
    pUVar20 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
    bVar15 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar20,local_1f8);
    if (cVar36 == '\0') {
      ::operator<<(param_1,&local_1f0);
      if (bVar15) {
        TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_268);
      }
    }
    else {
      pFVar6 = ((FArchiveState *)param_1)->ActiveFPLB;
      if (pFVar6->EndFastPathLoadBuffer < (uint *)((longlong)pFVar6->StartFastPathLoadBuffer + 4)) {
        if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + local_220) & 1) == 0) {
          (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_284);
        }
      }
      else {
        local_284 = *(uint *)pFVar6->StartFastPathLoadBuffer;
        pFVar6->StartFastPathLoadBuffer = pFVar6->StartFastPathLoadBuffer + 4;
      }
      if (bVar15) {
        TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&local_238);
      }
    }
    iVar18 = (this->IntParameters).ArrayNum;
    pFVar26 = (this->IntParameters).AllocatorInstance.Data;
    pFVar21 = pFVar26 + (longlong)iVar18 * 0x40;
    do {
      if ((this->IntParameters).ArrayNum != iVar18) {
        local_2b0[3] = 0;
        `TCheckedPointerIterator<FCustomizableObjectIntParameterValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2b0 + 3);
      }
      if (pFVar26 == pFVar21) goto LAB_14ac297b8;
      iVar17 = *(int *)(pFVar26 + 8);
      if (iVar17 == local_2a0.Data.ArrayNum) {
        if (iVar17 < 2) goto LAB_14ac29607;
        iVar17 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar26,(wchar_t *)local_2a0.Data.AllocatorInstance.Data);
        bVar15 = iVar17 == 0;
      }
      else {
        bVar15 = iVar17 + local_2a0.Data.ArrayNum == 1;
      }
      if (bVar15) goto LAB_14ac29607;
      pFVar26 = pFVar26 + 0x40;
    } while( true );
  case Float:
    pFVar6 = ((FArchiveState *)param_1)->ActiveFPLB;
    local_288 = 0;
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ArrayNum = 0;
    local_218.ArrayMax = 0;
    if (pFVar6->EndFastPathLoadBuffer < (uint *)((longlong)pFVar6->StartFastPathLoadBuffer + 4)) {
      if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + lVar32) & 1) == 0) {
        (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))(param_1,&local_288,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_288);
      }
    }
    else {
      local_288 = *(uint *)pFVar6->StartFastPathLoadBuffer;
      pFVar6->StartFastPathLoadBuffer = pFVar6->StartFastPathLoadBuffer + 4;
    }
    TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&local_218);
    iVar33 = (this->FloatParameters).ArrayNum;
    pFVar26 = (this->FloatParameters).AllocatorInstance.Data;
    pFVar21 = pFVar26 + (longlong)iVar33 * 0x38;
    do {
      if ((this->FloatParameters).ArrayNum != iVar33) {
        local_2b0[2] = 0;
        `TCheckedPointerIterator<FCustomizableObjectFloatParameterValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2b0 + 2);
      }
      FVar31.Data = local_218.AllocatorInstance.Data;
      if (pFVar26 == pFVar21) goto LAB_14ac29401;
      iVar18 = *(int *)(pFVar26 + 8);
      if (iVar18 == local_2a0.Data.ArrayNum) {
        if (iVar18 < 2) goto LAB_14ac29391;
        iVar18 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar26,(wchar_t *)local_2a0.Data.AllocatorInstance.Data);
        bVar15 = iVar18 == 0;
      }
      else {
        bVar15 = iVar18 + local_2a0.Data.ArrayNum == 1;
      }
      if (bVar15) goto LAB_14ac29391;
      pFVar26 = pFVar26 + 0x38;
    } while( true );
  case Color:
    local_1b8 = FLinearColor::Black.field0_0x0;
    ::operator<<(param_1,(FLinearColor *)&local_1b8._s_0);
    iVar33 = (this->VectorParameters).ArrayNum;
    pFVar26 = (this->VectorParameters).AllocatorInstance.Data;
    pFVar21 = pFVar26 + (longlong)iVar33 * 0x30;
    do {
      if ((this->VectorParameters).ArrayNum != iVar33) {
        local_2b0[4] = 0;
        `TCheckedPointerIterator<FCustomizableObjectVectorParameterValue,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2b0 + 4);
      }
      if (pFVar26 == pFVar21) break;
      iVar18 = *(int *)(pFVar26 + 8);
      if (iVar18 == local_2a0.Data.ArrayNum) {
        if (iVar18 < 2) goto LAB_14ac298f1;
        iVar18 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar26,(wchar_t *)local_2a0.Data.AllocatorInstance.Data);
        bVar15 = iVar18 == 0;
      }
      else {
        bVar15 = iVar18 + local_2a0.Data.ArrayNum == 1;
      }
      if (bVar15) goto LAB_14ac298f1;
      pFVar26 = pFVar26 + 0x30;
    } while( true );
  case Projector:
    local_158 = local_158 & 0xffffff00;
    fStack_154 = 6.2831855;
    local_188[0]._0_8_ = uVar9;
    local_188._8_8_ = uVar10;
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188[1]._4_8_ = uVar9;
    aTStack_170[0]._0_8_ = uVar10;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    aTStack_170._8_8_ = uVar11;
    aTStack_170[1]._4_8_ = uVar12;
    ::operator<<(param_1,(FCustomizableObjectProjector *)local_188);
    TArrayPrivateFriend::Serialize<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_>
              (param_1,&local_208);
    iVar33 = (this->ProjectorParameters).ArrayNum;
    pFVar26 = (this->ProjectorParameters).AllocatorInstance.Data;
    pFVar21 = pFVar26 + (longlong)iVar33 * 0x68;
    do {
      if ((this->ProjectorParameters).ArrayNum != iVar33) {
        local_2b0[0] = '\0';
        `TCheckedPointerIterator<FCustomizableObjectProjectorParameterValue,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_2b0);
      }
      FVar31.Data = local_208.AllocatorInstance.Data;
      if (pFVar26 == pFVar21) goto LAB_14ac29401;
      iVar18 = *(int *)(pFVar26 + 8);
      if (iVar18 == local_2a0.Data.ArrayNum) {
        if (iVar18 < 2) goto LAB_14ac2a056;
        iVar18 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar26,(wchar_t *)local_2a0.Data.AllocatorInstance.Data);
        bVar15 = iVar18 == 0;
      }
      else {
        bVar15 = iVar18 + local_2a0.Data.ArrayNum == 1;
      }
      if (bVar15) goto LAB_14ac2a056;
      pFVar26 = pFVar26 + 0x68;
    } while( true );
  case Texture:
    local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.Data.ArrayNum = 0;
    local_1e0.Data.ArrayMax = 0;
    local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ArrayNum = 0;
    local_258.ArrayMax = 0;
    ::operator<<(param_1,&local_1e0);
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_258);
    iVar33 = (this->TextureParameters).ArrayNum;
    pFVar26 = (this->TextureParameters).AllocatorInstance.Data;
    pFVar21 = pFVar26 + (longlong)iVar33 * 0x38;
    do {
      if ((this->TextureParameters).ArrayNum != iVar33) {
        local_2b0[5] = 0;
        `TCheckedPointerIterator<FCustomizableObjectTextureParameterValue,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_2b0 + 5);
      }
      if (pFVar26 == pFVar21) goto LAB_14ac29cef;
      iVar18 = *(int *)(pFVar26 + 8);
      if (iVar18 == local_2a0.Data.ArrayNum) {
        if (iVar18 < 2) goto LAB_14ac29b11;
        iVar18 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar26,(wchar_t *)local_2a0.Data.AllocatorInstance.Data);
        bVar15 = iVar18 == 0;
      }
      else {
        bVar15 = iVar18 + local_2a0.Data.ArrayNum == 1;
      }
      if (bVar15) goto LAB_14ac29b11;
      pFVar26 = pFVar26 + 0x38;
    } while( true );
  case Transform:
    local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_a8._0_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_a8._8_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_a8._16_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    dStack_90 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_88._0_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_88._8_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_88._16_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dStack_70 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    UE::Math::operator<<(param_1,(TQuat<double> *)local_c8);
    UE::Math::operator<<(param_1,(TVector<double> *)local_a8);
    UE::Math::operator<<(param_1,(TVector<double> *)local_88);
    if (param_1->ArIsLoading != 0) {
      dStack_90 = 0.0;
      dStack_70 = 0.0;
    }
    iVar33 = (this->TransformParameters).ArrayNum;
    pFVar26 = (this->TransformParameters).AllocatorInstance.Data;
    pFVar21 = pFVar26 + (longlong)iVar33 * 0x80;
    do {
      if ((this->TransformParameters).ArrayNum != iVar33) {
        local_2b0[9] = 0;
        `TCheckedPointerIterator<FCustomizableObjectTransformParameterValue,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_2b0 + 9);
      }
      if (pFVar26 == pFVar21) break;
      iVar18 = *(int *)(pFVar26 + 8);
      if (iVar18 == local_2a0.Data.ArrayNum) {
        if (iVar18 < 2) goto LAB_14ac29a39;
        iVar18 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar26,(wchar_t *)local_2a0.Data.AllocatorInstance.Data);
        bVar15 = iVar18 == 0;
      }
      else {
        bVar15 = iVar18 + local_2a0.Data.ArrayNum == 1;
      }
      if (bVar15) goto LAB_14ac29a39;
      pFVar26 = pFVar26 + 0x80;
    } while( true );
  case SkeletalMesh:
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.Data.ArrayNum = 0;
    local_1d0.Data.ArrayMax = 0;
    local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ArrayNum = 0;
    local_248.ArrayMax = 0;
    ::operator<<(param_1,&local_1d0);
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_248);
    iVar33 = (this->SkeletalMeshParameters).ArrayNum;
    pFVar26 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
    pFVar21 = pFVar26 + (longlong)iVar33 * 0x38;
    do {
      if ((this->SkeletalMeshParameters).ArrayNum != iVar33) {
        local_2b0[7] = 0;
        `TCheckedPointerIterator<FCustomizableObjectSkeletalMeshParameterValue,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_2b0 + 7);
      }
      if (pFVar26 == pFVar21) goto LAB_14ac29f80;
      iVar18 = *(int *)(pFVar26 + 8);
      if (iVar18 == local_2a0.Data.ArrayNum) {
        if (iVar18 < 2) goto LAB_14ac29da2;
        iVar18 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)pFVar26,(wchar_t *)local_2a0.Data.AllocatorInstance.Data);
        bVar15 = iVar18 == 0;
      }
      else {
        bVar15 = iVar18 + local_2a0.Data.ArrayNum == 1;
      }
      if (bVar15) goto LAB_14ac29da2;
      pFVar26 = pFVar26 + 0x38;
    } while( true );
  default:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                        ,0x211,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  goto LAB_14ac2940f;
LAB_14ac29da2:
  local_198 = local_1d0.Data.AllocatorInstance.Data;
  if (local_1d0.Data.ArrayNum == 0) {
    iStack_190 = 0;
  }
  else {
    iStack_190 = local_1d0.Data.ArrayNum + -1;
  }
  local_118._12_4_ = uStack_18c;
  local_118.Size = iStack_190;
  local_118.DataPtr = (wchar_t *)local_1d0.Data.AllocatorInstance.Data;
  pFVar22 = FSoftObjectPath::ConstructFromStringPath(&local_e8,&local_118);
  pUVar23 = FSoftObjectPath::TryLoad(pFVar22,(FUObjectSerializeContext *)0x0);
  if (pUVar23 == (UObject *)0x0) {
LAB_14ac29e0e:
    pUVar23 = (UObject *)0x0;
  }
  else {
    pUVar24 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar33 = (int)pUVar24->_padding_;
    if ((*(int *)(*(longlong *)&pUVar23->field_0x10 + 0x38) < iVar33) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar23->field_0x10 + 0x30) + (longlong)iVar33 * 8) !=
        &pUVar24->_padding_)) goto LAB_14ac29e0e;
  }
  if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar23);
  }
  *(UObject **)(pFVar26 + 0x10) = pUVar23;
  if (local_248.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_248._8_8_ & 0xffffffff);
  }
  pFVar21 = pFVar26 + 0x34;
  *(undefined4 *)(pFVar26 + 0x30) = 0;
  if (*(int *)pFVar21 != local_248.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_248.ArrayNum,(ForAnyElementType *)(pFVar26 + 0x28),0,(int *)pFVar21);
  }
  iVar33 = local_248.ArrayNum;
  pFVar35 = local_248.AllocatorInstance.Data + (longlong)local_248.ArrayNum * 0x10;
  FVar31.Data = local_248.AllocatorInstance.Data;
  while( true ) {
    if (local_248.ArrayNum != iVar33) {
      local_2b0[8] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2b0 + 8);
    }
    this = local_228;
    if (FVar31.Data == pFVar35) break;
    local_270 = ToObject<USkeletalMesh>((FString *)FVar31.Data);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_270 != (USkeletalMesh *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_270);
    }
    if (((*(USkeletalMesh ***)(pFVar26 + 0x28) <= &local_270) &&
        (&local_270 < *(USkeletalMesh ***)(pFVar26 + 0x28) + *(int *)pFVar21)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar18 = *(int *)(pFVar26 + 0x30);
    if (iVar18 == *(int *)pFVar21) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)(pFVar26 + 0x28),(int *)pFVar21);
    }
    *(int *)(pFVar26 + 0x30) = iVar18 + 1;
    *(USkeletalMesh **)(*(longlong *)(pFVar26 + 0x28) + (longlong)iVar18 * 8) = local_270;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_270 != (USkeletalMesh *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_270);
    }
    FVar31.Data = FVar31.Data + 0x10;
  }
LAB_14ac29f80:
  DestructItems<FString,int>((FString *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
  FVar31.Data = local_1d0.Data.AllocatorInstance.Data;
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
    FVar31.Data = local_1d0.Data.AllocatorInstance.Data;
  }
  goto LAB_14ac29401;
LAB_14ac29a39:
  *(double *)(pFVar26 + 0x10) = local_c8[0];
  *(double *)(pFVar26 + 0x18) = local_c8[1];
  *(double *)(pFVar26 + 0x20) = local_b8[0];
  *(double *)(pFVar26 + 0x28) = local_b8[1];
  *(undefined8 *)(pFVar26 + 0x30) = local_a8._0_8_;
  *(undefined8 *)(pFVar26 + 0x38) = local_a8._8_8_;
  *(undefined8 *)(pFVar26 + 0x40) = local_a8._16_8_;
  *(double *)(pFVar26 + 0x48) = dStack_90;
  *(undefined8 *)(pFVar26 + 0x50) = local_88._0_8_;
  *(undefined8 *)(pFVar26 + 0x58) = local_88._8_8_;
  *(undefined8 *)(pFVar26 + 0x60) = local_88._16_8_;
  *(double *)(pFVar26 + 0x68) = dStack_70;
  goto LAB_14ac2940f;
LAB_14ac29b11:
  local_1a8 = local_1e0.Data.AllocatorInstance.Data;
  if (local_1e0.Data.ArrayNum == 0) {
    iStack_1a0 = 0;
  }
  else {
    iStack_1a0 = local_1e0.Data.ArrayNum + -1;
  }
  local_128._12_4_ = uStack_19c;
  local_128.Size = iStack_1a0;
  local_128.DataPtr = (wchar_t *)local_1e0.Data.AllocatorInstance.Data;
  pFVar22 = FSoftObjectPath::ConstructFromStringPath(&local_108,&local_128);
  pUVar23 = FSoftObjectPath::TryLoad(pFVar22,(FUObjectSerializeContext *)0x0);
  if (pUVar23 == (UObject *)0x0) {
LAB_14ac29b7d:
    pUVar23 = (UObject *)0x0;
  }
  else {
    pUVar24 = Z_Construct_UClass_UTexture_NoRegister();
    iVar33 = (int)pUVar24->_padding_;
    if ((*(int *)(*(longlong *)&pUVar23->field_0x10 + 0x38) < iVar33) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar23->field_0x10 + 0x30) + (longlong)iVar33 * 8) !=
        &pUVar24->_padding_)) goto LAB_14ac29b7d;
  }
  if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar23);
  }
  *(UObject **)(pFVar26 + 0x10) = pUVar23;
  if (local_258.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_258._8_8_ & 0xffffffff);
  }
  pFVar21 = pFVar26 + 0x34;
  *(undefined4 *)(pFVar26 + 0x30) = 0;
  if (*(int *)pFVar21 != local_258.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_258.ArrayNum,(ForAnyElementType *)(pFVar26 + 0x28),0,(int *)pFVar21);
  }
  iVar33 = local_258.ArrayNum;
  pFVar35 = local_258.AllocatorInstance.Data + (longlong)local_258.ArrayNum * 0x10;
  FVar31.Data = local_258.AllocatorInstance.Data;
  while( true ) {
    if (local_258.ArrayNum != iVar33) {
      local_2b0[6] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2b0 + 6);
    }
    this = local_228;
    if (FVar31.Data == pFVar35) break;
    local_278 = ToObject<UTexture>((FString *)FVar31.Data);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_278 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_278);
    }
    if (((*(UTexture ***)(pFVar26 + 0x28) <= &local_278) &&
        (&local_278 < *(UTexture ***)(pFVar26 + 0x28) + *(int *)pFVar21)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar18 = *(int *)(pFVar26 + 0x30);
    if (iVar18 == *(int *)pFVar21) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)(pFVar26 + 0x28),(int *)pFVar21);
    }
    *(int *)(pFVar26 + 0x30) = iVar18 + 1;
    *(UTexture **)(*(longlong *)(pFVar26 + 0x28) + (longlong)iVar18 * 8) = local_278;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_278 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_278);
    }
    FVar31.Data = FVar31.Data + 0x10;
  }
LAB_14ac29cef:
  DestructItems<FString,int>((FString *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
  FVar31.Data = local_1e0.Data.AllocatorInstance.Data;
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
    FVar31.Data = local_1e0.Data.AllocatorInstance.Data;
  }
  goto LAB_14ac29401;
LAB_14ac2a056:
  FVar13.Data = local_208.AllocatorInstance.Data;
  *(undefined8 *)(pFVar26 + 0x10) = local_188[0]._0_8_;
  *(undefined8 *)(pFVar26 + 0x18) = local_188._8_8_;
  *(undefined8 *)(pFVar26 + 0x20) = local_188[1]._4_8_;
  *(undefined8 *)(pFVar26 + 0x28) = aTStack_170[0]._0_8_;
  *(undefined8 *)(pFVar26 + 0x30) = aTStack_170._8_8_;
  *(undefined8 *)(pFVar26 + 0x38) = aTStack_170[1]._4_8_;
  *(ulonglong *)(pFVar26 + 0x40) = CONCAT44(fStack_154,local_158);
  pTVar28 = (TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> *)(pFVar26 + 0x58);
  FVar31.Data = local_208.AllocatorInstance.Data;
  if (pTVar28 != &local_208) {
    iVar33 = local_208.ArrayNum;
    lVar32 = (longlong)local_208.ArrayNum;
    pFVar21 = pFVar26 + 100;
    *(int *)(pFVar26 + 0x60) = local_208.ArrayNum;
    if ((local_208.ArrayNum == 0) && (*(int *)pFVar21 == 0)) {
      *(int *)pFVar21 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,4,local_208.ArrayNum,*(int *)pFVar21,(ForAnyElementType *)pTVar28,
                 local_208.ArrayNum,(int *)pFVar21);
      FVar31.Data = local_208.AllocatorInstance.Data;
      if (iVar33 != 0) {
        memcpy((pTVar28->AllocatorInstance).Data,FVar13.Data,lVar32 * 0x38);
        FVar31.Data = local_208.AllocatorInstance.Data;
      }
    }
  }
  goto LAB_14ac29401;
LAB_14ac298f1:
  *(undefined8 *)(pFVar26 + 0x10) = local_1b8._0_8_;
  *(undefined8 *)(pFVar26 + 0x18) = local_1b8._8_8_;
  goto LAB_14ac2940f;
LAB_14ac29391:
  FVar13.Data = local_218.AllocatorInstance.Data;
  *(uint *)(pFVar26 + 0x10) = local_288;
  pTVar25 = (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar26 + 0x28);
  FVar31.Data = local_218.AllocatorInstance.Data;
  if (pTVar25 != &local_218) {
    iVar33 = local_218.ArrayNum;
    lVar32 = (longlong)local_218.ArrayNum;
    pFVar21 = pFVar26 + 0x34;
    *(int *)(pFVar26 + 0x30) = local_218.ArrayNum;
    if ((local_218.ArrayNum == 0) && (*(int *)pFVar21 == 0)) {
      *(int *)pFVar21 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_218.ArrayNum,*(int *)pFVar21,(ForAnyElementType *)pTVar25,
                 local_218.ArrayNum,(int *)pFVar21);
      FVar31.Data = local_218.AllocatorInstance.Data;
      if (iVar33 != 0) {
        memcpy((pTVar25->AllocatorInstance).Data,FVar13.Data,lVar32 << 2);
        FVar31.Data = local_218.AllocatorInstance.Data;
      }
    }
  }
  goto LAB_14ac29401;
LAB_14ac29607:
  pFVar21 = pFVar26 + 0x10;
  if (cVar36 == '\0') {
    if (local_1f0.Data.ArrayNum == 0) {
      iVar33 = 0;
    }
    else {
      iVar33 = local_1f0.Data.ArrayNum + -1;
    }
    ::FString::AssignRange
              ((FString *)pFVar21,(wchar_t *)local_1f0.Data.AllocatorInstance.Data,iVar33);
    pTVar27 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar26 + 0x30);
    if (pTVar27 != &local_268) {
      DestructItems<FString,int>
                ((FString *)(pTVar27->AllocatorInstance).Data,*(int *)(pFVar26 + 0x38));
      FVar31.Data = local_268.AllocatorInstance.Data;
      iVar33 = local_268.ArrayNum;
      pFVar21 = pFVar26 + 0x3c;
      *(int *)(pFVar26 + 0x38) = local_268.ArrayNum;
      if ((local_268.ArrayNum == 0) && (*(int *)pFVar21 == 0)) {
        *(int *)pFVar21 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_268.ArrayNum,*(int *)pFVar21,(ForAnyElementType *)pTVar27,
                   local_268.ArrayNum,(int *)pFVar21);
        ConstructItems<FString,FString,int>
                  ((pTVar27->AllocatorInstance).Data,(FString *)FVar31.Data,iVar33);
      }
    }
  }
  else {
    pUVar20 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
    pFVar35 = (FScriptContainerElement *)
              UCustomizableObjectPrivate::FindIntParameterValueName
                        (pUVar20,&local_150,iVar33,local_284);
    if (pFVar21 != pFVar35) {
      pFVar7 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar21->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar21->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar35->field_0x0)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar35->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar26 + 0x18) = *(int *)&pFVar35[8].field_0x0;
      *(int *)(pFVar26 + 0x1c) = *(int *)&pFVar35[0xc].field_0x0;
      *(undefined8 *)&pFVar35[8].field_0x0 = 0;
    }
    uVar30 = 0;
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar26 + 0x30),local_238.ArrayNum,
               Default);
    param_1 = (FArchive *)local_1c0;
    if (0 < local_238.ArrayNum) {
      lVar32 = 0;
      uVar34 = uVar30;
      do {
        pUVar20 = UCustomizableObject::GetPrivate
                            ((local_228->CustomizableObject).field0_0x0.DebugPtr);
        uVar29 = (uint)uVar30;
        uVar16 = 0;
        if ((int)uVar29 < local_238.ArrayNum) {
          uVar16 = ~uVar29 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar21 = (FScriptContainerElement *)
                  UCustomizableObjectPrivate::FindIntParameterValueName
                            (pUVar20,&local_140,iVar33,
                             *(int *)(local_238.AllocatorInstance.Data + lVar32));
        uVar16 = 0;
        if ((int)uVar29 < *(int *)(pFVar26 + 0x38)) {
          uVar16 = ~uVar29 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar35 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar26 + 0x30))->
                  AllocatorInstance).Data + uVar34;
        if (pFVar35 != pFVar21) {
          if (*(void **)&pFVar35->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar35->field_0x0);
          }
          *(undefined8 *)&pFVar35->field_0x0 = *(undefined8 *)&pFVar21->field_0x0;
          *(undefined8 *)&pFVar21->field_0x0 = 0;
          *(undefined4 *)(pFVar35 + 8) = *(undefined4 *)(pFVar21 + 8);
          *(undefined4 *)(pFVar35 + 0xc) = *(undefined4 *)(pFVar21 + 0xc);
          *(undefined8 *)(pFVar21 + 8) = 0;
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        uVar30 = (ulonglong)(uVar29 + 1);
        lVar32 = lVar32 + 4;
        uVar34 = uVar34 + 0x10;
        param_1 = (FArchive *)local_1c0;
        this = local_228;
      } while ((int)(uVar29 + 1) < local_238.ArrayNum);
    }
  }
LAB_14ac297b8:
  DestructItems<FString,int>((FString *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  FVar31.Data = local_1f0.Data.AllocatorInstance.Data;
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
    FVar31.Data = local_1f0.Data.AllocatorInstance.Data;
  }
LAB_14ac29401:
  if (FVar31.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar31.Data);
  }
LAB_14ac2940f:
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  local_2b4 = local_2b4 + 1;
  lVar32 = local_220;
  if ((int)local_290 <= local_2b4) {
    return;
  }
  goto LAB_14ac29120;
LAB_14ac292c1:
  pFVar21[0x10] = FVar37;
  goto LAB_14ac2940f;
}

// NumProjectorLayers @ 14ac2b090

int __thiscall
FCustomizableObjectInstanceDescriptor::NumProjectorLayers
          (FCustomizableObjectInstanceDescriptor *this,FName *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(param_1,&local_28);
  bVar1 = IsMultilayerProjector(this,&local_28);
  if (bVar1) {
    ::FString::ConcatFF(&local_18,&local_28,&NUM_LAYERS_PARAMETER_POSTFIX);
    fVar3 = GetFloatParameterSelectedOption(this,&local_18,-1);
    iVar2 = (int)fVar3;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar2 = -1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return iVar2;
}

// ReloadParameters @ 14ac2ddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::ReloadParameters(FCustomizableObjectInstanceDescriptor *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *this_00;
  TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined3 uVar4;
  undefined4 uVar5;
  UCustomizableObject *this_01;
  FCustomizableObjectBoolParameterValue *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  bool bVar21;
  int iVar22;
  EParameterType EVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  UCustomizableObjectPrivate *pUVar28;
  TSharedPtr<UE::Mutable::Private::FModel,1> *pTVar29;
  UModelResources *pUVar30;
  UModelResources *pUVar31;
  FString *pFVar32;
  FGuid *pFVar33;
  UTexture *pUVar34;
  USkeletalMesh *pUVar35;
  UMaterialInterface *pUVar36;
  FObjectPtr_u_0 FVar37;
  FSharedReferencer<1> FVar38;
  int iVar39;
  uint uVar40;
  FCustomizableObjectIntParameterValue *pFVar41;
  FScriptContainerElement *pFVar42;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar43;
  ForAnyElementType FVar44;
  ulonglong uVar45;
  TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_> *pTVar46;
  FCustomizableObjectFloatParameterValue *pFVar47;
  FCustomizableObjectVectorParameterValue *pFVar48;
  FCustomizableObjectTransformParameterValue *pFVar49;
  FCustomizableObjectProjectorParameterValue *pFVar50;
  FCustomizableObjectTextureParameterValue *pFVar51;
  FCustomizableObjectSkeletalMeshParameterValue *pFVar52;
  FCustomizableObjectMaterialParameterValue *pFVar53;
  longlong lVar54;
  FScriptContainerElement *pFVar55;
  TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *pTVar56;
  ulonglong uVar57;
  TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *pTVar58;
  float fVar59;
  undefined1 auStackY_858 [32];
  int local_808 [2];
  TSharedPtr<UE::Mutable::Private::FParameters,1> local_800;
  undefined1 local_7f0 [8];
  FString local_7e8;
  FString local_7d8;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_7b8;
  FCustomizableObjectInstanceDescriptor *local_7a8;
  FString local_7a0;
  FObjectPtr_u_0 local_790;
  undefined8 local_788;
  undefined8 uStack_780;
  ForAnyElementType local_778;
  undefined8 local_770;
  FString local_768;
  FObjectPtr_u_0 local_758;
  undefined8 local_750;
  undefined8 uStack_748;
  ForAnyElementType local_740;
  undefined8 local_738;
  ForAnyElementType local_730;
  int local_728;
  int local_724;
  ForAnyElementType local_720;
  int local_718;
  int local_714;
  ForAnyElementType local_710;
  int local_708;
  int local_704;
  ForAnyElementType local_700;
  int local_6f8;
  int local_6f4;
  ForAnyElementType local_6f0;
  int local_6e8;
  int local_6e4;
  ForAnyElementType local_6e0;
  int local_6d8;
  int local_6d4;
  ForAnyElementType local_6d0;
  int local_6c8;
  int local_6c4;
  ForAnyElementType local_6c0;
  int local_6b8;
  int local_6b4;
  ForAnyElementType local_6b0;
  int local_6a8;
  int local_6a4;
  FString local_6a0;
  FObjectPtr_u_0 local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_678;
  TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *local_668;
  FString local_660;
  float local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  TArray<float,TSizedDefaultAllocator<32>_> local_638;
  int local_628;
  int local_624;
  FString local_620;
  undefined1 local_610;
  undefined8 local_60c;
  undefined8 uStack_604;
  FString local_5f8;
  FScriptContainerElement *local_5e8;
  undefined8 uStack_5e0;
  FScriptContainerElement *local_5d8;
  undefined8 uStack_5d0;
  FCustomizableObjectProjectorParameterValue local_5c8;
  int *local_558;
  int *local_550;
  FString local_548;
  FString local_538;
  int *local_528;
  int *local_520;
  int *local_518;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_510;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_500;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_4e8;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_4d8;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_4c8;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_4b8;
  FString local_4a8;
  FString local_498;
  TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *local_488;
  FString local_480;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_470;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *local_460;
  int local_458;
  FName local_450;
  FName local_448;
  FName local_440;
  FName local_438;
  FString local_430;
  int *local_420;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *local_418;
  int *local_410;
  TVector4<float>_u_0 local_408;
  FString *local_3f8;
  FGuid *local_3f0;
  FString *local_3e8;
  FGuid *local_3e0;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_3d8;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_3c8;
  FString *local_3b8;
  FGuid *local_3b0;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_3a8;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_398;
  FString *local_388;
  FGuid *local_380;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_378;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_368;
  FString *local_358;
  FGuid *local_350;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> local_348;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_338;
  FString *local_328;
  FGuid *local_320;
  FString *local_318;
  FGuid *local_310;
  FString local_308;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_2f8;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_2e8;
  FString *local_2d8;
  FGuid *local_2d0;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_2c8;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_2b8;
  FString *local_2a8;
  FGuid *local_2a0;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_298;
  FString local_288;
  FString local_278;
  FLinearColor_u_0 local_268;
  TSharedPtr<UE::Mutable::Private::FRangeIndex,1> local_258;
  TTransform<double> local_248;
  FCustomizableObjectProjector local_1e8;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  FString local_128;
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  FScriptContainerElement *local_b8;
  undefined8 uStack_b0;
  TMatrix<float> local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_858;
  this_01 = (this->CustomizableObject).field0_0x0.DebugPtr;
  local_7a8 = this;
  if (this_01 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    bVar21 = UCustomizableObject::IsCompiled(this_01);
    if (bVar21) {
      iVar22 = UCustomizableObject::GetStateCount((this->CustomizableObject).field0_0x0.DebugPtr);
      this_00 = &this->FirstRequestedLOD;
      iVar25 = iVar22 + -1;
      if (this->State < iVar22 + -1) {
        iVar25 = this->State;
      }
      iVar22 = 0;
      if (0 < iVar25) {
        iVar22 = iVar25;
      }
      this->State = iVar22;
      bVar21 = 1 < *(int *)&(this->FirstRequestedLOD).field_0x48;
      if (!bVar21) {
        TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->FirstRequestedLOD).field_0xc;
      *(undefined4 *)&(this->FirstRequestedLOD).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->FirstRequestedLOD).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->FirstRequestedLOD).field_0x34 = 0;
      iVar25 = *(int *)&(this->FirstRequestedLOD).field_0x2c;
      *(undefined4 *)&(this->FirstRequestedLOD).field_0x28 = 0;
      if ((iVar25 < 0) || (0x80 < iVar25)) {
        *(undefined4 *)&(this->FirstRequestedLOD).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FirstRequestedLOD).field_0x10,0);
      }
      if (bVar21) {
        *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 1;
        TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      iVar25 = (this->BoolParameters).ArrayNum;
      pTVar46 = &this->BoolParameters;
      pFVar6 = (FCustomizableObjectBoolParameterValue *)(pTVar46->AllocatorInstance).Data;
      local_6d0.Data = (FScriptContainerElement *)0x0;
      local_6c8 = iVar25;
      if (iVar25 == 0) {
        local_6c4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar25,0,&local_6d0,iVar25,&local_6c4);
        ConstructItems<FCustomizableObjectBoolParameterValue,FCustomizableObjectBoolParameterValue,int>
                  (local_6d0.Data,pFVar6,iVar25);
      }
      iVar25 = (this->IntParameters).ArrayNum;
      pTVar58 = &this->IntParameters;
      pFVar41 = (FCustomizableObjectIntParameterValue *)(pTVar58->AllocatorInstance).Data;
      local_730.Data = (FScriptContainerElement *)0x0;
      local_728 = iVar25;
      local_488 = pTVar58;
      if (iVar25 == 0) {
        local_724 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar25,0,&local_730,iVar25,&local_724);
        ConstructItems<FCustomizableObjectIntParameterValue,FCustomizableObjectIntParameterValue,int>
                  (local_730.Data,pFVar41,iVar25);
      }
      iVar25 = (this->FloatParameters).ArrayNum;
      pFVar47 = (FCustomizableObjectFloatParameterValue *)
                (this->FloatParameters).AllocatorInstance.Data;
      local_720.Data = (FScriptContainerElement *)0x0;
      local_718 = iVar25;
      if (iVar25 == 0) {
        local_714 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar25,0,&local_720,iVar25,&local_714);
        ConstructItems<FCustomizableObjectFloatParameterValue,FCustomizableObjectFloatParameterValue,int>
                  (local_720.Data,pFVar47,iVar25);
      }
      iVar25 = (this->TextureParameters).ArrayNum;
      pTVar56 = &this->TextureParameters;
      pFVar51 = (FCustomizableObjectTextureParameterValue *)(pTVar56->AllocatorInstance).Data;
      local_6b0.Data = (FScriptContainerElement *)0x0;
      local_6a8 = iVar25;
      local_668 = pTVar56;
      if (iVar25 == 0) {
        local_6a4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar25,0,&local_6b0,iVar25,&local_6a4);
        ConstructItems<FCustomizableObjectTextureParameterValue,FCustomizableObjectTextureParameterValue,int>
                  (local_6b0.Data,pFVar51,iVar25);
      }
      iVar25 = (this->SkeletalMeshParameters).ArrayNum;
      pFVar52 = (FCustomizableObjectSkeletalMeshParameterValue *)
                (this->SkeletalMeshParameters).AllocatorInstance.Data;
      local_6c0.Data = (FScriptContainerElement *)0x0;
      local_6b8 = iVar25;
      if (iVar25 == 0) {
        local_6b4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar25,0,&local_6c0,iVar25,&local_6b4);
        ConstructItems<FCustomizableObjectSkeletalMeshParameterValue,FCustomizableObjectSkeletalMeshParameterValue,int>
                  (local_6c0.Data,pFVar52,iVar25);
      }
      iVar25 = (this->MaterialParameters).ArrayNum;
      pFVar53 = (FCustomizableObjectMaterialParameterValue *)
                (this->MaterialParameters).AllocatorInstance.Data;
      local_710.Data = (FScriptContainerElement *)0x0;
      local_708 = iVar25;
      if (iVar25 == 0) {
        local_704 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar25,0,&local_710,iVar25,&local_704);
        ConstructItems<FCustomizableObjectMaterialParameterValue,FCustomizableObjectMaterialParameterValue,int>
                  (local_710.Data,pFVar53,iVar25);
      }
      iVar25 = (this->VectorParameters).ArrayNum;
      pFVar48 = (FCustomizableObjectVectorParameterValue *)
                (this->VectorParameters).AllocatorInstance.Data;
      local_6e0.Data = (FScriptContainerElement *)0x0;
      local_6d8 = iVar25;
      if (iVar25 == 0) {
        local_6d4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar25,0,&local_6e0,iVar25,&local_6d4);
        ConstructItems<FCustomizableObjectVectorParameterValue,FCustomizableObjectVectorParameterValue,int>
                  (local_6e0.Data,pFVar48,iVar25);
      }
      iVar25 = (this->ProjectorParameters).ArrayNum;
      pFVar50 = (FCustomizableObjectProjectorParameterValue *)
                (this->ProjectorParameters).AllocatorInstance.Data;
      local_6f0.Data = (FScriptContainerElement *)0x0;
      local_6e8 = iVar25;
      if (iVar25 == 0) {
        local_6e4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,iVar25,0,&local_6f0,iVar25,&local_6e4);
        ConstructItems<FCustomizableObjectProjectorParameterValue,FCustomizableObjectProjectorParameterValue,int>
                  (local_6f0.Data,pFVar50,iVar25);
      }
      iVar25 = (this->TransformParameters).ArrayNum;
      pFVar49 = (FCustomizableObjectTransformParameterValue *)
                (this->TransformParameters).AllocatorInstance.Data;
      local_700.Data = (FScriptContainerElement *)0x0;
      local_6f8 = iVar25;
      if (iVar25 == 0) {
        local_6f4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,iVar25,0,&local_700,iVar25,&local_6f4);
        ConstructItems<FCustomizableObjectTransformParameterValue,FCustomizableObjectTransformParameterValue,int>
                  (local_700.Data,pFVar49,iVar25);
      }
      piVar2 = &(this->BoolParameters).ArrayMax;
      pFVar6 = (FCustomizableObjectBoolParameterValue *)(pTVar46->AllocatorInstance).Data;
      iVar25 = (this->BoolParameters).ArrayNum;
      if ((this->BoolParameters).ArrayMax < 0) {
        DestructItems<FCustomizableObjectBoolParameterValue,int>(pFVar6,iVar25);
        (this->BoolParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&pTVar46->AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectBoolParameterValue,int>(pFVar6,iVar25);
        (this->BoolParameters).ArrayNum = 0;
      }
      piVar2 = &(this->IntParameters).ArrayMax;
      pFVar41 = (FCustomizableObjectIntParameterValue *)(pTVar58->AllocatorInstance).Data;
      iVar25 = (this->IntParameters).ArrayNum;
      if ((this->IntParameters).ArrayMax < 0) {
        DestructItems<FCustomizableObjectIntParameterValue,int>(pFVar41,iVar25);
        (this->IntParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,0,&pTVar58->AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectIntParameterValue,int>(pFVar41,iVar25);
        (this->IntParameters).ArrayNum = 0;
      }
      piVar2 = &(this->FloatParameters).ArrayMax;
      pFVar47 = (FCustomizableObjectFloatParameterValue *)
                (this->FloatParameters).AllocatorInstance.Data;
      iVar25 = (this->FloatParameters).ArrayNum;
      if ((this->FloatParameters).ArrayMax < 0) {
        DestructItems<FCustomizableObjectFloatParameterValue,int>(pFVar47,iVar25);
        (this->FloatParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&(this->FloatParameters).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectFloatParameterValue,int>(pFVar47,iVar25);
        (this->FloatParameters).ArrayNum = 0;
      }
      piVar2 = &(this->TextureParameters).ArrayMax;
      pFVar51 = (FCustomizableObjectTextureParameterValue *)(pTVar56->AllocatorInstance).Data;
      iVar25 = (this->TextureParameters).ArrayNum;
      if ((this->TextureParameters).ArrayMax < 0) {
        DestructItems<FCustomizableObjectTextureParameterValue,int>(pFVar51,iVar25);
        (this->TextureParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&pTVar56->AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectTextureParameterValue,int>(pFVar51,iVar25);
        (this->TextureParameters).ArrayNum = 0;
      }
      piVar2 = &(this->SkeletalMeshParameters).ArrayMax;
      pFVar52 = (FCustomizableObjectSkeletalMeshParameterValue *)
                (this->SkeletalMeshParameters).AllocatorInstance.Data;
      iVar25 = (this->SkeletalMeshParameters).ArrayNum;
      local_520 = piVar2;
      if ((this->SkeletalMeshParameters).ArrayMax < 0) {
        DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>(pFVar52,iVar25);
        (this->SkeletalMeshParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&(this->SkeletalMeshParameters).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>(pFVar52,iVar25);
        (this->SkeletalMeshParameters).ArrayNum = 0;
      }
      piVar2 = &(this->MaterialParameters).ArrayMax;
      pFVar53 = (FCustomizableObjectMaterialParameterValue *)
                (this->MaterialParameters).AllocatorInstance.Data;
      iVar25 = (this->MaterialParameters).ArrayNum;
      local_550 = piVar2;
      if ((this->MaterialParameters).ArrayMax < 0) {
        DestructItems<FCustomizableObjectMaterialParameterValue,int>(pFVar53,iVar25);
        (this->MaterialParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&(this->MaterialParameters).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectMaterialParameterValue,int>(pFVar53,iVar25);
        (this->MaterialParameters).ArrayNum = 0;
      }
      piVar2 = &(this->VectorParameters).ArrayMax;
      pFVar48 = (FCustomizableObjectVectorParameterValue *)
                (this->VectorParameters).AllocatorInstance.Data;
      iVar25 = (this->VectorParameters).ArrayNum;
      local_528 = piVar2;
      if ((this->VectorParameters).ArrayMax < 0) {
        DestructItems<FCustomizableObjectVectorParameterValue,int>(pFVar48,iVar25);
        (this->VectorParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&(this->VectorParameters).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectVectorParameterValue,int>(pFVar48,iVar25);
        (this->VectorParameters).ArrayNum = 0;
      }
      pFVar50 = (FCustomizableObjectProjectorParameterValue *)
                (this->ProjectorParameters).AllocatorInstance.Data;
      piVar2 = &(this->ProjectorParameters).ArrayMax;
      iVar25 = (this->ProjectorParameters).ArrayNum;
      local_518 = piVar2;
      if (*piVar2 < 0) {
        DestructItems<FCustomizableObjectProjectorParameterValue,int>(pFVar50,iVar25);
        (this->ProjectorParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,0,&(this->ProjectorParameters).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectProjectorParameterValue,int>(pFVar50,iVar25);
        (this->ProjectorParameters).ArrayNum = 0;
      }
      piVar2 = &(this->TransformParameters).ArrayMax;
      pFVar49 = (FCustomizableObjectTransformParameterValue *)
                (this->TransformParameters).AllocatorInstance.Data;
      iVar25 = (this->TransformParameters).ArrayNum;
      local_558 = piVar2;
      if ((this->TransformParameters).ArrayMax < 0) {
        DestructItems<FCustomizableObjectTransformParameterValue,int>(pFVar49,iVar25);
        (this->TransformParameters).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,0,&(this->TransformParameters).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FCustomizableObjectTransformParameterValue,int>(pFVar49,iVar25);
        (this->TransformParameters).ArrayNum = 0;
      }
      pUVar28 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      pTVar29 = UCustomizableObjectPrivate::GetModel(pUVar28);
      if (pTVar29->Object == (FModel *)0x0) {
        if (2 < (byte)LogMutable._0_1_) {
          local_438 = (FName)((this->CustomizableObject).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_438,&local_498);
          local_440 = (FName)((this->CustomizableObject).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_440,&local_4a8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
          }
          if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pUVar28 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        pUVar30 = UCustomizableObjectPrivate::GetModelResources(pUVar28);
        pUVar28 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        pUVar31 = UCustomizableObjectPrivate::GetModelResources(pUVar28);
        if (pUVar31 == (UModelResources *)0x0) {
          if (2 < (byte)LogMutable._0_1_) {
            local_448 = (FName)((this->CustomizableObject).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_448,&local_480);
            local_450 = (FName)((this->CustomizableObject).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_450,&local_430);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
            if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_430.Data.AllocatorInstance.Data);
            }
            if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_480.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pUVar28 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
          pTVar29 = UCustomizableObjectPrivate::GetModel(pUVar28);
          local_348.Object = pTVar29->Object;
          local_348.SharedReferenceCount.ReferenceController =
               (pTVar29->SharedReferenceCount).ReferenceController;
          if (local_348.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UE::Mutable::Private::FModel::NewParameters
                    (&local_800,&local_348,(FParameters *)0x0,
                     &pUVar30->TextureParameterDefaultValues,
                     &pUVar30->SkeletalMeshParameterDefaultValues,
                     &pUVar30->MaterialParameterDefaultValues);
          if ((local_800.Object == (FParameters *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_624 = UE::Mutable::Private::FParameters::GetCount(local_800.Object);
          uVar19 = _UNK_1522bb2b8;
          uVar18 = ___xmm_42c80000412000004120000000000000;
          uVar17 = _UNK_150689648;
          uVar16 = ___xmm_3f800000000000000000000000000000;
          local_808[0] = 0;
          if (0 < local_624) {
            do {
              if ((local_800.Object == (FParameters *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar32 = UE::Mutable::Private::FParameters::GetName(local_800.Object,local_808[0]);
              if ((local_800.Object == (FParameters *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar33 = UE::Mutable::Private::FParameters::GetUid(local_800.Object,local_808[0]);
              if ((local_800.Object == (FParameters *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              EVar23 = UE::Mutable::Private::FParameters::GetType(local_800.Object,local_808[0]);
              switch(EVar23) {
              case Bool:
                local_610 = 1;
                local_620.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_620.Data.ArrayNum = 0;
                local_620.Data.ArrayMax = 0;
                local_60c = 0;
                uStack_604 = 0;
                ::FString::operator=(&local_620,pFVar32);
                local_60c._0_4_ = pFVar33->A;
                local_60c._4_4_ = pFVar33->B;
                uStack_604._0_4_ = pFVar33->C;
                uStack_604._4_4_ = pFVar33->D;
                pFVar6 = (FCustomizableObjectBoolParameterValue *)
                         (local_6d0.Data + (longlong)local_6c8 * 0x28);
                local_328 = pFVar32;
                local_320 = pFVar33;
                for (FVar44.Data = local_6d0.Data;
                    (FCustomizableObjectBoolParameterValue *)FVar44.Data != pFVar6;
                    FVar44.Data = FVar44.Data + 0x28) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l58::
                           <lambda_1>::operator()
                                     (&local_328,
                                      (FCustomizableObjectBoolParameterValue *)FVar44.Data);
                  if (bVar21) {
                    if ((FCustomizableObjectBoolParameterValue *)FVar44.Data !=
                        (FCustomizableObjectBoolParameterValue *)0x0) {
                      local_610 = ((FCustomizableObjectBoolParameterValue *)FVar44.Data)->
                                  ParameterValue;
                      goto LAB_14ac2e97a;
                    }
                    break;
                  }
                }
                if ((local_800.Object == (FParameters *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_610 = UE::Mutable::Private::FParameters::GetBoolValue
                                      (local_800.Object,local_808[0],(FRangeIndex *)0x0);
LAB_14ac2e97a:
                pFVar55 = (pTVar46->AllocatorInstance).Data;
                if (((pFVar55 <= (FScriptContainerElement *)&local_620) &&
                    ((FScriptContainerElement *)&local_620 <
                     pFVar55 + (longlong)pTVar46->ArrayMax * 0x28)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = pTVar46->ArrayNum;
                if (iVar25 == pTVar46->ArrayMax) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x828,&pTVar46->AllocatorInstance,&pTVar46->ArrayMax);
                }
                pTVar46->ArrayNum = iVar25 + 1;
                pFVar55 = (pTVar46->AllocatorInstance).Data;
                *(undefined8 *)(pFVar55 + (longlong)iVar25 * 0x28) = 0;
                pTVar43 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                          (pFVar55 + (longlong)iVar25 * 0x28);
                TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                          (pTVar43,(wchar_t *)local_620.Data.AllocatorInstance.Data,
                           local_620.Data.ArrayNum,0);
                *(undefined1 *)&pTVar43[1].AllocatorInstance.Data = local_610;
                *(undefined8 *)((longlong)&pTVar43[1].AllocatorInstance.Data + 4) = local_60c;
                *(undefined8 *)&pTVar43[1].ArrayMax = uStack_604;
                if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_620.Data.AllocatorInstance.Data);
                }
                break;
              case Int:
                local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_7e8.Data.ArrayNum = 0;
                local_7e8.Data.ArrayMax = 0;
                local_7d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_7d8.Data.ArrayNum = 0;
                local_7d8.Data.ArrayMax = 0;
                local_7c8 = 0;
                uStack_7c0 = 0;
                local_7b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_7b8.ArrayNum = 0;
                local_7b8.ArrayMax = 0;
                ::FString::operator=(&local_7e8,pFVar32);
                local_7c8._0_4_ = pFVar33->A;
                local_7c8._4_4_ = pFVar33->B;
                uStack_7c0._0_4_ = pFVar33->C;
                uStack_7c0._4_4_ = pFVar33->D;
                pFVar41 = (FCustomizableObjectIntParameterValue *)
                          (local_730.Data + (longlong)local_728 * 0x40);
                local_318 = pFVar32;
                local_310 = pFVar33;
                for (FVar44.Data = local_730.Data;
                    (FCustomizableObjectIntParameterValue *)FVar44.Data != pFVar41;
                    FVar44.Data = FVar44.Data + 0x40) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l64::
                           <lambda_2>::operator()
                                     (&local_318,(FCustomizableObjectIntParameterValue *)FVar44.Data
                                     );
                  if (bVar21) goto LAB_14ac2eb04;
                }
                FVar44.Data = (FScriptContainerElement *)0x0;
LAB_14ac2eb04:
                uVar45 = 0;
                if ((FCustomizableObjectIntParameterValue *)FVar44.Data ==
                    (FCustomizableObjectIntParameterValue *)0x0) {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UE::Mutable::Private::FParameters::NewRangeIndex
                            (local_800.Object,&local_2e8,local_808[0]);
                  if (local_2e8.Object == (FRangeIndex *)0x0) {
                    if ((local_800.Object == (FParameters *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar21)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar25 = UE::Mutable::Private::FParameters::GetIntValue
                                       (local_800.Object,local_808[0],(FRangeIndex *)0x0);
                    pUVar28 = UCustomizableObject::GetPrivate
                                        ((this->CustomizableObject).field0_0x0.DebugPtr);
                    pFVar32 = UCustomizableObjectPrivate::FindIntParameterValueName
                                        (pUVar28,&local_278,local_808[0],iVar25);
                    if (&local_7d8 != pFVar32) {
                      if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
                      }
                      local_7d8.Data.AllocatorInstance.Data = (pFVar32->Data).AllocatorInstance.Data
                      ;
                      (pFVar32->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_7d8.Data.ArrayNum = (pFVar32->Data).ArrayNum;
                      local_7d8.Data.ArrayMax = (pFVar32->Data).ArrayMax;
                      (pFVar32->Data).ArrayNum = 0;
                      (pFVar32->Data).ArrayMax = 0;
                    }
                    FVar38.ReferenceController = local_2e8.SharedReferenceCount.ReferenceController;
                    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_278.Data.AllocatorInstance.Data);
                      FVar38.ReferenceController =
                           local_2e8.SharedReferenceCount.ReferenceController;
                    }
                  }
                  else {
                    if ((local_800.Object == (FParameters *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar21)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar25 = UE::Mutable::Private::FParameters::GetValueCount
                                       (local_800.Object,local_808[0]);
                    if (0 < iVar25) {
                      do {
                        if ((local_800.Object == (FParameters *)0x0) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        UE::Mutable::Private::FParameters::GetValueIndex
                                  (local_800.Object,&local_510,local_808[0],(int)uVar45);
                        if ((local_510.Object == (FRangeIndex *)0x0) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        uVar27 = UE::Mutable::Private::FRangeIndex::GetPosition(local_510.Object,0);
                        if (((int)uVar27 < 0) || (local_7b8.ArrayNum <= (int)uVar27)) {
                          TArray<FString,TSizedDefaultAllocator<32>_>::AddDefaulted
                                    (&local_7b8,(uVar27 - local_7b8.ArrayNum) + 1);
                        }
                        if ((local_800.Object == (FParameters *)0x0) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        iVar22 = UE::Mutable::Private::FParameters::GetIntValue
                                           (local_800.Object,local_808[0],local_510.Object);
                        pUVar28 = UCustomizableObject::GetPrivate
                                            ((this->CustomizableObject).field0_0x0.DebugPtr);
                        UCustomizableObjectPrivate::FindIntParameterValueName
                                  (pUVar28,&local_308,local_808[0],iVar22);
                        uVar24 = 0;
                        if ((int)uVar27 < local_7b8.ArrayNum) {
                          uVar24 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar24 == 0) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        ::FString::operator=
                                  ((FString *)
                                   (local_7b8.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10)
                                   ,&local_308);
                        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_308.Data.AllocatorInstance.Data);
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  (local_510.SharedReferenceCount.ReferenceController);
                        uVar27 = (int)uVar45 + 1;
                        uVar45 = (ulonglong)uVar27;
                      } while ((int)uVar27 < iVar25);
                      pTVar56 = &this->TextureParameters;
                    }
                    FVar38.ReferenceController = local_2e8.SharedReferenceCount.ReferenceController;
                    pTVar58 = &this->IntParameters;
                  }
                }
                else {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_628 = UE::Mutable::Private::FParameters::GetIntPossibleValueCount
                                        (local_800.Object,local_808[0]);
                  local_420 = &local_628;
                  local_418 = &local_800;
                  local_410 = local_808;
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UE::Mutable::Private::FParameters::NewRangeIndex
                            (local_800.Object,&local_470,local_808[0]);
                  if (local_470.Object == (FRangeIndex *)0x0) {
                    bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l67::
                             <lambda_3>::operator()
                                       (&local_420,
                                        &((FCustomizableObjectIntParameterValue *)FVar44.Data)->
                                         ParameterValueName);
                    if (bVar21) {
                      iVar22 = (((FCustomizableObjectIntParameterValue *)FVar44.Data)->
                               ParameterValueName).Data.ArrayNum;
                      iVar25 = iVar22 + -1;
                      if (iVar22 == 0) {
                        iVar25 = 0;
                      }
                      ::FString::AssignRange
                                (&local_7d8,
                                 (wchar_t *)
                                 (((FCustomizableObjectIntParameterValue *)FVar44.Data)->
                                 ParameterValueName).Data.AllocatorInstance.Data,iVar25);
                    }
                    else {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      iVar25 = UE::Mutable::Private::FParameters::GetIntValue
                                         (local_800.Object,local_808[0],(FRangeIndex *)0x0);
                      pUVar28 = UCustomizableObject::GetPrivate
                                          ((this->CustomizableObject).field0_0x0.DebugPtr);
                      pFVar32 = UCustomizableObjectPrivate::FindIntParameterValueName
                                          (pUVar28,&local_288,local_808[0],iVar25);
                      if (&local_7d8 != pFVar32) {
                        if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
                        }
                        local_7d8.Data.AllocatorInstance.Data =
                             (pFVar32->Data).AllocatorInstance.Data;
                        (pFVar32->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_7d8.Data.ArrayNum = (pFVar32->Data).ArrayNum;
                        local_7d8.Data.ArrayMax = (pFVar32->Data).ArrayMax;
                        (pFVar32->Data).ArrayNum = 0;
                        (pFVar32->Data).ArrayMax = 0;
                      }
                      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_288.Data.AllocatorInstance.Data);
                      }
                    }
                    iVar25 = 0;
                    FVar38.ReferenceController = local_470.SharedReferenceCount.ReferenceController;
                    if (0 < (((FCustomizableObjectIntParameterValue *)FVar44.Data)->
                            ParameterRangeValueNames).ArrayNum) {
                      do {
                        if ((local_800.Object == (FParameters *)0x0) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        iVar22 = UE::Mutable::Private::FParameters::GetIntValue
                                           (local_800.Object,local_808[0],(FRangeIndex *)0x0);
                        pUVar28 = UCustomizableObject::GetPrivate
                                            ((this->CustomizableObject).field0_0x0.DebugPtr);
                        UCustomizableObjectPrivate::FindIntParameterValueName
                                  (pUVar28,&local_538,local_808[0],iVar22);
                        if (((local_7b8.AllocatorInstance.Data <=
                              (FScriptContainerElement *)&local_538) &&
                            ((FScriptContainerElement *)&local_538 <
                             local_7b8.AllocatorInstance.Data + (longlong)local_7b8.ArrayMax * 0x10)
                            ) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        iVar22 = local_7b8.ArrayNum;
                        if (local_7b8.ArrayNum == local_7b8.ArrayMax) {
                          iVar22 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x810,&local_7b8.AllocatorInstance,&local_7b8.ArrayMax
                                             );
                        }
                        local_7b8.ArrayNum = iVar22 + 1;
                        ::FString::FString((FString *)
                                           (local_7b8.AllocatorInstance.Data +
                                           (longlong)iVar22 * 0x10),&local_538);
                        if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_538.Data.AllocatorInstance.Data);
                        }
                        iVar25 = iVar25 + 1;
                        FVar38.ReferenceController =
                             local_470.SharedReferenceCount.ReferenceController;
                      } while (iVar25 < (((FCustomizableObjectIntParameterValue *)FVar44.Data)->
                                        ParameterRangeValueNames).ArrayNum);
                    }
                  }
                  else {
                    uVar27 = (((FCustomizableObjectIntParameterValue *)FVar44.Data)->
                             ParameterRangeValueNames).ArrayNum;
                    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
                    }
                    if (local_7b8.ArrayMax < (int)uVar27) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,uVar27,&local_7b8.AllocatorInstance,local_7b8.ArrayNum,
                                 &local_7b8.ArrayMax);
                    }
                    uVar57 = uVar45;
                    if ((int)uVar27 < 1) {
                      FVar38.ReferenceController =
                           local_470.SharedReferenceCount.ReferenceController;
                      pTVar56 = &this->TextureParameters;
                    }
                    else {
                      do {
                        uVar40 = (uint)uVar45;
                        uVar24 = 0;
                        if ((int)uVar40 <
                            (((FCustomizableObjectIntParameterValue *)FVar44.Data)->
                            ParameterRangeValueNames).ArrayNum) {
                          uVar24 = ~uVar40 >> 0x1f;
                        }
                        if ((uVar24 == 0) &&
                           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar21)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pFVar55 = (((FCustomizableObjectIntParameterValue *)FVar44.Data)->
                                  ParameterRangeValueNames).AllocatorInstance.Data + uVar57;
                        bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l67::
                                 <lambda_3>::operator()(&local_420,(FString *)pFVar55);
                        if (bVar21) {
                          if (((local_7b8.AllocatorInstance.Data <= pFVar55) &&
                              (pFVar55 < local_7b8.AllocatorInstance.Data +
                                         (longlong)local_7b8.ArrayMax * 0x10)) &&
                             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar21)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          iVar25 = local_7b8.ArrayNum;
                          if (local_7b8.ArrayNum == local_7b8.ArrayMax) {
                            iVar25 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_7b8.AllocatorInstance,
                                                &local_7b8.ArrayMax);
                          }
                          local_7b8.ArrayNum = iVar25 + 1;
                          ::FString::FString((FString *)
                                             (local_7b8.AllocatorInstance.Data +
                                             (longlong)iVar25 * 0x10),(FString *)pFVar55);
                        }
                        else {
                          if ((local_800.Object == (FParameters *)0x0) &&
                             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar21)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          iVar25 = UE::Mutable::Private::FParameters::GetIntValue
                                             (local_800.Object,local_808[0],local_470.Object);
                          pUVar28 = UCustomizableObject::GetPrivate
                                              ((local_7a8->CustomizableObject).field0_0x0.DebugPtr);
                          UCustomizableObjectPrivate::FindIntParameterValueName
                                    (pUVar28,&local_548,local_808[0],iVar25);
                          if (((local_7b8.AllocatorInstance.Data <=
                                (FScriptContainerElement *)&local_548) &&
                              ((FScriptContainerElement *)&local_548 <
                               local_7b8.AllocatorInstance.Data +
                               (longlong)local_7b8.ArrayMax * 0x10)) &&
                             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar21)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          iVar25 = local_7b8.ArrayNum;
                          if (local_7b8.ArrayNum == local_7b8.ArrayMax) {
                            iVar25 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_7b8.AllocatorInstance,
                                                &local_7b8.ArrayMax);
                          }
                          local_7b8.ArrayNum = iVar25 + 1;
                          ::FString::FString((FString *)
                                             (local_7b8.AllocatorInstance.Data +
                                             (longlong)iVar25 * 0x10),&local_548);
                          if (local_548.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_548.Data.AllocatorInstance.Data);
                          }
                        }
                        uVar45 = (ulonglong)(uVar40 + 1);
                        FVar38.ReferenceController =
                             local_470.SharedReferenceCount.ReferenceController;
                        pTVar56 = local_668;
                        pTVar58 = local_488;
                        uVar57 = uVar57 + 0x10;
                        this = local_7a8;
                      } while ((int)(uVar40 + 1) < (int)uVar27);
                    }
                  }
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar38.ReferenceController);
                pFVar55 = (pTVar58->AllocatorInstance).Data;
                if (((pFVar55 <= (FScriptContainerElement *)&local_7e8) &&
                    ((FScriptContainerElement *)&local_7e8 <
                     pFVar55 + (longlong)pTVar58->ArrayMax * 0x40)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = pTVar58->ArrayNum;
                if (iVar25 == pTVar58->ArrayMax) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x840,&pTVar58->AllocatorInstance,&pTVar58->ArrayMax);
                }
                pTVar58->ArrayNum = iVar25 + 1;
                pFVar42 = (pTVar58->AllocatorInstance).Data + (longlong)iVar25 * 0x40;
                ::FString::FString((FString *)pFVar42,&local_7e8);
                ::FString::FString((FString *)(pFVar42 + 0x10),&local_7d8);
                FVar44.Data = local_7b8.AllocatorInstance.Data;
                pFVar55 = pFVar42 + 0x30;
                *(undefined8 *)&pFVar42[0x20].field_0x0 = local_7c8;
                *(undefined8 *)(pFVar42 + 0x28) = uStack_7c0;
                *(FScriptContainerElement **)&pFVar55->field_0x0 = (FScriptContainerElement *)0x0;
                iVar25 = local_7b8.ArrayNum;
                *(int *)(pFVar42 + 0x38) = local_7b8.ArrayNum;
                if (local_7b8.ArrayNum == 0) {
                  *(int *)(pFVar42 + 0x3c) = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,local_7b8.ArrayNum,0,(ForAnyElementType *)pFVar55,
                             local_7b8.ArrayNum,(int *)(pFVar42 + 0x3c));
                  ConstructItems<FString,FString,int>
                            (*(FScriptContainerElement **)&pFVar55->field_0x0,(FString *)FVar44.Data
                             ,iVar25);
                }
                DestructItems<FString,int>
                          ((FString *)local_7b8.AllocatorInstance.Data,local_7b8.ArrayNum);
                if (local_7b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_7b8.AllocatorInstance.Data);
                }
                if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
                }
                if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
                }
                break;
              case Float:
                iVar25 = 0;
                local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_660.Data.ArrayNum = 0;
                local_660.Data.ArrayMax = 0;
                local_650 = 0.0;
                uStack_64c = 0;
                uStack_648 = 0;
                uStack_644 = 0;
                uStack_640 = 0;
                local_638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_638.ArrayNum = 0;
                local_638.ArrayMax = 0;
                ::FString::operator=(&local_660,pFVar32);
                uVar8 = pFVar33->A;
                uVar9 = pFVar33->B;
                uVar10 = pFVar33->C;
                uVar11 = pFVar33->D;
                pFVar47 = (FCustomizableObjectFloatParameterValue *)
                          (local_720.Data + (longlong)local_718 * 0x38);
                local_2d8 = pFVar32;
                local_2d0 = pFVar33;
                uStack_64c = uVar8;
                uStack_648 = uVar9;
                uStack_644 = uVar10;
                uStack_640 = uVar11;
                for (FVar44.Data = local_720.Data;
                    (FCustomizableObjectFloatParameterValue *)FVar44.Data != pFVar47;
                    FVar44.Data = FVar44.Data + 0x38) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l99::
                           <lambda_4>::operator()
                                     (&local_2d8,
                                      (FCustomizableObjectFloatParameterValue *)FVar44.Data);
                  if (bVar21) {
                    if ((FCustomizableObjectFloatParameterValue *)FVar44.Data !=
                        (FCustomizableObjectFloatParameterValue *)0x0) {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::NewRangeIndex
                                (local_800.Object,&local_2c8,local_808[0]);
                      if (local_2c8.Object == (FRangeIndex *)0x0) {
                        local_650 = ((FCustomizableObjectFloatParameterValue *)FVar44.Data)->
                                    ParameterValue;
                        FVar38.ReferenceController =
                             local_2c8.SharedReferenceCount.ReferenceController;
                      }
                      else {
                        TArray<float,TSizedDefaultAllocator<32>_>::operator=
                                  (&local_638,
                                   &((FCustomizableObjectFloatParameterValue *)FVar44.Data)->
                                    ParameterRangeValues);
                        FVar38.ReferenceController =
                             local_2c8.SharedReferenceCount.ReferenceController;
                      }
                      goto LAB_14ac2f819;
                    }
                    break;
                  }
                }
                if ((local_800.Object == (FParameters *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UE::Mutable::Private::FParameters::NewRangeIndex
                          (local_800.Object,&local_2b8,local_808[0]);
                if (local_2b8.Object == (FRangeIndex *)0x0) {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_650 = UE::Mutable::Private::FParameters::GetFloatValue
                                        (local_800.Object,local_808[0],(FRangeIndex *)0x0);
                  FVar38.ReferenceController = local_2b8.SharedReferenceCount.ReferenceController;
                }
                else {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar22 = UE::Mutable::Private::FParameters::GetValueCount
                                     (local_800.Object,local_808[0]);
                  FVar38.ReferenceController = local_2b8.SharedReferenceCount.ReferenceController;
                  if (0 < iVar22) {
                    do {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::GetValueIndex
                                (local_800.Object,&local_500,local_808[0],iVar25);
                      if ((local_500.Object == (FRangeIndex *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar27 = UE::Mutable::Private::FRangeIndex::GetPosition(local_500.Object,0);
                      if (((int)uVar27 < 0) || (local_638.ArrayNum <= (int)uVar27)) {
                        TArray<float,TSizedDefaultAllocator<32>_>::AddDefaulted
                                  (&local_638,(uVar27 - local_638.ArrayNum) + 1);
                      }
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      fVar59 = UE::Mutable::Private::FParameters::GetFloatValue
                                         (local_800.Object,local_808[0],local_500.Object);
                      uVar24 = 0;
                      if ((int)uVar27 < local_638.ArrayNum) {
                        uVar24 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      *(float *)(local_638.AllocatorInstance.Data + (longlong)(int)uVar27 * 4) =
                           fVar59;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_500.SharedReferenceCount.ReferenceController);
                      iVar25 = iVar25 + 1;
                      FVar38.ReferenceController =
                           local_2b8.SharedReferenceCount.ReferenceController;
                    } while (iVar25 < iVar22);
                  }
                }
LAB_14ac2f819:
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar38.ReferenceController);
                pFVar55 = (this->FloatParameters).AllocatorInstance.Data;
                if (((pFVar55 <= (FScriptContainerElement *)&local_660) &&
                    ((FScriptContainerElement *)&local_660 <
                     pFVar55 + (longlong)(this->FloatParameters).ArrayMax * 0x38)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = (this->FloatParameters).ArrayNum;
                if (iVar25 == (this->FloatParameters).ArrayMax) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&(this->FloatParameters).AllocatorInstance,
                                      &(this->FloatParameters).ArrayMax);
                }
                pFVar55 = (this->FloatParameters).AllocatorInstance.Data;
                (this->FloatParameters).ArrayNum = iVar25 + 1;
                pFVar55 = pFVar55 + (longlong)iVar25 * 0x38;
                ::FString::FString((FString *)pFVar55,&local_660);
                FVar44.Data = local_638.AllocatorInstance.Data;
                pFVar42 = pFVar55 + 0x28;
                *(float *)&pFVar55[0x10].field_0x0 = local_650;
                *(ulonglong *)(pFVar55 + 0x14) = CONCAT44(uStack_648,uStack_64c);
                *(ulonglong *)(pFVar55 + 0x1c) = CONCAT44(uStack_640,uStack_644);
                *(FScriptContainerElement **)pFVar42 = (FScriptContainerElement *)0x0;
                lVar54 = (longlong)local_638.ArrayNum;
                *(int *)&pFVar55[0x30].field_0x0 = local_638.ArrayNum;
                if (local_638.ArrayNum == 0) {
                  *(int *)(pFVar55 + 0x34) = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_638.ArrayNum,0,(ForAnyElementType *)pFVar42,
                             local_638.ArrayNum,(int *)(pFVar55 + 0x34));
                    /* WARNING: Load size is inaccurate */
                  memcpy(*pFVar42,FVar44.Data,lVar54 << 2);
                }
                if (local_638.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_638.AllocatorInstance.Data);
                }
                if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_660.Data.AllocatorInstance.Data);
                }
                break;
              case Color:
                local_5f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_5f8.Data.ArrayNum = 0;
                local_5f8.Data.ArrayMax = 0;
                local_5e8 = (FScriptContainerElement *)0x0;
                uStack_5e0 = 0;
                local_5d8 = (FScriptContainerElement *)0x0;
                uStack_5d0 = 0;
                ::FString::operator=(&local_5f8,pFVar32);
                local_5d8 = *(FScriptContainerElement **)pFVar33;
                uStack_5d0._0_4_ = pFVar33->C;
                uStack_5d0._4_4_ = pFVar33->D;
                pFVar48 = (FCustomizableObjectVectorParameterValue *)
                          (local_6e0.Data + (longlong)local_6d8 * 0x30);
                local_2a8 = pFVar32;
                local_2a0 = pFVar33;
                for (FVar44.Data = local_6e0.Data;
                    (FCustomizableObjectVectorParameterValue *)FVar44.Data != pFVar48;
                    FVar44.Data = FVar44.Data + 0x30) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l120::
                           <lambda_5>::operator()
                                     (&local_2a8,
                                      (FCustomizableObjectVectorParameterValue *)FVar44.Data);
                  if (bVar21) {
                    if ((FCustomizableObjectVectorParameterValue *)FVar44.Data !=
                        (FCustomizableObjectVectorParameterValue *)0x0) {
                      local_5e8 = *(FScriptContainerElement **)
                                   &(((FCustomizableObjectVectorParameterValue *)FVar44.Data)->
                                    ParameterValue).field0_0x0;
                      uStack_5e0 = *(undefined8 *)
                                    ((longlong)
                                     &(((FCustomizableObjectVectorParameterValue *)FVar44.Data)->
                                      ParameterValue).field0_0x0 + 8);
                      goto LAB_14ac2fa62;
                    }
                    break;
                  }
                }
                local_408._0_8_ = uVar16;
                local_408._8_8_ = uVar17;
                if ((local_800.Object == (FParameters *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UE::Mutable::Private::FParameters::GetColourValue
                          (local_800.Object,local_808[0],(TVector4<float> *)&local_408._s_0,
                           (FRangeIndex *)0x0);
                FLinearColor::FLinearColor
                          ((FLinearColor *)&local_268._s_0,(TVector4<float> *)&local_408._s_0);
                local_5e8 = (FScriptContainerElement *)local_268._0_8_;
                uStack_5e0 = local_268._8_8_;
LAB_14ac2fa62:
                pFVar55 = (this->VectorParameters).AllocatorInstance.Data;
                if (((pFVar55 <= (FScriptContainerElement *)&local_5f8) &&
                    ((FScriptContainerElement *)&local_5f8 < pFVar55 + (longlong)*local_528 * 0x30))
                   && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = (this->VectorParameters).ArrayNum;
                if (iVar25 == *local_528) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x830,&(this->VectorParameters).AllocatorInstance,local_528);
                }
                pFVar55 = (this->VectorParameters).AllocatorInstance.Data;
                (this->VectorParameters).ArrayNum = iVar25 + 1;
                pTVar43 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                          (pFVar55 + (longlong)iVar25 * 0x30);
                (pTVar43->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                          (pTVar43,(wchar_t *)local_5f8.Data.AllocatorInstance.Data,
                           local_5f8.Data.ArrayNum,0);
                pTVar43[1].AllocatorInstance.Data = local_5e8;
                pTVar43[1].ArrayNum = (undefined4)uStack_5e0;
                pTVar43[1].ArrayMax = uStack_5e0._4_4_;
                pTVar43[2].AllocatorInstance.Data = local_5d8;
                pTVar43[2].ArrayNum = (undefined4)uStack_5d0;
                pTVar43[2].ArrayMax = uStack_5d0._4_4_;
                if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
                }
                break;
              case Projector:
                local_5c8.Value.Position.field0_0x0._0_8_ = uVar16;
                local_5c8.Value._8_8_ = uVar17;
                local_5c8.ParameterName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                local_5c8.ParameterName.Data.ArrayNum = 0;
                local_5c8.ParameterName.Data.ArrayMax = 0;
                local_5c8.Value._48_4_ = local_5c8.Value._48_4_ & 0xffffff00;
                local_5c8.Id.B = 0;
                local_5c8.Id.C = 0;
                local_5c8.Id.D = 0;
                local_5c8.RangeValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_5c8.RangeValues.ArrayNum = 0;
                local_5c8.RangeValues.ArrayMax = 0;
                local_5c8.Value.Direction.field0_0x0._4_8_ = uVar16;
                local_5c8.Value.Up.field0_0x0._0_8_ = uVar17;
                local_5c8.Value._32_8_ = uVar18;
                local_5c8.Value.Scale.field0_0x0._4_8_ = uVar19;
                local_5c8.Value.Angle = 6.2831855;
                local_5c8.Id.A = 0;
                ::FString::operator=(&local_5c8.ParameterName,pFVar32);
                uVar12 = pFVar33->A;
                uVar13 = pFVar33->B;
                uVar14 = pFVar33->C;
                uVar15 = pFVar33->D;
                local_5c8.Id.A = uVar12;
                local_5c8.Id.B = uVar13;
                local_5c8.Id.C = uVar14;
                local_5c8.Id.D = uVar15;
                UCustomizableObject::GetProjectorParameterDefaultValue
                          ((this->CustomizableObject).field0_0x0.DebugPtr,&local_1e8,pFVar32);
                pFVar50 = (FCustomizableObjectProjectorParameterValue *)
                          (local_6f0.Data + (longlong)local_6e8 * 0x68);
                local_3e8 = pFVar32;
                local_3e0 = pFVar33;
                for (FVar44.Data = local_6f0.Data;
                    (FCustomizableObjectProjectorParameterValue *)FVar44.Data != pFVar50;
                    FVar44.Data = FVar44.Data + 0x68) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'[::E]::
                           <lambda_7>::operator()
                                     (&local_3e8,
                                      (FCustomizableObjectProjectorParameterValue *)FVar44.Data);
                  if (bVar21) {
                    if ((FCustomizableObjectProjectorParameterValue *)FVar44.Data !=
                        (FCustomizableObjectProjectorParameterValue *)0x0) {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::NewRangeIndex
                                (local_800.Object,&local_3d8,local_808[0]);
                      if (local_3d8.Object == (FRangeIndex *)0x0) {
                        local_5c8.Value.Position.field0_0x0._0_8_ =
                             *(undefined8 *)
                              &(((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->Value).
                               Position.field0_0x0;
                        local_5c8.Value._8_8_ =
                             *(undefined8 *)
                              ((longlong)
                               &(((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->Value)
                                .Position.field0_0x0 + 8);
                        local_5c8.Value.Direction.field0_0x0._4_8_ =
                             *(undefined8 *)
                              ((longlong)
                               &(((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->Value)
                                .Direction.field0_0x0 + 4);
                        local_5c8.Value.Up.field0_0x0._0_8_ =
                             *(undefined8 *)
                              &(((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->Value).
                               Up.field0_0x0;
                        local_5c8.Value._32_8_ =
                             *(undefined8 *)
                              ((longlong)
                               &(((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->Value)
                                .Up.field0_0x0 + 8);
                        local_5c8.Value.Scale.field0_0x0._4_8_ =
                             *(undefined8 *)
                              ((longlong)
                               &(((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->Value)
                                .Scale.field0_0x0 + 4);
                        uVar4 = *(undefined3 *)
                                 &(((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->
                                  Value).field_0x31;
                        uVar5 = (((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->Value)
                                .Angle;
                        local_5c8.Value._49_3_ = uVar4;
                        local_5c8.Value.ProjectionType = local_1e8.ProjectionType;
                        FVar38.ReferenceController =
                             local_3d8.SharedReferenceCount.ReferenceController;
                        local_5c8.Value.Angle = (float)uVar5;
                      }
                      else {
                        TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_>::operator=
                                  (&local_5c8.RangeValues,
                                   &((FCustomizableObjectProjectorParameterValue *)FVar44.Data)->
                                    RangeValues);
                        iVar25 = local_5c8.RangeValues.ArrayNum;
                        uVar45 = (ulonglong)local_5c8.RangeValues.ArrayNum;
                        local_5c8.Value.ProjectionType = local_1e8.ProjectionType;
                        pFVar55 = local_5c8.RangeValues.AllocatorInstance.Data + uVar45 * 0x38;
                        FVar44.Data = local_5c8.RangeValues.AllocatorInstance.Data;
                        while( true ) {
                          if ((int)uVar45 != iVar25) {
                            local_7f0[0] = 0;
                            `TCheckedPointerIterator<FCustomizableObjectProjector,int,0>::
                            operator!='::__l2::<lambda_1>::operator()(local_7f0);
                          }
                          FVar38.ReferenceController =
                               local_3d8.SharedReferenceCount.ReferenceController;
                          if (FVar44.Data == pFVar55) break;
                          FVar44.Data[0x30] = (FScriptContainerElement)local_1e8.ProjectionType;
                          FVar44.Data = FVar44.Data + 0x38;
                          uVar45 = local_5c8.RangeValues._8_8_ & 0xffffffff;
                        }
                      }
                      goto LAB_14ac3020b;
                    }
                    break;
                  }
                }
                local_460 = &local_800;
                local_458 = local_808[0];
                local_258.Object = (FRangeIndex *)0x0;
                local_258.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l146::<lambda_8>::
                operator()(&local_460,&local_5c8.Value,&local_258);
                if ((local_800.Object == (FParameters *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UE::Mutable::Private::FParameters::NewRangeIndex
                          (local_800.Object,&local_3c8,local_808[0]);
                FVar38.ReferenceController = local_3c8.SharedReferenceCount.ReferenceController;
                if (local_3c8.Object != (FRangeIndex *)0x0) {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar25 = UE::Mutable::Private::FParameters::GetValueCount
                                     (local_800.Object,local_808[0]);
                  iVar22 = 0;
                  FVar38.ReferenceController = local_3c8.SharedReferenceCount.ReferenceController;
                  if (0 < iVar25) {
                    do {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::GetValueIndex
                                (local_800.Object,&local_4e8,local_808[0],iVar22);
                      if ((local_4e8.Object == (FRangeIndex *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar27 = UE::Mutable::Private::FRangeIndex::GetPosition(local_4e8.Object,0);
                      if (((int)uVar27 < 0) || (local_5c8.RangeValues.ArrayNum <= (int)uVar27)) {
                        iVar39 = uVar27 - local_5c8.RangeValues.ArrayNum;
                        iVar26 = UE::Core::Private::
                                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x38,4,iVar39 + 1,
                                            &local_5c8.RangeValues.AllocatorInstance,
                                            &local_5c8.RangeValues.ArrayNum,
                                            &local_5c8.RangeValues.ArrayMax);
                        DefaultConstructItems<FCustomizableObjectProjector,int>
                                  (local_5c8.RangeValues.AllocatorInstance.Data +
                                   (longlong)iVar26 * 0x38,iVar39 + 1);
                      }
                      local_298.Object = local_4e8.Object;
                      local_298.SharedReferenceCount.ReferenceController =
                           local_4e8.SharedReferenceCount.ReferenceController;
                      iVar26 = local_5c8.RangeValues.ArrayNum;
                      if (local_4e8.SharedReferenceCount.ReferenceController !=
                          (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        (local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                             (atomic<int>)
                             ((int)(local_4e8.SharedReferenceCount.ReferenceController)->
                                   SharedReferenceCount + 1);
                        UNLOCK();
                        iVar26 = local_5c8.RangeValues.ArrayNum;
                      }
                      uVar24 = 0;
                      if ((int)uVar27 < iVar26) {
                        uVar24 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l146::<lambda_8>
                      ::operator()(&local_460,
                                   (FCustomizableObjectProjector *)
                                   (local_5c8.RangeValues.AllocatorInstance.Data +
                                   (longlong)(int)uVar27 * 0x38),&local_298);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_4e8.SharedReferenceCount.ReferenceController);
                      iVar22 = iVar22 + 1;
                      FVar38.ReferenceController =
                           local_3c8.SharedReferenceCount.ReferenceController;
                    } while (iVar22 < iVar25);
                  }
                }
LAB_14ac3020b:
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar38.ReferenceController);
                pFVar50 = (FCustomizableObjectProjectorParameterValue *)
                          (this->ProjectorParameters).AllocatorInstance.Data;
                if (((pFVar50 <= &local_5c8) && (&local_5c8 < pFVar50 + *local_518)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = (this->ProjectorParameters).ArrayNum;
                if (iVar25 == *local_518) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x868,&(this->ProjectorParameters).AllocatorInstance,local_518
                                     );
                }
                (this->ProjectorParameters).ArrayNum = iVar25 + 1;
                FCustomizableObjectProjectorParameterValue::
                FCustomizableObjectProjectorParameterValue
                          ((FCustomizableObjectProjectorParameterValue *)
                           ((this->ProjectorParameters).AllocatorInstance.Data +
                           (longlong)iVar25 * 0x68),&local_5c8);
                if (local_5c8.RangeValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free(local_5c8.RangeValues.AllocatorInstance.Data);
                }
                if (local_5c8.ParameterName.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5c8.ParameterName.Data.AllocatorInstance.Data);
                }
                break;
              case Image:
                iVar25 = 0;
                local_768.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_768.Data.ArrayNum = 0;
                local_768.Data.ArrayMax = 0;
                local_758.Handle = (UObject *)0x0;
                local_750 = 0;
                uStack_748 = 0;
                local_740.Data = (FScriptContainerElement *)0x0;
                local_738 = 0;
                ::FString::operator=(&local_768,pFVar32);
                local_750._0_4_ = pFVar33->A;
                local_750._4_4_ = pFVar33->B;
                uStack_748._0_4_ = pFVar33->C;
                uStack_748._4_4_ = pFVar33->D;
                pFVar51 = (FCustomizableObjectTextureParameterValue *)
                          (local_6b0.Data + (longlong)local_6a8 * 0x38);
                local_3b8 = pFVar32;
                local_3b0 = pFVar33;
                for (FVar44.Data = local_6b0.Data;
                    (FCustomizableObjectTextureParameterValue *)FVar44.Data != pFVar51;
                    FVar44.Data = FVar44.Data + 0x38) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l155::
                           <lambda_9>::operator()
                                     (&local_3b8,
                                      (FCustomizableObjectTextureParameterValue *)FVar44.Data);
                  if (bVar21) {
                    if ((FCustomizableObjectTextureParameterValue *)FVar44.Data !=
                        (FCustomizableObjectTextureParameterValue *)0x0) {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::NewRangeIndex
                                (local_800.Object,&local_3a8,local_808[0]);
                      if (local_3a8.Object == (FRangeIndex *)0x0) {
                        FObjectPtr::operator=
                                  ((FObjectPtr *)&local_758,
                                   (FObjectPtr *)
                                   &((FCustomizableObjectTextureParameterValue *)FVar44.Data)->
                                    ParameterValue);
                        FVar38.ReferenceController =
                             local_3a8.SharedReferenceCount.ReferenceController;
                        FVar37 = local_758;
                      }
                      else {
                        FVar38.ReferenceController =
                             local_3a8.SharedReferenceCount.ReferenceController;
                        FVar37 = local_758;
                        if ((TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_> *)&local_740
                            != &((FCustomizableObjectTextureParameterValue *)FVar44.Data)->
                                ParameterRangeValues) {
                          iVar25 = (((FCustomizableObjectTextureParameterValue *)FVar44.Data)->
                                   ParameterRangeValues).ArrayNum;
                          pFVar55 = (((FCustomizableObjectTextureParameterValue *)FVar44.Data)->
                                    ParameterRangeValues).AllocatorInstance.Data;
                          local_738 = CONCAT44(local_738._4_4_,iVar25);
                          if ((iVar25 == 0) && (local_738._4_4_ == 0)) {
                            local_738 = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (8,8,iVar25,local_738._4_4_,&local_740,iVar25,
                                       (int *)((longlong)&local_738 + 4));
                            ConstructItems<TObjectPtr<UTexture>,TObjectPtr<UTexture>,int>
                                      (local_740.Data,(TObjectPtr<UTexture> *)pFVar55,iVar25);
                            FVar38.ReferenceController =
                                 local_3a8.SharedReferenceCount.ReferenceController;
                            FVar37 = local_758;
                          }
                        }
                      }
                      goto LAB_14ac30704;
                    }
                    break;
                  }
                }
                if ((local_800.Object == (FParameters *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UE::Mutable::Private::FParameters::NewRangeIndex
                          (local_800.Object,&local_398,local_808[0]);
                if (local_398.Object == (FRangeIndex *)0x0) {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  FVar37.Handle =
                       (UObject *)
                       UE::Mutable::Private::FParameters::GetImageValue
                                 (local_800.Object,local_808[0],(FRangeIndex *)0x0);
                  FVar38.ReferenceController = local_398.SharedReferenceCount.ReferenceController;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     ((UTexture *)FVar37.Handle != (UTexture *)0x0)) {
                    UE::GC::MarkAsReachable(FVar37.Handle);
                    FVar38.ReferenceController = local_398.SharedReferenceCount.ReferenceController;
                  }
                }
                else {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar22 = UE::Mutable::Private::FParameters::GetValueCount
                                     (local_800.Object,local_808[0]);
                  FVar38.ReferenceController = local_398.SharedReferenceCount.ReferenceController;
                  this = local_7a8;
                  FVar37 = local_758;
                  if (0 < iVar22) {
                    do {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::GetValueIndex
                                (local_800.Object,&local_4d8,local_808[0],iVar25);
                      if ((local_4d8.Object == (FRangeIndex *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar27 = UE::Mutable::Private::FRangeIndex::GetPosition(local_4d8.Object,0);
                      iVar26 = (int)local_738;
                      uVar45 = (ulonglong)(int)local_738;
                      if (((int)uVar27 < 0) || ((int)local_738 <= (int)uVar27)) {
                        UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,8,(uVar27 - (int)local_738) + 1,&local_740,(int *)&local_738,
                                   (int *)((longlong)&local_738 + 4));
                        if (iVar26 < (int)local_738) {
                          lVar54 = uVar45 << 3;
                          do {
                            uVar40 = (uint)uVar45;
                            uVar24 = 0;
                            if ((int)uVar40 < (int)local_738) {
                              uVar24 = ~uVar40 >> 0x1f;
                            }
                            if ((uVar24 == 0) &&
                               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar21)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            uVar45 = (ulonglong)(uVar40 + 1);
                            *(undefined8 *)(local_740.Data + lVar54) = 0;
                            lVar54 = lVar54 + 8;
                          } while ((int)(uVar40 + 1) < (int)local_738);
                        }
                      }
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pUVar34 = UE::Mutable::Private::FParameters::GetImageValue
                                          (local_800.Object,local_808[0],local_4d8.Object);
                      uVar24 = 0;
                      if ((int)uVar27 < (int)local_738) {
                        uVar24 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      FVar44.Data = local_740.Data;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar34 != (UTexture *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pUVar34);
                      }
                      *(UTexture **)(FVar44.Data + (longlong)(int)uVar27 * 8) = pUVar34;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_4d8.SharedReferenceCount.ReferenceController);
                      iVar25 = iVar25 + 1;
                      FVar38.ReferenceController =
                           local_398.SharedReferenceCount.ReferenceController;
                      pTVar56 = local_668;
                      this = local_7a8;
                      FVar37 = local_758;
                    } while (iVar25 < iVar22);
                  }
                }
LAB_14ac30704:
                local_758 = FVar37;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar38.ReferenceController);
                pFVar55 = (pTVar56->AllocatorInstance).Data;
                if (((pFVar55 <= (FScriptContainerElement *)&local_768) &&
                    ((FScriptContainerElement *)&local_768 <
                     pFVar55 + (longlong)pTVar56->ArrayMax * 0x38)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = pTVar56->ArrayNum;
                if (iVar25 == pTVar56->ArrayMax) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&pTVar56->AllocatorInstance,&pTVar56->ArrayMax);
                }
                pTVar56->ArrayNum = iVar25 + 1;
                pFVar55 = (pTVar56->AllocatorInstance).Data + (longlong)iVar25 * 0x38;
                ::FString::FString((FString *)pFVar55,&local_768);
                ((FObjectPtr_u_0 *)(pFVar55 + 0x10))->Handle = (UObject *)local_758;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   ((UTexture *)local_758.Handle != (UTexture *)0x0)) {
                  UE::GC::MarkAsReachable(local_758.Handle);
                }
                FVar44.Data = local_740.Data;
                pFVar42 = pFVar55 + 0x28;
                *(undefined8 *)(pFVar55 + 0x18) = local_750;
                *(undefined8 *)&pFVar55[0x20].field_0x0 = uStack_748;
                *(FScriptContainerElement **)pFVar42 = (FScriptContainerElement *)0x0;
                iVar25 = (int)local_738;
                *(int *)&pFVar55[0x30].field_0x0 = (int)local_738;
                if ((int)local_738 == 0) {
                  *(int *)(pFVar55 + 0x34) = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,(int)local_738,0,(ForAnyElementType *)pFVar42,(int)local_738,
                             (int *)(pFVar55 + 0x34));
                    /* WARNING: Load size is inaccurate */
                  ConstructItems<TObjectPtr<UTexture>,TObjectPtr<UTexture>,int>
                            (*pFVar42,(TObjectPtr<UTexture> *)FVar44.Data,iVar25);
                }
                if (local_740.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_740.Data);
                }
                if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_768.Data.AllocatorInstance.Data);
                }
                break;
              case Mesh:
                iVar25 = 0;
                local_7a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_7a0.Data.ArrayNum = 0;
                local_7a0.Data.ArrayMax = 0;
                local_790.Handle = (UObject *)0x0;
                local_788 = 0;
                uStack_780 = 0;
                local_778.Data = (FScriptContainerElement *)0x0;
                local_770 = 0;
                ::FString::operator=(&local_7a0,pFVar32);
                local_788._0_4_ = pFVar33->A;
                local_788._4_4_ = pFVar33->B;
                uStack_780._0_4_ = pFVar33->C;
                uStack_780._4_4_ = pFVar33->D;
                pFVar52 = (FCustomizableObjectSkeletalMeshParameterValue *)
                          (local_6c0.Data + (longlong)local_6b8 * 0x38);
                local_388 = pFVar32;
                local_380 = pFVar33;
                for (FVar44.Data = local_6c0.Data;
                    (FCustomizableObjectSkeletalMeshParameterValue *)FVar44.Data != pFVar52;
                    FVar44.Data = FVar44.Data + 0x38) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l178::
                           <lambda_10>::operator()
                                     (&local_388,
                                      (FCustomizableObjectSkeletalMeshParameterValue *)FVar44.Data);
                  if (bVar21) {
                    if ((FCustomizableObjectSkeletalMeshParameterValue *)FVar44.Data !=
                        (FCustomizableObjectSkeletalMeshParameterValue *)0x0) {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::NewRangeIndex
                                (local_800.Object,&local_378,local_808[0]);
                      if (local_378.Object == (FRangeIndex *)0x0) {
                        FObjectPtr::operator=
                                  ((FObjectPtr *)&local_790,
                                   (FObjectPtr *)
                                   &((FCustomizableObjectSkeletalMeshParameterValue *)FVar44.Data)->
                                    ParameterValue);
                        FVar38.ReferenceController =
                             local_378.SharedReferenceCount.ReferenceController;
                        FVar37 = local_790;
                      }
                      else {
                        FVar38.ReferenceController =
                             local_378.SharedReferenceCount.ReferenceController;
                        FVar37 = local_790;
                        if ((TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *)
                            &local_778 !=
                            &((FCustomizableObjectSkeletalMeshParameterValue *)FVar44.Data)->
                             ParameterRangeValues) {
                          iVar25 = (((FCustomizableObjectSkeletalMeshParameterValue *)FVar44.Data)->
                                   ParameterRangeValues).ArrayNum;
                          pFVar55 = (((FCustomizableObjectSkeletalMeshParameterValue *)FVar44.Data)
                                    ->ParameterRangeValues).AllocatorInstance.Data;
                          local_770 = CONCAT44(local_770._4_4_,iVar25);
                          if ((iVar25 == 0) && (local_770._4_4_ == 0)) {
                            local_770 = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (8,8,iVar25,local_770._4_4_,&local_778,iVar25,
                                       (int *)((longlong)&local_770 + 4));
                            ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
                                      (local_778.Data,(TObjectPtr<USkeletalMesh> *)pFVar55,iVar25);
                            FVar38.ReferenceController =
                                 local_378.SharedReferenceCount.ReferenceController;
                            FVar37 = local_790;
                          }
                        }
                      }
                      goto LAB_14ac30ca4;
                    }
                    break;
                  }
                }
                if ((local_800.Object == (FParameters *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UE::Mutable::Private::FParameters::NewRangeIndex
                          (local_800.Object,&local_368,local_808[0]);
                if (local_368.Object == (FRangeIndex *)0x0) {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  FVar37.Handle =
                       (UObject *)
                       UE::Mutable::Private::FParameters::GetMeshValue
                                 (local_800.Object,local_808[0],(FRangeIndex *)0x0);
                  FVar38.ReferenceController = local_368.SharedReferenceCount.ReferenceController;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     ((USkeletalMesh *)FVar37.Handle != (USkeletalMesh *)0x0)) {
                    UE::GC::MarkAsReachable(FVar37.Handle);
                    FVar38.ReferenceController = local_368.SharedReferenceCount.ReferenceController;
                  }
                }
                else {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar22 = UE::Mutable::Private::FParameters::GetValueCount
                                     (local_800.Object,local_808[0]);
                  FVar38.ReferenceController = local_368.SharedReferenceCount.ReferenceController;
                  this = local_7a8;
                  FVar37 = local_790;
                  if (0 < iVar22) {
                    do {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::GetValueIndex
                                (local_800.Object,&local_4c8,local_808[0],iVar25);
                      if ((local_4c8.Object == (FRangeIndex *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar27 = UE::Mutable::Private::FRangeIndex::GetPosition(local_4c8.Object,0);
                      iVar26 = (int)local_770;
                      uVar45 = (ulonglong)(int)local_770;
                      if (((int)uVar27 < 0) || ((int)local_770 <= (int)uVar27)) {
                        UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,8,(uVar27 - (int)local_770) + 1,&local_778,(int *)&local_770,
                                   (int *)((longlong)&local_770 + 4));
                        if (iVar26 < (int)local_770) {
                          lVar54 = uVar45 << 3;
                          do {
                            uVar40 = (uint)uVar45;
                            uVar24 = 0;
                            if ((int)uVar40 < (int)local_770) {
                              uVar24 = ~uVar40 >> 0x1f;
                            }
                            if ((uVar24 == 0) &&
                               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar21)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            uVar45 = (ulonglong)(uVar40 + 1);
                            *(undefined8 *)(local_778.Data + lVar54) = 0;
                            lVar54 = lVar54 + 8;
                          } while ((int)(uVar40 + 1) < (int)local_770);
                        }
                      }
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pUVar35 = UE::Mutable::Private::FParameters::GetMeshValue
                                          (local_800.Object,local_808[0],local_4c8.Object);
                      uVar24 = 0;
                      if ((int)uVar27 < (int)local_770) {
                        uVar24 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      FVar44.Data = local_778.Data;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar35 != (USkeletalMesh *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pUVar35);
                      }
                      *(USkeletalMesh **)(FVar44.Data + (longlong)(int)uVar27 * 8) = pUVar35;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_4c8.SharedReferenceCount.ReferenceController);
                      iVar25 = iVar25 + 1;
                      FVar38.ReferenceController =
                           local_368.SharedReferenceCount.ReferenceController;
                      pTVar56 = local_668;
                      this = local_7a8;
                      FVar37 = local_790;
                    } while (iVar25 < iVar22);
                  }
                }
LAB_14ac30ca4:
                local_790 = FVar37;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar38.ReferenceController);
                pFVar55 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
                if (((pFVar55 <= (FScriptContainerElement *)&local_7a0) &&
                    ((FScriptContainerElement *)&local_7a0 < pFVar55 + (longlong)*local_520 * 0x38))
                   && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = (this->SkeletalMeshParameters).ArrayNum;
                if (iVar25 == *local_520) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&(this->SkeletalMeshParameters).AllocatorInstance,
                                      local_520);
                }
                (this->SkeletalMeshParameters).ArrayNum = iVar25 + 1;
                pFVar55 = (this->SkeletalMeshParameters).AllocatorInstance.Data +
                          (longlong)iVar25 * 0x38;
                ::FString::FString((FString *)pFVar55,&local_7a0);
                ((FObjectPtr_u_0 *)(pFVar55 + 0x10))->Handle = (UObject *)local_790;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   ((USkeletalMesh *)local_790.Handle != (USkeletalMesh *)0x0)) {
                  UE::GC::MarkAsReachable(local_790.Handle);
                }
                FVar44.Data = local_778.Data;
                pFVar42 = pFVar55 + 0x28;
                *(undefined8 *)(pFVar55 + 0x18) = local_788;
                *(undefined8 *)&pFVar55[0x20].field_0x0 = uStack_780;
                *(FScriptContainerElement **)pFVar42 = (FScriptContainerElement *)0x0;
                iVar25 = (int)local_770;
                *(int *)&pFVar55[0x30].field_0x0 = (int)local_770;
                if ((int)local_770 == 0) {
                  *(int *)(pFVar55 + 0x34) = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,(int)local_770,0,(ForAnyElementType *)pFVar42,(int)local_770,
                             (int *)(pFVar55 + 0x34));
                    /* WARNING: Load size is inaccurate */
                  ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
                            (*pFVar42,(TObjectPtr<USkeletalMesh> *)FVar44.Data,iVar25);
                }
                if (local_778.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_778.Data);
                }
                if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
                }
                break;
              case Material:
                iVar25 = 0;
                local_6a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_6a0.Data.ArrayNum = 0;
                local_6a0.Data.ArrayMax = 0;
                local_690.Handle = (UObject *)0x0;
                local_688 = 0;
                uStack_680 = 0;
                local_678.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_678.ArrayNum = 0;
                local_678.ArrayMax = 0;
                ::FString::operator=(&local_6a0,pFVar32);
                local_688._0_4_ = pFVar33->A;
                local_688._4_4_ = pFVar33->B;
                uStack_680._0_4_ = pFVar33->C;
                uStack_680._4_4_ = pFVar33->D;
                pFVar53 = (FCustomizableObjectMaterialParameterValue *)
                          (local_710.Data + (longlong)local_708 * 0x38);
                local_358 = pFVar32;
                local_350 = pFVar33;
                for (FVar44.Data = local_710.Data;
                    (FCustomizableObjectMaterialParameterValue *)FVar44.Data != pFVar53;
                    FVar44.Data = FVar44.Data + 0x38) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l201::
                           <lambda_11>::operator()
                                     (&local_358,
                                      (FCustomizableObjectMaterialParameterValue *)FVar44.Data);
                  if (bVar21) {
                    if ((FCustomizableObjectMaterialParameterValue *)FVar44.Data !=
                        (FCustomizableObjectMaterialParameterValue *)0x0) {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::NewRangeIndex
                                (local_800.Object,&local_2f8,local_808[0]);
                      if (local_2f8.Object == (FRangeIndex *)0x0) {
                        FObjectPtr::operator=
                                  ((FObjectPtr *)&local_690,
                                   (FObjectPtr *)
                                   &((FCustomizableObjectMaterialParameterValue *)FVar44.Data)->
                                    ParameterValue);
                        FVar38.ReferenceController =
                             local_2f8.SharedReferenceCount.ReferenceController;
                        FVar37 = local_690;
                      }
                      else {
                        TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
                        operator=(&local_678,
                                  &((FCustomizableObjectMaterialParameterValue *)FVar44.Data)->
                                   ParameterRangeValues);
                        FVar38.ReferenceController =
                             local_2f8.SharedReferenceCount.ReferenceController;
                        FVar37 = local_690;
                      }
                      goto LAB_14ac31270;
                    }
                    break;
                  }
                }
                if ((local_800.Object == (FParameters *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UE::Mutable::Private::FParameters::NewRangeIndex
                          (local_800.Object,&local_338,local_808[0]);
                if (local_338.Object == (FRangeIndex *)0x0) {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  FVar37.Handle =
                       (UObject *)
                       UE::Mutable::Private::FParameters::GetMaterialValue
                                 (local_800.Object,local_808[0],(FRangeIndex *)0x0);
                  FVar38.ReferenceController = local_338.SharedReferenceCount.ReferenceController;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     ((UMaterialInterface *)FVar37.Handle != (UMaterialInterface *)0x0)) {
                    UE::GC::MarkAsReachable(FVar37.Handle);
                    FVar38.ReferenceController = local_338.SharedReferenceCount.ReferenceController;
                  }
                }
                else {
                  if ((local_800.Object == (FParameters *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar22 = UE::Mutable::Private::FParameters::GetValueCount
                                     (local_800.Object,local_808[0]);
                  FVar38.ReferenceController = local_338.SharedReferenceCount.ReferenceController;
                  this = local_7a8;
                  FVar37 = local_690;
                  if (0 < iVar22) {
                    do {
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      UE::Mutable::Private::FParameters::GetValueIndex
                                (local_800.Object,&local_4b8,local_808[0],iVar25);
                      if ((local_4b8.Object == (FRangeIndex *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar27 = UE::Mutable::Private::FRangeIndex::GetPosition(local_4b8.Object,0);
                      iVar26 = local_678.ArrayNum;
                      uVar45 = (ulonglong)local_678.ArrayNum;
                      if (((int)uVar27 < 0) || (local_678.ArrayNum <= (int)uVar27)) {
                        UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,8,(uVar27 - local_678.ArrayNum) + 1,
                                   &local_678.AllocatorInstance,&local_678.ArrayNum,
                                   &local_678.ArrayMax);
                        if (iVar26 < local_678.ArrayNum) {
                          lVar54 = uVar45 << 3;
                          do {
                            uVar40 = (uint)uVar45;
                            uVar24 = 0;
                            if ((int)uVar40 < local_678.ArrayNum) {
                              uVar24 = ~uVar40 >> 0x1f;
                            }
                            if ((uVar24 == 0) &&
                               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar21)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            uVar45 = (ulonglong)(uVar40 + 1);
                            *(undefined8 *)(local_678.AllocatorInstance.Data + lVar54) = 0;
                            lVar54 = lVar54 + 8;
                          } while ((int)(uVar40 + 1) < local_678.ArrayNum);
                        }
                      }
                      if ((local_800.Object == (FParameters *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pUVar36 = UE::Mutable::Private::FParameters::GetMaterialValue
                                          (local_800.Object,local_808[0],local_4b8.Object);
                      uVar24 = 0;
                      if ((int)uVar27 < local_678.ArrayNum) {
                        uVar24 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      FVar44.Data = local_678.AllocatorInstance.Data;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar36 != (UMaterialInterface *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pUVar36);
                      }
                      *(UMaterialInterface **)(FVar44.Data + (longlong)(int)uVar27 * 8) = pUVar36;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_4b8.SharedReferenceCount.ReferenceController);
                      iVar25 = iVar25 + 1;
                      FVar38.ReferenceController =
                           local_338.SharedReferenceCount.ReferenceController;
                      pTVar56 = local_668;
                      this = local_7a8;
                      FVar37 = local_690;
                    } while (iVar25 < iVar22);
                  }
                }
LAB_14ac31270:
                local_690 = FVar37;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar38.ReferenceController);
                pFVar55 = (this->MaterialParameters).AllocatorInstance.Data;
                if (((pFVar55 <= (FScriptContainerElement *)&local_6a0) &&
                    ((FScriptContainerElement *)&local_6a0 < pFVar55 + (longlong)*local_550 * 0x38))
                   && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = (this->MaterialParameters).ArrayNum;
                if (iVar25 == *local_550) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&(this->MaterialParameters).AllocatorInstance,local_550)
                  ;
                }
                (this->MaterialParameters).ArrayNum = iVar25 + 1;
                pFVar55 = (this->MaterialParameters).AllocatorInstance.Data +
                          (longlong)iVar25 * 0x38;
                ::FString::FString((FString *)pFVar55,&local_6a0);
                ((FObjectPtr_u_0 *)(pFVar55 + 0x10))->Handle = (UObject *)local_690;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   ((UMaterialInterface *)local_690.Handle != (UMaterialInterface *)0x0)) {
                  UE::GC::MarkAsReachable(local_690.Handle);
                }
                FVar44.Data = local_678.AllocatorInstance.Data;
                pFVar42 = pFVar55 + 0x28;
                *(undefined8 *)(pFVar55 + 0x18) = local_688;
                *(undefined8 *)&pFVar55[0x20].field_0x0 = uStack_680;
                *(FScriptContainerElement **)pFVar42 = (FScriptContainerElement *)0x0;
                iVar25 = local_678.ArrayNum;
                *(int *)&pFVar55[0x30].field_0x0 = local_678.ArrayNum;
                if (local_678.ArrayNum == 0) {
                  *(int *)(pFVar55 + 0x34) = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_678.ArrayNum,0,(ForAnyElementType *)pFVar42,
                             local_678.ArrayNum,(int *)(pFVar55 + 0x34));
                    /* WARNING: Load size is inaccurate */
                  ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                            (*pFVar42,(TObjectPtr<UMaterialInterface> *)FVar44.Data,iVar25);
                }
                if (local_678.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_678.AllocatorInstance.Data);
                }
                if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
                }
                break;
              default:
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                                    ,0x593,L"");
                if (bVar21) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                break;
              case Matrix:
                local_118[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
                local_118[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
                local_108[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
                local_108[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
                local_f8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
                local_f8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
                local_e8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
                local_e8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
                local_d8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
                local_d8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
                local_c8 = (undefined1  [8])
                           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
                uStack_c0 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
                local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_128.Data.ArrayNum = 0;
                local_128.Data.ArrayMax = 0;
                local_b8 = (FScriptContainerElement *)0x0;
                uStack_b0 = 0;
                ::FString::operator=(&local_128,pFVar32);
                local_b8 = *(FScriptContainerElement **)pFVar33;
                uStack_b0._0_4_ = pFVar33->C;
                uStack_b0._4_4_ = pFVar33->D;
                pFVar49 = (FCustomizableObjectTransformParameterValue *)
                          (local_700.Data + (longlong)local_6f8 * 0x80);
                local_3f8 = pFVar32;
                local_3f0 = pFVar33;
                for (FVar44.Data = local_700.Data;
                    (FCustomizableObjectTransformParameterValue *)FVar44.Data != pFVar49;
                    FVar44.Data = FVar44.Data + 0x80) {
                  bVar21 = `FCustomizableObjectInstanceDescriptor::ReloadParameters'::__l126::
                           <lambda_6>::operator()
                                     (&local_3f8,
                                      (FCustomizableObjectTransformParameterValue *)FVar44.Data);
                  if (bVar21) {
                    if ((FCustomizableObjectTransformParameterValue *)FVar44.Data !=
                        (FCustomizableObjectTransformParameterValue *)0x0) {
                      local_118 = *&(((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                                    ParameterValue).Rotation.XY.m128d_f64;
                      local_108 = *&(((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                                    ParameterValue).Rotation.ZW.m128d_f64;
                      local_f8 = *&(((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                                   ParameterValue).Translation.XY.m128d_f64;
                      local_e8 = *&(((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                                   ParameterValue).Translation.ZW.m128d_f64;
                      local_d8 = *&(((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                                   ParameterValue).Scale3D.XY.m128d_f64;
                      local_c8._0_4_ =
                           *(undefined4 *)
                            (((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                            ParameterValue).Scale3D.ZW.m128d_f64;
                      local_c8._4_4_ =
                           *(undefined4 *)
                            ((longlong)
                             (((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                             ParameterValue).Scale3D.ZW.m128d_f64 + 4);
                      uStack_c0._0_4_ =
                           *(undefined4 *)
                            ((((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                             ParameterValue).Scale3D.ZW.m128d_f64 + 1);
                      uStack_c0._4_4_ =
                           *(undefined4 *)
                            ((longlong)
                             (((FCustomizableObjectTransformParameterValue *)FVar44.Data)->
                             ParameterValue).Scale3D.ZW.m128d_f64 + 0xc);
                      goto LAB_14ac2fd69;
                    }
                    break;
                  }
                }
                if ((local_800.Object == (FParameters *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UE::Mutable::Private::FParameters::GetMatrixValue
                          (local_800.Object,local_808[0],&local_a8,(FRangeIndex *)0x0);
                local_198 = (double)local_a8.M[0][2];
                dStack_190 = (double)local_a8.M[0][3];
                local_1a8._8_4_ = SUB84((double)local_a8.M[0][1],0);
                local_1a8._0_8_ = (double)local_a8.M[0][0];
                local_1a8._12_4_ = (int)((ulonglong)(double)local_a8.M[0][1] >> 0x20);
                local_178 = (double)local_a8.M[1][2];
                dStack_170 = (double)local_a8.M[1][3];
                local_188._8_4_ = SUB84((double)local_a8.M[1][1],0);
                local_188._0_8_ = (double)local_a8.M[1][0];
                local_188._12_4_ = (int)((ulonglong)(double)local_a8.M[1][1] >> 0x20);
                local_158 = (double)local_a8.M[2][2];
                dStack_150 = (double)local_a8.M[2][3];
                local_168._8_4_ = SUB84((double)local_a8.M[2][1],0);
                local_168._0_8_ = (double)local_a8.M[2][0];
                local_168._12_4_ = (int)((ulonglong)(double)local_a8.M[2][1] >> 0x20);
                local_138 = (double)local_a8.M[3][2];
                dStack_130 = (double)local_a8.M[3][3];
                local_148._8_4_ = SUB84((double)local_a8.M[3][1],0);
                local_148._0_8_ = (double)local_a8.M[3][0];
                local_148._12_4_ = (int)((ulonglong)(double)local_a8.M[3][1] >> 0x20);
                UE::Math::TTransform<double>::SetFromMatrix(&local_248,(TMatrix<double> *)local_1a8)
                ;
                local_118[1] = local_248.Rotation.XY.m128d_f64[1];
                local_118[0] = local_248.Rotation.XY.m128d_f64[0];
                local_108[1] = local_248.Rotation.ZW.m128d_f64[1];
                local_108[0] = local_248.Rotation.ZW.m128d_f64[0];
                local_f8[1] = local_248.Translation.XY.m128d_f64[1];
                local_f8[0] = local_248.Translation.XY.m128d_f64[0];
                local_e8[1] = local_248.Translation.ZW.m128d_f64[1];
                local_e8[0] = local_248.Translation.ZW.m128d_f64[0];
                local_d8[1] = local_248.Scale3D.XY.m128d_f64[1];
                local_d8[0] = local_248.Scale3D.XY.m128d_f64[0];
                local_c8._0_4_ = local_248.Scale3D.ZW.m128d_f64[0]._0_4_;
                local_c8._4_4_ = local_248.Scale3D.ZW.m128d_f64[0]._4_4_;
                uStack_c0._0_4_ = local_248.Scale3D.ZW.m128d_f64[1]._0_4_;
                uStack_c0._4_4_ = local_248.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14ac2fd69:
                pTVar3 = &this->TransformParameters;
                pFVar55 = (pTVar3->AllocatorInstance).Data;
                if (((pFVar55 <= (FScriptContainerElement *)&local_128) &&
                    ((FScriptContainerElement *)&local_128 < pFVar55 + (longlong)*local_558 * 0x80))
                   && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar25 = (this->TransformParameters).ArrayNum;
                if (iVar25 == *local_558) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x1080,&pTVar3->AllocatorInstance,local_558);
                }
                (this->TransformParameters).ArrayNum = iVar25 + 1;
                pTVar43 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                          ((pTVar3->AllocatorInstance).Data + (longlong)iVar25 * 0x80);
                (pTVar43->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                          (pTVar43,(wchar_t *)local_128.Data.AllocatorInstance.Data,
                           local_128.Data.ArrayNum,0);
                auVar20 = (undefined1  [16])_local_c8;
                pTVar43[1].AllocatorInstance.Data = (FScriptContainerElement *)local_118[0];
                *(double *)&pTVar43[1].ArrayNum = local_118[1];
                pTVar43[2].AllocatorInstance.Data = (FScriptContainerElement *)local_108[0];
                *(double *)&pTVar43[2].ArrayNum = local_108[1];
                pTVar43[3].AllocatorInstance.Data = (FScriptContainerElement *)local_f8[0];
                *(double *)&pTVar43[3].ArrayNum = local_f8[1];
                pTVar43[4].AllocatorInstance.Data = (FScriptContainerElement *)local_e8[0];
                *(double *)&pTVar43[4].ArrayNum = local_e8[1];
                pTVar43[5].AllocatorInstance.Data = (FScriptContainerElement *)local_d8[0];
                *(double *)&pTVar43[5].ArrayNum = local_d8[1];
                pTVar43[6].AllocatorInstance.Data = (FScriptContainerElement *)local_c8;
                pTVar43[6].ArrayNum = (undefined4)uStack_c0;
                pTVar43[6].ArrayMax = uStack_c0._4_4_;
                pTVar43[7].AllocatorInstance.Data = local_b8;
                pTVar43[7].ArrayNum = (undefined4)uStack_b0;
                pTVar43[7].ArrayMax = uStack_b0._4_4_;
                _local_c8 = (double  [2])auVar20;
                if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.Data.AllocatorInstance.Data);
                }
              }
              local_808[0] = local_808[0] + 1;
              if (local_624 <= local_808[0]) break;
              pTVar46 = &this->BoolParameters;
              pTVar58 = &this->IntParameters;
            } while( true );
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_800.SharedReferenceCount.ReferenceController);
        }
      }
      DestructItems<FCustomizableObjectTransformParameterValue,int>
                ((FCustomizableObjectTransformParameterValue *)local_700.Data,local_6f8);
      if ((FCustomizableObjectTransformParameterValue *)local_700.Data !=
          (FCustomizableObjectTransformParameterValue *)0x0) {
        FMemory::Free(local_700.Data);
      }
      DestructItems<FCustomizableObjectProjectorParameterValue,int>
                ((FCustomizableObjectProjectorParameterValue *)local_6f0.Data,local_6e8);
      if ((FCustomizableObjectProjectorParameterValue *)local_6f0.Data !=
          (FCustomizableObjectProjectorParameterValue *)0x0) {
        FMemory::Free(local_6f0.Data);
      }
      DestructItems<FCustomizableObjectVectorParameterValue,int>
                ((FCustomizableObjectVectorParameterValue *)local_6e0.Data,local_6d8);
      if ((FCustomizableObjectVectorParameterValue *)local_6e0.Data !=
          (FCustomizableObjectVectorParameterValue *)0x0) {
        FMemory::Free(local_6e0.Data);
      }
      DestructItems<FCustomizableObjectMaterialParameterValue,int>
                ((FCustomizableObjectMaterialParameterValue *)local_710.Data,local_708);
      if ((FCustomizableObjectMaterialParameterValue *)local_710.Data !=
          (FCustomizableObjectMaterialParameterValue *)0x0) {
        FMemory::Free(local_710.Data);
      }
      DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>
                ((FCustomizableObjectSkeletalMeshParameterValue *)local_6c0.Data,local_6b8);
      if ((FCustomizableObjectSkeletalMeshParameterValue *)local_6c0.Data !=
          (FCustomizableObjectSkeletalMeshParameterValue *)0x0) {
        FMemory::Free(local_6c0.Data);
      }
      DestructItems<FCustomizableObjectTextureParameterValue,int>
                ((FCustomizableObjectTextureParameterValue *)local_6b0.Data,local_6a8);
      if ((FCustomizableObjectTextureParameterValue *)local_6b0.Data !=
          (FCustomizableObjectTextureParameterValue *)0x0) {
        FMemory::Free(local_6b0.Data);
      }
      DestructItems<FCustomizableObjectFloatParameterValue,int>
                ((FCustomizableObjectFloatParameterValue *)local_720.Data,local_718);
      if ((FCustomizableObjectFloatParameterValue *)local_720.Data !=
          (FCustomizableObjectFloatParameterValue *)0x0) {
        FMemory::Free(local_720.Data);
      }
      DestructItems<FCustomizableObjectIntParameterValue,int>
                ((FCustomizableObjectIntParameterValue *)local_730.Data,local_728);
      if ((FCustomizableObjectIntParameterValue *)local_730.Data !=
          (FCustomizableObjectIntParameterValue *)0x0) {
        FMemory::Free(local_730.Data);
      }
      DestructItems<FCustomizableObjectBoolParameterValue,int>
                ((FCustomizableObjectBoolParameterValue *)local_6d0.Data,local_6c8);
      if ((FCustomizableObjectBoolParameterValue *)local_6d0.Data !=
          (FCustomizableObjectBoolParameterValue *)0x0) {
        FMemory::Free(local_6d0.Data);
      }
    }
  }
  return;
}

// RemoveLayerAt @ 14ac31ea0

void __thiscall
FCustomizableObjectInstanceDescriptor::RemoveLayerAt
          (FCustomizableObjectInstanceDescriptor *this,FName *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(param_1,&local_48);
  iVar3 = NumProjectorLayers(this,param_1);
  if ((param_2 < 0) || (iVar3 <= param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RangeIndex >= 0 && RangeIndex < NumLayers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                       ,0xbd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsMultilayerProjector(this,&local_48);
  if (bVar2) {
    ::FString::ConcatFF(&local_38,&local_48,&NUM_LAYERS_PARAMETER_POSTFIX);
    SetFloatParameterSelectedOption(this,&local_38,(float)(iVar3 + -1),-1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    RemoveValueFromProjectorRange(this,&local_48,param_2);
    ::FString::ConcatFF(&local_28,&local_48,&IMAGE_PARAMETER_POSTFIX);
    RemoveValueFromIntRange(this,&local_28,param_2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF(&local_18,&local_48,&OPACITY_PARAMETER_POSTFIX);
    RemoveValueFromFloatRange(this,&local_18,param_2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveValueFromFloatRange @ 14ac32290

int __thiscall
FCustomizableObjectInstanceDescriptor::RemoveValueFromFloatRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  void *_Dst;
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  uint uVar6;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObject *)0x0) {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar4 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Float);
    if (uVar4 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar4 < (this->FloatParameters).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->FloatParameters).AllocatorInstance.Data;
      iVar5 = *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30);
      if (0 < iVar5) {
        if ((param_2 < 0) || (iVar5 <= param_2)) {
          param_2 = iVar5 - 1;
        }
        uVar6 = 0;
        if (param_2 < iVar5) {
          uVar6 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        _Dst = (void *)(*(longlong *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x28) +
                       (longlong)param_2 * 4);
        iVar5 = *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) + ~param_2;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar5 << 2);
        }
        *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) =
             *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x28),
                   *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30),
                   (int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x34));
        return *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) + -1;
      }
    }
  }
  return -1;
}

// RemoveValueFromIntRange @ 14ac32400

int __thiscall
FCustomizableObjectInstanceDescriptor::RemoveValueFromIntRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  uint uVar6;
  undefined8 *_Dst;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObject *)0x0) {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar4 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Int);
    if (uVar4 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar4 < (this->IntParameters).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->IntParameters).AllocatorInstance.Data;
      iVar5 = *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x38);
      if (0 < iVar5) {
        if ((param_2 < 0) || (iVar5 <= param_2)) {
          param_2 = iVar5 - 1;
        }
        uVar6 = 0;
        if (param_2 < iVar5) {
          uVar6 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        _Dst = (undefined8 *)
               ((longlong)param_2 * 0x10 +
               *(longlong *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x30));
        if ((void *)*_Dst != (void *)0x0) {
          FMemory::Free((void *)*_Dst);
        }
        iVar5 = *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x38) + ~param_2;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + 2,(longlong)iVar5 << 4);
        }
        *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x38) =
             *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x38) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x30),
                   *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x38),
                   (int *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x3c));
        return *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x40 + 0x38) + -1;
      }
    }
  }
  return -1;
}

// RemoveValueFromProjectorRange @ 14ac32590

int __thiscall
FCustomizableObjectInstanceDescriptor::RemoveValueFromProjectorRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  void *_Dst;
  uint uVar6;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObject *)0x0) {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar4 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Projector);
    if (uVar4 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar4 < (this->ProjectorParameters).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->ProjectorParameters).AllocatorInstance.Data;
      iVar5 = *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 0x60);
      if (0 < iVar5) {
        if ((param_2 < 0) || (iVar5 <= param_2)) {
          param_2 = iVar5 - 1;
        }
        uVar6 = 0;
        if (param_2 < iVar5) {
          uVar6 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        _Dst = (void *)((longlong)param_2 * 0x38 +
                       *(longlong *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 0x58));
        iVar5 = *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 0x60) + ~param_2;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)iVar5 * 0x38);
        }
        *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 0x60) =
             *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 0x60) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,4,(ForAnyElementType *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 0x58),
                   *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 0x60),
                   (int *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 100));
        return *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x68 + 0x60) + -1;
      }
    }
  }
  return -1;
}

// RemoveValueFromTextureRange @ 14ac32710

int __thiscall
FCustomizableObjectInstanceDescriptor::RemoveValueFromTextureRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  void *_Dst;
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UCustomizableObjectPrivate *this_01;
  uint uVar7;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObject *)0x0) {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar5 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Texture);
    if (uVar5 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar5 < (this->TextureParameters).ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      pFVar1 = (this->TextureParameters).AllocatorInstance.Data;
      if (0 < *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 = *(UObject **)
                      (*(longlong *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x28) + -8 +
                      (longlong)*(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30) * 8),
           pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        uVar7 = *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30) - 1;
        _Dst = (void *)(*(longlong *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x28) +
                       (longlong)(int)uVar7 * 8);
        iVar6 = ~uVar7 + *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30);
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
        }
        *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30) =
             *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x28),
                   *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30),
                   (int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x34));
        return *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x38 + 0x30) + -1;
      }
    }
  }
  return -1;
}

// RemoveValueFromTextureRange @ 14ac32840

int __thiscall
FCustomizableObjectInstanceDescriptor::RemoveValueFromTextureRange
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,int param_2)

{
  void *_Dst;
  UCustomizableObject *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UCustomizableObjectPrivate *this_01;
  uint uVar6;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObject *)0x0) {
    this_01 = UCustomizableObject::GetPrivate(this_00);
    uVar4 = UCustomizableObjectPrivate::FindParameterTyped(this_01,param_1,Texture);
    if (uVar4 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar4 < (this->TextureParameters).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->TextureParameters).AllocatorInstance.Data;
      if (0 < *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30)) {
        uVar6 = 0;
        if (param_2 < *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30)) {
          uVar6 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        _Dst = (void *)(*(longlong *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x28) +
                       (longlong)param_2 * 8);
        iVar5 = *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) + ~param_2;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
        }
        *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) =
             *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x28),
                   *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30),
                   (int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x34));
        return *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x38 + 0x30) + -1;
      }
    }
  }
  return -1;
}

// SaveDescriptor @ 14ac335b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ac345cf) */
/* WARNING: Removing unreachable block (ram,0x00014ac3437e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SaveDescriptor
          (FCustomizableObjectInstanceDescriptor *this,FArchive *param_1,bool param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  UCustomizableObject *this_00;
  void *_Src;
  FFastPathLoadBuffer *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FCustomizableObjectInstanceDescriptor *pFVar11;
  EMutableParameterType EVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  FString *pFVar18;
  UCustomizableObjectPrivate *pUVar19;
  longlong lVar20;
  char cVar21;
  FScriptContainerElement *pFVar22;
  undefined8 *puVar23;
  FScriptContainerElement FVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_288 [32];
  bool local_238 [8];
  char local_230;
  undefined1 local_22f;
  undefined1 local_22e;
  undefined1 local_22d;
  undefined1 local_22c;
  undefined1 local_22b;
  undefined1 local_22a;
  undefined1 local_229;
  undefined1 local_228;
  undefined1 local_227 [3];
  uint local_224;
  TArray<FString,TSizedDefaultAllocator<32>_> local_220;
  TArray<FString,TSizedDefaultAllocator<32>_> local_210;
  uint local_200;
  int local_1fc;
  uint local_1f8;
  int local_1f4;
  FCustomizableObjectInstanceDescriptor *local_1f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e8;
  uint local_1d8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_1d0;
  FLinearColor_u_0 local_1c0;
  FArchiveState *local_1b0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1a8;
  FString local_198;
  TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> local_188;
  FString local_178;
  FString local_168;
  longlong local_158;
  FString local_150;
  FString local_140;
  int local_130 [2];
  FString local_128;
  FString local_118;
  undefined1 local_108 [12];
  TVector<float> TStack_fc;
  undefined1 auStack_f0 [12];
  TVector<float> TStack_e4;
  undefined8 local_d8;
  FScriptContainerElement *local_d0;
  double local_c8 [2];
  double local_b8 [2];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_238[0] = param_2;
  local_1f0 = this;
  local_1b0 = (FArchiveState *)param_1;
  if ((this->CustomizableObject).field0_0x0.DebugPtr == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    ::operator<<(param_1,local_238);
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->State);
      }
    }
    else {
      this->State = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    local_158 = 0x2a;
    local_224 = UCustomizableObject::GetParameterCount
                          ((this->CustomizableObject).field0_0x0.DebugPtr);
    if (local_238[0] == false) {
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_224);
        }
      }
      else {
        local_224 = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
    }
    uVar10 = _UNK_1522bb2b8;
    uVar9 = ___xmm_42c80000412000004120000000000000;
    uVar8 = _UNK_150689648;
    uVar7 = ___xmm_3f800000000000000000000000000000;
    local_1f4 = 0;
    lVar20 = 0x2a;
    if (0 < (int)local_224) {
LAB_14ac33728:
      pFVar18 = UCustomizableObject::GetParameterName
                          ((this->CustomizableObject).field0_0x0.DebugPtr,local_1f4);
      EVar12 = UCustomizableObject::GetParameterTypeByName
                         ((this->CustomizableObject).field0_0x0.DebugPtr,pFVar18);
      if (local_238[0] == false) {
        if ((param_1->ArIsSaving == '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ar.IsSaving()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                                ,0x52,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ::operator<<(param_1,pFVar18);
      }
      switch(EVar12) {
      case Bool:
        iVar16 = (this->BoolParameters).ArrayNum;
        FVar24 = (FScriptContainerElement)0x0;
        pFVar25 = (this->BoolParameters).AllocatorInstance.Data;
        pFVar22 = pFVar25 + (longlong)iVar16 * 0x28;
        do {
          if ((this->BoolParameters).ArrayNum != iVar16) {
            local_22f = 0;
            `TCheckedPointerIterator<FCustomizableObjectBoolParameterValue,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_22f);
          }
          if (pFVar25 == pFVar22) goto LAB_14ac3380f;
          iVar17 = *(int *)(pFVar25 + 8);
          iVar2 = (pFVar18->Data).ArrayNum;
          if (iVar17 == iVar2) {
            if (iVar17 < 2) goto LAB_14ac3380a;
            iVar17 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar25,
                                (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
            bVar13 = iVar17 == 0;
          }
          else {
            bVar13 = iVar17 + iVar2 == 1;
          }
          if (bVar13) goto LAB_14ac3380a;
          pFVar25 = pFVar25 + 0x28;
        } while( true );
      case Int:
        this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
        local_1f8 = 0;
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Data.ArrayNum = 0;
        local_198.Data.ArrayMax = 0;
        local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.ArrayNum = 0;
        local_1d0.ArrayMax = 0;
        local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.ArrayNum = 0;
        local_1e8.ArrayMax = 0;
        if (this_00 == (UCustomizableObject *)0x0) {
LAB_14ac33e1a:
          cVar21 = '\0';
          if (local_238[0] == false) goto LAB_14ac33d7b;
LAB_14ac33e33:
          pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
          if (pFVar5->EndFastPathLoadBuffer <
              (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
            if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + local_158) & 1) == 0)
            {
              (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_1f8);
            }
          }
          else {
            local_1f8 = *(uint *)pFVar5->StartFastPathLoadBuffer;
            pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
          }
          if (cVar21 != '\0') {
            TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&local_1d0);
          }
        }
        else {
          pUVar19 = UCustomizableObject::GetPrivate(this_00);
          uVar14 = UCustomizableObjectPrivate::FindParameterTyped(pUVar19,pFVar18,Int);
          if ((int)uVar14 < 0) goto LAB_14ac33e1a;
          uVar15 = 0;
          if ((int)uVar14 < (this->IntParameters).ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar11 = local_1f0;
          pFVar22 = (this->IntParameters).AllocatorInstance.Data;
          lVar20 = (longlong)(int)uVar14 * 0x40;
          pUVar19 = UCustomizableObject::GetPrivate
                              ((local_1f0->CustomizableObject).field0_0x0.DebugPtr);
          pFVar25 = pFVar22 + lVar20 + 0x10;
          local_d0 = pFVar25;
          local_1f8 = UCustomizableObjectPrivate::FindIntParameterValue
                                (pUVar19,local_1f4,(FString *)pFVar25);
          pUVar19 = UCustomizableObject::GetPrivate
                              ((pFVar11->CustomizableObject).field0_0x0.DebugPtr);
          uVar15 = 0;
          if ((int)uVar14 < (local_1f0->IntParameters).ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar11 = local_1f0;
          local_130[0] = UCustomizableObjectPrivate::FindParameter
                                   (pUVar19,(FString *)
                                            ((local_1f0->IntParameters).AllocatorInstance.Data +
                                            lVar20));
          pUVar19 = UCustomizableObject::GetPrivate
                              ((pFVar11->CustomizableObject).field0_0x0.DebugPtr);
          local_230 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar19,local_130);
          if (((bool)local_230) && (uVar14 = 0, 0 < *(int *)(pFVar22 + lVar20 + 0x38))) {
            do {
              uVar15 = 0;
              if ((int)uVar14 < *(int *)(pFVar22 + lVar20 + 0x38)) {
                uVar15 = ~uVar14 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar25 = (FScriptContainerElement *)
                        (*(longlong *)(pFVar22 + lVar20 + 0x30) + (longlong)(int)uVar14 * 0x10);
              if (((local_1e8.AllocatorInstance.Data <= pFVar25) &&
                  (pFVar25 < local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayMax * 0x10)
                  ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar16 = local_1e8.ArrayNum;
              if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
              }
              local_1e8.ArrayNum = iVar16 + 1;
              ::FString::FString((FString *)
                                 (local_1e8.AllocatorInstance.Data + (longlong)iVar16 * 0x10),
                                 (FString *)pFVar25);
              pUVar19 = UCustomizableObject::GetPrivate
                                  ((local_1f0->CustomizableObject).field0_0x0.DebugPtr);
              uVar15 = 0;
              if ((int)uVar14 < *(int *)(pFVar22 + lVar20 + 0x38)) {
                uVar15 = ~uVar14 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_1fc = UCustomizableObjectPrivate::FindIntParameterValue
                                    (pUVar19,local_1f4,
                                     (FString *)
                                     (*(longlong *)(pFVar22 + lVar20 + 0x30) +
                                     (longlong)(int)uVar14 * 0x10));
              if (((local_1d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1fc) &&
                  ((FScriptContainerElement *)&local_1fc <
                   local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayMax * 4)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar16 = local_1d0.ArrayNum;
              if (local_1d0.ArrayNum == local_1d0.ArrayMax) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_1d0.AllocatorInstance,&local_1d0.ArrayMax);
              }
              uVar14 = uVar14 + 1;
              local_1d0.ArrayNum = iVar16 + 1;
              *(int *)(local_1d0.AllocatorInstance.Data + (longlong)iVar16 * 4) = local_1fc;
              pFVar25 = local_d0;
            } while ((int)uVar14 < *(int *)(pFVar22 + lVar20 + 0x38));
          }
          param_1 = (FArchive *)local_1b0;
          this = local_1f0;
          cVar21 = local_230;
          if (local_238[0] != false) goto LAB_14ac33e33;
          if ((FScriptContainerElement *)&local_198 != pFVar25) {
            iVar16 = *(int *)(pFVar25 + 8);
            _Src = *(void **)&pFVar25->field_0x0;
            local_198.Data.ArrayNum = iVar16;
            if ((iVar16 == 0) && (local_198.Data.ArrayMax == 0)) {
              local_198.Data.ArrayNum = 0;
              local_198.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar16,local_198.Data.ArrayMax,(ForAnyElementType *)&local_198,iVar16,
                         &local_198.Data.ArrayMax);
              param_1 = (FArchive *)local_1b0;
              this = local_1f0;
              cVar21 = local_230;
              if (iVar16 != 0) {
                memcpy(local_198.Data.AllocatorInstance.Data,_Src,(longlong)iVar16 * 2);
                param_1 = (FArchive *)local_1b0;
                this = local_1f0;
                cVar21 = local_230;
              }
            }
          }
LAB_14ac33d7b:
          ::operator<<(param_1,&local_198);
          if (cVar21 != '\0') {
            TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_1e8);
          }
        }
        DestructItems<FString,int>((FString *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
        if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.AllocatorInstance.Data);
        }
        if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        break;
      case Float:
        iVar16 = (this->FloatParameters).ArrayNum;
        pFVar22 = (this->FloatParameters).AllocatorInstance.Data;
        local_200 = 0;
        pFVar25 = pFVar22 + (longlong)iVar16 * 0x38;
        local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.ArrayNum = 0;
        local_1a8.ArrayMax = 0;
        do {
          if ((this->FloatParameters).ArrayNum != iVar16) {
            local_22e = 0;
            `TCheckedPointerIterator<FCustomizableObjectFloatParameterValue,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_22e);
          }
          if (pFVar22 == pFVar25) goto LAB_14ac33955;
          iVar17 = *(int *)(pFVar22 + 8);
          iVar2 = (pFVar18->Data).ArrayNum;
          if (iVar17 == iVar2) {
            if (iVar17 < 2) goto LAB_14ac338e5;
            iVar17 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar22,
                                (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
            bVar13 = iVar17 == 0;
          }
          else {
            bVar13 = iVar17 + iVar2 == 1;
          }
          if (bVar13) goto LAB_14ac338e5;
          pFVar22 = pFVar22 + 0x38;
        } while( true );
      case Color:
        iVar16 = (this->VectorParameters).ArrayNum;
        pFVar22 = (this->VectorParameters).AllocatorInstance.Data;
        pFVar25 = pFVar22 + (longlong)iVar16 * 0x30;
        local_1c0 = FLinearColor::Black.field0_0x0;
        do {
          if ((this->VectorParameters).ArrayNum != iVar16) {
            local_22d = 0;
            `TCheckedPointerIterator<FCustomizableObjectVectorParameterValue,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_22d);
          }
          if (pFVar22 == pFVar25) goto LAB_14ac33f02;
          iVar17 = *(int *)(pFVar22 + 8);
          iVar2 = (pFVar18->Data).ArrayNum;
          if (iVar17 == iVar2) {
            if (iVar17 < 2) goto LAB_14ac33efa;
            iVar17 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar22,
                                (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
            bVar13 = iVar17 == 0;
          }
          else {
            bVar13 = iVar17 + iVar2 == 1;
          }
          if (bVar13) goto LAB_14ac33efa;
          pFVar22 = pFVar22 + 0x30;
        } while( true );
      case Projector:
        iVar16 = (this->ProjectorParameters).ArrayNum;
        pFVar22 = (this->ProjectorParameters).AllocatorInstance.Data;
        local_108._0_8_ = uVar7;
        stack0xffffffffffffff00 = uVar8;
        TStack_fc.field0_0x0._4_8_ = uVar7;
        auStack_f0._0_8_ = uVar8;
        stack0xffffffffffffff18 = uVar9;
        TStack_e4.field0_0x0._4_8_ = uVar10;
        pFVar25 = pFVar22 + (longlong)iVar16 * 0x68;
        local_d8._0_4_ = (uint)local_d8 & 0xffffff00;
        local_d8 = CONCAT44(0x40c90fdb,(uint)local_d8);
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.ArrayNum = 0;
        local_188.ArrayMax = 0;
        do {
          if ((this->ProjectorParameters).ArrayNum != iVar16) {
            local_227[0] = 0;
            `TCheckedPointerIterator<FCustomizableObjectProjectorParameterValue,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_227);
          }
          if (pFVar22 == pFVar25) goto LAB_14ac34756;
          iVar17 = *(int *)(pFVar22 + 8);
          iVar2 = (pFVar18->Data).ArrayNum;
          if (iVar17 == iVar2) {
            if (iVar17 < 2) goto LAB_14ac346c2;
            iVar17 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar22,
                                (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
            bVar13 = iVar17 == 0;
          }
          else {
            bVar13 = iVar17 + iVar2 == 1;
          }
          if (bVar13) goto LAB_14ac346c2;
          pFVar22 = pFVar22 + 0x68;
        } while( true );
      case Texture:
        iVar16 = (this->TextureParameters).ArrayNum;
        pFVar22 = (this->TextureParameters).AllocatorInstance.Data;
        local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar25 = pFVar22 + (longlong)iVar16 * 0x38;
        local_150.Data.ArrayNum = 0;
        local_150.Data.ArrayMax = 0;
        local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_220.ArrayNum = 0;
        local_220.ArrayMax = 0;
        do {
          if ((this->TextureParameters).ArrayNum != iVar16) {
            local_22b = 0;
            `TCheckedPointerIterator<FCustomizableObjectTextureParameterValue,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_22b);
          }
          if (pFVar22 == pFVar25) goto LAB_14ac3438c;
          iVar17 = *(int *)(pFVar22 + 8);
          iVar2 = (pFVar18->Data).ArrayNum;
          if (iVar17 == iVar2) {
            if (iVar17 < 2) goto LAB_14ac341ee;
            iVar17 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar22,
                                (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
            bVar13 = iVar17 == 0;
          }
          else {
            bVar13 = iVar17 + iVar2 == 1;
          }
          if (bVar13) goto LAB_14ac341ee;
          pFVar22 = pFVar22 + 0x38;
        } while( true );
      case Transform:
        iVar16 = (this->TransformParameters).ArrayNum;
        pFVar22 = (this->TransformParameters).AllocatorInstance.Data;
        local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_a8._0_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_a8._8_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_a8._16_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_a8._24_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_88._0_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_88._8_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        pFVar25 = pFVar22 + (longlong)iVar16 * 0x80;
        local_88._16_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_88._24_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        do {
          if ((this->TransformParameters).ArrayNum != iVar16) {
            local_22c = 0;
            `TCheckedPointerIterator<FCustomizableObjectTransformParameterValue,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_22c);
          }
          if (pFVar22 == pFVar25) goto LAB_14ac34113;
          iVar17 = *(int *)(pFVar22 + 8);
          iVar2 = (pFVar18->Data).ArrayNum;
          if (iVar17 == iVar2) {
            if (iVar17 < 2) goto LAB_14ac340d1;
            iVar17 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar22,
                                (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
            bVar13 = iVar17 == 0;
          }
          else {
            bVar13 = iVar17 + iVar2 == 1;
          }
          if (bVar13) goto LAB_14ac340d1;
          pFVar22 = pFVar22 + 0x80;
        } while( true );
      case SkeletalMesh:
        iVar16 = (this->SkeletalMeshParameters).ArrayNum;
        pFVar22 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar25 = pFVar22 + (longlong)iVar16 * 0x38;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_210.ArrayNum = 0;
        local_210.ArrayMax = 0;
        do {
          if ((this->SkeletalMeshParameters).ArrayNum != iVar16) {
            local_229 = 0;
            `TCheckedPointerIterator<FCustomizableObjectSkeletalMeshParameterValue,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_229);
          }
          if (pFVar22 == pFVar25) goto LAB_14ac345dd;
          iVar17 = *(int *)(pFVar22 + 8);
          iVar2 = (pFVar18->Data).ArrayNum;
          if (iVar17 == iVar2) {
            if (iVar17 < 2) goto LAB_14ac3444e;
            iVar17 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar22,
                                (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
            bVar13 = iVar17 == 0;
          }
          else {
            bVar13 = iVar17 + iVar2 == 1;
          }
          if (bVar13) goto LAB_14ac3444e;
          pFVar22 = pFVar22 + 0x38;
        } while( true );
      default:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                            ,0x11c,L"");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      goto LAB_14ac34856;
    }
  }
  return;
LAB_14ac3444e:
  FObjectPtr::GetPathName((FObjectPtr *)(pFVar22 + 0x10),&local_118);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  local_140.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
  local_140.Data.ArrayNum = local_118.Data.ArrayNum;
  local_140.Data.ArrayMax = local_118.Data.ArrayMax;
  uVar14 = *(uint *)(pFVar22 + 0x30);
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  DestructItems<FString,int>((FString *)local_210.AllocatorInstance.Data,local_210.ArrayNum);
  uVar15 = local_210.ArrayMax;
  local_210._8_8_ = local_210._8_8_ & 0xffffffff00000000;
  if (uVar15 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&local_210.AllocatorInstance,0,&local_210.ArrayMax);
  }
  puVar23 = *(undefined8 **)(pFVar22 + 0x28);
  iVar16 = *(int *)(pFVar22 + 0x30);
  puVar1 = puVar23 + iVar16;
  while( true ) {
    if (*(int *)(pFVar22 + 0x30) != iVar16) {
      local_228 = 0;
      `TCheckedPointerIterator<TObjectPtr<USkeletalMesh>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_228);
    }
    if (puVar23 == puVar1) break;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*puVar23,&local_168,(UObject *)0x0);
    if (((local_210.AllocatorInstance.Data <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         local_210.AllocatorInstance.Data + (longlong)local_210.ArrayMax * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar17 = local_210.ArrayNum;
    if (local_210.ArrayNum == local_210.ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_210.AllocatorInstance,&local_210.ArrayMax);
    }
    local_210.ArrayNum = iVar17 + 1;
    lVar20 = (longlong)iVar17;
    *(undefined8 *)(local_210.AllocatorInstance.Data + lVar20 * 0x10) = 0;
    *(FScriptContainerElement **)(local_210.AllocatorInstance.Data + lVar20 * 0x10) =
         local_168.Data.AllocatorInstance.Data;
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_210.AllocatorInstance.Data + lVar20 * 0x10 + 8) = local_168.Data.ArrayNum;
    *(int *)(local_210.AllocatorInstance.Data + lVar20 * 0x10 + 0xc) = local_168.Data.ArrayMax;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    puVar23 = puVar23 + 1;
  }
LAB_14ac345dd:
  ::operator<<(param_1,&local_140);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_210);
  DestructItems<FString,int>((FString *)local_210.AllocatorInstance.Data,local_210.ArrayNum);
  if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  goto LAB_14ac34856;
LAB_14ac340d1:
  local_c8 = *(double (*) [2])(pFVar22 + 0x10);
  local_b8 = *(double (*) [2])(pFVar22 + 0x20);
  local_a8._0_16_ = *(undefined1 (*) [16])(pFVar22 + 0x30);
  local_a8._16_16_ = *(undefined1 (*) [16])(pFVar22 + 0x40);
  local_88._0_16_ = *(undefined1 (*) [16])(pFVar22 + 0x50);
  local_88._16_16_ = *(undefined1 (*) [16])(pFVar22 + 0x60);
LAB_14ac34113:
  UE::Math::operator<<(param_1,(TQuat<double> *)local_c8);
  UE::Math::operator<<(param_1,(TVector<double> *)local_a8);
  UE::Math::operator<<(param_1,(TVector<double> *)local_88);
  if (param_1->ArIsLoading != 0) {
    local_a8._24_8_ = 0;
    local_88._24_8_ = 0;
  }
  goto LAB_14ac34856;
LAB_14ac341ee:
  FObjectPtr::GetPathName((FObjectPtr *)(pFVar22 + 0x10),&local_128);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  local_150.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
  local_150.Data.ArrayNum = local_128.Data.ArrayNum;
  local_150.Data.ArrayMax = local_128.Data.ArrayMax;
  uVar14 = *(uint *)(pFVar22 + 0x30);
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  DestructItems<FString,int>((FString *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
  uVar15 = local_220.ArrayMax;
  local_220._8_8_ = local_220._8_8_ & 0xffffffff00000000;
  if (uVar15 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&local_220.AllocatorInstance,0,&local_220.ArrayMax);
  }
  puVar23 = *(undefined8 **)(pFVar22 + 0x28);
  iVar16 = *(int *)(pFVar22 + 0x30);
  puVar1 = puVar23 + iVar16;
  while( true ) {
    if (*(int *)(pFVar22 + 0x30) != iVar16) {
      local_22a = 0;
      `TCheckedPointerIterator<TObjectPtr<UTexture>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_22a);
    }
    if (puVar23 == puVar1) break;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*puVar23,&local_178,(UObject *)0x0);
    if (((local_220.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 <
         local_220.AllocatorInstance.Data + (longlong)local_220.ArrayMax * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar17 = local_220.ArrayNum;
    if (local_220.ArrayNum == local_220.ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_220.AllocatorInstance,&local_220.ArrayMax);
    }
    local_220.ArrayNum = iVar17 + 1;
    lVar20 = (longlong)iVar17;
    *(undefined8 *)(local_220.AllocatorInstance.Data + lVar20 * 0x10) = 0;
    *(FScriptContainerElement **)(local_220.AllocatorInstance.Data + lVar20 * 0x10) =
         local_178.Data.AllocatorInstance.Data;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_220.AllocatorInstance.Data + lVar20 * 0x10 + 8) = local_178.Data.ArrayNum;
    *(int *)(local_220.AllocatorInstance.Data + lVar20 * 0x10 + 0xc) = local_178.Data.ArrayMax;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    puVar23 = puVar23 + 1;
  }
LAB_14ac3438c:
  ::operator<<(param_1,&local_150);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_220);
  DestructItems<FString,int>((FString *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
  if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  goto LAB_14ac34856;
LAB_14ac346c2:
  local_108._0_8_ = *(undefined8 *)(pFVar22 + 0x10);
  unique0x10000f1f = *(undefined8 *)(pFVar22 + 0x18);
  TStack_fc.field0_0x0._4_8_ = *(undefined8 *)(pFVar22 + 0x20);
  auStack_f0._0_8_ = *(undefined8 *)(pFVar22 + 0x28);
  unique0x10000f57 = *(undefined8 *)(pFVar22 + 0x30);
  TStack_e4.field0_0x0._4_8_ = *(undefined8 *)(pFVar22 + 0x38);
  local_d8 = *(undefined8 *)(pFVar22 + 0x40);
  if (&local_188 !=
      (TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> *)(pFVar22 + 0x58)) {
    iVar16 = *(int *)(pFVar22 + 0x60);
    pFVar22 = (((TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> *)(pFVar22 + 0x58)
               )->AllocatorInstance).Data;
    local_188.ArrayNum = iVar16;
    if ((iVar16 == 0) && (local_188.ArrayMax == 0)) {
      local_188.ArrayNum = 0;
      local_188.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,4,iVar16,local_188.ArrayMax,&local_188.AllocatorInstance,iVar16,
                 &local_188.ArrayMax);
      if (iVar16 != 0) {
        memcpy(local_188.AllocatorInstance.Data,pFVar22,(longlong)iVar16 * 0x38);
      }
    }
  }
LAB_14ac34756:
  UE::Math::operator<<(param_1,(TVector<float> *)local_108);
  UE::Math::operator<<(param_1,&TStack_fc);
  UE::Math::operator<<(param_1,(TVector<float> *)auStack_f0);
  UE::Math::operator<<(param_1,&TStack_e4);
  pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 1) {
    (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))(param_1,&local_d8);
  }
  else {
    local_d8 = CONCAT71(local_d8._1_7_,*pFVar5->StartFastPathLoadBuffer);
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 1;
  }
  pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 4) {
    if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + lVar20) & 1) == 0) {
      (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)((longlong)&local_d8 + 4));
    }
  }
  else {
    local_d8 = CONCAT44(*(undefined4 *)pFVar5->StartFastPathLoadBuffer,(uint)local_d8);
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  TArrayPrivateFriend::Serialize<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_>
            (param_1,&local_188);
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  goto LAB_14ac34856;
LAB_14ac33efa:
                    /* WARNING: Load size is inaccurate */
  local_1c0 = *(FLinearColor_u_0 *)((FLinearColor_u_0 *)(pFVar22 + 0x10))->RGBA;
LAB_14ac33f02:
  pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 4) {
    if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + lVar20) & 1) == 0) {
      (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_1c0.RGBA);
    }
  }
  else {
    local_1c0._s_0.R = (float)*(undefined4 *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 4) {
    if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + lVar20) & 1) == 0) {
      (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)((longlong)&local_1c0._s_0 + 4));
    }
  }
  else {
    local_1c0._s_0.G = (float)*(undefined4 *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 4) {
    if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + lVar20) & 1) == 0) {
      (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)((longlong)&local_1c0._s_0 + 8));
    }
  }
  else {
    local_1c0._s_0.B = (float)*(undefined4 *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 4) {
    if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + lVar20) & 1) == 0) {
      (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)((longlong)&local_1c0._s_0 + 0xc));
    }
  }
  else {
    local_1c0._s_0.A = (float)*(undefined4 *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  goto LAB_14ac34856;
LAB_14ac338e5:
  local_200 = *(uint *)(pFVar22 + 0x10);
  if (&local_1a8 != (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar22 + 0x28)) {
    iVar16 = *(int *)(pFVar22 + 0x30);
    pFVar22 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar22 + 0x28))->AllocatorInstance).
              Data;
    local_1a8.ArrayNum = iVar16;
    if ((iVar16 == 0) && (local_1a8.ArrayMax == 0)) {
      local_1a8.ArrayNum = 0;
      local_1a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar16,local_1a8.ArrayMax,&local_1a8.AllocatorInstance,iVar16,
                 &local_1a8.ArrayMax);
      if (iVar16 != 0) {
        memcpy(local_1a8.AllocatorInstance.Data,pFVar22,(longlong)iVar16 << 2);
      }
    }
  }
LAB_14ac33955:
  pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
    if ((*(byte *)((longlong)&((FArchiveState *)param_1)->_padding_ + lVar20) & 1) == 0) {
      (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_200);
    }
  }
  else {
    local_200 = *(uint *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&local_1a8);
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  goto LAB_14ac34856;
LAB_14ac3380a:
  FVar24 = pFVar25[0x10];
LAB_14ac3380f:
  pFVar5 = ((FArchiveState *)param_1)->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 4) {
    local_1d8[0] = 0;
    if (param_1->ArIsLoading == 0) {
      local_1d8[0] = (uint)(FVar24 != (FScriptContainerElement)0x0);
    }
    (**(code **)(((FArchiveState *)param_1)->_padding_ + 0x188))(param_1,local_1d8);
    if (1 < local_1d8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
LAB_14ac34856:
  local_1f4 = local_1f4 + 1;
  lVar20 = local_158;
  if ((int)local_224 <= local_1f4) {
    return;
  }
  goto LAB_14ac33728;
}

// SetBoolParameterSelectedOption @ 14ac34910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetBoolParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,bool param_2)

{
  UCustomizableObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  UCustomizableObjectPrivate *pUVar7;
  FCustomizableObjectInstanceDescriptor *local_res8;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar3 = UCustomizableObject::IsCompiled(pUVar1);
    if ((bVar3) ||
       (local_res8 = this,
       bVar3 = `FCustomizableObjectInstanceDescriptor::SetBoolParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_res8), bVar3)) {
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      iVar4 = UCustomizableObjectPrivate::FindParameter(pUVar7,param_1);
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        uVar5 = 0xffffffff;
      }
      else {
        pUVar7 = UCustomizableObject::GetPrivate(pUVar1);
        uVar5 = UCustomizableObjectPrivate::FindParameterTyped(pUVar7,param_1,Bool);
      }
      if ((iVar4 < 0) || ((int)uVar5 < 0)) {
        if (2 < (byte)LogMutable._0_1_) {
          pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
          if (pUVar1 == (UCustomizableObject *)0x0) {
            ::FString::FString(&local_38,L"None");
          }
          else {
            local_res20 = (FName)pUVar1->_padding_;
            ::FName::ToString(&local_res20,&local_38);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        uVar6 = 0;
        if ((int)uVar5 < (this->BoolParameters).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->BoolParameters).AllocatorInstance.Data[(longlong)(int)uVar5 * 0x28 + 0x10] =
             (FScriptContainerElement)param_2;
      }
    }
    else {
      ::FString::PrintfImpl(&local_28,L"Calling function: %hs.  %s");
      pUVar7 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar7,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetBuildParameterRelevancy @ 14ac34b30

void __thiscall
FCustomizableObjectInstanceDescriptor::SetBuildParameterRelevancy
          (FCustomizableObjectInstanceDescriptor *this,bool param_1)

{
  this->bBuildParameterRelevancy = param_1;
  return;
}

// SetColorParameterSelectedOption @ 14ac34b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetColorParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,FLinearColor *param_2)

{
  UCustomizableObject *this_00;
  bool bVar1;
  UCustomizableObjectPrivate *this_01;
  FCustomizableObjectInstanceDescriptor *local_res8;
  FString local_18;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar1 = UCustomizableObject::IsCompiled(this_00);
    if ((!bVar1) &&
       (local_res8 = this,
       bVar1 = `FCustomizableObjectInstanceDescriptor::SetColorParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_res8), !bVar1)) {
      ::FString::PrintfImpl(&local_18,L"Calling function: %hs.  %s");
      this_01 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(this_01,&local_18);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
    SetVectorParameterSelectedOption(this,param_1,param_2);
  }
  return;
}

// SetCurrentState @ 14ac34d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetCurrentState
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1)

{
  UCustomizableObject *this_00;
  bool bVar1;
  int iVar2;
  UCustomizableObjectPrivate *pUVar3;
  FCustomizableObjectInstanceDescriptor *local_res8;
  FString local_18;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar1 = UCustomizableObject::IsCompiled(this_00);
    if ((bVar1) ||
       (local_res8 = this,
       bVar1 = `FCustomizableObjectInstanceDescriptor::SetCurrentState'::__l6::<lambda_1>::
               operator()(&local_res8), bVar1)) {
      pUVar3 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      iVar2 = UCustomizableObjectPrivate::FindState(pUVar3,param_1);
      if ((iVar2 != -1) ||
         (local_res8 = (FCustomizableObjectInstanceDescriptor *)param_1,
         bVar1 = `FCustomizableObjectInstanceDescriptor::SetCurrentState'::__l9::<lambda_2>::
                 operator()(&local_res8), bVar1)) {
        this->State = iVar2;
      }
      else if (1 < (byte)LogMutable._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        return;
      }
    }
    else {
      ::FString::PrintfImpl(&local_18,L"Calling function: %hs.  %s");
      pUVar3 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar3,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetCustomizableObject @ 14ac34e50

void __thiscall
FCustomizableObjectInstanceDescriptor::SetCustomizableObject
          (FCustomizableObjectInstanceDescriptor *this,UCustomizableObject *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCustomizableObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CustomizableObject).field0_0x0.DebugPtr = param_1;
  ReloadParameters(this);
  return;
}

// SetDefaultValue @ 14ac34fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetDefaultValue
          (FCustomizableObjectInstanceDescriptor *this,int param_1)

{
  UCustomizableObject *pUVar1;
  code *pcVar2;
  EMutableParameterType EVar3;
  FScriptContainerElement FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FString *pFVar8;
  UCustomizableObjectPrivate *pUVar9;
  UTexture *pUVar10;
  USkeletalMesh *pUVar11;
  UMaterialInterface *pUVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  float fVar17;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  FString local_158;
  FLinearColor_u_0 local_148;
  TVector<float>_u_0 local_138 [2];
  TVector<float>_u_0 aTStack_120 [3];
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    iVar6 = UCustomizableObject::GetParameterCount(pUVar1);
    if (param_1 < iVar6) {
      pFVar8 = UCustomizableObject::GetParameterName
                         ((this->CustomizableObject).field0_0x0.DebugPtr,param_1);
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      lVar13 = (longlong)local_168.Data.ArrayNum;
      pFVar15 = (pFVar8->Data).AllocatorInstance.Data;
      if (local_168.Data.ArrayNum == 0) {
        local_168.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_168.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
                   local_168.Data.ArrayNum,&local_168.Data.ArrayMax);
        memcpy(local_168.Data.AllocatorInstance.Data,pFVar15,lVar13 * 2);
      }
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      EVar3 = UCustomizableObjectPrivate::GetParameterType(pUVar9,param_1);
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        pUVar9 = UCustomizableObject::GetPrivate(pUVar1);
        uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar9,&local_168,EVar3);
      }
      uVar16 = 0;
      switch(EVar3) {
      case Bool:
        FVar4 = (FScriptContainerElement)
                UCustomizableObject::GetBoolParameterDefaultValue
                          ((this->CustomizableObject).field0_0x0.DebugPtr,&local_168);
        uVar16 = 0;
        if ((int)uVar7 < (this->BoolParameters).ArrayNum) {
          uVar16 = ~uVar7 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->BoolParameters).AllocatorInstance.Data[(longlong)(int)uVar7 * 0x28 + 0x10] = FVar4;
        break;
      case Int:
        pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        iVar6 = UCustomizableObject::GetEnumParameterDefaultValue
                          ((this->CustomizableObject).field0_0x0.DebugPtr,&local_168);
        UCustomizableObjectPrivate::FindIntParameterValueName(pUVar9,&local_158,param_1,iVar6);
        if ((int)uVar7 < (this->IntParameters).ArrayNum) {
          uVar16 = ~uVar7 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar15 = (this->IntParameters).AllocatorInstance.Data;
        lVar13 = (longlong)(int)uVar7 * 0x40;
        ::FString::operator=((FString *)(pFVar15 + lVar13 + 0x10),&local_158);
        DestructItems<FString,int>
                  (*(FString **)(pFVar15 + lVar13 + 0x30),*(int *)(pFVar15 + lVar13 + 0x38));
        *(undefined4 *)(pFVar15 + lVar13 + 0x38) = 0;
        if (*(int *)(pFVar15 + lVar13 + 0x3c) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)(pFVar15 + lVar13 + 0x30),0,
                     (int *)(pFVar15 + lVar13 + 0x3c));
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        break;
      case Float:
        fVar17 = UCustomizableObject::GetFloatParameterDefaultValue
                           ((this->CustomizableObject).field0_0x0.DebugPtr,&local_168);
        if ((int)uVar7 < (this->FloatParameters).ArrayNum) {
          uVar16 = ~uVar7 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar15 = (this->FloatParameters).AllocatorInstance.Data;
        *(float *)(pFVar15 + (longlong)(int)uVar7 * 0x38 + 0x10) = fVar17;
        pFVar15 = pFVar15 + (longlong)(int)uVar7 * 0x38 + 0x28;
        *(undefined4 *)&pFVar15[8].field_0x0 = 0;
        if (*(int *)(pFVar15 + 0xc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
        }
        break;
      case Color:
        UCustomizableObject::GetColorParameterDefaultValue
                  ((this->CustomizableObject).field0_0x0.DebugPtr,(FLinearColor *)&local_148._s_0,
                   &local_168);
        if ((int)uVar7 < (this->VectorParameters).ArrayNum) {
          uVar16 = ~uVar7 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar15 = (this->VectorParameters).AllocatorInstance.Data +
                  (longlong)(int)uVar7 * 0x30 + 0x10;
        *(undefined8 *)pFVar15 = local_148._0_8_;
        *(undefined8 *)(pFVar15 + 8) = local_148._8_8_;
        break;
      case Projector:
        UCustomizableObject::GetProjectorParameterDefaultValue
                  ((this->CustomizableObject).field0_0x0.DebugPtr,
                   (FCustomizableObjectProjector *)&local_138[0]._s_0,&local_168);
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar16 = ~uVar7 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar13 = (longlong)(int)uVar7 * 0x68;
        pFVar15 = (this->ProjectorParameters).AllocatorInstance.Data;
        *(undefined8 *)(pFVar15 + lVar13 + 0x10) = local_138[0]._0_8_;
        *(undefined8 *)(pFVar15 + lVar13 + 0x10 + 8) = local_138._8_8_;
        pFVar14 = pFVar15 + lVar13 + 0x58;
        *(undefined8 *)(pFVar15 + lVar13 + 0x20) = local_138[1]._4_8_;
        *(undefined8 *)(pFVar15 + lVar13 + 0x20 + 8) = aTStack_120[0]._0_8_;
        *(undefined8 *)(pFVar15 + lVar13 + 0x30) = aTStack_120._8_8_;
        *(undefined8 *)(pFVar15 + lVar13 + 0x30 + 8) = aTStack_120[1]._4_8_;
        *(undefined8 *)(pFVar15 + lVar13 + 0x40) = aTStack_120[2]._0_8_;
        *(undefined4 *)&pFVar14[8].field_0x0 = 0;
        if (*(int *)(pFVar14 + 0xc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,4,0,(ForAnyElementType *)pFVar14,0,(int *)(pFVar14 + 0xc));
        }
        break;
      case Texture:
        pUVar10 = UCustomizableObject::GetTextureParameterDefaultValue
                            ((this->CustomizableObject).field0_0x0.DebugPtr,&local_168);
        if (((int)uVar7 < 0) || ((this->TextureParameters).ArrayNum <= (int)uVar7)) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7378402241390054202>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                             ,0xb3a,"TextureParameters.IsValidIndex(TypedIndex)");
          if (bVar5) goto code_r0x00014ac35850;
        }
        else {
          if ((int)uVar7 < (this->TextureParameters).ArrayNum) {
            uVar16 = ~uVar7 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar15 = (this->TextureParameters).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UTexture *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          *(UTexture **)(pFVar15 + (longlong)(int)uVar7 * 0x38 + 0x10) = pUVar10;
          pFVar15 = pFVar15 + (longlong)(int)uVar7 * 0x38 + 0x28;
          *(undefined4 *)&pFVar15[8].field_0x0 = 0;
          if (*(int *)(pFVar15 + 0xc) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
          }
        }
        break;
      case Transform:
        UCustomizableObject::GetTransformParameterDefaultValue
                  ((this->CustomizableObject).field0_0x0.DebugPtr,&local_f8,&local_168);
        if ((int)uVar7 < (this->TransformParameters).ArrayNum) {
          uVar16 = ~uVar7 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar15 = (this->TransformParameters).AllocatorInstance.Data;
        lVar13 = (longlong)(int)uVar7 * 0x80;
        *(double *)(pFVar15 + lVar13 + 0x10) = local_f8.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar15 + lVar13 + 0x10 + 8) = local_f8.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar15 + lVar13 + 0x20) = local_f8.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar15 + lVar13 + 0x20 + 8) = local_f8.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar15 + lVar13 + 0x30) = local_f8.Translation.XY.m128d_f64[0];
        *(double *)(pFVar15 + lVar13 + 0x30 + 8) = local_f8.Translation.XY.m128d_f64[1];
        *(double *)(pFVar15 + lVar13 + 0x40) = local_f8.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar15 + lVar13 + 0x40 + 8) = local_f8.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar15 + lVar13 + 0x50) = local_f8.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar15 + lVar13 + 0x50 + 8) = local_f8.Scale3D.XY.m128d_f64[1];
        *(double *)(pFVar15 + lVar13 + 0x60) = local_f8.Scale3D.ZW.m128d_f64[0];
        *(double *)(pFVar15 + lVar13 + 0x60 + 8) = local_f8.Scale3D.ZW.m128d_f64[1];
        break;
      case SkeletalMesh:
        pUVar11 = UCustomizableObject::GetSkeletalMeshParameterDefaultValue
                            ((this->CustomizableObject).field0_0x0.DebugPtr,&local_168);
        if (((int)uVar7 < 0) || ((this->SkeletalMeshParameters).ArrayNum <= (int)uVar7)) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7378402241390054215>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                             ,0xb47,"SkeletalMeshParameters.IsValidIndex(TypedIndex)");
          if (bVar5) goto code_r0x00014ac35850;
        }
        else {
          if ((int)uVar7 < (this->SkeletalMeshParameters).ArrayNum) {
            uVar16 = ~uVar7 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar15 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar11 != (USkeletalMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar11);
          }
          *(USkeletalMesh **)(pFVar15 + (longlong)(int)uVar7 * 0x38 + 0x10) = pUVar11;
          pFVar15 = pFVar15 + (longlong)(int)uVar7 * 0x38 + 0x28;
          *(undefined4 *)&pFVar15[8].field_0x0 = 0;
          if (*(int *)(pFVar15 + 0xc) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
          }
        }
        break;
      case Material:
        pUVar12 = UCustomizableObject::GetMaterialParameterDefaultValue
                            ((this->CustomizableObject).field0_0x0.DebugPtr,&local_168);
        if (((int)uVar7 < 0) || ((this->MaterialParameters).ArrayNum <= (int)uVar7)) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7378402241390054228>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                             ,0xb54,"MaterialParameters.IsValidIndex(TypedIndex)");
          if (bVar5) goto code_r0x00014ac35850;
        }
        else {
          if ((int)uVar7 < (this->MaterialParameters).ArrayNum) {
            uVar16 = ~uVar7 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar15 = (this->MaterialParameters).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar12 != (UMaterialInterface *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          *(UMaterialInterface **)(pFVar15 + (longlong)(int)uVar7 * 0x38 + 0x10) = pUVar12;
          pFVar15 = pFVar15 + (longlong)(int)uVar7 * 0x38 + 0x28;
          *(undefined4 *)&pFVar15[8].field_0x0 = 0;
          if (*(int *)(pFVar15 + 0xc) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
          }
        }
        break;
      default:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Unimplemented function called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                           ,0xb5f,L"");
        if (bVar5) {
code_r0x00014ac35850:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetDefaultValues @ 14ac358d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetDefaultValues(FCustomizableObjectInstanceDescriptor *this)

{
  UCustomizableObject *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    iVar1 = UCustomizableObject::GetParameterCount(this_00);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        SetDefaultValue(this,iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}

// SetFirstRequestedLOD @ 14ac35950

void __thiscall
FCustomizableObjectInstanceDescriptor::SetFirstRequestedLOD
          (FCustomizableObjectInstanceDescriptor *this,
          TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
          *param_1)

{
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->FirstRequestedLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_1);
  return;
}

// SetFloatParameterSelectedOption @ 14ac359b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetFloatParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,float param_2,int param_3)

{
  void *_Src;
  size_t _Size;
  int iVar1;
  UCustomizableObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  UCustomizableObjectPrivate *pUVar10;
  int iVar11;
  TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  int local_res8 [2];
  FCustomizableObjectInstanceDescriptor *local_78;
  longlong local_70;
  FName local_68;
  FString local_60;
  FString local_50 [2];
  
  pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar2 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    bVar6 = UCustomizableObject::IsCompiled(pUVar2);
    if ((bVar6) ||
       (local_78 = this,
       bVar6 = `FCustomizableObjectInstanceDescriptor::SetFloatParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_78), bVar6)) {
      pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar10,param_1);
      pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UCustomizableObject *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        pUVar10 = UCustomizableObject::GetPrivate(pUVar2);
        uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar10,param_1,Float);
      }
      if ((local_res8[0] < 0) || ((int)uVar7 < 0)) {
        if (2 < (byte)LogMutable._0_1_) {
          pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
          if (pUVar2 == (UCustomizableObject *)0x0) {
            ::FString::FString(&local_60,L"None");
          }
          else {
            local_68 = (FName)pUVar2->_padding_;
            ::FName::ToString(&local_68,&local_60);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar10,local_res8);
        if ((bVar6) && (param_3 != -1)) {
          uVar13 = ~uVar7 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar7 < (this->FloatParameters).ArrayNum) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar12 = &this->FloatParameters;
          if ((param_3 < 0) ||
             (*(int *)((this->FloatParameters).AllocatorInstance.Data +
                      (longlong)(int)uVar7 * 0x38 + 0x30) <= param_3)) {
            uVar8 = 0;
            if ((int)uVar7 < (this->FloatParameters).ArrayNum) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_70 = (longlong)(int)uVar7 * 0x38;
            iVar1 = *(int *)((this->FloatParameters).AllocatorInstance.Data + local_70 + 0x30);
            uVar8 = 0;
            if ((int)uVar7 < (this->FloatParameters).ArrayNum) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar5 = local_70;
            iVar11 = (param_3 - *(int *)((pTVar12->AllocatorInstance).Data + local_70 + 0x30)) + 1;
            uVar8 = 0;
            if ((int)uVar7 < (this->FloatParameters).ArrayNum) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (pTVar12->AllocatorInstance).Data;
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,iVar11,(ForAnyElementType *)(pFVar3 + lVar5 + 0x28),
                               (int *)(pFVar3 + lVar5 + 0x30),(int *)(pFVar3 + lVar5 + 0x34));
            _Src = (void *)(*(longlong *)(pFVar3 + lVar5 + 0x28) + (longlong)iVar1 * 4);
            _Size = (longlong)iVar11 * 4;
            memmove((void *)((longlong)_Src + _Size),_Src,(longlong)(iVar9 - iVar1) << 2);
            memset((void *)(*(longlong *)(pFVar3 + lVar5 + 0x28) + (longlong)iVar1 * 4),0,_Size);
          }
          uVar8 = 0;
          if ((int)uVar7 < (this->FloatParameters).ArrayNum) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((param_3 < 0) ||
              (*(int *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x38 + 0x30) <=
               param_3)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("FloatParameters[ParameterIndexInInstance].ParameterRangeValues.IsValidIndex(RangeIndex)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                                 ,0x68c,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar7 < (this->FloatParameters).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pTVar12->AllocatorInstance).Data;
          uVar8 = 0;
          if (param_3 < *(int *)(pFVar3 + (longlong)(int)uVar7 * 0x38 + 0x30)) {
            uVar8 = (uint)~param_3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(float *)(*(longlong *)(pFVar3 + (longlong)(int)uVar7 * 0x38 + 0x28) +
                    (longlong)param_3 * 4) = param_2;
        }
        else {
          uVar8 = 0;
          if ((int)uVar7 < (this->FloatParameters).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(float *)((this->FloatParameters).AllocatorInstance.Data +
                    (longlong)(int)uVar7 * 0x38 + 0x10) = param_2;
        }
      }
    }
    else {
      ::FString::PrintfImpl(local_50,L"Calling function: %hs.  %s");
      pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar10,local_50);
      if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetIntParameterSelectedOption @ 14ac36040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,FString *param_2,int param_3
          )

{
  UCustomizableObject *pUVar1;
  bool bVar2;
  int iVar3;
  UCustomizableObjectPrivate *pUVar4;
  FName local_res8;
  FString local_18;
  
  pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  else {
    bVar2 = UCustomizableObject::IsCompiled(pUVar1);
    if ((bVar2) ||
       (local_res8 = (FName)this,
       bVar2 = `FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_res8), bVar2)) {
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 != (UCustomizableObject *)0x0) {
        pUVar4 = UCustomizableObject::GetPrivate(pUVar1);
        iVar3 = UCustomizableObjectPrivate::FindParameterTyped(pUVar4,param_1,Int);
        if (iVar3 != -1) {
          SetIntParameterSelectedOption(this,iVar3,param_2,param_3);
          return;
        }
      }
      if ((byte)LogMutable._0_1_ < 3) {
        return;
      }
      pUVar1 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar1 == (UCustomizableObject *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res8 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res8,&local_18);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    else {
      ::FString::PrintfImpl(&local_18,L"Calling function: %hs.  %s");
      pUVar4 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar4,&local_18);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetIntParameterSelectedOption @ 14ac361d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,int param_1,FString *param_2,int param_3)

{
  int iVar1;
  UCustomizableObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  UCustomizableObjectPrivate *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  uint uVar12;
  void *_Src;
  int iVar13;
  size_t _Size;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int local_res8 [2];
  uint local_res10;
  FString *local_res18;
  uint local_res20;
  FString local_c8;
  FString local_b8;
  FCustomizableObjectInstanceDescriptor *local_a8;
  longlong local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  lVar17 = (longlong)param_1;
  pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pUVar2 == (UCustomizableObject *)0x0) {
    if ((byte)LogMutable._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    return;
  }
  bVar5 = UCustomizableObject::IsCompiled(pUVar2);
  if ((!bVar5) &&
     (local_a8 = this,
     bVar5 = `FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption'::__l6::
             <lambda_1>::operator()(&local_a8), !bVar5)) {
    ::FString::PrintfImpl(&local_70,L"Calling function: %hs.  %s");
    pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
    UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar9,&local_70);
    if (local_70.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
    return;
  }
  if ((param_1 < 0) || ((this->IntParameters).ArrayNum <= param_1)) {
    local_res8[0] = -1;
  }
  else {
    pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
    iVar13 = 0;
    uVar12 = 0;
    if (param_1 < (this->IntParameters).ArrayNum) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res8[0] =
         UCustomizableObjectPrivate::FindParameter
                   (pUVar9,(FString *)((this->IntParameters).AllocatorInstance.Data + lVar17 * 0x40)
                   );
    if (-1 < local_res8[0]) {
      if ((param_2->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar11,L"None");
      uVar12 = 0;
      if (iVar6 == 0) {
LAB_14ac3654a:
        pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        bVar5 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar9,local_res8);
        if ((!bVar5) || (param_3 == -1)) {
          if (param_1 < (this->IntParameters).ArrayNum) {
            uVar12 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ::FString::operator=
                    ((FString *)
                     ((this->IntParameters).AllocatorInstance.Data + lVar17 * 0x40 + 0x10),param_2);
          return;
        }
        uVar14 = (uint)~param_1 >> 0x1f;
        uVar16 = uVar12;
        if (param_1 < (this->IntParameters).ArrayNum) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar16 = 0;
        if ((param_3 < 0) ||
           (lVar15 = lVar17 * 0x40,
           *(int *)((this->IntParameters).AllocatorInstance.Data + lVar17 * 0x40 + 0x38) <= param_3)
           ) {
          uVar8 = uVar16;
          if (param_1 < (this->IntParameters).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar17 = lVar17 * 0x40;
          iVar13 = *(int *)((this->IntParameters).AllocatorInstance.Data + lVar17 + 0x38);
          iVar6 = (param_3 - iVar13) + 1;
          uVar8 = uVar16;
          if (param_1 < (this->IntParameters).ArrayNum) {
            uVar8 = uVar14;
          }
          local_a0 = lVar17;
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->IntParameters).AllocatorInstance.Data;
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,iVar6,(ForAnyElementType *)(pFVar3 + lVar17 + 0x30),
                             (int *)(pFVar3 + lVar17 + 0x38),(int *)(pFVar3 + lVar17 + 0x3c));
          _Src = (void *)(*(longlong *)(pFVar3 + lVar17 + 0x30) + (longlong)iVar13 * 0x10);
          _Size = (longlong)iVar6 * 0x10;
          memmove((void *)((longlong)_Src + _Size),_Src,(longlong)(iVar7 - iVar13) << 4);
          memset((void *)(*(longlong *)(pFVar3 + lVar17 + 0x30) + (longlong)iVar13 * 0x10),0,_Size);
          lVar15 = local_a0;
          param_3 = local_res20;
        }
        uVar8 = uVar16;
        if (param_1 < (this->IntParameters).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((param_3 < 0) ||
            (*(int *)((this->IntParameters).AllocatorInstance.Data + lVar15 + 0x38) <= param_3)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntParameters[ParameterIndexInInstance].ParameterRangeValueNames.IsValidIndex(RangeIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                               ,0x629,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (param_1 < (this->IntParameters).ArrayNum) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->IntParameters).AllocatorInstance.Data;
        if (param_3 < *(int *)(pFVar3 + lVar15 + 0x38)) {
          uVar12 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::FString::operator=
                  ((FString *)((longlong)param_3 * 0x10 + *(longlong *)(pFVar3 + lVar15 + 0x30)),
                   local_res18);
        return;
      }
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      iVar7 = UCustomizableObjectPrivate::FindIntParameterValue(pUVar9,local_res8[0],param_2);
      iVar6 = local_res8[0];
      if (-1 < iVar7) goto LAB_14ac3654a;
      pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      pUVar9 = UCustomizableObject::GetPrivate(pUVar2);
      iVar7 = UCustomizableObjectPrivate::GetEnumParameterNumValues(pUVar9,iVar6);
      if (0 < iVar7) {
        do {
          pUVar9 = UCustomizableObject::GetPrivate(pUVar2);
          pFVar10 = UCustomizableObjectPrivate::GetIntParameterAvailableOption(pUVar9,iVar6,iVar13);
          iVar1 = (pFVar10->Data).ArrayNum;
          uVar16 = iVar1 - 1;
          if (iVar1 == 0) {
            uVar16 = uVar12;
          }
          ::FString::AppendChars(&local_c8,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,uVar16)
          ;
          if (iVar13 < iVar7 + -1) {
            pFVar10 = ::FString::FString(local_60,", ");
            iVar1 = (pFVar10->Data).ArrayNum;
            uVar16 = iVar1 - 1;
            if (iVar1 == 0) {
              uVar16 = uVar12;
            }
            ::FString::AppendChars
                      (&local_c8,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,uVar16);
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
          }
          iVar13 = iVar13 + 1;
          param_2 = local_res18;
          param_1 = local_res10;
        } while (iVar13 < iVar7);
      }
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::FindIntParameterValue(pUVar9,local_res8[0],param_2);
      if (param_1 < (this->IntParameters).ArrayNum) {
        uVar12 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::PrintfImpl
                (&local_90,
                 L"Tried to set the invalid value [%s] to parameter [%d, %s]! Value index=[%d]. Correct values=[%s]."
                );
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_80.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
      if (1 < (byte)LogMutable._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        local_80.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
      }
      goto LAB_14ac3691e;
    }
  }
  pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
  ::FString::FString(&local_80,L"Unknown Int Parmeter");
  if (2 < (byte)LogMutable._0_1_) {
    if (pUVar2 == (UCustomizableObject *)0x0) {
      ::FString::FString(&local_b8,L"None");
    }
    else {
      local_98 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_98,&local_b8);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
LAB_14ac3691e:
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

// SetMaterialParameterSelectedOption @ 14ac36960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetMaterialParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,UMaterialInterface *param_2,
          int param_3)

{
  longlong lVar1;
  size_t _Size;
  int iVar2;
  UCustomizableObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  UCustomizableObjectPrivate *pUVar10;
  longlong lVar11;
  void *_Src;
  int iVar12;
  TArray<FCustomizableObjectMaterialParameterValue,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  int local_res8 [2];
  FCustomizableObjectInstanceDescriptor *local_60;
  FName local_58;
  FString local_50;
  FString local_40;
  
  pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar6 = UCustomizableObject::IsCompiled(pUVar3);
    if ((bVar6) ||
       (local_60 = this,
       bVar6 = `FCustomizableObjectInstanceDescriptor::SetMaterialParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_60), bVar6)) {
      pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar10,param_1);
      pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        pUVar10 = UCustomizableObject::GetPrivate(pUVar3);
        uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar10,param_1,Material);
      }
      if ((local_res8[0] < 0) || ((int)uVar7 < 0)) {
        if (2 < (byte)LogMutable._0_1_) {
          pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
          if (pUVar3 == (UCustomizableObject *)0x0) {
            ::FString::FString(&local_50,L"None");
          }
          else {
            local_58 = (FName)pUVar3->_padding_;
            ::FName::ToString(&local_58,&local_50);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar10,local_res8);
        if ((bVar6) && (param_3 != -1)) {
          uVar14 = ~uVar7 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar7 < (this->MaterialParameters).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar13 = &this->MaterialParameters;
          if ((param_3 < 0) ||
             (*(int *)((this->MaterialParameters).AllocatorInstance.Data +
                      (longlong)(int)uVar7 * 0x38 + 0x30) <= param_3)) {
            uVar8 = 0;
            if ((int)uVar7 < (this->MaterialParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar11 = (longlong)(int)uVar7 * 0x38;
            iVar2 = *(int *)((this->MaterialParameters).AllocatorInstance.Data + lVar11 + 0x30);
            uVar8 = 0;
            if ((int)uVar7 < (this->MaterialParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = (param_3 - *(int *)((pTVar13->AllocatorInstance).Data + lVar11 + 0x30)) + 1;
            uVar8 = 0;
            if ((int)uVar7 < (this->MaterialParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar13->AllocatorInstance).Data;
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar12,(ForAnyElementType *)(pFVar4 + lVar11 + 0x28),
                               (int *)(pFVar4 + lVar11 + 0x30),(int *)(pFVar4 + lVar11 + 0x34));
            lVar1 = (longlong)iVar2 * 8;
            _Src = (void *)(*(longlong *)(pFVar4 + lVar11 + 0x28) + lVar1);
            _Size = (longlong)iVar12 * 8;
            memmove((void *)((longlong)_Src + _Size),_Src,(longlong)(iVar9 - iVar2) << 3);
            memset((void *)(*(longlong *)(pFVar4 + lVar11 + 0x28) + lVar1),0,_Size);
          }
          uVar8 = 0;
          if ((int)uVar7 < (this->MaterialParameters).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_3 < 0) ||
              (*(int *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x38 + 0x30) <=
               param_3)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("MaterialParameters[ParameterIndexInInstance].ParameterRangeValues.IsValidIndex(RangeIndex)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                                 ,0x774,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar7 < (this->MaterialParameters).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar13->AllocatorInstance).Data;
          uVar8 = 0;
          if (param_3 < *(int *)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x30)) {
            uVar8 = (uint)~param_3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = *(longlong *)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x28);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_2 != (UMaterialInterface *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(UMaterialInterface **)(lVar11 + (longlong)param_3 * 8) = param_2;
        }
        else {
          uVar8 = 0;
          if ((int)uVar7 < (this->MaterialParameters).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->MaterialParameters).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_2 != (UMaterialInterface *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(UMaterialInterface **)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x10) = param_2;
        }
      }
    }
    else {
      ::FString::PrintfImpl(&local_40,L"Calling function: %hs.  %s");
      pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar10,&local_40);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetProjectorAngle @ 14ac37180

void __thiscall
FCustomizableObjectInstanceDescriptor::SetProjectorAngle
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,float param_2,int param_3)

{
  ECustomizableObjectProjectorType local_98 [8];
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<float>_u_0 local_48;
  float local_38 [2];
  TVector<double>_u_0 local_30;
  
  GetProjectorValueF(this,param_1,(TVector<float> *)&local_90._s_0,(TVector<float> *)&local_78._s_0,
                     (TVector<float> *)&local_60._s_0,(TVector<float> *)&local_48._s_0,local_38,
                     local_98,param_3);
  local_30._s_0.X = (double)(float)local_90._0_4_;
  local_30._s_0.Y = (double)(float)local_90._4_4_;
  local_30._s_0.Z = (double)(float)local_90._8_4_;
  local_90._s_0.X = (double)(float)local_78._0_4_;
  local_90._s_0.Y = (double)(float)local_78._4_4_;
  local_90._s_0.Z = (double)(float)local_78._8_4_;
  local_78._s_0.X = (double)(float)local_60._0_4_;
  local_78._s_0.Y = (double)(float)local_60._4_4_;
  local_78._s_0.Z = (double)(float)local_60._8_4_;
  local_60._s_0.X = (double)local_48._s_0.X;
  local_60._s_0.Y = (double)local_48._s_0.Y;
  local_60._s_0.Z = (double)local_48._s_0.Z;
  SetProjectorValue(this,param_1,(TVector<double> *)&local_30._s_0,(TVector<double> *)&local_90._s_0
                    ,(TVector<double> *)&local_78._s_0,(TVector<double> *)&local_60._s_0,param_2,
                    param_3);
  return;
}

// SetProjectorDirection @ 14ac372d0

void __thiscall
FCustomizableObjectInstanceDescriptor::SetProjectorDirection
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,TVector<double> *param_2,
          int param_3)

{
  ECustomizableObjectProjectorType local_78 [4];
  float local_74;
  TVector<double>_u_0 local_70;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_48;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  GetProjectorValueF(this,param_1,(TVector<float> *)&local_70._s_0,(TVector<float> *)&local_38._s_0,
                     (TVector<float> *)&local_58._s_0,(TVector<float> *)&local_48._s_0,&local_74,
                     local_78,param_3);
  local_20._s_0.X = (double)(float)local_70._0_4_;
  local_20._s_0.Y = (double)(float)local_70._4_4_;
  local_20._s_0.Z = (double)(float)local_70._8_4_;
  local_70._s_0.X = (double)local_58._s_0.X;
  local_70._s_0.Y = (double)local_58._s_0.Y;
  local_70._s_0.Z = (double)local_58._s_0.Z;
  local_38._s_0.X = (double)local_48._s_0.X;
  local_38._s_0.Y = (double)local_48._s_0.Y;
  local_38._s_0.Z = (double)local_48._s_0.Z;
  SetProjectorValue(this,param_1,(TVector<double> *)&local_20._s_0,param_2,
                    (TVector<double> *)&local_70._s_0,(TVector<double> *)&local_38._s_0,local_74,
                    param_3);
  return;
}

// SetProjectorPosition @ 14ac37400

void __thiscall
FCustomizableObjectInstanceDescriptor::SetProjectorPosition
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,TVector<double> *param_2,
          int param_3)

{
  ECustomizableObjectProjectorType local_res18 [16];
  float local_98 [2];
  TVector<double>_u_0 local_90;
  TVector<float>_u_0 local_78;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  
  GetProjectorValueF(this,param_1,(TVector<float> *)&local_50._s_0,(TVector<float> *)&local_90._s_0,
                     (TVector<float> *)&local_78._s_0,(TVector<float> *)&local_68._s_0,local_98,
                     local_res18,param_3);
  local_38._s_0.X = (double)(float)local_90._0_4_;
  local_38._s_0.Y = (double)(float)local_90._4_4_;
  local_38._s_0.Z = (double)(float)local_90._8_4_;
  local_90._s_0.Y = (double)local_78._s_0.Y;
  local_90._s_0.X = (double)local_78._s_0.X;
  local_50._s_0.X = (double)(float)local_68._0_4_;
  local_90._s_0.Z = (double)local_78._s_0.Z;
  local_50._s_0.Z = (double)(float)local_68._8_4_;
  local_68._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_50._s_0.Y = (double)(float)local_68._4_4_;
  local_68._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_68._s_0.X = (param_2->field0_0x0)._s_0.X;
  SetProjectorValue(this,param_1,(TVector<double> *)&local_68._s_0,(TVector<double> *)&local_38._s_0
                    ,(TVector<double> *)&local_90._s_0,(TVector<double> *)&local_50._s_0,local_98[0]
                    ,param_3);
  return;
}

// SetProjectorScale @ 14ac37540

void __thiscall
FCustomizableObjectInstanceDescriptor::SetProjectorScale
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,TVector<double> *param_2,
          int param_3)

{
  ECustomizableObjectProjectorType local_78 [4];
  float local_74;
  TVector<double>_u_0 local_70;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_48;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  GetProjectorValueF(this,param_1,(TVector<float> *)&local_70._s_0,(TVector<float> *)&local_58._s_0,
                     (TVector<float> *)&local_48._s_0,(TVector<float> *)&local_38._s_0,&local_74,
                     local_78,param_3);
  local_20._s_0.X = (double)(float)local_70._0_4_;
  local_20._s_0.Y = (double)(float)local_70._4_4_;
  local_20._s_0.Z = (double)(float)local_70._8_4_;
  local_70._s_0.X = (double)local_58._s_0.X;
  local_70._s_0.Y = (double)local_58._s_0.Y;
  local_70._s_0.Z = (double)local_58._s_0.Z;
  local_38._s_0.X = (double)local_48._s_0.X;
  local_38._s_0.Y = (double)local_48._s_0.Y;
  local_38._s_0.Z = (double)local_48._s_0.Z;
  SetProjectorValue(this,param_1,(TVector<double> *)&local_20._s_0,(TVector<double> *)&local_70._s_0
                    ,(TVector<double> *)&local_38._s_0,param_2,local_74,param_3);
  return;
}

// SetProjectorUp @ 14ac37670

void __thiscall
FCustomizableObjectInstanceDescriptor::SetProjectorUp
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,TVector<double> *param_2,
          int param_3)

{
  ECustomizableObjectProjectorType local_78 [4];
  float local_74;
  TVector<double>_u_0 local_70;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_48;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  GetProjectorValueF(this,param_1,(TVector<float> *)&local_70._s_0,(TVector<float> *)&local_58._s_0,
                     (TVector<float> *)&local_38._s_0,(TVector<float> *)&local_48._s_0,&local_74,
                     local_78,param_3);
  local_20._s_0.X = (double)(float)local_70._0_4_;
  local_20._s_0.Y = (double)(float)local_70._4_4_;
  local_20._s_0.Z = (double)(float)local_70._8_4_;
  local_70._s_0.X = (double)local_58._s_0.X;
  local_70._s_0.Y = (double)local_58._s_0.Y;
  local_70._s_0.Z = (double)local_58._s_0.Z;
  local_38._s_0.X = (double)local_48._s_0.X;
  local_38._s_0.Y = (double)local_48._s_0.Y;
  local_38._s_0.Z = (double)local_48._s_0.Z;
  SetProjectorValue(this,param_1,(TVector<double> *)&local_20._s_0,(TVector<double> *)&local_70._s_0
                    ,param_2,(TVector<double> *)&local_38._s_0,local_74,param_3);
  return;
}

// SetProjectorValue @ 14ac377a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetProjectorValue
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,float param_6,
          int param_7)

{
  undefined8 *puVar1;
  int iVar2;
  UCustomizableObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UCustomizableObjectPrivate *pUVar9;
  uint uVar10;
  longlong lVar11;
  void *_Src;
  longlong lVar12;
  int iVar13;
  int local_res8 [2];
  FCustomizableObjectInstanceDescriptor *local_a8;
  FName local_a0;
  FString local_98;
  FString local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  float fStack_44;
  
  pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar6 = UCustomizableObject::IsCompiled(pUVar3);
    if ((bVar6) ||
       (local_a8 = this,
       bVar6 = `FCustomizableObjectInstanceDescriptor::SetProjectorValue'::__l6::<lambda_1>::
               operator()(&local_a8), bVar6)) {
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar9,param_1);
      pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        pUVar9 = UCustomizableObject::GetPrivate(pUVar3);
        uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar9,param_1,Projector);
      }
      if ((local_res8[0] < 0) || ((int)uVar7 < 0)) {
        if (2 < (byte)LogMutable._0_1_) {
          pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
          if (pUVar3 == (UCustomizableObject *)0x0) {
            ::FString::FString(&local_98,L"None");
          }
          else {
            local_a0 = (FName)pUVar3->_padding_;
            ::FName::ToString(&local_a0,&local_98);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar7 < (this->ProjectorParameters).ArrayNum) {
          uVar10 = ~uVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->ProjectorParameters).AllocatorInstance.Data;
        lVar12 = (longlong)(int)uVar7 * 0x68;
        local_78 = (float)(param_2->field0_0x0)._s_0.X;
        fStack_74 = (float)(param_2->field0_0x0)._s_0.Y;
        fStack_70 = (float)(param_2->field0_0x0)._s_0.Z;
        fStack_6c = (float)(param_3->field0_0x0)._s_0.X;
        local_68 = (float)(param_3->field0_0x0)._s_0.Y;
        fStack_64 = (float)(param_3->field0_0x0)._s_0.Z;
        fStack_60 = (float)(param_4->field0_0x0)._s_0.X;
        fStack_5c = (float)(param_4->field0_0x0)._s_0.Y;
        local_58 = (float)(param_4->field0_0x0)._s_0.Z;
        fStack_54 = (float)(param_5->field0_0x0)._s_0.X;
        fStack_50 = (float)(param_5->field0_0x0)._s_0.Y;
        local_48 = CONCAT31(local_48._1_3_,pFVar4[lVar12 + 0x40]);
        fStack_4c = (float)(param_5->field0_0x0)._s_0.Z;
        fStack_44 = param_6;
        pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar9,local_res8);
        if ((bVar6) && (param_7 != -1)) {
          if ((param_7 < 0) || (*(int *)(pFVar4 + lVar12 + 0x60) <= param_7)) {
            iVar2 = *(int *)(pFVar4 + lVar12 + 0x60);
            iVar13 = (param_7 - iVar2) + 1;
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x38,4,iVar13,(ForAnyElementType *)(pFVar4 + lVar12 + 0x58),
                               (int *)(pFVar4 + lVar12 + 0x60),(int *)(pFVar4 + lVar12 + 100));
            _Src = (void *)(*(longlong *)(pFVar4 + lVar12 + 0x58) + (longlong)iVar2 * 0x38);
            memmove((void *)((longlong)iVar13 * 0x38 + (longlong)_Src),_Src,
                    (longlong)(iVar8 - iVar2) * 0x38);
            DefaultConstructItems<FCustomizableObjectProjector,int>
                      ((void *)(*(longlong *)(pFVar4 + lVar12 + 0x58) + (longlong)iVar2 * 0x38),
                       iVar13);
            if (((param_7 < 0) || (*(int *)(pFVar4 + lVar12 + 0x60) <= param_7)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ProjectorParameter.RangeValues.IsValidIndex(RangeIndex)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                                   ,0x844,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          uVar7 = 0;
          if (param_7 < *(int *)(pFVar4 + lVar12 + 0x60)) {
            uVar7 = (uint)~param_7 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar12 = *(longlong *)(pFVar4 + lVar12 + 0x58);
          lVar11 = (longlong)param_7 * 0x38;
          *(undefined8 *)(lVar11 + lVar12) = CONCAT44(fStack_74,local_78);
          ((undefined8 *)(lVar11 + lVar12))[1] = CONCAT44(fStack_6c,fStack_70);
          puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar12);
          *puVar1 = CONCAT44(fStack_64,local_68);
          puVar1[1] = CONCAT44(fStack_5c,fStack_60);
          puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar12);
          *puVar1 = CONCAT44(fStack_54,local_58);
          puVar1[1] = CONCAT44(fStack_4c,fStack_50);
          *(ulonglong *)(lVar11 + 0x30 + lVar12) = CONCAT44(fStack_44,local_48);
        }
        else {
          *(ulonglong *)(pFVar4 + lVar12 + 0x10) = CONCAT44(fStack_74,local_78);
          *(ulonglong *)(pFVar4 + lVar12 + 0x10 + 8) = CONCAT44(fStack_6c,fStack_70);
          *(ulonglong *)(pFVar4 + lVar12 + 0x20) = CONCAT44(fStack_64,local_68);
          *(ulonglong *)(pFVar4 + lVar12 + 0x20 + 8) = CONCAT44(fStack_5c,fStack_60);
          *(ulonglong *)(pFVar4 + lVar12 + 0x30) = CONCAT44(fStack_54,local_58);
          *(ulonglong *)(pFVar4 + lVar12 + 0x30 + 8) = CONCAT44(fStack_4c,fStack_50);
          *(ulonglong *)(pFVar4 + lVar12 + 0x40) = CONCAT44(fStack_44,local_48);
        }
      }
    }
    else {
      ::FString::PrintfImpl(&local_88,L"Calling function: %hs.  %s");
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar9,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetRandomValues @ 14ac37c80

void __thiscall
FCustomizableObjectInstanceDescriptor::SetRandomValues(FCustomizableObjectInstanceDescriptor *this)

{
  float fVar1;
  FRandomStream local_res10 [3];
  
  fVar1 = FGenericPlatformMath::SRand();
  local_res10[0].InitialSeed = (int)(fVar1 * __real_4f000000);
  local_res10[0].Seed = local_res10[0].InitialSeed;
  SetRandomValuesFromStream(this,local_res10);
  return;
}

// SetRandomValuesFromStream @ 14ac37cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetRandomValuesFromStream
          (FCustomizableObjectInstanceDescriptor *this,FRandomStream *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  UCustomizableObject *pUVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  UCustomizableObjectPrivate *this_00;
  FScriptContainerElement *pFVar11;
  FString *pFVar12;
  ulonglong uVar13;
  float *pfVar14;
  ForAnyElementType FVar15;
  FString *pFVar16;
  FScriptContainerElement *pFVar17;
  FString *pFVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  FCustomizableObjectInstanceDescriptor *local_res8;
  FString local_68 [3];
  
  pUVar4 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar4 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar6 = UCustomizableObject::IsCompiled(pUVar4);
    if ((bVar6) ||
       (local_res8 = this,
       bVar6 = `FCustomizableObjectInstanceDescriptor::SetRandomValuesFromStream'::__l6::<lambda_1>
               ::operator()(&local_res8), bVar6)) {
      fVar5 = __real_3f800000;
      uVar8 = (this->FloatParameters).ArrayNum;
      uVar13 = (ulonglong)(int)uVar8;
      pFVar19 = (this->FloatParameters).AllocatorInstance.Data;
      pFVar20 = pFVar19 + 0x30;
      pFVar17 = pFVar19 + uVar13 * 0x38;
      while( true ) {
        if ((this->FloatParameters).ArrayNum != (int)uVar13) {
          `TCheckedPointerIterator<FCustomizableObjectFloatParameterValue,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_res8);
        }
        if (pFVar19 == pFVar17) break;
        uVar7 = param_1->Seed * 0xbb38435 + 0x3619636b;
        param_1->Seed = uVar7;
        *(float *)(pFVar20 + -0x20) = (float)(uVar7 >> 9 | 0x3f800000) - fVar5;
        pfVar14 = *(float **)(pFVar20 + -8);
        iVar9 = *(int *)pFVar20;
        pfVar2 = pfVar14 + iVar9;
        while( true ) {
          if (*(int *)pFVar20 != iVar9) {
            `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res8);
          }
          if (pfVar14 == pfVar2) break;
          uVar7 = param_1->Seed * 0xbb38435 + 0x3619636b;
          param_1->Seed = uVar7;
          *pfVar14 = (float)(uVar7 >> 9 | 0x3f800000) - fVar5;
          pfVar14 = pfVar14 + 1;
        }
        uVar13 = (ulonglong)uVar8;
        pFVar19 = pFVar19 + 0x38;
        pFVar20 = pFVar20 + 0x38;
      }
      iVar9 = (this->BoolParameters).ArrayNum;
      pFVar19 = (this->BoolParameters).AllocatorInstance.Data;
      pFVar20 = pFVar19 + (longlong)iVar9 * 0x28;
      while( true ) {
        if ((this->BoolParameters).ArrayNum != iVar9) {
          `TCheckedPointerIterator<FCustomizableObjectBoolParameterValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar19 == pFVar20) break;
        uVar8 = param_1->Seed * 0xbb38435 + 0x3619636b;
        param_1->Seed = uVar8;
        fVar21 = (float)(uVar8 >> 9 | 0x3f800000) - fVar5;
        pFVar19[0x10] = (FScriptContainerElement)((int)(fVar21 + fVar21) != 0);
        pFVar19 = pFVar19 + 0x28;
      }
      uVar8 = (this->IntParameters).ArrayNum;
      uVar13 = (ulonglong)(int)uVar8;
      pFVar19 = (this->IntParameters).AllocatorInstance.Data;
      FVar15.Data = pFVar19 + uVar13 * 0x40;
      pFVar20 = pFVar19 + 0x1c;
      local_68[0].Data.AllocatorInstance.Data = FVar15.Data;
      while( true ) {
        if ((this->IntParameters).ArrayNum != (int)uVar13) {
          `TCheckedPointerIterator<FCustomizableObjectIntParameterValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar19 == FVar15.Data) break;
        iVar9 = UCustomizableObject::GetEnumParameterNumValues
                          ((this->CustomizableObject).field0_0x0.DebugPtr,(FString *)pFVar19);
        if (iVar9 != 0) {
          pUVar4 = (this->CustomizableObject).field0_0x0.DebugPtr;
          uVar7 = param_1->Seed * 0xbb38435 + 0x3619636b;
          param_1->Seed = uVar7;
          pFVar11 = (FScriptContainerElement *)
                    UCustomizableObject::GetEnumParameterValue
                              (pUVar4,(FString *)pFVar19,
                               (int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar5) * (float)iVar9));
          pFVar17 = pFVar20 + -0xc;
          if (pFVar17 != pFVar11) {
            iVar3 = *(int *)(pFVar11 + 8);
            pFVar11 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->
                      AllocatorInstance).Data;
            *(int *)(pFVar20 + -4) = iVar3;
            if ((iVar3 == 0) && (*(int *)pFVar20 == 0)) {
              *(undefined4 *)pFVar20 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar3,*(int *)pFVar20,(ForAnyElementType *)pFVar17,iVar3,(int *)pFVar20
                        );
              if (iVar3 != 0) {
                memcpy((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                       AllocatorInstance).Data,pFVar11,(longlong)iVar3 * 2);
              }
            }
          }
          uVar7 = *(uint *)(pFVar20 + 0x1c);
          uVar13 = (ulonglong)(int)uVar7;
          pFVar16 = *(FString **)(pFVar20 + 0x14);
          pFVar18 = pFVar16 + uVar13;
          while( true ) {
            if (*(int *)(pFVar20 + 0x1c) != (int)uVar13) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res8);
            }
            FVar15.Data = local_68[0].Data.AllocatorInstance.Data;
            if (pFVar16 == pFVar18) break;
            pUVar4 = (this->CustomizableObject).field0_0x0.DebugPtr;
            uVar10 = param_1->Seed * 0xbb38435 + 0x3619636b;
            param_1->Seed = uVar10;
            pFVar12 = UCustomizableObject::GetEnumParameterValue
                                (pUVar4,(FString *)pFVar19,
                                 (int)(((float)(uVar10 >> 9 | 0x3f800000) - fVar5) * (float)iVar9));
            if (pFVar16 == pFVar12) {
LAB_14ac3807f:
              uVar13 = (ulonglong)uVar7;
              pFVar16 = pFVar16 + 1;
            }
            else {
              iVar3 = (pFVar12->Data).ArrayNum;
              piVar1 = &(pFVar16->Data).ArrayMax;
              pFVar17 = (pFVar12->Data).AllocatorInstance.Data;
              (pFVar16->Data).ArrayNum = iVar3;
              if ((iVar3 != 0) || (*piVar1 != 0)) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar3,*piVar1,(ForAnyElementType *)pFVar16,iVar3,piVar1);
                if (iVar3 != 0) {
                  memcpy((pFVar16->Data).AllocatorInstance.Data,pFVar17,(longlong)iVar3 * 2);
                }
                goto LAB_14ac3807f;
              }
              uVar13 = (ulonglong)uVar7;
              pFVar16 = pFVar16 + 1;
              *piVar1 = 0;
            }
          }
        }
        uVar13 = (ulonglong)uVar8;
        pFVar19 = pFVar19 + 0x40;
        pFVar20 = pFVar20 + 0x40;
      }
      iVar9 = (this->VectorParameters).ArrayNum;
      pFVar20 = (this->VectorParameters).AllocatorInstance.Data;
      pFVar19 = pFVar20 + (longlong)iVar9 * 0x30;
      while( true ) {
        if ((this->VectorParameters).ArrayNum != iVar9) {
          `TCheckedPointerIterator<FCustomizableObjectVectorParameterValue,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_res8);
        }
        if (pFVar20 == pFVar19) break;
        uVar8 = param_1->Seed * 0xbb38435 + 0x3619636b;
        param_1->Seed = uVar8;
        *(float *)(pFVar20 + 0x10) = (float)(uVar8 >> 9 | 0x3f800000) - fVar5;
        uVar8 = param_1->Seed * 0xbb38435 + 0x3619636b;
        param_1->Seed = uVar8;
        *(float *)(pFVar20 + 0x14) = (float)(uVar8 >> 9 | 0x3f800000) - fVar5;
        uVar8 = param_1->Seed * 0xbb38435 + 0x3619636b;
        param_1->Seed = uVar8;
        *(float *)(pFVar20 + 0x18) = (float)(uVar8 >> 9 | 0x3f800000) - fVar5;
        uVar8 = param_1->Seed * 0xbb38435 + 0x3619636b;
        param_1->Seed = uVar8;
        *(float *)(pFVar20 + 0x1c) = (float)(uVar8 >> 9 | 0x3f800000) - fVar5;
        pFVar20 = pFVar20 + 0x30;
      }
    }
    else {
      ::FString::PrintfImpl(local_68,L"Calling function: %hs.  %s");
      this_00 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(this_00,local_68);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetSkeletalMeshParameterSelectedOption @ 14ac38200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetSkeletalMeshParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,USkeletalMesh *param_2,
          int param_3)

{
  longlong lVar1;
  size_t _Size;
  int iVar2;
  UCustomizableObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  UCustomizableObjectPrivate *pUVar10;
  longlong lVar11;
  void *_Src;
  int iVar12;
  TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  int local_res8 [2];
  FCustomizableObjectInstanceDescriptor *local_60;
  FName local_58;
  FString local_50;
  FString local_40;
  
  pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar6 = UCustomizableObject::IsCompiled(pUVar3);
    if ((bVar6) ||
       (local_60 = this,
       bVar6 = `FCustomizableObjectInstanceDescriptor::SetSkeletalMeshParameterSelectedOption'::__l6
               ::<lambda_1>::operator()(&local_60), bVar6)) {
      pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar10,param_1);
      pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        pUVar10 = UCustomizableObject::GetPrivate(pUVar3);
        uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar10,param_1,SkeletalMesh);
      }
      if ((local_res8[0] < 0) || ((int)uVar7 < 0)) {
        if (2 < (byte)LogMutable._0_1_) {
          pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
          if (pUVar3 == (UCustomizableObject *)0x0) {
            ::FString::FString(&local_50,L"None");
          }
          else {
            local_58 = (FName)pUVar3->_padding_;
            ::FName::ToString(&local_58,&local_50);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar10,local_res8);
        if ((bVar6) && (param_3 != -1)) {
          uVar14 = ~uVar7 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar7 < (this->SkeletalMeshParameters).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar13 = &this->SkeletalMeshParameters;
          if ((param_3 < 0) ||
             (*(int *)((this->SkeletalMeshParameters).AllocatorInstance.Data +
                      (longlong)(int)uVar7 * 0x38 + 0x30) <= param_3)) {
            uVar8 = 0;
            if ((int)uVar7 < (this->SkeletalMeshParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar11 = (longlong)(int)uVar7 * 0x38;
            iVar2 = *(int *)((this->SkeletalMeshParameters).AllocatorInstance.Data + lVar11 + 0x30);
            uVar8 = 0;
            if ((int)uVar7 < (this->SkeletalMeshParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = (param_3 - *(int *)((pTVar13->AllocatorInstance).Data + lVar11 + 0x30)) + 1;
            uVar8 = 0;
            if ((int)uVar7 < (this->SkeletalMeshParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar13->AllocatorInstance).Data;
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar12,(ForAnyElementType *)(pFVar4 + lVar11 + 0x28),
                               (int *)(pFVar4 + lVar11 + 0x30),(int *)(pFVar4 + lVar11 + 0x34));
            lVar1 = (longlong)iVar2 * 8;
            _Src = (void *)(*(longlong *)(pFVar4 + lVar11 + 0x28) + lVar1);
            _Size = (longlong)iVar12 * 8;
            memmove((void *)((longlong)_Src + _Size),_Src,(longlong)(iVar9 - iVar2) << 3);
            memset((void *)(*(longlong *)(pFVar4 + lVar11 + 0x28) + lVar1),0,_Size);
          }
          uVar8 = 0;
          if ((int)uVar7 < (this->SkeletalMeshParameters).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_3 < 0) ||
              (*(int *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x38 + 0x30) <=
               param_3)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("SkeletalMeshParameters[ParameterIndexInInstance].ParameterRangeValues.IsValidIndex(RangeIndex)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                                 ,0x727,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar7 < (this->SkeletalMeshParameters).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar13->AllocatorInstance).Data;
          uVar8 = 0;
          if (param_3 < *(int *)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x30)) {
            uVar8 = (uint)~param_3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = *(longlong *)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x28);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_2 != (USkeletalMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(USkeletalMesh **)(lVar11 + (longlong)param_3 * 8) = param_2;
        }
        else {
          uVar8 = 0;
          if ((int)uVar7 < (this->SkeletalMeshParameters).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->SkeletalMeshParameters).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_2 != (USkeletalMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(USkeletalMesh **)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x10) = param_2;
        }
      }
    }
    else {
      ::FString::PrintfImpl(&local_40,L"Calling function: %hs.  %s");
      pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar10,&local_40);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetState @ 14ac388d0

void __thiscall
FCustomizableObjectInstanceDescriptor::SetState
          (FCustomizableObjectInstanceDescriptor *this,int param_1)

{
  this->State = param_1;
  return;
}

// SetTextureParameterSelectedOption @ 14ac388e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetTextureParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,UTexture *param_2,
          int param_3)

{
  longlong lVar1;
  size_t _Size;
  int iVar2;
  UCustomizableObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  UCustomizableObjectPrivate *pUVar10;
  longlong lVar11;
  void *_Src;
  int iVar12;
  TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  int local_res8 [2];
  FCustomizableObjectInstanceDescriptor *local_60;
  FName local_58;
  FString local_50;
  FString local_40;
  
  pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar6 = UCustomizableObject::IsCompiled(pUVar3);
    if ((bVar6) ||
       (local_60 = this,
       bVar6 = `FCustomizableObjectInstanceDescriptor::SetTextureParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_60), bVar6)) {
      pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      local_res8[0] = UCustomizableObjectPrivate::FindParameter(pUVar10,param_1);
      pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        pUVar10 = UCustomizableObject::GetPrivate(pUVar3);
        uVar7 = UCustomizableObjectPrivate::FindParameterTyped(pUVar10,param_1,Texture);
      }
      if ((local_res8[0] < 0) || ((int)uVar7 < 0)) {
        if (2 < (byte)LogMutable._0_1_) {
          pUVar3 = (this->CustomizableObject).field0_0x0.DebugPtr;
          if (pUVar3 == (UCustomizableObject *)0x0) {
            ::FString::FString(&local_50,L"None");
          }
          else {
            local_58 = (FName)pUVar3->_padding_;
            ::FName::ToString(&local_58,&local_50);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
        bVar6 = UCustomizableObjectPrivate::IsParameterMultidimensional(pUVar10,local_res8);
        if ((bVar6) && (param_3 != -1)) {
          uVar14 = ~uVar7 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar7 < (this->TextureParameters).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar13 = &this->TextureParameters;
          if ((param_3 < 0) ||
             (*(int *)((this->TextureParameters).AllocatorInstance.Data +
                      (longlong)(int)uVar7 * 0x38 + 0x30) <= param_3)) {
            uVar8 = 0;
            if ((int)uVar7 < (this->TextureParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar11 = (longlong)(int)uVar7 * 0x38;
            iVar2 = *(int *)((this->TextureParameters).AllocatorInstance.Data + lVar11 + 0x30);
            uVar8 = 0;
            if ((int)uVar7 < (this->TextureParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = (param_3 - *(int *)((pTVar13->AllocatorInstance).Data + lVar11 + 0x30)) + 1;
            uVar8 = 0;
            if ((int)uVar7 < (this->TextureParameters).ArrayNum) {
              uVar8 = uVar14;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar13->AllocatorInstance).Data;
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar12,(ForAnyElementType *)(pFVar4 + lVar11 + 0x28),
                               (int *)(pFVar4 + lVar11 + 0x30),(int *)(pFVar4 + lVar11 + 0x34));
            lVar1 = (longlong)iVar2 * 8;
            _Src = (void *)(*(longlong *)(pFVar4 + lVar11 + 0x28) + lVar1);
            _Size = (longlong)iVar12 * 8;
            memmove((void *)((longlong)_Src + _Size),_Src,(longlong)(iVar9 - iVar2) << 3);
            memset((void *)(*(longlong *)(pFVar4 + lVar11 + 0x28) + lVar1),0,_Size);
          }
          uVar8 = 0;
          if ((int)uVar7 < (this->TextureParameters).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_3 < 0) ||
              (*(int *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x38 + 0x30) <=
               param_3)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TextureParameters[ParameterIndexInInstance].ParameterRangeValues.IsValidIndex(RangeIndex)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceDescriptor.cpp"
                                 ,0x6da,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar7 < (this->TextureParameters).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar13->AllocatorInstance).Data;
          uVar8 = 0;
          if (param_3 < *(int *)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x30)) {
            uVar8 = (uint)~param_3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = *(longlong *)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x28);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(UTexture **)(lVar11 + (longlong)param_3 * 8) = param_2;
        }
        else {
          uVar8 = 0;
          if ((int)uVar7 < (this->TextureParameters).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->TextureParameters).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(UTexture **)(pFVar4 + (longlong)(int)uVar7 * 0x38 + 0x10) = param_2;
        }
      }
    }
    else {
      ::FString::PrintfImpl(&local_40,L"Calling function: %hs.  %s");
      pUVar10 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar10,&local_40);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetTransformParameterSelectedOption @ 14ac38ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetTransformParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  UCustomizableObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UCustomizableObjectPrivate *pUVar9;
  longlong lVar10;
  FCustomizableObjectInstanceDescriptor *local_res8;
  FName local_res20;
  FString local_98;
  FString local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar2 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar6 = UCustomizableObject::IsCompiled(pUVar2);
    if ((bVar6) ||
       (local_res8 = this,
       bVar6 = `FCustomizableObjectInstanceDescriptor::SetTransformParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_res8), bVar6)) {
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      iVar7 = UCustomizableObjectPrivate::FindParameter(pUVar9,param_1);
      pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UCustomizableObject *)0x0) {
        uVar8 = 0xffffffff;
      }
      else {
        pUVar9 = UCustomizableObject::GetPrivate(pUVar2);
        uVar8 = UCustomizableObjectPrivate::FindParameterTyped(pUVar9,param_1,Transform);
      }
      if ((iVar7 < 0) || ((int)uVar8 < 0)) {
        if (2 < (byte)LogMutable._0_1_) {
          pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
          if (pUVar2 == (UCustomizableObject *)0x0) {
            ::FString::FString(&local_98,L"None");
          }
          else {
            local_res20 = (FName)pUVar2->_padding_;
            ::FName::ToString(&local_res20,&local_98);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_68 = (param_2->Rotation).ZW.m128d_f64[0];
        dStack_60 = (param_2->Rotation).ZW.m128d_f64[1];
        local_58 = (param_2->Translation).XY.m128d_f64[0];
        dStack_50 = (param_2->Translation).XY.m128d_f64[1];
        local_78 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
        uStack_74 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
        uStack_70 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
        uStack_6c = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
        uVar5 = 0;
        if ((int)uVar8 < (this->TransformParameters).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        local_48 = (param_2->Translation).ZW.m128d_f64[0];
        dStack_40 = (param_2->Translation).ZW.m128d_f64[1];
        local_38 = (param_2->Scale3D).XY.m128d_f64[0];
        dStack_30 = (param_2->Scale3D).XY.m128d_f64[1];
        local_28 = (param_2->Scale3D).ZW.m128d_f64[0];
        dStack_20 = (param_2->Scale3D).ZW.m128d_f64[1];
        if ((uVar5 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->TransformParameters).AllocatorInstance.Data;
        lVar10 = (longlong)(int)uVar8 * 0x80;
        pFVar1 = pFVar3 + lVar10 + 0x10;
        *(undefined4 *)pFVar1 = local_78;
        *(undefined4 *)(pFVar1 + 4) = uStack_74;
        *(undefined4 *)(pFVar1 + 8) = uStack_70;
        *(undefined4 *)(pFVar1 + 0xc) = uStack_6c;
        *(double *)(pFVar3 + lVar10 + 0x20) = local_68;
        *(double *)(pFVar3 + lVar10 + 0x20 + 8) = dStack_60;
        *(double *)(pFVar3 + lVar10 + 0x30) = local_58;
        *(double *)(pFVar3 + lVar10 + 0x30 + 8) = dStack_50;
        *(double *)(pFVar3 + lVar10 + 0x40) = local_48;
        *(double *)(pFVar3 + lVar10 + 0x40 + 8) = dStack_40;
        *(double *)(pFVar3 + lVar10 + 0x50) = local_38;
        *(double *)(pFVar3 + lVar10 + 0x50 + 8) = dStack_30;
        *(double *)(pFVar3 + lVar10 + 0x60) = local_28;
        *(double *)(pFVar3 + lVar10 + 0x60 + 8) = dStack_20;
      }
    }
    else {
      ::FString::PrintfImpl(&local_88,L"Calling function: %hs.  %s");
      pUVar9 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar9,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetVectorParameterSelectedOption @ 14ac391c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCustomizableObjectInstanceDescriptor::SetVectorParameterSelectedOption
          (FCustomizableObjectInstanceDescriptor *this,FString *param_1,FLinearColor *param_2)

{
  FScriptContainerElement *pFVar1;
  UCustomizableObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  UCustomizableObjectPrivate *pUVar8;
  FCustomizableObjectInstanceDescriptor *local_res8;
  FName local_res20;
  FString local_48;
  FString local_38;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
  if (pUVar2 == (UCustomizableObject *)0x0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      return;
    }
  }
  else {
    bVar4 = UCustomizableObject::IsCompiled(pUVar2);
    if ((bVar4) ||
       (local_res8 = this,
       bVar4 = `FCustomizableObjectInstanceDescriptor::SetVectorParameterSelectedOption'::__l6::
               <lambda_1>::operator()(&local_res8), bVar4)) {
      pUVar8 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      iVar5 = UCustomizableObjectPrivate::FindParameter(pUVar8,param_1);
      pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UCustomizableObject *)0x0) {
        uVar6 = 0xffffffff;
      }
      else {
        pUVar8 = UCustomizableObject::GetPrivate(pUVar2);
        uVar6 = UCustomizableObjectPrivate::FindParameterTyped(pUVar8,param_1,Color);
      }
      if ((iVar5 < 0) || ((int)uVar6 < 0)) {
        if (2 < (byte)LogMutable._0_1_) {
          pUVar2 = (this->CustomizableObject).field0_0x0.DebugPtr;
          if (pUVar2 == (UCustomizableObject *)0x0) {
            ::FString::FString(&local_48,L"None");
          }
          else {
            local_res20 = (FName)pUVar2->_padding_;
            ::FName::ToString(&local_res20,&local_48);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_28 = (param_2->field0_0x0)._s_0.R;
        fStack_24 = (param_2->field0_0x0)._s_0.G;
        fStack_20 = (param_2->field0_0x0)._s_0.B;
        fStack_1c = (param_2->field0_0x0)._s_0.A;
        uVar7 = 0;
        if ((int)uVar6 < (this->VectorParameters).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->VectorParameters).AllocatorInstance.Data +
                 (longlong)(int)uVar6 * 0x30 + 0x10;
        *(float *)pFVar1 = local_28;
        *(float *)(pFVar1 + 4) = fStack_24;
        *(float *)(pFVar1 + 8) = fStack_20;
        *(float *)(pFVar1 + 0xc) = fStack_1c;
      }
    }
    else {
      ::FString::PrintfImpl(&local_38,L"Calling function: %hs.  %s");
      pUVar8 = UCustomizableObject::GetPrivate((this->CustomizableObject).field0_0x0.DebugPtr);
      UCustomizableObjectPrivate::AddUncompiledCOWarning(pUVar8,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// ToString @ 14ac484f0

FString * __thiscall
FCustomizableObjectInstanceDescriptor::ToString
          (FCustomizableObjectInstanceDescriptor *this,FString *__return_storage_ptr__)

{
  UScriptStruct *this_00;
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor,
                         (UObject *)pUVar1,L"CustomizableObjectInstanceDescriptor");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.OuterSingleton;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  UScriptStruct::ExportText
            (this_00,__return_storage_ptr__,this,(void *)0x0,(UObject *)0x0,0x20805,(UObject *)0x0,
             true);
  return __return_storage_ptr__;
}

// UpdateLayer @ 14ac4aa30

void __thiscall
FCustomizableObjectInstanceDescriptor::UpdateLayer
          (FCustomizableObjectInstanceDescriptor *this,FName *param_1,int param_2,
          FMultilayerProjectorLayer *param_3)

{
  bool bVar1;
  FString local_18;
  
  ::FName::ToString(param_1,&local_18);
  bVar1 = IsMultilayerProjector(this,&local_18);
  if (bVar1) {
    FMultilayerProjectorLayer::Write(param_3,this,&local_18,param_2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1505592b0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetBoolParameterSelectedOption'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390053353>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390053353>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559340;
    }
  }
  bVar2 = false;
LAB_150559340:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559370

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetColorParameterSelectedOption'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390053272>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390053272>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559400;
    }
  }
  bVar2 = false;
LAB_150559400:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559430

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetCurrentState'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390054049>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390054049>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505594c0;
    }
  }
  bVar2 = false;
LAB_1505594c0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505594f0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetFloatParameterSelectedOption'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390052976>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390052976>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559580;
    }
  }
  bVar2 = false;
LAB_150559580:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505595b0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390052919>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390052919>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559640;
    }
  }
  bVar2 = false;
LAB_150559640:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559670

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetIntParameterSelectedOption'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390052861>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390052861>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559700;
    }
  }
  bVar2 = false;
LAB_150559700:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559730

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetMaterialParameterSelectedOption'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390053208>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390053208>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505597c0;
    }
  }
  bVar2 = false;
LAB_1505597c0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505597f0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetProjectorValue'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390053404>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390053404>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559880;
    }
  }
  bVar2 = false;
LAB_150559880:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505598b0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetRandomValuesFromStream'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390054083>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390054083>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559940;
    }
  }
  bVar2 = false;
LAB_150559940:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559970

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetSkeletalMeshParameterSelectedOption'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390053131>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390053131>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559a00;
    }
  }
  bVar2 = false;
LAB_150559a00:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559a30

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetTextureParameterSelectedOption'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390053054>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390053054>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559ac0;
    }
  }
  bVar2 = false;
LAB_150559ac0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559af0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetTransformParameterSelectedOption'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390053307>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390053307>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559b80;
    }
  }
  bVar2 = false;
LAB_150559b80:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559bb0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetVectorParameterSelectedOption'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390053377>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7378402241390053377>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150559c40;
    }
  }
  bVar2 = false;
LAB_150559c40:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559c70

bool __thiscall
`FCustomizableObjectInstanceDescriptor::IsMultilayerProjector'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7378402241390054271>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7378402241390054271>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 150559d10

bool __thiscall
`FCustomizableObjectInstanceDescriptor::SetCurrentState'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7378402241390054055>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7378402241390054055>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150559db0

bool __thiscall
`FCustomizableObjectInstanceDescriptor::IsMultilayerProjector'::__l11::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7378402241390054279>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7378402241390054279>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 150559e10

bool __thiscall
`FCustomizableObjectInstanceDescriptor::IsMultilayerProjector'::__l14::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7378402241390054287>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7378402241390054287>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 150559e70

bool __thiscall
`FCustomizableObjectInstanceDescriptor::IsMultilayerProjector'::__l17::<lambda_4>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7378402241390054295>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7378402241390054295>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

