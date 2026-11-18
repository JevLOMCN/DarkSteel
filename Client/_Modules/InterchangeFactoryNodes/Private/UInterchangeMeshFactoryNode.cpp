// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 133

// StaticClass @ 14e51a930

UClass * __cdecl UInterchangeMeshFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMeshFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshFactoryNode,0x3c8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMeshFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeMeshFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.InnerSingleton;
}

// UInterchangeMeshFactoryNode @ 14e531930

UInterchangeMeshFactoryNode * __thiscall
UInterchangeMeshFactoryNode::UInterchangeMeshFactoryNode
          (UInterchangeMeshFactoryNode *this,FVTableHelper *param_1)

{
  FString *pFVar1;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeMeshFactoryNode__6B_;
  (this->Macro_CustomVertexColorReplaceKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexColorReplaceKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexColorReplaceKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexColorReplaceKey).Key,L"VertexColorReplace");
  (this->Macro_CustomVertexColorIgnoreKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexColorIgnoreKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexColorIgnoreKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexColorIgnoreKey).Key,L"VertexColorIgnore");
  (this->Macro_CustomVertexColorOverrideKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexColorOverrideKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexColorOverrideKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexColorOverrideKey).Key,L"VertexColorOverride");
  (this->Macro_CustomKeepSectionsSeparateKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomKeepSectionsSeparateKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomKeepSectionsSeparateKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomKeepSectionsSeparateKey).Key,L"KeepSectionsSeparate");
  (this->Macro_CustomLODGroupKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomLODGroupKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLODGroupKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLODGroupKey).Key,L"LODGroup");
  (this->Macro_CustomRecomputeNormalsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRecomputeNormalsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRecomputeNormalsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRecomputeNormalsKey).Key,L"RecomputeNormals");
  (this->Macro_CustomRecomputeTangentsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRecomputeTangentsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRecomputeTangentsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRecomputeTangentsKey).Key,L"RecomputeTangents");
  (this->Macro_CustomUseMikkTSpaceKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseMikkTSpaceKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseMikkTSpaceKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUseMikkTSpaceKey).Key,L"UseMikkTSpace");
  (this->Macro_CustomComputeWeightedNormalsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomComputeWeightedNormalsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomComputeWeightedNormalsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomComputeWeightedNormalsKey).Key,L"ComputeWeightedNormals")
  ;
  (this->Macro_CustomUseHighPrecisionTangentBasisKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseHighPrecisionTangentBasisKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseHighPrecisionTangentBasisKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomUseHighPrecisionTangentBasisKey).Key,
             L"UseHighPrecisionTangentBasis");
  (this->Macro_CustomUseFullPrecisionUVsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseFullPrecisionUVsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseFullPrecisionUVsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUseFullPrecisionUVsKey).Key,L"UseFullPrecisionUVs");
  (this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key,
             L"UseBackwardsCompatibleF16TruncUVs");
  (this->Macro_CustomRemoveDegeneratesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRemoveDegeneratesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRemoveDegeneratesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRemoveDegeneratesKey).Key,L"RemoveDegenerates");
  (this->Macro_CustomImportSocketsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportSocketsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportSocketsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportSocketsKey).Key,L"ImportSockets");
  (this->LodDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->LodDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LodDependencies).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->LodDependencies).KeyCount.Key.Data.ArrayMax = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SlotMaterialDependencies).KeyCountHandle);
  (this->SlotMaterialDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SlotMaterialDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->AssemblyPartDependencies).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->AssemblyPartDependencies).KeyCountHandle);
  (this->AssemblyPartDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AssemblyPartDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = &UE::Interchange::FBaseNodeStaticData::ClassTypeAttributeKey()->Key;
  ::FString::FString(&(this->ClassNameAttributeKey).Key,pFVar1);
  this->bIsNodeClassInitialized = false;
  return this;
}

// UInterchangeMeshFactoryNode @ 14e531bc0

UInterchangeMeshFactoryNode * __thiscall
UInterchangeMeshFactoryNode::UInterchangeMeshFactoryNode(UInterchangeMeshFactoryNode *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  FString *pFVar6;
  UInterchangeMeshFactoryNode *pUVar7;
  ulonglong uVar8;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_48;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_38;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeMeshFactoryNode__6B_;
  (this->Macro_CustomVertexColorReplaceKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexColorReplaceKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexColorReplaceKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexColorReplaceKey).Key,L"VertexColorReplace");
  (this->Macro_CustomVertexColorIgnoreKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexColorIgnoreKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexColorIgnoreKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexColorIgnoreKey).Key,L"VertexColorIgnore");
  (this->Macro_CustomVertexColorOverrideKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexColorOverrideKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexColorOverrideKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexColorOverrideKey).Key,L"VertexColorOverride");
  (this->Macro_CustomKeepSectionsSeparateKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomKeepSectionsSeparateKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomKeepSectionsSeparateKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomKeepSectionsSeparateKey).Key,L"KeepSectionsSeparate");
  (this->Macro_CustomLODGroupKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomLODGroupKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLODGroupKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLODGroupKey).Key,L"LODGroup");
  (this->Macro_CustomRecomputeNormalsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRecomputeNormalsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRecomputeNormalsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRecomputeNormalsKey).Key,L"RecomputeNormals");
  (this->Macro_CustomRecomputeTangentsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRecomputeTangentsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRecomputeTangentsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRecomputeTangentsKey).Key,L"RecomputeTangents");
  (this->Macro_CustomUseMikkTSpaceKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseMikkTSpaceKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseMikkTSpaceKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUseMikkTSpaceKey).Key,L"UseMikkTSpace");
  (this->Macro_CustomComputeWeightedNormalsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomComputeWeightedNormalsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomComputeWeightedNormalsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomComputeWeightedNormalsKey).Key,L"ComputeWeightedNormals")
  ;
  (this->Macro_CustomUseHighPrecisionTangentBasisKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseHighPrecisionTangentBasisKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseHighPrecisionTangentBasisKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomUseHighPrecisionTangentBasisKey).Key,
             L"UseHighPrecisionTangentBasis");
  (this->Macro_CustomUseFullPrecisionUVsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseFullPrecisionUVsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseFullPrecisionUVsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUseFullPrecisionUVsKey).Key,L"UseFullPrecisionUVs");
  (this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key,
             L"UseBackwardsCompatibleF16TruncUVs");
  (this->Macro_CustomRemoveDegeneratesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRemoveDegeneratesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRemoveDegeneratesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRemoveDegeneratesKey).Key,L"RemoveDegenerates");
  (this->Macro_CustomImportSocketsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportSocketsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportSocketsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportSocketsKey).Key,L"ImportSockets");
  (this->LodDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues = 0;
  (this->LodDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LodDependencies).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->LodDependencies).KeyCount.Key.Data.ArrayMax = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SlotMaterialDependencies).KeyCountHandle);
  (this->SlotMaterialDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SlotMaterialDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->AssemblyPartDependencies).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->AssemblyPartDependencies).KeyCountHandle);
  (this->AssemblyPartDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AssemblyPartDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar6 = &UE::Interchange::FBaseNodeStaticData::ClassTypeAttributeKey()->Key;
  ::FString::FString(&(this->ClassNameAttributeKey).Key,pFVar6);
  pvVar4 = ThreadLocalStoragePointer;
  uVar8 = (ulonglong)_tls_index;
  this->bIsNodeClassInitialized = false;
  lVar1 = *(longlong *)((longlong)pvVar4 + uVar8 * 8);
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      LodDependencies_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      LodDependencies_BaseKey.Key.Data.ArrayNum = 0;
      LodDependencies_BaseKey.Key.Data.ArrayMax = 0;
      ::FString::operator=(&LodDependencies_BaseKey.Key,L"Lod_Dependencies");
      atexit(`UE::Interchange::FMeshFactoryNodeStaticData::GetLodDependenciesBaseKey'::__l2::
             _dynamic_atexit_destructor_for__LodDependencies_BaseKey__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->LodDependencies,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &LodDependencies_BaseKey.Key);
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      SlotMaterialDependency_BaseKey.Key.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      SlotMaterialDependency_BaseKey.Key.Data.ArrayNum = 0;
      SlotMaterialDependency_BaseKey.Key.Data.ArrayMax = 0;
      ::FString::operator=(&SlotMaterialDependency_BaseKey.Key,L"__SlotMaterialDependency__");
      atexit(`UE::Interchange::FMeshFactoryNodeStaticData::GetSlotMaterialDependencyBaseKey'::__l2::
             _dynamic_atexit_destructor_for__SlotMaterialDependency_BaseKey__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UInterchangeMeshFactoryNode *)(*pcVar3)();
      return pUVar7;
    }
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  local_48.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.SharedReferenceCount.ReferenceController = pTVar2;
  if (local_48.Object == (FAttributeStorage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UInterchangeMeshFactoryNode *)(*pcVar3)();
      return pUVar7;
    }
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->SlotMaterialDependencies,&local_48,&SlotMaterialDependency_BaseKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      SlotMaterialDependency_BaseKey.Key.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      SlotMaterialDependency_BaseKey.Key.Data.ArrayNum = 0;
      SlotMaterialDependency_BaseKey.Key.Data.ArrayMax = 0;
      ::FString::operator=(&SlotMaterialDependency_BaseKey.Key,L"__AssemblyPartDependency__");
      atexit(`UE::Interchange::FMeshFactoryNodeStaticData::GetAssemblyPartDependencyBaseKey'::__l2::
             _dynamic_atexit_destructor_for__SlotMaterialDependency_BaseKey__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UInterchangeMeshFactoryNode *)(*pcVar3)();
      return pUVar7;
    }
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  local_38.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  if (local_38.Object == (FAttributeStorage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UInterchangeMeshFactoryNode *)(*pcVar3)();
      return pUVar7;
    }
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->AssemblyPartDependencies,&local_38,&SlotMaterialDependency_BaseKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return this;
}

// ~UInterchangeMeshFactoryNode @ 14e535d70

void __thiscall
UInterchangeMeshFactoryNode::~UInterchangeMeshFactoryNode(UInterchangeMeshFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeMeshFactoryNode__6B_;
  pFVar1 = (this->ClassNameAttributeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->AssemblyPartDependencies);
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->SlotMaterialDependencies);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->LodDependencies);
  pFVar1 = (this->Macro_CustomImportSocketsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomRemoveDegeneratesKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomUseFullPrecisionUVsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomUseHighPrecisionTangentBasisKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomComputeWeightedNormalsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomUseMikkTSpaceKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomRecomputeTangentsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomRecomputeNormalsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomLODGroupKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomKeepSectionsSeparateKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomVertexColorOverrideKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomVertexColorIgnoreKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomVertexColorReplaceKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// AddLodDataUniqueId @ 14e539870

bool __thiscall
UInterchangeMeshFactoryNode::AddLodDataUniqueId(UInterchangeMeshFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->LodDependencies,param_1);
  return bVar1;
}

// AddPayloadKeyBooleanAttribute @ 14e5398d0

bool __thiscall
UInterchangeMeshFactoryNode::AddPayloadKeyBooleanAttribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,bool param_2)

{
  bool bVar1;
  bool local_res18 [16];
  FString local_18;
  
  local_res18[0] = param_2;
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::AddBooleanAttribute
                    ((UInterchangeBaseNode *)this,&local_18,local_res18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddPayloadKeyDoubleAttribute @ 14e539930

bool __thiscall
UInterchangeMeshFactoryNode::AddPayloadKeyDoubleAttribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,double param_2)

{
  bool bVar1;
  double local_res18 [2];
  FString local_18;
  
  local_res18[0] = param_2;
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::AddDoubleAttribute
                    ((UInterchangeBaseNode *)this,&local_18,local_res18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddPayloadKeyFloatAttribute @ 14e539990

bool __thiscall
UInterchangeMeshFactoryNode::AddPayloadKeyFloatAttribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,float param_2)

{
  bool bVar1;
  float local_res18 [4];
  FString local_18;
  
  local_res18[0] = param_2;
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::AddFloatAttribute
                    ((UInterchangeBaseNode *)this,&local_18,local_res18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddPayloadKeyInt32Attribute @ 14e5399f0

bool __thiscall
UInterchangeMeshFactoryNode::AddPayloadKeyInt32Attribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,int param_2)

{
  bool bVar1;
  int local_res18 [4];
  FString local_18;
  
  local_res18[0] = param_2;
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::AddInt32Attribute
                    ((UInterchangeBaseNode *)this,&local_18,local_res18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddPayloadKeyStringAttribute @ 14e539a50

bool __thiscall
UInterchangeMeshFactoryNode::AddPayloadKeyStringAttribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)this,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ApplyCustomComputeWeightedNormalsToAsset @ 14e53a0b0

bool __thiscall
UInterchangeMeshFactoryNode::ApplyCustomComputeWeightedNormalsToAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomRecomputeNormalsToAsset @ 14e53a810

bool __thiscall
UInterchangeMeshFactoryNode::ApplyCustomRecomputeNormalsToAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomRecomputeTangentsToAsset @ 14e53a820

bool __thiscall
UInterchangeMeshFactoryNode::ApplyCustomRecomputeTangentsToAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomRemoveDegeneratesToAsset @ 14e53a830

bool __thiscall
UInterchangeMeshFactoryNode::ApplyCustomRemoveDegeneratesToAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomUseBackwardsCompatibleF16TruncUVsToAsset @ 14e53a980

bool __thiscall
UInterchangeMeshFactoryNode::ApplyCustomUseBackwardsCompatibleF16TruncUVsToAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomUseFullPrecisionUVsToAsset @ 14e53a990

bool __thiscall
UInterchangeMeshFactoryNode::ApplyCustomUseFullPrecisionUVsToAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomUseHighPrecisionTangentBasisToAsset @ 14e53a9b0

bool __thiscall
UInterchangeMeshFactoryNode::ApplyCustomUseHighPrecisionTangentBasisToAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomUseMikkTSpaceToAsset @ 14e53a9c0

bool __thiscall
UInterchangeMeshFactoryNode::ApplyCustomUseMikkTSpaceToAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// CopyPayloadKeyStorageAttributes @ 14e53bb60

/* WARNING: Removing unreachable block (ram,0x00014e53bcb6) */

void __cdecl
UInterchangeMeshFactoryNode::CopyPayloadKeyStorageAttributes
          (UInterchangeBaseNode *param_1,FAttributeStorage *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *this;
  FScriptContainerElement *pFVar5;
  ForAnyElementType this_00;
  undefined1 local_res18 [8];
  TArray<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey>,TSizedDefaultAllocator<32>_>
  local_58;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  UInterchangeBaseNode::GetAttributeKeys(param_1,&local_48);
  uVar4 = local_48._8_8_ & 0xffffffff;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if (local_48.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar4);
  }
  if (0 < local_48.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_48.ArrayNum,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    uVar4 = local_48._8_8_ & 0xffffffff;
  }
  iVar2 = (int)uVar4;
  pFVar5 = local_48.AllocatorInstance.Data + (longlong)iVar2 * 0x10;
  this_00.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (this_00.Data == pFVar5) break;
    bVar1 = ::FString::StartsWith((FString *)this_00.Data,L"__PAYLOAD_PREFIX__",0x12,IgnoreCase);
    if (bVar1) {
      ::FString::FString(&local_38,(FString *)this_00.Data);
      ::FString::RemoveFromStart(&local_38,L"__PAYLOAD_PREFIX__",0x12,IgnoreCase);
      iVar3 = local_58.ArrayNum;
      if (local_58.ArrayNum == local_58.ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_58.AllocatorInstance,&local_58.ArrayMax);
      }
      local_58.ArrayNum = iVar3 + 1;
      this = local_58.AllocatorInstance.Data + (longlong)iVar3 * 0x20;
      ::FString::FString((FString *)this,(FString *)this_00.Data);
      *(undefined8 *)(this + 0x10) = 0;
      *(FScriptContainerElement **)(this + 0x10) = local_38.Data.AllocatorInstance.Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(this + 0x18) = local_38.Data.ArrayNum;
      *(int *)(this + 0x1c) = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
    }
    uVar4 = local_48._8_8_ & 0xffffffff;
    this_00.Data = this_00.Data + 0x10;
  }
  if (local_58.ArrayMax != local_58.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_58.ArrayNum,&local_58.AllocatorInstance,local_58.ArrayNum,
               &local_58.ArrayMax);
  }
  UInterchangeBaseNode::CopyStorageAttributes(param_1,param_2,&local_58);
  DestructItems<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey>,int>
            ((TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey> *)
             local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey> *)
      local_58.AllocatorInstance.Data !=
      (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey> *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  DestructItems<UE::Interchange::FAttributeKey,int>
            ((FAttributeKey *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// CopyWithObject @ 14e53ea60

void __thiscall
UInterchangeMeshFactoryNode::CopyWithObject
          (UInterchangeMeshFactoryNode *this,UInterchangeFactoryBaseNode *param_1,UObject *param_2)

{
  FAttributeStorage *pFVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  longlong lVar11;
  EAttributeStorageResult EVar12;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *pTVar14;
  uint uVar15;
  longlong *plVar16;
  bool local_res10 [16];
  bool local_res20 [8];
  UClass *local_5d8;
  bool local_5d0;
  bool local_5cf;
  bool local_5ce;
  bool local_5cd;
  bool local_5cc;
  bool local_5cb [3];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5c8;
  FDelegateAllocation local_5c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5b0;
  FDelegateAllocation local_5a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_598;
  FDelegateAllocation local_590;
  undefined1 local_580 [8];
  FDelegateAllocation local_578;
  UInterchangeMeshFactoryNode *local_568;
  UInterchangeMeshFactoryNode *local_560;
  UInterchangeMeshFactoryNode *local_558;
  UInterchangeMeshFactoryNode *local_550;
  TAttributeHandle<bool,void> local_548;
  TAttributeHandle<bool,void> local_530;
  TAttributeHandle<bool,void> local_518;
  TAttributeHandle<bool,void> local_500;
  TAttributeHandle<bool,void> local_4e8;
  TAttributeHandle<bool,void> local_4d0;
  TAttributeHandle<bool,void> local_4b8;
  TAttributeHandle<bool,void> local_4a0;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FDestructionSentinel local_408;
  FDestructionSentinel local_3f0;
  FDestructionSentinel local_3d8;
  FDestructionSentinel local_3c0;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDelegateAllocation *local_348;
  FDestructionSentinel local_340;
  FDelegateAllocation *local_328;
  FDestructionSentinel local_320;
  FDelegateAllocation *local_308;
  FDestructionSentinel local_300;
  FDelegateAllocation *local_2e8;
  void *local_2e0 [2];
  void *local_2d0 [2];
  FString local_2c0;
  void *local_2b0 [2];
  FString local_2a0;
  FString local_290;
  FString local_280;
  void *local_270 [2];
  FString local_260;
  void *local_250 [2];
  void *local_240 [2];
  FString local_230;
  void *local_220 [2];
  FString local_210;
  void *local_200 [2];
  FString local_1f0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_1e0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_1c8;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_1b0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_198;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_180;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_168;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_150;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_138;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_120;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_108;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_f0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_d8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  UInterchangeBaseNode::CopyStorage((UInterchangeBaseNode *)param_1,(UInterchangeBaseNode *)this);
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar7 = StaticClass();
  iVar6 = (int)pUVar7->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar6) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
      != &pUVar7->_padding_) {
    return;
  }
  (**(code **)(this->_padding_ + 800))(this);
  local_5d8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_2e0);
  ::FString::ConcatFC(&local_488,pFVar8,L".GetRecomputeNormals");
  if (local_2e0[0] != (void *)0x0) {
    FMemory::Free(local_2e0[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomRecomputeNormalsKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_4a0,&this->Macro_CustomRecomputeNormalsKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_4a0);
    if (bVar5) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_4a0,local_res10);
      if ((EVar12 & Operation_Success) != None) {
        if (local_4a0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = uVar15 >> 0x10 ^ uVar15;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar6 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
          if (iVar6 != -1) {
            lVar11 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar6 * 0x20 + lVar11) == local_5d8) {
                if ((iVar6 != -1) && (lVar11 = (longlong)iVar6 * 0x20 + lVar11, lVar11 != 0)) {
                  pTVar13 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar11 + 8);
                  goto LAB_14e53eccf;
                }
                break;
              }
              iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar11);
            } while (iVar6 != -1);
          }
        }
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15,&local_5d8);
LAB_14e53eccf:
        local_5c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_5c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_5c0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_5c8,(FWriteAccessScope *)&local_320);
        local_308 = &local_5c0;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_5c0);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_568 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_568);
          puVar9[4] = ApplyCustomRecomputeNormalsToAsset;
        }
        if (local_320.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
        }
        pFVar2 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_5c8) &&
            ((FScriptContainerElement *)&local_5c8 < pFVar2 + (longlong)pTVar13->ArrayMax * 0x18))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar11 = (longlong)iVar6;
        pTVar13->ArrayNum = iVar6 + 1;
        pFVar2 = (pTVar13->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar11 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_5c8,(FWriteAccessScope *)&local_3a8);
        if (*(void **)(pFVar2 + lVar11 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar11 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar11 * 0x18 + 8) =
             local_5c0.DelegateAllocator;
        local_5c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar11 * 0x18 + 0x10) = local_5c0.DelegateSize;
        local_5c0.DelegateSize = 0;
        if (local_3a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_5c8,(FWriteAccessScope *)&local_3c0);
        if ((local_5c0.DelegateSize != 0) &&
           (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_5c0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_5c0,0,0,0x10);
          local_5c0.DelegateSize = 0;
        }
        if (local_3c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
        }
        if (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_5c0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5c8.AccessDetector);
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = uVar15 >> 0x10 ^ uVar15;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar6 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
          if (iVar6 != -1) {
            lVar11 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar6 * 0x20 + lVar11) == local_5d8) {
                if ((iVar6 != -1) && (lVar11 = (longlong)iVar6 * 0x20 + lVar11, lVar11 != 0)) {
                  pTVar13 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar11 + 8);
                  goto LAB_14e53ef94;
                }
                break;
              }
              iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar11);
            } while (iVar6 != -1);
          }
        }
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15,&local_5d8);
LAB_14e53ef94:
        local_580 = (undefined1  [8])0x0;
        local_578.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_578.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_580,
                   (FWriteAccessScope *)&local_300);
        local_2e8 = &local_578;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_578);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_560 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_560);
          puVar9[4] = FillCustomRecomputeNormalsFromAsset;
        }
        if (local_300.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
        }
        pFVar2 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_580) &&
            ((FScriptContainerElement *)local_580 < pFVar2 + (longlong)pTVar13->ArrayMax * 0x18)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),
                   (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_580);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_580,
                   (FWriteAccessScope *)&local_3d8);
        if ((local_578.DelegateSize != 0) &&
           (local_578.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_578.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_578,0,0,0x10);
          local_578.DelegateSize = 0;
        }
        if (local_3d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
        }
        if (local_578.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_578.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_580);
        goto LAB_14e53f15e;
      }
      ::FString::FString(&local_2a0,&(this->Macro_CustomRecomputeNormalsKey).Key);
      pFVar8 = ::FString::FString(&local_90,&local_488);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar8,(FAttributeKey *)&local_2a0);
    }
    if (local_4a0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53f15e:
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_2b0);
  ::FString::ConcatFC(&local_478,pFVar8,L".GetRecomputeTangents");
  if (local_2b0[0] != (void *)0x0) {
    FMemory::Free(local_2b0[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomRecomputeTangentsKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_500,&this->Macro_CustomRecomputeTangentsKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_500);
    if (bVar5) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_500,local_res20);
      if ((EVar12 & Operation_Success) != None) {
        if (local_500.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_500.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_168,this,(pmf_ac4c7e6c)0x14e53a820);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_168);
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_1e0,this,(pmf_741380bb)0x14e54f260);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1e0);
        goto LAB_14e53f4bd;
      }
      ::FString::FString(&local_2c0,&(this->Macro_CustomRecomputeTangentsKey).Key);
      pFVar8 = ::FString::FString(&local_a0,&local_478);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar8,(FAttributeKey *)&local_2c0);
    }
    if (local_500.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53f4bd:
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_2d0);
  ::FString::ConcatFC(&local_468,pFVar8,L".GetUseMikkTSpace");
  if (local_2d0[0] != (void *)0x0) {
    FMemory::Free(local_2d0[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomUseMikkTSpaceKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_4b8,&this->Macro_CustomUseMikkTSpaceKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_4b8);
    if (bVar5) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_4b8,&local_5d0);
      if ((EVar12 & Operation_Success) != None) {
        if (local_4b8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_1c8,this,(pmf_ac4c7e6c)0x14e53a9c0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1c8);
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_1b0,this,(pmf_741380bb)0x14e54f400);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b0);
        goto LAB_14e53f7d1;
      }
      ::FString::FString(&local_1f0,&(this->Macro_CustomUseMikkTSpaceKey).Key);
      pFVar8 = ::FString::FString(&local_b0,&local_468);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar8,(FAttributeKey *)&local_1f0);
    }
    if (local_4b8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53f7d1:
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_200);
  ::FString::ConcatFC(&local_458,pFVar8,L".GetComputeWeightedNormals");
  if (local_200[0] != (void *)0x0) {
    FMemory::Free(local_200[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomComputeWeightedNormalsKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_4d0,&this->Macro_CustomComputeWeightedNormalsKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_4d0);
    if (bVar5) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_4d0,&local_5cf);
      if ((EVar12 & Operation_Success) != None) {
        if (local_4d0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d0.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        local_598.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_590.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_590.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_598,(FWriteAccessScope *)&local_360);
        local_348 = &local_590;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_590);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_558 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_558);
          puVar9[4] = ApplyCustomComputeWeightedNormalsToAsset;
        }
        if (local_360.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
        }
        pFVar2 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_598) &&
            ((FScriptContainerElement *)&local_598 < pFVar2 + (longlong)pTVar13->ArrayMax * 0x18))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar11 = (longlong)iVar6;
        pTVar13->ArrayNum = iVar6 + 1;
        pFVar2 = (pTVar13->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar11 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_598,(FWriteAccessScope *)&local_3f0);
        if (*(void **)(pFVar2 + lVar11 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar11 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar11 * 0x18 + 8) =
             local_590.DelegateAllocator;
        local_590.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar11 * 0x18 + 0x10) = local_590.DelegateSize;
        local_590.DelegateSize = 0;
        if (local_3f0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f0.Accessor,&local_3f0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_598,(FWriteAccessScope *)&local_408);
        if ((local_590.DelegateSize != 0) &&
           (local_590.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_590.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_590,0,0,0x10);
          local_590.DelegateSize = 0;
        }
        if (local_408.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
        }
        if (local_590.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_590.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_598.AccessDetector);
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = uVar15 >> 0x10 ^ uVar15;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar6 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
          if (iVar6 != -1) {
            lVar11 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar6 * 0x20 + lVar11) == local_5d8) {
                if ((iVar6 != -1) && (lVar11 = (longlong)iVar6 * 0x20 + lVar11, lVar11 != 0)) {
                  pTVar13 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar11 + 8);
                  goto LAB_14e53fbdf;
                }
                break;
              }
              iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar11);
            } while (iVar6 != -1);
          }
        }
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15,&local_5d8);
LAB_14e53fbdf:
        local_5b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_5a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_5a8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_5b0,(FWriteAccessScope *)&local_340);
        local_328 = &local_5a8;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_5a8);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_550 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_550);
          puVar9[4] = FillCustomComputeWeightedNormalsFromAsset;
        }
        if (local_340.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
        }
        pFVar2 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_5b0) &&
            ((FScriptContainerElement *)&local_5b0 < pFVar2 + (longlong)pTVar13->ArrayMax * 0x18))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar11 = (longlong)iVar6;
        pTVar13->ArrayNum = iVar6 + 1;
        pFVar2 = (pTVar13->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar11 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar11 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_5b0,(FWriteAccessScope *)&local_378);
        if (*(void **)(pFVar2 + lVar11 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar11 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar11 * 0x18 + 8) =
             local_5a8.DelegateAllocator;
        local_5a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar11 * 0x18 + 0x10) = local_5a8.DelegateSize;
        local_5a8.DelegateSize = 0;
        if (local_378.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_5b0,(FWriteAccessScope *)&local_390);
        if ((local_5a8.DelegateSize != 0) &&
           (local_5a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_5a8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_5a8,0,0,0x10);
          local_5a8.DelegateSize = 0;
        }
        if (local_390.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
        }
        if (local_5a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_5a8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5b0.AccessDetector);
        goto LAB_14e53fe06;
      }
      ::FString::FString(&local_210,&(this->Macro_CustomComputeWeightedNormalsKey).Key);
      pFVar8 = ::FString::FString(&local_c0,&local_458);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar8,(FAttributeKey *)&local_210);
    }
    if (local_4d0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53fe06:
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_220);
  ::FString::ConcatFC(&local_448,pFVar8,L".GetUseHighPrecisionTangentBasis");
  if (local_220[0] != (void *)0x0) {
    FMemory::Free(local_220[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomUseHighPrecisionTangentBasisKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_4e8,&this->Macro_CustomUseHighPrecisionTangentBasisKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_4e8);
    if (bVar5) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_4e8,&local_5ce);
      if ((EVar12 & Operation_Success) != None) {
        if (local_4e8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e8.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_198,this,(pmf_ac4c7e6c)0x14e53a9b0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_198);
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_180,this,(pmf_741380bb)0x14e54f3f0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_180);
        goto LAB_14e540159;
      }
      ::FString::FString(&local_230,&(this->Macro_CustomUseHighPrecisionTangentBasisKey).Key);
      pFVar8 = ::FString::FString(&local_80,&local_448);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar8,(FAttributeKey *)&local_230);
    }
    if (local_4e8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e540159:
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_240);
  ::FString::ConcatFC(&local_438,pFVar8,L".GetUseFullPrecisionUVs");
  if (local_240[0] != (void *)0x0) {
    FMemory::Free(local_240[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomUseFullPrecisionUVsKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_518,&this->Macro_CustomUseFullPrecisionUVsKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_518);
    if (bVar5) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_518,&local_5cd);
      if ((EVar12 & Operation_Success) != None) {
        if (local_518.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_518.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_d8,this,(pmf_ac4c7e6c)0x14e53a990);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8);
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_150,this,(pmf_741380bb)0x14e54f3d0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_150);
        goto LAB_14e54046e;
      }
      ::FString::FString(&local_280,&(this->Macro_CustomUseFullPrecisionUVsKey).Key);
      pFVar8 = ::FString::FString(&local_70,&local_438);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar8,(FAttributeKey *)&local_280);
    }
    if (local_518.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e54046e:
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_250);
  ::FString::ConcatFC(&local_428,pFVar8,L".GetUseBackwardsCompatibleF16TruncUVs");
  if (local_250[0] != (void *)0x0) {
    FMemory::Free(local_250[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_530,&this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_530);
    if (bVar5) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_530,&local_5cc);
      if ((EVar12 & Operation_Success) != None) {
        if (local_530.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_530.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_138,this,(pmf_ac4c7e6c)0x14e53a980);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_138);
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_120,this,(pmf_741380bb)0x14e54f3c0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_120);
        goto LAB_14e540783;
      }
      ::FString::FString(&local_260,&(this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key);
      pFVar8 = ::FString::FString(&local_60,&local_428);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar8,(FAttributeKey *)&local_260);
    }
    if (local_530.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e540783:
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_270);
  ::FString::ConcatFC(&local_418,pFVar8,L".GetRemoveDegenerates");
  if (local_270[0] != (void *)0x0) {
    FMemory::Free(local_270[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomRemoveDegeneratesKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_548,&this->Macro_CustomRemoveDegeneratesKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_548);
    if (bVar5) {
      EVar12 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_548,local_5cb);
      if ((EVar12 & Operation_Success) != None) {
        if (local_548.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_108,this,(pmf_ac4c7e6c)0x14e53a830);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_108);
        uVar15 = ((uint)((ulonglong)local_5d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_5d8 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        pTVar13 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar15 >> 0x10 ^ uVar15,&local_5d8);
        pTVar14 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeMeshFactoryNode>
                            (&local_f0,this,(pmf_741380bb)0x14e54f270);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar13->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar14) && (pTVar14 < pTVar3 + pTVar13->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar13->ArrayNum;
        if (iVar6 == pTVar13->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar14);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_f0);
        goto LAB_14e540a98;
      }
      ::FString::FString(&local_290,&(this->Macro_CustomRemoveDegeneratesKey).Key);
      pFVar8 = ::FString::FString(&local_50,&local_418);
      UE::Interchange::LogAttributeStorageErrors(EVar12,pFVar8,(FAttributeKey *)&local_290);
    }
    if (local_548.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e540a98:
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  return;
}

// FillAssetClassFromAttribute @ 14e54e450

void __thiscall
UInterchangeMeshFactoryNode::FillAssetClassFromAttribute(UInterchangeMeshFactoryNode *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeMeshFactoryNode.h"
             ,0x123,L"Pure virtual not implemented (%s)");
  return;
}

// FillCustomComputeWeightedNormalsFromAsset @ 14e54eda0

bool __thiscall
UInterchangeMeshFactoryNode::FillCustomComputeWeightedNormalsFromAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomRecomputeNormalsFromAsset @ 14e54f250

bool __thiscall
UInterchangeMeshFactoryNode::FillCustomRecomputeNormalsFromAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomRecomputeTangentsFromAsset @ 14e54f260

bool __thiscall
UInterchangeMeshFactoryNode::FillCustomRecomputeTangentsFromAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomRemoveDegeneratesFromAsset @ 14e54f270

bool __thiscall
UInterchangeMeshFactoryNode::FillCustomRemoveDegeneratesFromAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomUseBackwardsCompatibleF16TruncUVsFromAsset @ 14e54f3c0

bool __thiscall
UInterchangeMeshFactoryNode::FillCustomUseBackwardsCompatibleF16TruncUVsFromAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomUseFullPrecisionUVsFromAsset @ 14e54f3d0

bool __thiscall
UInterchangeMeshFactoryNode::FillCustomUseFullPrecisionUVsFromAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomUseHighPrecisionTangentBasisFromAsset @ 14e54f3f0

bool __thiscall
UInterchangeMeshFactoryNode::FillCustomUseHighPrecisionTangentBasisFromAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomUseMikkTSpaceFromAsset @ 14e54f400

bool __thiscall
UInterchangeMeshFactoryNode::FillCustomUseMikkTSpaceFromAsset
          (UInterchangeMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// GetAssemblyPartDependencies @ 14e54f9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeMeshFactoryNode::GetAssemblyPartDependencies
          (UInterchangeMeshFactoryNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                        (&this->AssemblyPartDependencies,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_68);
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)param_1 != pTVar1) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,pTVar1);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// GetAssemblyPartDependenciesCount @ 14e54fa40

int __thiscall
UInterchangeMeshFactoryNode::GetAssemblyPartDependenciesCount(UInterchangeMeshFactoryNode *this)

{
  return *(int *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x8 -
         *(int *)&(this->AssemblyPartDependencies).CachedKeysAndValues.field_0x34;
}

// GetCustomComputeWeightedNormals @ 14e551ac0

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomComputeWeightedNormals
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetComputeWeightedNormals");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomComputeWeightedNormalsKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomImportSockets @ 14e5542d0

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomImportSockets(UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetImportSockets");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomImportSocketsKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomKeepSectionsSeparate @ 14e554900

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomKeepSectionsSeparate
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetKeepSectionsSeparate");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomKeepSectionsSeparateKey
                     ,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomLODGroup @ 14e5549b0

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomLODGroup(UInterchangeMeshFactoryNode *this,FName *param_1)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  TAttributeHandle<FName,void> local_28;
  
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_68,pFVar5,L".GetLODGroup");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = &this->Macro_CustomLODGroupKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FName,void>(this_00,&local_28,pFVar1);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FName,void>::IsValid(&local_28);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<FName,void>::Get
                        (&local_28,param_1);
      if ((EVar6 & Operation_Success) != None) {
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e554acb;
      }
      ::FString::FString(&local_48,&pFVar1->Key);
      pFVar5 = ::FString::FString(&local_38,&local_68);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar5,(FAttributeKey *)&local_48);
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e554acb:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetCustomRecomputeNormals @ 14e555ae0

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomRecomputeNormals
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetRecomputeNormals");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomRecomputeNormalsKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomRecomputeTangents @ 14e555b90

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomRecomputeTangents
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetRecomputeTangents");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomRecomputeTangentsKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomRemoveDegenerates @ 14e555e60

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomRemoveDegenerates
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetRemoveDegenerates");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomRemoveDegeneratesKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomUseBackwardsCompatibleF16TruncUVs @ 14e5573d0

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomUseBackwardsCompatibleF16TruncUVs
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetUseBackwardsCompatibleF16TruncUVs");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomUseFullPrecisionUVs @ 14e557480

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomUseFullPrecisionUVs
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetUseFullPrecisionUVs");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomUseFullPrecisionUVsKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomUseHighPrecisionTangentBasis @ 14e5575e0

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomUseHighPrecisionTangentBasis
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetUseHighPrecisionTangentBasis");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomUseHighPrecisionTangentBasisKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomUseMikkTSpace @ 14e5577f0

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomUseMikkTSpace(UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetUseMikkTSpace");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomUseMikkTSpaceKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomVertexColorIgnore @ 14e5579b0

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomVertexColorIgnore
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetVertexColorIgnore");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexColorIgnoreKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomVertexColorOverride @ 14e557a60

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomVertexColorOverride
          (UInterchangeMeshFactoryNode *this,FColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetVertexColorOverride");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FColor>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexColorOverrideKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomVertexColorReplace @ 14e557b10

bool __thiscall
UInterchangeMeshFactoryNode::GetCustomVertexColorReplace
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetVertexColorReplace");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexColorReplaceKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetLodDataCount @ 14e5582d0

int __thiscall UInterchangeMeshFactoryNode::GetLodDataCount(UInterchangeMeshFactoryNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->LodDependencies);
  return iVar1;
}

// GetLodDataUniqueIds @ 14e5582f0

void __thiscall
UInterchangeMeshFactoryNode::GetLodDataUniqueIds
          (UInterchangeMeshFactoryNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->LodDependencies,param_1);
  return;
}

// GetMeshSocketPrefix @ 14e5583c0

FString * __cdecl UInterchangeMeshFactoryNode::GetMeshSocketPrefix(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&StaticMeshSocketPrefix,L"SOCKET_");
      atexit(`UInterchangeMeshFactoryNode::GetMeshSocketPrefix'::__l2::
             _dynamic_atexit_destructor_for__StaticMeshSocketPrefix__);
      _Init_thread_footer(&::_TSS0);
      return &StaticMeshSocketPrefix;
    }
  }
  return &StaticMeshSocketPrefix;
}

// GetPayloadKeyBooleanAttribute @ 14e559a70

bool __thiscall
UInterchangeMeshFactoryNode::GetPayloadKeyBooleanAttribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,bool *param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::GetBooleanAttribute((UInterchangeBaseNode *)this,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadKeyDoubleAttribute @ 14e559ad0

bool __thiscall
UInterchangeMeshFactoryNode::GetPayloadKeyDoubleAttribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,double *param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::GetDoubleAttribute((UInterchangeBaseNode *)this,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadKeyFloatAttribute @ 14e559b30

bool __thiscall
UInterchangeMeshFactoryNode::GetPayloadKeyFloatAttribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,float *param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::GetFloatAttribute((UInterchangeBaseNode *)this,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadKeyInt32Attribute @ 14e559b90

bool __thiscall
UInterchangeMeshFactoryNode::GetPayloadKeyInt32Attribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,int *param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::GetInt32Attribute((UInterchangeBaseNode *)this,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPayloadKeyStringAttribute @ 14e559bf0

bool __thiscall
UInterchangeMeshFactoryNode::GetPayloadKeyStringAttribute
          (UInterchangeMeshFactoryNode *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  FString local_18;
  
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",param_1);
  bVar1 = UInterchangeBaseNode::GetStringAttribute((UInterchangeBaseNode *)this,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetPrivateStaticClass @ 14e55af10

UClass * __cdecl UInterchangeMeshFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMeshFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshFactoryNode,0x3c8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMeshFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeMeshFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.InnerSingleton;
}

// GetSlotMaterialDependencies @ 14e55c8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeMeshFactoryNode::GetSlotMaterialDependencies
          (UInterchangeMeshFactoryNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  FAttributeStorage *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_01;
  longlong *plVar6;
  bool bVar7;
  FString *pFVar8;
  EAttributeStorageResult EVar9;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar10;
  byte bVar11;
  longlong lVar12;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_02;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 auStackY_238 [32];
  bool local_1e8;
  undefined1 local_1e7 [7];
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1c8;
  TAttributeHandle<bool,void> local_1c0;
  longlong *local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FString local_148;
  void *local_138 [2];
  FString local_128;
  FString local_118 [2];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e8 = false;
  local_1c8 = param_1;
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_138);
  ::FString::ConcatFC(&local_148,pFVar8,L".GetKeepSectionsSeparate");
  if (local_138[0] != (void *)0x0) {
    FMemory::Free(local_138[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar7 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (this_00,&this->Macro_CustomKeepSectionsSeparateKey);
  if (bVar7) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (this_00,&local_1c0,&this->Macro_CustomKeepSectionsSeparateKey);
    bVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_1c0);
    if ((bVar7) &&
       (EVar9 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                          (&local_1c0,&local_1e8), (EVar9 & Operation_Success) == None)) {
      ::FString::FString(&local_128,&(this->Macro_CustomKeepSectionsSeparateKey).Key);
      pFVar8 = ::FString::FString(local_118,&local_148);
      UE::Interchange::LogAttributeStorageErrors(EVar9,pFVar8,(FAttributeKey *)&local_128);
    }
    if (local_1c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_1e8 == false) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
              (&this->SlotMaterialDependencies,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_e8);
    uVar17 = local_e8._8_4_ - local_b4;
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8 = 0;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    uVar18 = 0;
    if (0 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar17,&local_1e0,0,(int *)((longlong)&local_1d8 + 4));
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)param_1,local_e8._8_4_ - local_b4);
    uVar17 = local_c0;
    uStack_19c = 1;
    local_188 = 0;
    uStack_18c = local_188;
    if (local_c0 != 0) {
      puVar19 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar19 = local_c8;
      }
      uVar15 = *puVar19;
      local_188 = 0;
      uVar18 = 0;
      while (uVar15 == 0) {
        lVar12 = (longlong)(int)uVar18;
        local_188 = local_188 + 0x20;
        uVar18 = uVar18 + 1;
        uStack_18c = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_14e55cb33;
        uVar15 = puVar19[lVar12 + 1];
      }
      uStack_19c = -uVar15 & uVar15;
      uVar2 = (ulonglong)uStack_19c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_1d0 = (int)lVar12;
      uStack_18c = (local_188 - 1) + local_1d0;
      if ((int)local_c0 < (int)uStack_18c) {
        uStack_18c = local_c0;
      }
    }
LAB_14e55cb33:
    local_1a8 = (longlong *)local_e8;
    uStack_184 = local_ec;
    local_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    iStack_180 = local_e8._8_4_ - local_b4;
    uVar15 = local_c0 & 0xffffffe0;
    uStack_190 = 0xffffffff;
    TStack_170.CurrentBitIndex = uStack_18c;
    TStack_170.UnvisitedBitMask = 0xffffffff;
    TStack_170._padding_ = CONCAT44(uStack_19c,uVar18);
    iVar13 = (int)local_c0 >> 5;
    TStack_170._28_4_ = local_ec;
    TStack_170.BaseBitIndex = local_188;
    uStack_150 = CONCAT44(uStack_17c,iStack_180);
    bVar11 = (byte)local_c0;
    uStack_1a0 = uVar18;
    local_178 = local_1a8;
    TStack_170.Array = local_198;
    if (((int)local_c0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = local_1c8;
    if (uVar17 != local_c0) {
      puVar19 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar19 = local_c8;
      }
      uVar17 = -1 << (bVar11 & 0x1f) & puVar19[iVar13];
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar17 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14e55cc40;
        uVar17 = puVar19[lVar12 + 1];
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_1cc = (int)lVar12;
      uVar17 = local_1cc + -1 + uVar15;
      if ((int)local_c0 < (int)uVar17) {
        uVar17 = local_c0;
      }
    }
LAB_14e55cc40:
    while( true ) {
      plVar6 = local_178;
      if ((int)local_178[1] - *(int *)((longlong)local_178 + 0x34) != (int)uStack_150) {
        local_1e7[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e7);
      }
      FVar5.Data = local_1e0.Data;
      if (((TStack_170.CurrentBitIndex == uVar17) &&
          (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
         (plVar6 == (longlong *)local_e8)) break;
      pFVar16 = local_1e0.Data + (longlong)(int)local_1d8 * 0x10;
      pFVar8 = (FString *)(*plVar6 + (longlong)TStack_170.CurrentBitIndex * 0x28);
      pFVar1 = (FScriptContainerElement *)(pFVar8 + 1);
      for (FVar14.Data = local_1e0.Data; FVar14.Data != pFVar16; FVar14.Data = FVar14.Data + 0x10) {
        iVar13 = *(int *)(FVar14.Data + 8);
        iVar3 = pFVar8[1].Data.ArrayNum;
        if (iVar13 == iVar3) {
          if (1 < iVar13) {
            iVar13 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)FVar14.Data,*(wchar_t **)pFVar1);
            bVar7 = iVar13 == 0;
            goto LAB_14e55ccd5;
          }
LAB_14e55cce7:
          if ((int)((longlong)FVar14.Data - (longlong)FVar5.Data >> 4) != -1) goto LAB_14e55cdac;
          break;
        }
        bVar7 = iVar13 + iVar3 == 1;
LAB_14e55ccd5:
        if (bVar7) goto LAB_14e55cce7;
      }
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString_const_&,FString_const_&>
                ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)this_01,pFVar8,(FString *)pFVar1);
      if (((local_1e0.Data <= pFVar1) &&
          (pFVar1 < local_1e0.Data + (longlong)local_1d8._4_4_ * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = (int)local_1d8;
      if ((int)local_1d8 == local_1d8._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1e0,(int *)((longlong)&local_1d8 + 4));
      }
      local_1d8 = CONCAT44(local_1d8._4_4_,iVar13 + 1);
      ::FString::FString((FString *)(local_1e0.Data + (longlong)iVar13 * 0x10),(FString *)pFVar1);
LAB_14e55cdac:
      TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
    }
    DestructItems<FString,int>((FString *)local_1e0.Data,(int)local_1d8);
    if (local_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data);
    }
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    this_02 = (TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8;
  }
  else {
    pTVar10 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                           (&this->SlotMaterialDependencies,
                            (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                             *)local_98);
    if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
         *)param_1 != pTVar10) {
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)param_1,pTVar10);
    }
    local_50 = 0;
    if ((void *)local_98._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._64_8_);
    }
    this_02 = (TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98;
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this_02);
  return;
}

// GetSlotMaterialDependencyUid @ 14e55cf00

bool __thiscall
UInterchangeMeshFactoryNode::GetSlotMaterialDependencyUid
          (UInterchangeMeshFactoryNode *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
                    (&this->SlotMaterialDependencies,param_1,param_2);
  return bVar1;
}

// RemoveAssemblyPartDependencyUid @ 14e55f780

bool __thiscall
UInterchangeMeshFactoryNode::RemoveAssemblyPartDependencyUid
          (UInterchangeMeshFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    (&this->AssemblyPartDependencies,param_1);
  if (bVar1) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->AssemblyPartDependencies);
    return true;
  }
  return false;
}

// RemoveLodDataUniqueId @ 14e55f8a0

bool __thiscall
UInterchangeMeshFactoryNode::RemoveLodDataUniqueId
          (UInterchangeMeshFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->LodDependencies,param_1);
  return bVar1;
}

// RemoveSlotMaterialDependencyUid @ 14e55f920

bool __thiscall
UInterchangeMeshFactoryNode::RemoveSlotMaterialDependencyUid
          (UInterchangeMeshFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    (&this->SlotMaterialDependencies,param_1);
  if (bVar1) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SlotMaterialDependencies);
    return true;
  }
  return false;
}

// ResetAssemblyDependencies @ 14e55fa40

bool __thiscall
UInterchangeMeshFactoryNode::ResetAssemblyDependencies(UInterchangeMeshFactoryNode *this)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            (&this->AssemblyPartDependencies,0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
            (&this->AssemblyPartDependencies);
  return true;
}

// ResetSlotMaterialDependencies @ 14e55fa70

bool __thiscall
UInterchangeMeshFactoryNode::ResetSlotMaterialDependencies(UInterchangeMeshFactoryNode *this)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            (&this->SlotMaterialDependencies,0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
            (&this->SlotMaterialDependencies);
  return true;
}

// Serialize @ 14e55fc30

void __thiscall
UInterchangeMeshFactoryNode::Serialize(UInterchangeMeshFactoryNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SlotMaterialDependencies);
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->AssemblyPartDependencies);
    (**(code **)(this->_padding_ + 800))(this);
  }
  return;
}

// Serialize @ 14e55fc90

void __thiscall
UInterchangeMeshFactoryNode::Serialize
          (UInterchangeMeshFactoryNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SlotMaterialDependencies);
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->AssemblyPartDependencies);
    (**(code **)(this->_padding_ + 800))(this);
  }
  return;
}

// SetAssemblyPartDependencyUid @ 14e5608d0

bool __thiscall
UInterchangeMeshFactoryNode::SetAssemblyPartDependencyUid
          (UInterchangeMeshFactoryNode *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->AssemblyPartDependencies,uVar3,param_1,param_2);
  return bVar2;
}

// SetCustomComputeWeightedNormals @ 14e565720

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomComputeWeightedNormals
          (UInterchangeMeshFactoryNode *this,bool *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  UClass *local_res8;
  UInterchangeMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeMeshFactoryNode *local_100;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  void *local_48 [2];
  FString local_38;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetComputeWeightedNormals");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomComputeWeightedNormalsKey,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomComputeWeightedNormalsKey).Key);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_f8.Data.ArrayNum
                 ,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_38);
    goto LAB_14e565e30;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e565880:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeMeshFactoryNode.cpp"
                         ,0x1b9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e565880;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomComputeWeightedNormalsKey).Key);
    local_res8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_res8) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e565960;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e565960:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomComputeWeightedNormalsToAsset;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_e8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d0);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    local_108 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_108) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e565c1d;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_108);
LAB_14e565c1d:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_100);
      puVar11[4] = FillCustomComputeWeightedNormalsFromAsset;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e565e30:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomImportSockets @ 14e56ec70

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomImportSockets(UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetImportSockets");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomImportSocketsKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomImportSocketsKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomKeepSectionsSeparate @ 14e56f930

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomKeepSectionsSeparate
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetKeepSectionsSeparate");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomKeepSectionsSeparateKey
                     ,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomKeepSectionsSeparateKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomLODGroup @ 14e56fa80

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomLODGroup
          (UInterchangeMeshFactoryNode *this,FName *param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined7 in_register_00000081;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)
           (**(code **)(this->_padding_ + 0x2b0))
                     (this,local_28,CONCAT71(in_register_00000081,param_2));
  ::FString::ConcatFC(&local_38,pFVar4,L".SetLODGroup");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FName,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLODGroupKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomLODGroupKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomRecomputeNormals @ 14e5741c0

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomRecomputeNormals
          (UInterchangeMeshFactoryNode *this,bool *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  UClass *local_res8;
  UInterchangeMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeMeshFactoryNode *local_100;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  void *local_48 [2];
  FString local_38;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetRecomputeNormals");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomRecomputeNormalsKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomRecomputeNormalsKey).Key);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_f8.Data.ArrayNum
                 ,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_38);
    goto LAB_14e5748d0;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e574320:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeMeshFactoryNode.cpp"
                         ,0x17d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e574320;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomRecomputeNormalsKey).Key);
    local_res8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_res8) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e574400;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e574400:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomRecomputeNormalsToAsset;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_e8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d0);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    local_108 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_108) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e5746bd;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_108);
LAB_14e5746bd:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_100);
      puVar11[4] = FillCustomRecomputeNormalsFromAsset;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e5748d0:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomRecomputeTangents @ 14e574930

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomRecomputeTangents
          (UInterchangeMeshFactoryNode *this,bool *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  UClass *local_res8;
  UInterchangeMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeMeshFactoryNode *local_100;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  void *local_48 [2];
  FString local_38;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetRecomputeTangents");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomRecomputeTangentsKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomRecomputeTangentsKey).Key);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_f8.Data.ArrayNum
                 ,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_38);
    goto LAB_14e575040;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e574a90:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeMeshFactoryNode.cpp"
                         ,0x191,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e574a90;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomRecomputeTangentsKey).Key);
    local_res8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_res8) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e574b70;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e574b70:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomRecomputeTangentsToAsset;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_e8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d0);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    local_108 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_108) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e574e2d;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_108);
LAB_14e574e2d:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_100);
      puVar11[4] = FillCustomRecomputeTangentsFromAsset;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e575040:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomRemoveDegenerates @ 14e5753a0

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomRemoveDegenerates
          (UInterchangeMeshFactoryNode *this,bool *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  UClass *local_res8;
  UInterchangeMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeMeshFactoryNode *local_100;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  void *local_48 [2];
  FString local_38;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetRemoveDegenerates");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomRemoveDegeneratesKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomRemoveDegeneratesKey).Key);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_f8.Data.ArrayNum
                 ,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_38);
    goto LAB_14e575ab0;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e575500:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeMeshFactoryNode.cpp"
                         ,0x208,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e575500;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomRemoveDegeneratesKey).Key);
    local_res8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_res8) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e5755e0;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e5755e0:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomRemoveDegeneratesToAsset;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_e8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d0);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    local_108 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_108) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57589d;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_108);
LAB_14e57589d:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_100);
      puVar11[4] = FillCustomRemoveDegeneratesFromAsset;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e575ab0:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomUseBackwardsCompatibleF16TruncUVs @ 14e57b2e0

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomUseBackwardsCompatibleF16TruncUVs
          (UInterchangeMeshFactoryNode *this,bool *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  UClass *local_res8;
  UInterchangeMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeMeshFactoryNode *local_100;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  void *local_48 [2];
  FString local_38;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetUseBackwardsCompatibleF16TruncUVs");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_f8.Data.ArrayNum
                 ,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_38);
    goto LAB_14e57b9f0;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e57b440:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeMeshFactoryNode.cpp"
                         ,0x1f5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e57b440;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomUseBackwardsCompatibleF16TruncUVsKey).Key);
    local_res8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_res8) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57b520;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e57b520:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomUseBackwardsCompatibleF16TruncUVsToAsset;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_e8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d0);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    local_108 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_108) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57b7dd;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_108);
LAB_14e57b7dd:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_100);
      puVar11[4] = FillCustomUseBackwardsCompatibleF16TruncUVsFromAsset;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e57b9f0:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomUseFullPrecisionUVs @ 14e57ba50

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomUseFullPrecisionUVs
          (UInterchangeMeshFactoryNode *this,bool *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  UClass *local_res8;
  UInterchangeMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeMeshFactoryNode *local_100;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  void *local_48 [2];
  FString local_38;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetUseFullPrecisionUVs");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomUseFullPrecisionUVsKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomUseFullPrecisionUVsKey).Key);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_f8.Data.ArrayNum
                 ,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_38);
    goto LAB_14e57c160;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e57bbb0:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeMeshFactoryNode.cpp"
                         ,0x1e1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e57bbb0;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomUseFullPrecisionUVsKey).Key);
    local_res8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_res8) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57bc90;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e57bc90:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomUseFullPrecisionUVsToAsset;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_e8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d0);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    local_108 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_108) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57bf4d;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_108);
LAB_14e57bf4d:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_100);
      puVar11[4] = FillCustomUseFullPrecisionUVsFromAsset;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e57c160:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomUseHighPrecisionTangentBasis @ 14e57c930

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomUseHighPrecisionTangentBasis
          (UInterchangeMeshFactoryNode *this,bool *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  UClass *local_res8;
  UInterchangeMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeMeshFactoryNode *local_100;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  void *local_48 [2];
  FString local_38;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetUseHighPrecisionTangentBasis");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomUseHighPrecisionTangentBasisKey,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomUseHighPrecisionTangentBasisKey).Key);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_f8.Data.ArrayNum
                 ,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_38);
    goto LAB_14e57d040;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e57ca90:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeMeshFactoryNode.cpp"
                         ,0x1cd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e57ca90;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomUseHighPrecisionTangentBasisKey).Key);
    local_res8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_res8) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57cb70;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e57cb70:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomUseHighPrecisionTangentBasisToAsset;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_e8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d0);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    local_108 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_108) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57ce2d;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_108);
LAB_14e57ce2d:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_100);
      puVar11[4] = FillCustomUseHighPrecisionTangentBasisFromAsset;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e57d040:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomUseMikkTSpace @ 14e57d390

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomUseMikkTSpace
          (UInterchangeMeshFactoryNode *this,bool *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  UClass *local_res8;
  UInterchangeMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeMeshFactoryNode *local_100;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  void *local_48 [2];
  FString local_38;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_48);
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetUseMikkTSpace");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomUseMikkTSpaceKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomUseMikkTSpaceKey).Key);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_f8.Data.ArrayNum
                 ,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_f8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_38);
    goto LAB_14e57daa0;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e57d4f0:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeMeshFactoryNode.cpp"
                         ,0x1a5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e57d4f0;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomUseMikkTSpaceKey).Key);
    local_res8 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_res8) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57d5d0;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e57d5d0:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomUseMikkTSpaceToAsset;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_e8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d0);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    local_108 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
    uVar15 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          puVar14 = (ulonglong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*puVar14 == local_108) {
            if (puVar14 != (ulonglong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(puVar14 + 1);
              goto LAB_14e57d88d;
            }
            break;
          }
          iVar5 = (int)puVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_108);
LAB_14e57d88d:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_100);
      puVar11[4] = FillCustomUseMikkTSpaceFromAsset;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e57daa0:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomVertexColorIgnore @ 14e57dca0

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomVertexColorIgnore
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetVertexColorIgnore");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexColorIgnoreKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomVertexColorIgnoreKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomVertexColorOverride @ 14e57ddf0

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomVertexColorOverride
          (UInterchangeMeshFactoryNode *this,FColor *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetVertexColorOverride");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FColor,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexColorOverrideKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomVertexColorOverrideKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomVertexColorReplace @ 14e57df40

bool __thiscall
UInterchangeMeshFactoryNode::SetCustomVertexColorReplace
          (UInterchangeMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetVertexColorReplace");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexColorReplaceKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomVertexColorReplaceKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetNodeClassFromClassAttribute @ 14e57edf0

bool __thiscall
UInterchangeMeshFactoryNode::SetNodeClassFromClassAttribute(UInterchangeMeshFactoryNode *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeMeshFactoryNode.h"
             ,0x124,L"Pure virtual not implemented (%s)");
  return false;
}

// SetSlotMaterialDependencyUid @ 14e57f060

bool __thiscall
UInterchangeMeshFactoryNode::SetSlotMaterialDependencyUid
          (UInterchangeMeshFactoryNode *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->SlotMaterialDependencies,uVar3,param_1,param_2);
  return bVar2;
}

// StaticRegisterNativesUInterchangeMeshFactoryNode @ 14e57f680

void __cdecl UInterchangeMeshFactoryNode::StaticRegisterNativesUInterchangeMeshFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x34;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddLodDataUniqueId @ 14e5835f0

void __cdecl
UInterchangeMeshFactoryNode::execAddLodDataUniqueId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0x10].field_0x20,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddPayloadKeyBooleanAttribute @ 14e583830

void __cdecl
UInterchangeMeshFactoryNode::execAddPayloadKeyBooleanAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool local_res10 [8];
  int local_res18 [4];
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_28,L"__PAYLOAD_PREFIX__",&local_38);
  bVar2 = UInterchangeBaseNode::AddBooleanAttribute
                    ((UInterchangeBaseNode *)param_1,&local_28,local_res10);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddPayloadKeyDoubleAttribute @ 14e583950

void __cdecl
UInterchangeMeshFactoryNode::execAddPayloadKeyDoubleAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  double local_res10;
  double local_res18 [2];
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_28,L"__PAYLOAD_PREFIX__",&local_38);
  bVar2 = UInterchangeBaseNode::AddDoubleAttribute
                    ((UInterchangeBaseNode *)param_1,&local_28,local_res18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddPayloadKeyFloatAttribute @ 14e583a70

void __cdecl
UInterchangeMeshFactoryNode::execAddPayloadKeyFloatAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_res10 [2];
  float local_res18 [4];
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_28,L"__PAYLOAD_PREFIX__",&local_38);
  bVar2 = UInterchangeBaseNode::AddFloatAttribute
                    ((UInterchangeBaseNode *)param_1,&local_28,local_res18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddPayloadKeyInt32Attribute @ 14e583b90

void __cdecl
UInterchangeMeshFactoryNode::execAddPayloadKeyInt32Attribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [4];
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  ::FString::ConcatCF(&local_28,L"__PAYLOAD_PREFIX__",&local_38);
  bVar2 = UInterchangeBaseNode::AddInt32Attribute
                    ((UInterchangeBaseNode *)param_1,&local_28,local_res18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddPayloadKeyStringAttribute @ 14e583cb0

void __cdecl
UInterchangeMeshFactoryNode::execAddPayloadKeyStringAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",&local_28);
  bVar2 = UInterchangeBaseNode::AddStringAttribute
                    ((UInterchangeBaseNode *)param_1,&local_18,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAssemblyPartDependencies @ 14e587230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeMeshFactoryNode::execGetAssemblyPartDependencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar3;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar4;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  pTVar4 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)local_c8;
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar4 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                        ((TMapAttributeHelper<FString,FString> *)&param_1[0x14].field_0x18,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_78);
  if (pTVar4 != pTVar3) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (pTVar4,pTVar3);
  }
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar2 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// execGetAssemblyPartDependenciesCount @ 14e5873f0

void __cdecl
UInterchangeMeshFactoryNode::execGetAssemblyPartDependenciesCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = *(int *)&param_1[0x14].field_0x20 - *(int *)&param_1[0x15].field_0x24;
  return;
}

// execGetCustomComputeWeightedNormals @ 14e58ca70

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomComputeWeightedNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetComputeWeightedNormals");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xe].field_0x10,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomImportSockets @ 14e5907a0

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomImportSockets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetImportSockets");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x10
                     ,&local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomKeepSectionsSeparate @ 14e591120

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomKeepSectionsSeparate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomKeepSectionsSeparate((UInterchangeMeshFactoryNode *)param_1,pbVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCustomLODGroup @ 14e591300

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomLODGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAttributeStorage *this;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FName *pFVar7;
  FName local_res8;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<FName,void> local_38;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pFVar7 = &local_res8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar7 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_68);
  ::FString::ConcatFC(&local_78,pFVar4,L".GetLODGroup");
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = *(FAttributeStorage **)(param_1 + 1);
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (this,(FAttributeKey *)&param_1[0xc].field_0x20);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FName,void>
              (this,&local_38,(FAttributeKey *)&param_1[0xc].field_0x20);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FName,void>::IsValid(&local_38);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FName,void>::Get
                        (&local_38,pFVar7);
      if ((EVar5 & Operation_Success) != None) {
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar6 = 1;
        goto LAB_14e591494;
      }
      ::FString::FString(&local_58,(FString *)&param_1[0xc].field_0x20);
      pFVar4 = ::FString::FString(&local_48,&local_78);
      UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar4,(FAttributeKey *)&local_58);
    }
    if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
  }
LAB_14e591494:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execGetCustomRecomputeNormals @ 14e593bf0

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomRecomputeNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetRecomputeNormals");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x8,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomRecomputeTangents @ 14e593d20

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomRecomputeTangents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetRecomputeTangents");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomRemoveDegenerates @ 14e594170

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomRemoveDegenerates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetRemoveDegenerates");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x10),
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomUseBackwardsCompatibleF16TruncUVs @ 14e596dc0

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomUseBackwardsCompatibleF16TruncUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetUseBackwardsCompatibleF16TruncUVs");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xf].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomUseFullPrecisionUVs @ 14e596ef0

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomUseFullPrecisionUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetUseFullPrecisionUVs");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xf].field_0x8,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomUseHighPrecisionTangentBasis @ 14e597150

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomUseHighPrecisionTangentBasis
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetUseHighPrecisionTangentBasis");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xe].field_0x20,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomUseMikkTSpace @ 14e597460

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomUseMikkTSpace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetUseMikkTSpace");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xe),&local_38
                     ,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomVertexColorIgnore @ 14e597970

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomVertexColorIgnore
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetVertexColorIgnore");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomVertexColorOverride @ 14e597aa0

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomVertexColorOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FColor *pFVar5;
  FColor local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pFVar5 = local_res8;
  if ((FColor *)param_2->MostRecentPropertyAddress != (FColor *)0x0) {
    pFVar5 = (FColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetVertexColorOverride");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FColor>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xc),&local_38
                     ,pFVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomVertexColorReplace @ 14e597bd0

void __cdecl
UInterchangeMeshFactoryNode::execGetCustomVertexColorReplace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetVertexColorReplace");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetLodDataCount @ 14e599260

void __cdecl
UInterchangeMeshFactoryNode::execGetLodDataCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[0x10].field_0x20);
  *(int *)param_3 = iVar1;
  return;
}

// execGetLodDataUniqueIds @ 14e5992a0

void __cdecl
UInterchangeMeshFactoryNode::execGetLodDataUniqueIds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            ((TArrayAttributeHelper<FString> *)&param_1[0x10].field_0x20,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetPayloadKeyBooleanAttribute @ 14e599d80

void __cdecl
UInterchangeMeshFactoryNode::execGetPayloadKeyBooleanAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_28,L"__PAYLOAD_PREFIX__",&local_38);
  bVar2 = UInterchangeBaseNode::GetBooleanAttribute
                    ((UInterchangeBaseNode *)param_1,&local_28,pbVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPayloadKeyDoubleAttribute @ 14e599eb0

void __cdecl
UInterchangeMeshFactoryNode::execGetPayloadKeyDoubleAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  double *pdVar3;
  double local_res10;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_res10 = 0.0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pdVar3 = &local_res10;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_28,L"__PAYLOAD_PREFIX__",&local_38);
  bVar2 = UInterchangeBaseNode::GetDoubleAttribute((UInterchangeBaseNode *)param_1,&local_28,pdVar3)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPayloadKeyFloatAttribute @ 14e599fe0

void __cdecl
UInterchangeMeshFactoryNode::execGetPayloadKeyFloatAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_28,L"__PAYLOAD_PREFIX__",&local_38);
  bVar2 = UInterchangeBaseNode::GetFloatAttribute((UInterchangeBaseNode *)param_1,&local_28,pfVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPayloadKeyInt32Attribute @ 14e59a110

void __cdecl
UInterchangeMeshFactoryNode::execGetPayloadKeyInt32Attribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_28,L"__PAYLOAD_PREFIX__",&local_38);
  bVar2 = UInterchangeBaseNode::GetInt32Attribute((UInterchangeBaseNode *)param_1,&local_28,piVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPayloadKeyStringAttribute @ 14e59a240

void __cdecl
UInterchangeMeshFactoryNode::execGetPayloadKeyStringAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar3 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ConcatCF(&local_18,L"__PAYLOAD_PREFIX__",&local_28);
  bVar2 = UInterchangeBaseNode::GetStringAttribute((UInterchangeBaseNode *)param_1,&local_18,pFVar3)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSlotMaterialDependencies @ 14e59ab40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeMeshFactoryNode::execGetSlotMaterialDependencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar3
  ;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            *)local_78;
  if ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      param_2->MostRecentPropertyAddress !=
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0) {
    pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetSlotMaterialDependencies((UInterchangeMeshFactoryNode *)param_1,pTVar3);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execGetSlotMaterialDependencyUid @ 14e59add0

void __cdecl
UInterchangeMeshFactoryNode::execGetSlotMaterialDependencyUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
                    ((TMapAttributeHelper<FString,FString> *)&param_1[0x11].field_0x18,&local_18,
                     pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveAssemblyPartDependencyUid @ 14e59d410

void __cdecl
UInterchangeMeshFactoryNode::execRemoveAssemblyPartDependencyUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    ((TMapAttributeHelper<FString,FString> *)&param_1[0x14].field_0x18,&local_18);
  if (bVar2) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              ((TMapAttributeHelper<FString,FString> *)&param_1[0x14].field_0x18);
  }
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveLodDataUniqueId @ 14e59d960

void __cdecl
UInterchangeMeshFactoryNode::execRemoveLodDataUniqueId
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0x10].field_0x20,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveSlotMaterialDependencyUid @ 14e59dc60

void __cdecl
UInterchangeMeshFactoryNode::execRemoveSlotMaterialDependencyUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    ((TMapAttributeHelper<FString,FString> *)&param_1[0x11].field_0x18,&local_18);
  if (bVar2) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              ((TMapAttributeHelper<FString,FString> *)&param_1[0x11].field_0x18);
  }
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execResetAssemblyDependencies @ 14e59deb0

void __cdecl
UInterchangeMeshFactoryNode::execResetAssemblyDependencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            ((TMapAttributeHelper<FString,FString> *)&param_1[0x14].field_0x18,0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
            ((TMapAttributeHelper<FString,FString> *)&param_1[0x14].field_0x18);
  *(undefined1 *)param_3 = 1;
  return;
}

// execResetSlotMaterialDependencies @ 14e59df00

void __cdecl
UInterchangeMeshFactoryNode::execResetSlotMaterialDependencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            ((TMapAttributeHelper<FString,FString> *)&param_1[0x11].field_0x18,0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
            ((TMapAttributeHelper<FString,FString> *)&param_1[0x11].field_0x18);
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetAssemblyPartDependencyUid @ 14e59e7e0

void __cdecl
UInterchangeMeshFactoryNode::execSetAssemblyPartDependencyUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)&param_1[0x14].field_0x18,uVar4,
                     &local_28,&local_18);
  *(bool *)param_3 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomComputeWeightedNormals @ 14e5a48b0

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomComputeWeightedNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomComputeWeightedNormals
                    ((UInterchangeMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomImportSockets @ 14e5a97f0

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomImportSockets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetImportSockets");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x10].field_0x10
                     ,pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0x10].field_0x10);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomKeepSectionsSeparate @ 14e5aa700

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomKeepSectionsSeparate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetKeepSectionsSeparate");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x10,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xc].field_0x10);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomLODGroup @ 14e5aab10

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomLODGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FName *pFVar7;
  undefined4 local_res8 [2];
  FName local_res10;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  pFVar7 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar7 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetLODGroup");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FName,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x20,
                     pFVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xc].field_0x20);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomRecomputeNormals @ 14e5ae5e0

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomRecomputeNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomRecomputeNormals
                    ((UInterchangeMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomRecomputeTangents @ 14e5ae6d0

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomRecomputeTangents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomRecomputeTangents
                    ((UInterchangeMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomRemoveDegenerates @ 14e5aebd0

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomRemoveDegenerates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomRemoveDegenerates
                    ((UInterchangeMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomUseBackwardsCompatibleF16TruncUVs @ 14e5b2420

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomUseBackwardsCompatibleF16TruncUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomUseBackwardsCompatibleF16TruncUVs
                    ((UInterchangeMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomUseFullPrecisionUVs @ 14e5b2510

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomUseFullPrecisionUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomUseFullPrecisionUVs
                    ((UInterchangeMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomUseHighPrecisionTangentBasis @ 14e5b26f0

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomUseHighPrecisionTangentBasis
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomUseHighPrecisionTangentBasis
                    ((UInterchangeMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomUseMikkTSpace @ 14e5b2b10

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomUseMikkTSpace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomUseMikkTSpace((UInterchangeMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomVertexColorIgnore @ 14e5b2eb0

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomVertexColorIgnore
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetVertexColorIgnore");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xb].field_0x18);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomVertexColorOverride @ 14e5b3070

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomVertexColorOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FColor *pFVar7;
  FColor local_res8 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pFVar7 = local_res8;
  if ((FColor *)param_2->MostRecentPropertyAddress != (FColor *)0x0) {
    pFVar7 = (FColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetVertexColorOverride");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FColor,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xc),pFVar7,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 0xc));
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomVertexColorReplace @ 14e5b3230

void __cdecl
UInterchangeMeshFactoryNode::execSetCustomVertexColorReplace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetVertexColorReplace");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xb].field_0x8);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetSlotMaterialDependencyUid @ 14e5b4cf0

void __cdecl
UInterchangeMeshFactoryNode::execSetSlotMaterialDependencyUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)&param_1[0x11].field_0x18,uVar4,
                     &local_28,&local_18);
  *(bool *)param_3 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

