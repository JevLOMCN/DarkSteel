// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 113

// StaticClass @ 14e477480

UClass * __cdecl UInterchangeMeshNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeMeshNode",
               &Z_Registration_Info_UClass_UInterchangeMeshNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshNode,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeMeshNode>,
               InternalVTableHelperCtorCaller<UInterchangeMeshNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshNode.InnerSingleton;
}

// UInterchangeMeshNode @ 14e486d30

UInterchangeMeshNode * __thiscall
UInterchangeMeshNode::UInterchangeMeshNode(UInterchangeMeshNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeMeshNode__6B_;
  (this->Macro_CustomVertexCountKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexCountKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexCountKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexCountKey).Key,L"VertexCount");
  (this->Macro_CustomPolygonCountKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomPolygonCountKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomPolygonCountKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomPolygonCountKey).Key,L"PolygonCount");
  (this->Macro_CustomBoundingBoxKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomBoundingBoxKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBoundingBoxKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBoundingBoxKey).Key,L"BoundingBox");
  (this->Macro_CustomHasVertexNormalKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasVertexNormalKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasVertexNormalKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasVertexNormalKey).Key,L"HasVertexNormal");
  (this->Macro_CustomHasVertexBinormalKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasVertexBinormalKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasVertexBinormalKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasVertexBinormalKey).Key,L"HasVertexBinormal");
  (this->Macro_CustomHasVertexTangentKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasVertexTangentKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasVertexTangentKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasVertexTangentKey).Key,L"HasVertexTangent");
  (this->Macro_CustomHasSmoothGroupKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasSmoothGroupKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasSmoothGroupKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasSmoothGroupKey).Key,L"HasSmoothGroup");
  (this->Macro_CustomHasVertexColorKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasVertexColorKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasVertexColorKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasVertexColorKey).Key,L"HasVertexColor");
  (this->Macro_CustomUVCountKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomUVCountKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUVCountKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUVCountKey).Key,L"UVCount");
  (this->Macro_CustomCollisionTypeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomCollisionTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomCollisionTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomCollisionTypeKey).Key,L"CollisionType");
  (this->SkeletonDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SkeletonDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SkeletonDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SkeletonDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->SkeletonDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->MaterialDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MaterialDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaterialDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->MaterialDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->MorphTargetDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MorphTargetDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MorphTargetDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->MorphTargetDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->AssemblyPartDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AssemblyPartDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AssemblyPartDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AssemblyPartDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->AssemblyPartDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->SceneInstancesUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneInstancesUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SceneInstancesUids).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SceneInstancesUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->SceneInstancesUids).KeyCount.Key.Data.ArrayMax = 0;
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
  return this;
}

// UInterchangeMeshNode @ 14e486f50

UInterchangeMeshNode * __thiscall
UInterchangeMeshNode::UInterchangeMeshNode(UInterchangeMeshNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  UInterchangeMeshNode *pUVar5;
  ulonglong uVar6;
  int *piVar7;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_38;
  
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeMeshNode__6B_;
  (this->Macro_CustomVertexCountKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomVertexCountKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomVertexCountKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomVertexCountKey).Key,L"VertexCount");
  (this->Macro_CustomPolygonCountKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomPolygonCountKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomPolygonCountKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomPolygonCountKey).Key,L"PolygonCount");
  (this->Macro_CustomBoundingBoxKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomBoundingBoxKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBoundingBoxKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBoundingBoxKey).Key,L"BoundingBox");
  (this->Macro_CustomHasVertexNormalKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasVertexNormalKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasVertexNormalKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasVertexNormalKey).Key,L"HasVertexNormal");
  (this->Macro_CustomHasVertexBinormalKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasVertexBinormalKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasVertexBinormalKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasVertexBinormalKey).Key,L"HasVertexBinormal");
  (this->Macro_CustomHasVertexTangentKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasVertexTangentKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasVertexTangentKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasVertexTangentKey).Key,L"HasVertexTangent");
  (this->Macro_CustomHasSmoothGroupKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasSmoothGroupKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasSmoothGroupKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasSmoothGroupKey).Key,L"HasSmoothGroup");
  (this->Macro_CustomHasVertexColorKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHasVertexColorKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHasVertexColorKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHasVertexColorKey).Key,L"HasVertexColor");
  (this->Macro_CustomUVCountKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomUVCountKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUVCountKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUVCountKey).Key,L"UVCount");
  (this->Macro_CustomCollisionTypeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomCollisionTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomCollisionTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomCollisionTypeKey).Key,L"CollisionType");
  (this->SkeletonDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x20 = 0;
  (this->SkeletonDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SkeletonDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SkeletonDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->SkeletonDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->MaterialDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MaterialDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaterialDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->MaterialDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->MorphTargetDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MorphTargetDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MorphTargetDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->MorphTargetDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->AssemblyPartDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->AssemblyPartDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AssemblyPartDependencies).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AssemblyPartDependencies).KeyCount.Key.Data.ArrayNum = 0;
  (this->AssemblyPartDependencies).KeyCount.Key.Data.ArrayMax = 0;
  (this->SceneInstancesUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneInstancesUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SceneInstancesUids).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SceneInstancesUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->SceneInstancesUids).KeyCount.Key.Data.ArrayMax = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SlotMaterialDependencies).KeyCountHandle);
  pvVar3 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  (this->SlotMaterialDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SlotMaterialDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  piVar7 = (int *)(*(longlong *)((longlong)pvVar3 + uVar6 * 8) + 0x9d4c);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    Dependencies_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Dependencies_BaseKey.Key.Data.ArrayNum = 0;
    Dependencies_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&Dependencies_BaseKey.Key,L"__MeshSkeletonDependencies__");
    atexit(`UE::Interchange::FMeshNodeStaticData::GetSkeletonDependenciesKey'::__l2::
           _dynamic_atexit_destructor_for__Dependencies_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->SkeletonDependencies,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &Dependencies_BaseKey.Key);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    Dependencies_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Dependencies_BaseKey.Key.Data.ArrayNum = 0;
    Dependencies_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&Dependencies_BaseKey.Key,L"__MeshMorphTargetDependencies__");
    atexit(`UE::Interchange::FMeshNodeStaticData::GetMorphTargetDependenciesKey'::__l2::
           _dynamic_atexit_destructor_for__Dependencies_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->MorphTargetDependencies,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &Dependencies_BaseKey.Key);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    SceneInstanceUids_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    SceneInstanceUids_BaseKey.Key.Data.ArrayNum = 0;
    SceneInstanceUids_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&SceneInstanceUids_BaseKey.Key,L"__MeshSceneInstancesUids__");
    atexit(`UE::Interchange::FMeshNodeStaticData::GetSceneInstancesUidsKey'::__l2::
           _dynamic_atexit_destructor_for__SceneInstanceUids_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->SceneInstancesUids,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &SceneInstanceUids_BaseKey.Key);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    Dependencies_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Dependencies_BaseKey.Key.Data.ArrayNum = 0;
    Dependencies_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&Dependencies_BaseKey.Key,L"__SlotMaterialDependencies__");
    atexit(`UE::Interchange::FMeshNodeStaticData::GetSlotMaterialDependenciesKey'::__l2::
           _dynamic_atexit_destructor_for__Dependencies_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeMeshNode *)(*pcVar2)();
    return pUVar5;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_38.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_38.Object == (FAttributeStorage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInterchangeMeshNode *)(*pcVar2)();
    return pUVar5;
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->SlotMaterialDependencies,&local_38,&Dependencies_BaseKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    Dependencies_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Dependencies_BaseKey.Key.Data.ArrayNum = 0;
    Dependencies_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&Dependencies_BaseKey.Key,L"__AssemblyPartDependencies__");
    atexit(`UE::Interchange::FMeshNodeStaticData::GetAssemblyPartDependenciesKey'::__l2::
           _dynamic_atexit_destructor_for__Dependencies_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->AssemblyPartDependencies,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &Dependencies_BaseKey.Key);
  return this;
}

// ~UInterchangeMeshNode @ 14e48af00

void __thiscall UInterchangeMeshNode::~UInterchangeMeshNode(UInterchangeMeshNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeMeshNode__6B_;
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->SlotMaterialDependencies);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->SceneInstancesUids);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->AssemblyPartDependencies);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->MorphTargetDependencies);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->MaterialDependencies);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->SkeletonDependencies);
  pFVar1 = (this->Macro_CustomCollisionTypeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomUVCountKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomHasVertexColorKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomHasSmoothGroupKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomHasVertexTangentKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomHasVertexBinormalKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomHasVertexNormalKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomBoundingBoxKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomPolygonCountKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomVertexCountKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// AddAssemblyPartDependencyUid @ 14e48d780

bool __thiscall
UInterchangeMeshNode::AddAssemblyPartDependencyUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->AssemblyPartDependencies,param_1);
  return bVar1;
}

// GetAssemblyPartDependencies @ 14e490190

void __thiscall
UInterchangeMeshNode::GetAssemblyPartDependencies
          (UInterchangeMeshNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->AssemblyPartDependencies,param_1)
  ;
  return;
}

// GetAssemblyPartDependenciesCount @ 14e4901b0

int __thiscall UInterchangeMeshNode::GetAssemblyPartDependenciesCount(UInterchangeMeshNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->AssemblyPartDependencies)
  ;
  return iVar1;
}

// GetAssemblyPartDependency @ 14e490260

void __thiscall
UInterchangeMeshNode::GetAssemblyPartDependency
          (UInterchangeMeshNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->AssemblyPartDependencies,param_1,param_2);
  return;
}

// GetCustomBoundingBox @ 14e490f00

bool __thiscall
UInterchangeMeshNode::GetCustomBoundingBox(UInterchangeMeshNode *this,TBox<double> *param_1)

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
  TAttributeHandle<UE::Math::TBox<double>,void> local_28;
  
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_68,pFVar5,L".GetBoundingBox");
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
  pFVar1 = &this->Macro_CustomBoundingBoxKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TBox<double>,void>
              (this_00,&local_28,pFVar1);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<double>,void>::
            IsValid(&local_28);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<double>,void>::Get
                        (&local_28,param_1);
      if ((EVar6 & Operation_Success) != None) {
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e49101b;
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
LAB_14e49101b:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetCustomCollisionType @ 14e491050

bool __thiscall
UInterchangeMeshNode::GetCustomCollisionType
          (UInterchangeMeshNode *this,EInterchangeMeshCollision *param_1)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  TAttributeHandle<unsigned_char,void> *pTVar6;
  EAttributeStorageResult EVar7;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<unsigned_char,void> local_38;
  TAttributeHandle<unsigned_char,void> local_20;
  
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_68);
  ::FString::ConcatFC(&local_78,pFVar5,L".GetCollisionType");
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
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
  pFVar1 = &this->Macro_CustomCollisionTypeKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (this_00,&local_20,pFVar1);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_38,&pTVar6->Key,pTVar6->AttributeStorage);
    if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_38);
    if (bVar3) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_38,param_1);
      if ((EVar7 & Operation_Success) != None) {
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e49118e;
      }
      ::FString::FString(&local_58,&pFVar1->Key);
      pFVar5 = ::FString::FString(&local_48,&local_78);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_58);
    }
    if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e49118e:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetCustomHasSmoothGroup @ 14e4928a0

bool __thiscall
UInterchangeMeshNode::GetCustomHasSmoothGroup(UInterchangeMeshNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetHasSmoothGroup");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasSmoothGroupKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomHasVertexBinormal @ 14e492950

bool __thiscall
UInterchangeMeshNode::GetCustomHasVertexBinormal(UInterchangeMeshNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetHasVertexBinormal");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasVertexBinormalKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomHasVertexColor @ 14e492a00

bool __thiscall
UInterchangeMeshNode::GetCustomHasVertexColor(UInterchangeMeshNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetHasVertexColor");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasVertexColorKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomHasVertexNormal @ 14e492ab0

bool __thiscall
UInterchangeMeshNode::GetCustomHasVertexNormal(UInterchangeMeshNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetHasVertexNormal");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasVertexNormalKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomHasVertexTangent @ 14e492b60

bool __thiscall
UInterchangeMeshNode::GetCustomHasVertexTangent(UInterchangeMeshNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetHasVertexTangent");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasVertexTangentKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomPolygonCount @ 14e493a80

bool __thiscall UInterchangeMeshNode::GetCustomPolygonCount(UInterchangeMeshNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetPolygonCount");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomPolygonCountKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomUVCount @ 14e494ba0

bool __thiscall UInterchangeMeshNode::GetCustomUVCount(UInterchangeMeshNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetUVCount");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomUVCountKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomVertexCount @ 14e494ff0

bool __thiscall UInterchangeMeshNode::GetCustomVertexCount(UInterchangeMeshNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetVertexCount");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexCountKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetIconName @ 14e4958f0

FName __thiscall UInterchangeMeshNode::GetIconName(UInterchangeMeshNode *this)

{
  bool bVar1;
  FName in_RDX;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  FString local_18;
  
  ::FString::FString(&local_18,L"MeshIcon.");
  bVar1 = IsSkinnedMesh(this);
  pwVar2 = L"Skinned";
  if (!bVar1) {
    pwVar2 = L"Static";
  }
  ::FString::AppendChars(&local_18,pwVar2,bVar1 + 6);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)in_RDX,(wchar_t *)FVar3.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetMorphTargetDependeciesCount @ 14e496a30

int __thiscall UInterchangeMeshNode::GetMorphTargetDependeciesCount(UInterchangeMeshNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->MorphTargetDependencies);
  return iVar1;
}

// GetMorphTargetDependencies @ 14e496a50

void __thiscall
UInterchangeMeshNode::GetMorphTargetDependencies
          (UInterchangeMeshNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->MorphTargetDependencies,param_1);
  return;
}

// GetMorphTargetDependency @ 14e496b00

void __thiscall
UInterchangeMeshNode::GetMorphTargetDependency
          (UInterchangeMeshNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->MorphTargetDependencies,param_1,param_2);
  return;
}

// GetMorphTargetName @ 14e496b20

bool __thiscall
UInterchangeMeshNode::GetMorphTargetName(UInterchangeMeshNode *this,FString *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAttributeKey *pFVar5;
  TAttributeHandle<FString,void> local_28;
  
  ::FString::Empty(param_1);
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar5);
  if (!bVar3) {
    return false;
  }
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey();
  UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(pFVar1,&local_28,pFVar5);
  bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_28);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get(&local_28,param_1);
  }
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetPayLoadKey @ 14e497340

TOptional<FInterchangeMeshPayLoadKey> * __thiscall
UInterchangeMeshNode::GetPayLoadKey
          (UInterchangeMeshNode *this,TOptional<FInterchangeMeshPayLoadKey> *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  TOptional<FInterchangeMeshPayLoadKey> *pTVar3;
  FAttributeKey *pFVar4;
  EAttributeStorageResult EVar5;
  FString *pFVar6;
  FAttributeStorage *pFVar7;
  TAttributeHandle<unsigned_char,void> *pTVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  int iVar11;
  EInterchangeMeshPayLoadType local_res8 [8];
  FString local_c8;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  TAttributeHandle<FString,void> local_a0;
  TAttributeHandle<unsigned_char,void> local_88;
  FString local_70;
  FString local_60;
  TAttributeHandle<unsigned_char,void> local_50;
  FString local_38;
  FString local_28;
  
  FVar9.Data = (FScriptContainerElement *)0x0;
  this_00 = &this->_padding_;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  if ((*this_00 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TOptional<FInterchangeMeshPayLoadKey> *)(*pcVar1)();
    return pTVar3;
  }
  pFVar7 = (FAttributeStorage *)*this_00;
  pFVar4 = UE::Interchange::FMeshNodeStaticData::PayLoadKey();
  bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar7,pFVar4);
  if (bVar2) {
    if ((*this_00 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOptional<FInterchangeMeshPayLoadKey> *)(*pcVar1)();
      return pTVar3;
    }
    pFVar7 = (FAttributeStorage *)*this_00;
    pFVar4 = UE::Interchange::FMeshNodeStaticData::PayLoadKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(pFVar7,&local_a0,pFVar4);
    bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_a0);
    if (bVar2) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                        (&local_a0,&local_c8);
      if ((EVar5 & Operation_Success) == None) {
        pFVar6 = &UE::Interchange::FMeshNodeStaticData::PayLoadKey()->Key;
        ::FString::FString(&local_70,pFVar6);
        pFVar6 = ::FString::FString(&local_38,L"UInterchangeMeshNode.GetPayLoadKey");
        UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar6,(FAttributeKey *)&local_70);
      }
      else {
        if (local_a0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Key.Key.Data.AllocatorInstance.Data);
        }
        pFVar7 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::operator->
                           ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)this_00);
        pFVar4 = UE::Interchange::FMeshNodeStaticData::PayLoadTypeKey();
        bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar7,pFVar4);
        if (!bVar2) goto LAB_14e4973ae;
        pFVar7 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::operator->
                           ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)this_00);
        pFVar4 = UE::Interchange::FMeshNodeStaticData::PayLoadTypeKey();
        pTVar8 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                           (pFVar7,&local_50,pFVar4);
        UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
        TAttributeHandle<unsigned_char,void>(&local_88,&pTVar8->Key,pTVar8->AttributeStorage);
        if (local_50.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                          (&local_88);
        local_a0.Key.Key.Data.AllocatorInstance.Data = local_88.Key.Key.Data.AllocatorInstance.Data;
        if (bVar2) {
          EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                            (&local_88,local_res8);
          if ((EVar5 & Operation_Success) != None) {
            if (local_88.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Key.Key.Data.AllocatorInstance.Data);
            }
            _Src.Data = local_c8.Data.AllocatorInstance.Data;
            lVar10 = (longlong)local_c8.Data.ArrayNum;
            local_b8.Data = (FScriptContainerElement *)0x0;
            local_b0._0_4_ = local_c8.Data.ArrayNum;
            iVar11 = 0;
            if (local_c8.Data.ArrayNum != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_c8.Data.ArrayNum,0,&local_b8,local_c8.Data.ArrayNum,
                         (int *)((longlong)&local_b0 + 4));
              memcpy(local_b8.Data,_Src.Data,lVar10 * 2);
              FVar9.Data = local_b8.Data;
              iVar11 = local_b0._4_4_;
            }
            (__return_storage_ptr__->TypedValue).UniqueId.Data.AllocatorInstance.Data = FVar9.Data;
            (__return_storage_ptr__->TypedValue).UniqueId.Data.ArrayNum = (int)local_b0;
            (__return_storage_ptr__->TypedValue).UniqueId.Data.ArrayMax = iVar11;
            (__return_storage_ptr__->TypedValue).Type = local_res8[0];
            (__return_storage_ptr__->TypedValue).FrameNumber = 0;
            __return_storage_ptr__->bIsSet = true;
            local_a4 = 0;
            local_b8.Data = (FScriptContainerElement *)0x0;
            local_b0 = 0;
            goto joined_r0x00014e4975e9;
          }
          pFVar6 = &UE::Interchange::FMeshNodeStaticData::PayLoadTypeKey()->Key;
          ::FString::FString(&local_60,pFVar6);
          pFVar6 = ::FString::FString(&local_28,L"UInterchangeMeshNode.GetPayLoadTypeKey");
          UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar6,(FAttributeKey *)&local_60);
          local_a0.Key.Key.Data.AllocatorInstance.Data =
               local_88.Key.Key.Data.AllocatorInstance.Data;
        }
      }
    }
    __return_storage_ptr__->bIsSet = false;
    if (local_a0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_14e4973ae:
    __return_storage_ptr__->bIsSet = false;
  }
joined_r0x00014e4975e9:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e4989b0

UClass * __cdecl UInterchangeMeshNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeMeshNode",
               &Z_Registration_Info_UClass_UInterchangeMeshNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshNode,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeMeshNode>,
               InternalVTableHelperCtorCaller<UInterchangeMeshNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshNode.InnerSingleton;
}

// GetSceneInstanceUid @ 14e499e30

void __thiscall
UInterchangeMeshNode::GetSceneInstanceUid(UInterchangeMeshNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->SceneInstancesUids,param_1,param_2);
  return;
}

// GetSceneInstanceUids @ 14e499e50

void __thiscall
UInterchangeMeshNode::GetSceneInstanceUids
          (UInterchangeMeshNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->SceneInstancesUids,param_1);
  return;
}

// GetSceneInstanceUidsCount @ 14e499e70

int __thiscall UInterchangeMeshNode::GetSceneInstanceUidsCount(UInterchangeMeshNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->SceneInstancesUids);
  return iVar1;
}

// GetSkeletonDependeciesCount @ 14e499fe0

int __thiscall UInterchangeMeshNode::GetSkeletonDependeciesCount(UInterchangeMeshNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->SkeletonDependencies);
  return iVar1;
}

// GetSkeletonDependencies @ 14e49a000

void __thiscall
UInterchangeMeshNode::GetSkeletonDependencies
          (UInterchangeMeshNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->SkeletonDependencies,param_1);
  return;
}

// GetSkeletonDependency @ 14e49a0b0

void __thiscall
UInterchangeMeshNode::GetSkeletonDependency(UInterchangeMeshNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->SkeletonDependencies,param_1,param_2);
  return;
}

// GetSlotMaterialDependencies @ 14e49a0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeMeshNode::GetSlotMaterialDependencies
          (UInterchangeMeshNode *this,
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
                        (&this->SlotMaterialDependencies,
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

// GetSlotMaterialDependencyUid @ 14e49a2f0

bool __thiscall
UInterchangeMeshNode::GetSlotMaterialDependencyUid
          (UInterchangeMeshNode *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
                    (&this->SlotMaterialDependencies,param_1,param_2);
  return bVar1;
}

// GetTypeName @ 14e49aa60

FString * __thiscall
UInterchangeMeshNode::GetTypeName(UInterchangeMeshNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"MeshNode");
  return __return_storage_ptr__;
}

// IsMorphTarget @ 14e49c380

bool __thiscall UInterchangeMeshNode::IsMorphTarget(UInterchangeMeshNode *this)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAttributeKey *pFVar5;
  bool local_res8 [8];
  TAttributeHandle<bool,void> local_28;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar5);
  if (!bVar3) {
    return false;
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey();
  UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(pFVar1,&local_28,pFVar5);
  bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_28);
  if (bVar3) {
    local_res8[0] = false;
    UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get(&local_28,local_res8);
    uVar4 = local_res8[0];
  }
  else {
    uVar4 = 0;
  }
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// IsSkinnedMesh @ 14e49c630

bool __thiscall UInterchangeMeshNode::IsSkinnedMesh(UInterchangeMeshNode *this)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAttributeKey *pFVar5;
  bool local_res8 [8];
  TAttributeHandle<bool,void> local_28;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::IsSkinnedMeshKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar5);
  if (!bVar3) {
    return false;
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::IsSkinnedMeshKey();
  UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(pFVar1,&local_28,pFVar5);
  bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_28);
  if (bVar3) {
    local_res8[0] = false;
    UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get(&local_28,local_res8);
    uVar4 = local_res8[0];
  }
  else {
    uVar4 = 0;
  }
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// RemoveAssemblyPartDependencyUid @ 14e49ed50

bool __thiscall
UInterchangeMeshNode::RemoveAssemblyPartDependencyUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->AssemblyPartDependencies,param_1);
  return bVar1;
}

// RemoveMorphTargetDependencyUid @ 14e49ee10

bool __thiscall
UInterchangeMeshNode::RemoveMorphTargetDependencyUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->MorphTargetDependencies,param_1);
  return bVar1;
}

// RemoveSceneInstanceUid @ 14e49ee30

bool __thiscall
UInterchangeMeshNode::RemoveSceneInstanceUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->SceneInstancesUids,param_1);
  return bVar1;
}

// RemoveSkeletonDependencyUid @ 14e49ee50

bool __thiscall
UInterchangeMeshNode::RemoveSkeletonDependencyUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->SkeletonDependencies,param_1);
  return bVar1;
}

// RemoveSlotMaterialDependencyUid @ 14e49ee70

bool __thiscall
UInterchangeMeshNode::RemoveSlotMaterialDependencyUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    (&this->SlotMaterialDependencies,param_1);
  return bVar1;
}

// Serialize @ 14e49f080

void __thiscall UInterchangeMeshNode::Serialize(UInterchangeMeshNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SlotMaterialDependencies);
  }
  return;
}

// Serialize @ 14e49f0c0

void __thiscall
UInterchangeMeshNode::Serialize(UInterchangeMeshNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SlotMaterialDependencies);
  }
  return;
}

// SetCustomBoundingBox @ 14e4a0670

bool __thiscall
UInterchangeMeshNode::SetCustomBoundingBox(UInterchangeMeshNode *this,TBox<double> *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetBoundingBox");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TBox<double>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomBoundingBoxKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomBoundingBoxKey).Key);
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

// SetCustomCollisionType @ 14e4a07c0

bool __thiscall
UInterchangeMeshNode::SetCustomCollisionType
          (UInterchangeMeshNode *this,EInterchangeMeshCollision param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  EInterchangeMeshCollision local_res10 [8];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetCollisionType");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomCollisionTypeKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomCollisionTypeKey).Key);
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

// SetCustomHasSmoothGroup @ 14e4a2b60

bool __thiscall
UInterchangeMeshNode::SetCustomHasSmoothGroup(UInterchangeMeshNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetHasSmoothGroup");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasSmoothGroupKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomHasSmoothGroupKey).Key);
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

// SetCustomHasVertexBinormal @ 14e4a2cb0

bool __thiscall
UInterchangeMeshNode::SetCustomHasVertexBinormal(UInterchangeMeshNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetHasVertexBinormal");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasVertexBinormalKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomHasVertexBinormalKey).Key);
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

// SetCustomHasVertexColor @ 14e4a2e00

bool __thiscall
UInterchangeMeshNode::SetCustomHasVertexColor(UInterchangeMeshNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetHasVertexColor");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasVertexColorKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomHasVertexColorKey).Key);
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

// SetCustomHasVertexNormal @ 14e4a2f50

bool __thiscall
UInterchangeMeshNode::SetCustomHasVertexNormal(UInterchangeMeshNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetHasVertexNormal");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasVertexNormalKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomHasVertexNormalKey).Key);
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

// SetCustomHasVertexTangent @ 14e4a30a0

bool __thiscall
UInterchangeMeshNode::SetCustomHasVertexTangent(UInterchangeMeshNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetHasVertexTangent");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHasVertexTangentKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomHasVertexTangentKey).Key);
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

// SetCustomPolygonCount @ 14e4a4b20

bool __thiscall UInterchangeMeshNode::SetCustomPolygonCount(UInterchangeMeshNode *this,int *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetPolygonCount");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomPolygonCountKey,param_1
                     ,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomPolygonCountKey).Key);
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

// SetCustomUVCount @ 14e4a6700

bool __thiscall UInterchangeMeshNode::SetCustomUVCount(UInterchangeMeshNode *this,int *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetUVCount");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomUVCountKey,param_1,None
                    );
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomUVCountKey).Key);
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

// SetCustomVertexCount @ 14e4a6ee0

bool __thiscall UInterchangeMeshNode::SetCustomVertexCount(UInterchangeMeshNode *this,int *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetVertexCount");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomVertexCountKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomVertexCountKey).Key);
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

// SetMorphTarget @ 14e4a7ab0

bool __thiscall UInterchangeMeshNode::SetMorphTarget(UInterchangeMeshNode *this,bool param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAttributeKey *pFVar5;
  EAttributeStorageResult EVar6;
  bool local_res10 [24];
  TAttributeHandle<bool,void> local_28;
  
  local_res10[0] = param_1;
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey();
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (pFVar1,pFVar5,local_res10,None);
  if ((EVar6 & Operation_Success) != None) {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (FAttributeStorage *)this->_padding_;
    pFVar5 = UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(pFVar1,&local_28,pFVar5);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_28);
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    return bVar3;
  }
  return false;
}

// SetMorphTargetDependencyUid @ 14e4a7c10

bool __thiscall
UInterchangeMeshNode::SetMorphTargetDependencyUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->MorphTargetDependencies,param_1);
  return bVar1;
}

// SetMorphTargetName @ 14e4a7c30

bool __thiscall
UInterchangeMeshNode::SetMorphTargetName(UInterchangeMeshNode *this,FString *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAttributeKey *pFVar5;
  EAttributeStorageResult EVar6;
  TAttributeHandle<FString,void> local_28;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey();
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar1,pFVar5,param_1,None);
  if ((EVar6 & Operation_Success) != None) {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (FAttributeStorage *)this->_padding_;
    pFVar5 = UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(pFVar1,&local_28,pFVar5);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_28);
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    return bVar3;
  }
  return false;
}

// SetPayLoadKey @ 14e4a7d20

void __thiscall
UInterchangeMeshNode::SetPayLoadKey
          (UInterchangeMeshNode *this,FString *param_1,EInterchangeMeshPayLoadType *param_2)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAttributeKey *pFVar4;
  EAttributeStorageResult EVar5;
  FString *pFVar6;
  FString *pFVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar4 = UE::Interchange::FMeshNodeStaticData::PayLoadKey();
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar1,pFVar4,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    pFVar6 = &UE::Interchange::FMeshNodeStaticData::PayLoadKey()->Key;
    ::FString::FString(&local_48,pFVar6);
    pFVar7 = ::FString::FString(&local_28,L"UInterchangeMeshNode.SetPayLoadKey");
    pFVar6 = &local_48;
  }
  else {
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (FAttributeStorage *)this->_padding_;
    pFVar4 = UE::Interchange::FMeshNodeStaticData::PayLoadTypeKey();
    EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                      (pFVar1,pFVar4,param_2,None);
    if ((EVar5 & Operation_Success) != None) {
      return;
    }
    pFVar6 = &UE::Interchange::FMeshNodeStaticData::PayLoadTypeKey()->Key;
    ::FString::FString(&local_38,pFVar6);
    pFVar7 = ::FString::FString(&local_18,L"UInterchangeMeshNode.SetPayLoadTypeKey");
    pFVar6 = &local_38;
  }
  UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar7,(FAttributeKey *)pFVar6);
  return;
}

// SetSceneInstanceUid @ 14e4a8160

bool __thiscall
UInterchangeMeshNode::SetSceneInstanceUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->SceneInstancesUids,param_1);
  return bVar1;
}

// SetSkeletonDependencyUid @ 14e4a8180

bool __thiscall
UInterchangeMeshNode::SetSkeletonDependencyUid(UInterchangeMeshNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->SkeletonDependencies,param_1);
  return bVar1;
}

// SetSkinnedMesh @ 14e4a81a0

bool __thiscall UInterchangeMeshNode::SetSkinnedMesh(UInterchangeMeshNode *this,bool param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAttributeKey *pFVar5;
  EAttributeStorageResult EVar6;
  bool local_res10 [24];
  TAttributeHandle<bool,void> local_28;
  
  local_res10[0] = param_1;
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FMeshNodeStaticData::IsSkinnedMeshKey();
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (pFVar1,pFVar5,local_res10,None);
  if ((EVar6 & Operation_Success) != None) {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (FAttributeStorage *)this->_padding_;
    pFVar5 = UE::Interchange::FMeshNodeStaticData::IsSkinnedMeshKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(pFVar1,&local_28,pFVar5);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_28);
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    return bVar3;
  }
  return false;
}

// SetSlotMaterialDependencyUid @ 14e4a8290

bool __thiscall
UInterchangeMeshNode::SetSlotMaterialDependencyUid
          (UInterchangeMeshNode *this,FString *param_1,FString *param_2)

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

// StaticRegisterNativesUInterchangeMeshNode @ 14e4a8740

void __cdecl UInterchangeMeshNode::StaticRegisterNativesUInterchangeMeshNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x33;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeMeshNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddAssemblyPartDependencyUid @ 14e4abb20

void __cdecl
UInterchangeMeshNode::execAddAssemblyPartDependencyUid
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
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[8].field_0x20,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAssemblyPartDependencies @ 14e4ad820

void __cdecl
UInterchangeMeshNode::execGetAssemblyPartDependencies
          (UObject *param_1,FFrame *param_2,void *param_3)

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
            ((TArrayAttributeHelper<FString> *)&param_1[8].field_0x20,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAssemblyPartDependenciesCount @ 14e4ad8e0

void __cdecl
UInterchangeMeshNode::execGetAssemblyPartDependenciesCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[8].field_0x20);
  *(int *)param_3 = iVar1;
  return;
}

// execGetAssemblyPartDependency @ 14e4ad920

void __cdecl
UInterchangeMeshNode::execGetAssemblyPartDependency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            ((TArrayAttributeHelper<FString> *)&param_1[8].field_0x20,local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomBoundingBox @ 14e4af0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeMeshNode::execGetCustomBoundingBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  FAttributeStorage *this;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  undefined1 uVar7;
  TBox<double> *pTVar8;
  undefined1 auStack_e8 [32];
  TAttributeHandle<UE::Math::TBox<double>,void> local_c8;
  FString local_b0;
  void *local_a0 [2];
  FString local_90;
  FString local_80;
  TBox<double> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_70.IsValid = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pTVar8 = &local_70;
  if ((TBox<double> *)param_2->MostRecentPropertyAddress != (TBox<double> *)0x0) {
    pTVar8 = (TBox<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_a0);
  ::FString::ConcatFC(&local_b0,pFVar5,L".GetBoundingBox");
  if (local_a0[0] != (void *)0x0) {
    FMemory::Free(local_a0[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &param_1[3].field_0x8;
  this = *(FAttributeStorage **)(param_1 + 1);
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this,(FAttributeKey *)puVar1);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TBox<double>,void>
              (this,&local_c8,(FAttributeKey *)puVar1);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<double>,void>::
            IsValid(&local_c8);
    if (bVar4) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<double>,void>::Get
                        (&local_c8,pTVar8);
      if ((EVar6 & Operation_Success) != None) {
        if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar7 = 1;
        goto LAB_14e4af288;
      }
      ::FString::FString(&local_90,(FString *)puVar1);
      pFVar5 = ::FString::FString(&local_80,&local_b0);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar5,(FAttributeKey *)&local_90);
    }
    if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
  }
LAB_14e4af288:
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar7;
  return;
}

// execGetCustomCollisionType @ 14e4af2c0

void __cdecl
UInterchangeMeshNode::execGetCustomCollisionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  FAttributeStorage *this;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TAttributeHandle<unsigned_char,void> *pTVar6;
  EAttributeStorageResult EVar7;
  undefined1 uVar8;
  uchar *puVar9;
  uchar local_res8 [8];
  FString local_88;
  void *local_78 [2];
  FString local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar9 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_78);
  ::FString::ConcatFC(&local_88,pFVar5,L".GetCollisionType");
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = param_1 + 6;
  this = *(FAttributeStorage **)(param_1 + 1);
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this,(FAttributeKey *)pUVar1);
  if (bVar4) {
    pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (this,&local_30,(FAttributeKey *)pUVar1);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar6->Key,pTVar6->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_48);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_48,puVar9);
      if ((EVar7 & Operation_Success) != None) {
        if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar8 = 1;
        goto LAB_14e4af472;
      }
      ::FString::FString(&local_68,(FString *)pUVar1);
      pFVar5 = ::FString::FString(&local_58,&local_88);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_68);
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
  }
LAB_14e4af472:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar8;
  return;
}

// execGetCustomHasSmoothGroup @ 14e4b2b30

void __cdecl
UInterchangeMeshNode::execGetCustomHasSmoothGroup(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetHasSmoothGroup");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x20,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomHasVertexBinormal @ 14e4b2c60

void __cdecl
UInterchangeMeshNode::execGetCustomHasVertexBinormal(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetHasVertexBinormal");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),&local_38,
                     pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomHasVertexColor @ 14e4b2d90

void __cdecl
UInterchangeMeshNode::execGetCustomHasVertexColor(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetHasVertexColor");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[5].field_0x8,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomHasVertexNormal @ 14e4b2ec0

void __cdecl
UInterchangeMeshNode::execGetCustomHasVertexNormal(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetHasVertexNormal");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomHasVertexTangent @ 14e4b2ff0

void __cdecl
UInterchangeMeshNode::execGetCustomHasVertexTangent(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetHasVertexTangent");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x10,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomPolygonCount @ 14e4b4b50

void __cdecl
UInterchangeMeshNode::execGetCustomPolygonCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  int local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0;
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
  piVar5 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetPolygonCount");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomUVCount @ 14e4b7020

void __cdecl
UInterchangeMeshNode::execGetCustomUVCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  int local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0;
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
  piVar5 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetUVCount");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[5].field_0x18,
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomVertexCount @ 14e4b7950

void __cdecl
UInterchangeMeshNode::execGetCustomVertexCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  int local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0;
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
  piVar5 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetVertexCount");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x10,
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetMorphTargetDependeciesCount @ 14e4b87c0

void __cdecl
UInterchangeMeshNode::execGetMorphTargetDependeciesCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)(param_1 + 8));
  *(int *)param_3 = iVar1;
  return;
}

// execGetMorphTargetDependencies @ 14e4b8800

void __cdecl
UInterchangeMeshNode::execGetMorphTargetDependencies(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((TArrayAttributeHelper<FString> *)(param_1 + 8),pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetMorphTargetDependency @ 14e4b88c0

void __cdecl
UInterchangeMeshNode::execGetMorphTargetDependency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            ((TArrayAttributeHelper<FString> *)(param_1 + 8),local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetMorphTargetName @ 14e4b89c0

void __cdecl
UInterchangeMeshNode::execGetMorphTargetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FAttributeKey *pFVar6;
  FString *this;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
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
  this = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::Empty(this);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FAttributeStorage **)(param_1 + 1);
  pFVar6 = UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey();
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar2,pFVar6);
  if (bVar4) {
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = *(FAttributeStorage **)(param_1 + 1);
    pFVar6 = UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(pFVar2,&local_28,pFVar6);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_28);
    if (bVar4) {
      UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get(&local_28,this);
      if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      }
      uVar5 = 1;
      goto LAB_14e4b8b20;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  uVar5 = 0;
LAB_14e4b8b20:
  *(undefined1 *)param_3 = uVar5;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSceneInstanceUid @ 14e4b9130

void __cdecl
UInterchangeMeshNode::execGetSceneInstanceUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            ((TArrayAttributeHelper<FString> *)&param_1[9].field_0x18,local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSceneInstanceUids @ 14e4b9230

void __cdecl
UInterchangeMeshNode::execGetSceneInstanceUids(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((TArrayAttributeHelper<FString> *)&param_1[9].field_0x18,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSceneInstanceUidsCount @ 14e4b92f0

void __cdecl
UInterchangeMeshNode::execGetSceneInstanceUidsCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[9].field_0x18);
  *(int *)param_3 = iVar1;
  return;
}

// execGetSkeletonDependeciesCount @ 14e4b9640

void __cdecl
UInterchangeMeshNode::execGetSkeletonDependeciesCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[6].field_0x10);
  *(int *)param_3 = iVar1;
  return;
}

// execGetSkeletonDependencies @ 14e4b9680

void __cdecl
UInterchangeMeshNode::execGetSkeletonDependencies(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((TArrayAttributeHelper<FString> *)&param_1[6].field_0x10,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSkeletonDependency @ 14e4b9740

void __cdecl
UInterchangeMeshNode::execGetSkeletonDependency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            ((TArrayAttributeHelper<FString> *)&param_1[6].field_0x10,local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSlotMaterialDependencies @ 14e4b9840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeMeshNode::execGetSlotMaterialDependencies
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
                        ((TMapAttributeHelper<FString,FString> *)&param_1[10].field_0x10,
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

// execGetSlotMaterialDependencyUid @ 14e4b9bc0

void __cdecl
UInterchangeMeshNode::execGetSlotMaterialDependencyUid
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
                    ((TMapAttributeHelper<FString,FString> *)&param_1[10].field_0x10,&local_18,
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

// execIsMorphTarget @ 14e4baa40

void __cdecl UInterchangeMeshNode::execIsMorphTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAttributeKey *pFVar4;
  bool local_res8 [8];
  TAttributeHandle<bool,void> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = *(FAttributeStorage **)(param_1 + 1);
  pFVar4 = UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar4);
  if (bVar3) {
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = *(FAttributeStorage **)(param_1 + 1);
    pFVar4 = UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(pFVar1,&local_28,pFVar4);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_28);
    if (bVar3) {
      local_res8[0] = false;
      UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get(&local_28,local_res8);
      bVar3 = local_res8[0];
      if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      }
      *(bool *)param_3 = bVar3;
      return;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsSkinnedMesh @ 14e4bad00

void __cdecl UInterchangeMeshNode::execIsSkinnedMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSkinnedMesh((UInterchangeMeshNode *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execRemoveAssemblyPartDependencyUid @ 14e4bb210

void __cdecl
UInterchangeMeshNode::execRemoveAssemblyPartDependencyUid
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
                    ((TArrayAttributeHelper<FString> *)&param_1[8].field_0x20,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveMorphTargetDependencyUid @ 14e4bb700

void __cdecl
UInterchangeMeshNode::execRemoveMorphTargetDependencyUid
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
                    ((TArrayAttributeHelper<FString> *)(param_1 + 8),&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveSceneInstanceUid @ 14e4bb7c0

void __cdecl
UInterchangeMeshNode::execRemoveSceneInstanceUid(UObject *param_1,FFrame *param_2,void *param_3)

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
                    ((TArrayAttributeHelper<FString> *)&param_1[9].field_0x18,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveSkeletonDependencyUid @ 14e4bb880

void __cdecl
UInterchangeMeshNode::execRemoveSkeletonDependencyUid
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
                    ((TArrayAttributeHelper<FString> *)&param_1[6].field_0x10,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveSlotMaterialDependencyUid @ 14e4bb940

void __cdecl
UInterchangeMeshNode::execRemoveSlotMaterialDependencyUid
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
                    ((TMapAttributeHelper<FString,FString> *)&param_1[10].field_0x10,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomBoundingBox @ 14e4bdb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeMeshNode::execSetCustomBoundingBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  TBox<double> *pTVar7;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  FString local_98;
  void *local_88 [2];
  FString local_78;
  TBox<double> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_68.IsValid = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar7 = &local_68;
  if ((TBox<double> *)param_2->MostRecentPropertyAddress != (TBox<double> *)0x0) {
    pTVar7 = (TBox<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_88);
  ::FString::ConcatFC(&local_98,pFVar4,L".SetBoundingBox");
  if (local_88[0] != (void *)0x0) {
    FMemory::Free(local_88[0]);
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TBox<double>,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                     pTVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_78,(FString *)&param_1[3].field_0x8);
    _Src.Data = local_98.Data.AllocatorInstance.Data;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_98.Data.ArrayNum == 0) {
      local_a8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_98.Data.ArrayNum,
                 &local_a8.Data.ArrayMax);
      memcpy(local_a8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_98.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_a8,(FAttributeKey *)&local_78);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomCollisionType @ 14e4bdcf0

void __cdecl
UInterchangeMeshNode::execSetCustomCollisionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  uchar local_res8 [8];
  uchar local_res10 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = local_res8[0];
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetCollisionType");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 6),local_res10
                     ,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 6));
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum != 0) {
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

// execSetCustomHasSmoothGroup @ 14e4c1c70

void __cdecl
UInterchangeMeshNode::execSetCustomHasSmoothGroup(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetHasSmoothGroup");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x20,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[4].field_0x20);
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

// execSetCustomHasVertexBinormal @ 14e4c1e30

void __cdecl
UInterchangeMeshNode::execSetCustomHasVertexBinormal(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetHasVertexBinormal");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),pbVar7,None
                    );
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 4));
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

// execSetCustomHasVertexColor @ 14e4c1ff0

void __cdecl
UInterchangeMeshNode::execSetCustomHasVertexColor(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetHasVertexColor");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[5].field_0x8,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[5].field_0x8);
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

// execSetCustomHasVertexNormal @ 14e4c21b0

void __cdecl
UInterchangeMeshNode::execSetCustomHasVertexNormal(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetHasVertexNormal");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[3].field_0x18);
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

// execSetCustomHasVertexTangent @ 14e4c2370

void __cdecl
UInterchangeMeshNode::execSetCustomHasVertexTangent(UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetHasVertexTangent");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x10,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[4].field_0x10);
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

// execSetCustomPolygonCount @ 14e4c4b60

void __cdecl
UInterchangeMeshNode::execSetCustomPolygonCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  int *piVar7;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0;
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
  piVar7 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetPolygonCount");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     piVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[2].field_0x20);
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

// execSetCustomUVCount @ 14e4c7b20

void __cdecl
UInterchangeMeshNode::execSetCustomUVCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  int *piVar7;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0;
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
  piVar7 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetUVCount");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[5].field_0x18,
                     piVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[5].field_0x18);
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

// execSetCustomVertexCount @ 14e4c8640

void __cdecl
UInterchangeMeshNode::execSetCustomVertexCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  int *piVar7;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0;
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
  piVar7 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetVertexCount");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x10,
                     piVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[2].field_0x10);
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

// execSetMorphTarget @ 14e4c9230

void __cdecl
UInterchangeMeshNode::execSetMorphTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAttributeKey *pFVar5;
  EAttributeStorageResult EVar6;
  bool local_res8 [8];
  int local_res10 [2];
  TAttributeHandle<bool,void> local_38;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FAttributeStorage **)(param_1 + 1);
  pFVar5 = UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey();
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (pFVar2,pFVar5,local_res8,None);
  if ((EVar6 & Operation_Success) != None) {
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = *(FAttributeStorage **)(param_1 + 1);
    pFVar5 = UE::Interchange::FMeshNodeStaticData::IsMorphTargetKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(pFVar2,&local_38,pFVar5);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_38);
    if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
    }
    *(bool *)param_3 = bVar4;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetMorphTargetDependencyUid @ 14e4c94b0

void __cdecl
UInterchangeMeshNode::execSetMorphTargetDependencyUid
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
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)(param_1 + 8),&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetMorphTargetName @ 14e4c9570

void __cdecl
UInterchangeMeshNode::execSetMorphTargetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAttributeKey *pFVar5;
  EAttributeStorageResult EVar6;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
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
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FAttributeStorage **)(param_1 + 1);
  pFVar5 = UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey();
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar2,pFVar5,&local_38,None);
  if ((EVar6 & Operation_Success) == None) {
    bVar4 = false;
  }
  else {
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = *(FAttributeStorage **)(param_1 + 1);
    pFVar5 = UE::Interchange::FMeshNodeStaticData::MorphTargetNameKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(pFVar2,&local_28,pFVar5);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_28);
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  *(bool *)param_3 = bVar4;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetPayLoadKey @ 14e4c96d0

void __cdecl UInterchangeMeshNode::execSetPayLoadKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = '\0';
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
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x300))(param_1,&local_18,puVar2);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetSceneInstanceUid @ 14e4c9a70

void __cdecl
UInterchangeMeshNode::execSetSceneInstanceUid(UObject *param_1,FFrame *param_2,void *param_3)

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
                    ((TArrayAttributeHelper<FString> *)&param_1[9].field_0x18,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetSkeletonDependencyUid @ 14e4c9b30

void __cdecl
UInterchangeMeshNode::execSetSkeletonDependencyUid(UObject *param_1,FFrame *param_2,void *param_3)

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
                    ((TArrayAttributeHelper<FString> *)&param_1[6].field_0x10,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetSkinnedMesh @ 14e4c9bf0

void __cdecl
UInterchangeMeshNode::execSetSkinnedMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAttributeKey *pFVar5;
  EAttributeStorageResult EVar6;
  bool local_res8 [8];
  int local_res10 [2];
  TAttributeHandle<bool,void> local_38;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FAttributeStorage **)(param_1 + 1);
  pFVar5 = UE::Interchange::FMeshNodeStaticData::IsSkinnedMeshKey();
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (pFVar2,pFVar5,local_res8,None);
  if ((EVar6 & Operation_Success) != None) {
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = *(FAttributeStorage **)(param_1 + 1);
    pFVar5 = UE::Interchange::FMeshNodeStaticData::IsSkinnedMeshKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(pFVar2,&local_38,pFVar5);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_38);
    if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
    }
    *(bool *)param_3 = bVar4;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetSlotMaterialDependencyUid @ 14e4c9d40

void __cdecl
UInterchangeMeshNode::execSetSlotMaterialDependencyUid
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
                    ((TMapAttributeHelper<FString,FString> *)&param_1[10].field_0x10,uVar4,&local_28
                     ,&local_18);
  *(bool *)param_3 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

