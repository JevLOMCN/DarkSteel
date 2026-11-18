// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 107

// StaticClass @ 14e5214c0

UClass * __cdecl UInterchangeStaticMeshFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeStaticMeshFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeStaticMeshFactoryNode,0x4f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeStaticMeshFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeStaticMeshFactoryNode>,local_res8,
               UInterchangeMeshFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.InnerSingleton;
}

// UInterchangeStaticMeshFactoryNode @ 14e5334b0

UInterchangeStaticMeshFactoryNode * __thiscall
UInterchangeStaticMeshFactoryNode::UInterchangeStaticMeshFactoryNode
          (UInterchangeStaticMeshFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeMeshFactoryNode::UInterchangeMeshFactoryNode
            ((UInterchangeMeshFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshFactoryNode__6B_;
  (this->Macro_CustomBuildReversedIndexBufferKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomBuildReversedIndexBufferKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBuildReversedIndexBufferKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomBuildReversedIndexBufferKey).Key,L"BuildReversedIndexBuffer");
  (this->Macro_CustomGenerateLightmapUVsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGenerateLightmapUVsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGenerateLightmapUVsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGenerateLightmapUVsKey).Key,L"GenerateLightmapUVs");
  (this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key,
             L"GenerateDistanceFieldAsIfTwoSided");
  (this->Macro_CustomSupportFaceRemapKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSupportFaceRemapKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSupportFaceRemapKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSupportFaceRemapKey).Key,L"SupportFaceRemap");
  (this->Macro_CustomMinLightmapResolutionKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomMinLightmapResolutionKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMinLightmapResolutionKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomMinLightmapResolutionKey).Key,L"MinLightmapResolution");
  (this->Macro_CustomSrcLightmapIndexKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSrcLightmapIndexKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSrcLightmapIndexKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSrcLightmapIndexKey).Key,L"SrcLightmapIndex");
  (this->Macro_CustomDstLightmapIndexKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDstLightmapIndexKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDstLightmapIndexKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDstLightmapIndexKey).Key,L"DstLightmapIndex");
  (this->Macro_CustomBuildScale3DKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomBuildScale3DKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBuildScale3DKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBuildScale3DKey).Key,L"BuildScale3D");
  (this->Macro_CustomDistanceFieldResolutionScaleKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDistanceFieldResolutionScaleKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDistanceFieldResolutionScaleKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDistanceFieldResolutionScaleKey).Key,
             L"DistanceFieldResolutionScale");
  (this->Macro_CustomDistanceFieldReplacementMeshKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDistanceFieldReplacementMeshKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDistanceFieldReplacementMeshKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDistanceFieldReplacementMeshKey).Key,
             L"DistanceFieldReplacementMesh");
  (this->Macro_CustomMaxLumenMeshCardsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomMaxLumenMeshCardsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMaxLumenMeshCardsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomMaxLumenMeshCardsKey).Key,L"MaxLumenMeshCards");
  (this->Macro_CustomBuildNaniteKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomBuildNaniteKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBuildNaniteKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBuildNaniteKey).Key,L"BuildNanite");
  (this->Macro_CustomAutoComputeLODScreenSizesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAutoComputeLODScreenSizesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAutoComputeLODScreenSizesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomAutoComputeLODScreenSizesKey).Key,L"AutoComputeLODScreenSizes");
  (this->Macro_CustomSubstituteUIDKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSubstituteUIDKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSubstituteUIDKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSubstituteUIDKey).Key,L"SubstituteUID");
  (this->LODScreenSizes).Attributes.Object = (FAttributeStorage *)0x0;
  (this->LODScreenSizes).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LODScreenSizes).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODScreenSizes).KeyCount.Key.Data.ArrayNum = 0;
  (this->LODScreenSizes).KeyCount.Key.Data.ArrayMax = 0;
  (this->SocketUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SocketUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SocketUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->SocketUids).KeyCount.Key.Data.ArrayMax = 0;
  (this->AssetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UInterchangeStaticMeshFactoryNode @ 14e533690

UInterchangeStaticMeshFactoryNode * __thiscall
UInterchangeStaticMeshFactoryNode::UInterchangeStaticMeshFactoryNode
          (UInterchangeStaticMeshFactoryNode *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  FAttributeKey *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAttributeStorage *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  ForAnyElementType _Src;
  int iVar10;
  void *pvVar11;
  bool bVar12;
  UInterchangeStaticMeshFactoryNode *pUVar13;
  ulonglong uVar14;
  longlong lVar15;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  UInterchangeMeshFactoryNode::UInterchangeMeshFactoryNode((UInterchangeMeshFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshFactoryNode__6B_;
  (this->Macro_CustomBuildReversedIndexBufferKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomBuildReversedIndexBufferKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBuildReversedIndexBufferKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomBuildReversedIndexBufferKey).Key,L"BuildReversedIndexBuffer");
  (this->Macro_CustomGenerateLightmapUVsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGenerateLightmapUVsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGenerateLightmapUVsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGenerateLightmapUVsKey).Key,L"GenerateLightmapUVs");
  (this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key,
             L"GenerateDistanceFieldAsIfTwoSided");
  (this->Macro_CustomSupportFaceRemapKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSupportFaceRemapKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSupportFaceRemapKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSupportFaceRemapKey).Key,L"SupportFaceRemap");
  (this->Macro_CustomMinLightmapResolutionKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomMinLightmapResolutionKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMinLightmapResolutionKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomMinLightmapResolutionKey).Key,L"MinLightmapResolution");
  (this->Macro_CustomSrcLightmapIndexKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSrcLightmapIndexKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSrcLightmapIndexKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSrcLightmapIndexKey).Key,L"SrcLightmapIndex");
  (this->Macro_CustomDstLightmapIndexKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDstLightmapIndexKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDstLightmapIndexKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDstLightmapIndexKey).Key,L"DstLightmapIndex");
  (this->Macro_CustomBuildScale3DKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomBuildScale3DKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBuildScale3DKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBuildScale3DKey).Key,L"BuildScale3D");
  (this->Macro_CustomDistanceFieldResolutionScaleKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDistanceFieldResolutionScaleKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDistanceFieldResolutionScaleKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDistanceFieldResolutionScaleKey).Key,
             L"DistanceFieldResolutionScale");
  (this->Macro_CustomDistanceFieldReplacementMeshKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDistanceFieldReplacementMeshKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDistanceFieldReplacementMeshKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomDistanceFieldReplacementMeshKey).Key,
             L"DistanceFieldReplacementMesh");
  (this->Macro_CustomMaxLumenMeshCardsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomMaxLumenMeshCardsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMaxLumenMeshCardsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomMaxLumenMeshCardsKey).Key,L"MaxLumenMeshCards");
  (this->Macro_CustomBuildNaniteKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomBuildNaniteKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBuildNaniteKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBuildNaniteKey).Key,L"BuildNanite");
  (this->Macro_CustomAutoComputeLODScreenSizesKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAutoComputeLODScreenSizesKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAutoComputeLODScreenSizesKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomAutoComputeLODScreenSizesKey).Key,L"AutoComputeLODScreenSizes");
  (this->Macro_CustomSubstituteUIDKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSubstituteUIDKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSubstituteUIDKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSubstituteUIDKey).Key,L"SubstituteUID");
  piVar2 = &(this->LODScreenSizes).KeyCount.Key.Data.ArrayMax;
  (this->LODScreenSizes).Attributes.Object = (FAttributeStorage *)0x0;
  *piVar2 = 0;
  (this->LODScreenSizes).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LODScreenSizes).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODScreenSizes).KeyCount.Key.Data.ArrayNum = 0;
  pvVar11 = ThreadLocalStoragePointer;
  uVar14 = (ulonglong)_tls_index;
  (this->SocketUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SocketUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SocketUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar15 = *(longlong *)((longlong)pvVar11 + uVar14 * 8);
  (this->SocketUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->SocketUids).KeyCount.Key.Data.ArrayMax = 0;
  (this->AssetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  if ((*(int *)(lVar15 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    LODScreenSize_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    LODScreenSize_BaseKey.Key.Data.ArrayNum = 0;
    LODScreenSize_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&LODScreenSize_BaseKey.Key,L"__LODScreenSize__");
    atexit(`UE::Interchange::FStaticMeshNodeStaticData::GetLODScreenSizeBaseKey'::__l2::
           _dynamic_atexit_destructor_for__LODScreenSize_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar13 = (UInterchangeStaticMeshFactoryNode *)(*pcVar9)();
    return pUVar13;
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar7 = (FAttributeStorage *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar7 == (FAttributeStorage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar13 = (UInterchangeStaticMeshFactoryNode *)(*pcVar9)();
    return pUVar13;
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name34,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name34,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<float>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name34,true);
  if ((pFVar7 == (FAttributeStorage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InAttributes.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                          ,0x24,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar13 = (UInterchangeStaticMeshFactoryNode *)(*pcVar9)();
    return pUVar13;
  }
  (this->LODScreenSizes).Attributes.Object = pFVar7;
  if (pTVar6 != (this->LODScreenSizes).Attributes.WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (this->LODScreenSizes).Attributes.WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    (this->LODScreenSizes).Attributes.WeakReferenceCount.ReferenceController = pTVar6;
  }
  _Src.Data = LODScreenSize_BaseKey.Key.Data.AllocatorInstance.Data;
  pFVar3 = &(this->LODScreenSizes).KeyCount;
  if (pFVar3 != &LODScreenSize_BaseKey) {
    iVar10 = LODScreenSize_BaseKey.Key.Data.ArrayNum;
    lVar15 = (longlong)LODScreenSize_BaseKey.Key.Data.ArrayNum;
    iVar5 = (this->LODScreenSizes).KeyCount.Key.Data.ArrayMax;
    (this->LODScreenSizes).KeyCount.Key.Data.ArrayNum = LODScreenSize_BaseKey.Key.Data.ArrayNum;
    if ((iVar10 == 0) && (iVar5 == 0)) {
      (this->LODScreenSizes).KeyCount.Key.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,iVar5,(ForAnyElementType *)pFVar3,iVar10,piVar2);
      if (iVar10 != 0) {
        memcpy((pFVar3->Key).Data.AllocatorInstance.Data,_Src.Data,lVar15 * 2);
      }
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    SocketUids_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    SocketUids_BaseKey.Key.Data.ArrayNum = 0;
    SocketUids_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&SocketUids_BaseKey.Key,L"SocketUids");
    atexit(`UE::Interchange::FStaticMeshNodeStaticData::GetSocketUidsBaseKey'::__l2::
           _dynamic_atexit_destructor_for__SocketUids_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->SocketUids,(TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &SocketUids_BaseKey.Key);
  return this;
}

// ~UInterchangeStaticMeshFactoryNode @ 14e536570

void __thiscall
UInterchangeStaticMeshFactoryNode::~UInterchangeStaticMeshFactoryNode
          (UInterchangeStaticMeshFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshFactoryNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->SocketUids);
  UE::Interchange::TArrayAttributeHelper<float>::~TArrayAttributeHelper<float>
            (&this->LODScreenSizes);
  pFVar1 = (this->Macro_CustomSubstituteUIDKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAutoComputeLODScreenSizesKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomBuildNaniteKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomMaxLumenMeshCardsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDistanceFieldReplacementMeshKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDistanceFieldResolutionScaleKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomBuildScale3DKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDstLightmapIndexKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSrcLightmapIndexKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomMinLightmapResolutionKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSupportFaceRemapKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomGenerateLightmapUVsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomBuildReversedIndexBufferKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeMeshFactoryNode::~UInterchangeMeshFactoryNode((UInterchangeMeshFactoryNode *)this);
  return;
}

// AddSocketUid @ 14e539ab0

bool __thiscall
UInterchangeStaticMeshFactoryNode::AddSocketUid
          (UInterchangeStaticMeshFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->SocketUids,param_1);
  return bVar1;
}

// AddSocketUids @ 14e539ad0

bool __thiscall
UInterchangeStaticMeshFactoryNode::AddSocketUids
          (UInterchangeStaticMeshFactoryNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                      (&this->SocketUids,(FString *)pFVar3);
    if (!bVar2) {
      return false;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// ApplyCustomBuildReversedIndexBufferToAsset @ 14e539ef0

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomBuildReversedIndexBufferToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomBuildScale3DToAsset @ 14e539f00

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomBuildScale3DToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomDistanceFieldReplacementMeshToAsset @ 14e53a110

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomDistanceFieldReplacementMeshToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomDistanceFieldResolutionScaleToAsset @ 14e53a120

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomDistanceFieldResolutionScaleToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomDstLightmapIndexToAsset @ 14e53a1b0

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomDstLightmapIndexToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomGenerateDistanceFieldAsIfTwoSidedToAsset @ 14e53a300

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomGenerateDistanceFieldAsIfTwoSidedToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomGenerateLightmapUVsToAsset @ 14e53a310

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomGenerateLightmapUVsToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomMaxLumenMeshCardsToAsset @ 14e53a740

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomMaxLumenMeshCardsToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomMinLightmapResolutionToAsset @ 14e53a750

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomMinLightmapResolutionToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomSrcLightmapIndexToAsset @ 14e53a930

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomSrcLightmapIndexToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// ApplyCustomSupportFaceRemapToAsset @ 14e53a940

bool __thiscall
UInterchangeStaticMeshFactoryNode::ApplyCustomSupportFaceRemapToAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// CopyWithObject @ 14e545ce0

void __thiscall
UInterchangeStaticMeshFactoryNode::CopyWithObject
          (UInterchangeStaticMeshFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
          UObject *param_2)

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
  EAttributeStorageResult EVar11;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar12;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *pTVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  bool local_res10 [16];
  bool local_res20 [8];
  UClass *local_728;
  bool local_720;
  bool local_71f [7];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_718;
  FDelegateAllocation local_710;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_700;
  FDelegateAllocation local_6f8;
  FSoftObjectPath local_6e8;
  int local_6c8;
  int local_6c4;
  int local_6c0;
  float local_6bc;
  int local_6b8 [2];
  UInterchangeStaticMeshFactoryNode *local_6b0;
  UInterchangeStaticMeshFactoryNode *local_6a8;
  TAttributeHandle<bool,void> local_6a0;
  TAttributeHandle<bool,void> local_688;
  TAttributeHandle<bool,void> local_670;
  TAttributeHandle<bool,void> local_658;
  TAttributeHandle<int,void> local_640;
  TAttributeHandle<int,void> local_628;
  TAttributeHandle<int,void> local_610;
  TAttributeHandle<UE::Math::TVector<double>,void> local_5f8;
  TAttributeHandle<float,void> local_5e0;
  TAttributeHandle<FSoftObjectPath,void> local_5c8;
  TAttributeHandle<int,void> local_5b0;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FDestructionSentinel local_4e8;
  FDestructionSentinel local_4d0;
  FDestructionSentinel local_4b8;
  FDestructionSentinel local_4a0;
  FDestructionSentinel local_488;
  FDelegateAllocation *local_470;
  FDestructionSentinel local_468;
  FDelegateAllocation *local_450;
  void *local_448 [2];
  FString local_438;
  void *local_428 [2];
  FString local_418;
  void *local_408 [2];
  FString local_3f8;
  FString local_3e8;
  void *local_3d8 [2];
  FString local_3c8;
  void *local_3b8 [2];
  FString local_3a8;
  void *local_398 [2];
  FString local_388;
  void *local_378 [2];
  FString local_368;
  void *local_358 [2];
  FString local_348;
  void *local_338 [2];
  FString local_328;
  void *local_318 [2];
  FString local_308;
  void *local_2f8 [2];
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_2e8;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_2d0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_2b8;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_2a0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_288;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_270;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_258;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_240;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_228;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_210;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_1f8;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_1e0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_1c8;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_1b0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_198;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_180;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_168;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_150;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_138;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_120;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TVector<double> local_58;
  
  UInterchangeMeshFactoryNode::CopyWithObject((UInterchangeMeshFactoryNode *)this,param_1,param_2);
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
  local_728 = (UClass *)(**(code **)(this->_padding_ + 0x2f8))(this);
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_3d8);
  ::FString::ConcatFC(&local_518,pFVar8,L".GetBuildReversedIndexBuffer");
  if (local_3d8[0] != (void *)0x0) {
    FMemory::Free(local_3d8[0]);
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
                    (pFVar1,&this->Macro_CustomBuildReversedIndexBufferKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_670,&this->Macro_CustomBuildReversedIndexBufferKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_670);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_670,local_res10);
      if ((EVar11 & Operation_Success) != None) {
        if (local_670.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_670.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_2e8,this,(pmf_a3ea3bba)0x14e539ef0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2e8);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_1e0,this,(pmf_95c8f66d)0x14e54ed10);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1e0);
        goto LAB_14e546063;
      }
      ::FString::FString(&local_3c8,&(this->Macro_CustomBuildReversedIndexBufferKey).Key);
      pFVar8 = ::FString::FString(&local_b8,&local_518);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_3c8);
    }
    if (local_670.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_670.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e546063:
  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_3b8);
  ::FString::ConcatFC(&local_508,pFVar8,L".GetGenerateLightmapUVs");
  if (local_3b8[0] != (void *)0x0) {
    FMemory::Free(local_3b8[0]);
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
                    (pFVar1,&this->Macro_CustomGenerateLightmapUVsKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_688,&this->Macro_CustomGenerateLightmapUVsKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_688);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_688,local_res20);
      if ((EVar11 & Operation_Success) != None) {
        if (local_688.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_688.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_2d0,this,(pmf_a3ea3bba)0x14e53a310);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2d0);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_2b8,this,(pmf_95c8f66d)0x14e54eff0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2b8);
        goto LAB_14e54637a;
      }
      ::FString::FString(&local_3a8,&(this->Macro_CustomGenerateLightmapUVsKey).Key);
      pFVar8 = ::FString::FString(&local_c8,&local_508);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_3a8);
    }
    if (local_688.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e54637a:
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_398);
  ::FString::ConcatFC(&local_4f8,pFVar8,L".GetGenerateDistanceFieldAsIfTwoSided");
  if (local_398[0] != (void *)0x0) {
    FMemory::Free(local_398[0]);
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
                    (pFVar1,&this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_6a0,&this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_6a0);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_6a0,&local_720);
      if ((EVar11 & Operation_Success) != None) {
        if (local_6a0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a0.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_2a0,this,(pmf_a3ea3bba)0x14e53a300);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a0);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_288,this,(pmf_95c8f66d)0x14e54efe0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_288);
        goto LAB_14e54668f;
      }
      ::FString::FString(&local_388,&(this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key);
      pFVar8 = ::FString::FString(&local_d8,&local_4f8);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_388);
    }
    if (local_6a0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e54668f:
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_378);
  ::FString::ConcatFC(&local_598,pFVar8,L".GetSupportFaceRemap");
  if (local_378[0] != (void *)0x0) {
    FMemory::Free(local_378[0]);
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
                    (pFVar1,&this->Macro_CustomSupportFaceRemapKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_658,&this->Macro_CustomSupportFaceRemapKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_658);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_658,local_71f);
      if ((EVar11 & Operation_Success) != None) {
        if (local_658.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_270,this,(pmf_a3ea3bba)0x14e53a940);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_270);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_258,this,(pmf_95c8f66d)0x14e54f380);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_258);
        goto LAB_14e5469a4;
      }
      ::FString::FString(&local_368,&(this->Macro_CustomSupportFaceRemapKey).Key);
      pFVar8 = ::FString::FString(&local_e8,&local_598);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_368);
    }
    if (local_658.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e5469a4:
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_358);
  ::FString::ConcatFC(&local_588,pFVar8,L".GetMinLightmapResolution");
  if (local_358[0] != (void *)0x0) {
    FMemory::Free(local_358[0]);
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
                    (pFVar1,&this->Macro_CustomMinLightmapResolutionKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<int,void>
              (pFVar1,&local_640,&this->Macro_CustomMinLightmapResolutionKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_640);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::Get
                         (&local_640,&local_6c8);
      if ((EVar11 & Operation_Success) != None) {
        if (local_640.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_640.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        local_700.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_6f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_6f8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_700,(FWriteAccessScope *)&local_468);
        local_450 = &local_6f8;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_6f8);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_6b0 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_6b0);
          puVar9[4] = ApplyCustomMinLightmapResolutionToAsset;
        }
        if (local_468.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
        }
        pFVar2 = (pTVar12->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_700) &&
            ((FScriptContainerElement *)&local_700 < pFVar2 + (longlong)pTVar12->ArrayMax * 0x18))
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        lVar16 = (longlong)iVar6;
        pTVar12->ArrayNum = iVar6 + 1;
        pFVar2 = (pTVar12->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar16 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar16 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar16 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_700,(FWriteAccessScope *)&local_4a0);
        if (*(void **)(pFVar2 + lVar16 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar16 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar16 * 0x18 + 8) =
             local_6f8.DelegateAllocator;
        local_6f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar16 * 0x18 + 0x10) = local_6f8.DelegateSize;
        local_6f8.DelegateSize = 0;
        if (local_4a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a0.Accessor,&local_4a0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_700,(FWriteAccessScope *)&local_4e8);
        if ((local_6f8.DelegateSize != 0) &&
           (local_6f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_6f8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_6f8,0,0,0x10);
          local_6f8.DelegateSize = 0;
        }
        if (local_4e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
        }
        if (local_6f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_6f8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_700.AccessDetector);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = uVar14 >> 0x10 ^ uVar14;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar15 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar15 = &this->_padding_;
          }
          iVar6 = *(int *)((longlong)plVar15 + (ulonglong)((int)this->_padding_ - 1U & uVar14) * 4);
          if (iVar6 != -1) {
            lVar16 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar6 * 0x20 + lVar16) == local_728) {
                if ((iVar6 != -1) && (lVar16 = (longlong)iVar6 * 0x20 + lVar16, lVar16 != 0)) {
                  pTVar12 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar16 + 8);
                  goto LAB_14e546ddf;
                }
                break;
              }
              iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar16);
            } while (iVar6 != -1);
          }
        }
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14,&local_728);
LAB_14e546ddf:
        local_718.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_710.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_710.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_718,(FWriteAccessScope *)&local_488);
        local_470 = &local_710;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_710);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_6a8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_6a8);
          puVar9[4] = FillCustomMinLightmapResolutionFromAsset;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        pFVar2 = (pTVar12->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_718) &&
            ((FScriptContainerElement *)&local_718 < pFVar2 + (longlong)pTVar12->ArrayMax * 0x18))
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        lVar16 = (longlong)iVar6;
        pTVar12->ArrayNum = iVar6 + 1;
        pFVar2 = (pTVar12->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar16 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar16 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar16 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_718,(FWriteAccessScope *)&local_4d0);
        if (*(void **)(pFVar2 + lVar16 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar16 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar16 * 0x18 + 8) =
             local_710.DelegateAllocator;
        local_710.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar16 * 0x18 + 0x10) = local_710.DelegateSize;
        local_710.DelegateSize = 0;
        if (local_4d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d0.Accessor,&local_4d0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_718,(FWriteAccessScope *)&local_4b8);
        if ((local_710.DelegateSize != 0) &&
           (local_710.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_710.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_710,0,0,0x10);
          local_710.DelegateSize = 0;
        }
        if (local_4b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
        }
        if (local_710.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_710.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_718.AccessDetector);
        goto LAB_14e54701c;
      }
      ::FString::FString(&local_348,&(this->Macro_CustomMinLightmapResolutionKey).Key);
      pFVar8 = ::FString::FString(&local_a8,&local_588);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_348);
    }
    if (local_640.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e54701c:
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_338);
  ::FString::ConcatFC(&local_578,pFVar8,L".GetSrcLightmapIndex");
  if (local_338[0] != (void *)0x0) {
    FMemory::Free(local_338[0]);
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
                    (pFVar1,&this->Macro_CustomSrcLightmapIndexKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<int,void>
              (pFVar1,&local_628,&this->Macro_CustomSrcLightmapIndexKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_628);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::Get
                         (&local_628,&local_6c4);
      if ((EVar11 & Operation_Success) != None) {
        if (local_628.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_628.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = uVar14 >> 0x10 ^ uVar14;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar15 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar15 = &this->_padding_;
          }
          iVar6 = *(int *)((longlong)plVar15 + (ulonglong)((int)this->_padding_ - 1U & uVar14) * 4);
          if (iVar6 != -1) {
            lVar16 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar6 * 0x20 + lVar16) == local_728) {
                if ((iVar6 != -1) && (lVar16 = (longlong)iVar6 * 0x20 + lVar16, lVar16 != 0)) {
                  pTVar12 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar16 + 8);
                  goto LAB_14e5471ff;
                }
                break;
              }
              iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar16);
            } while (iVar6 != -1);
          }
        }
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14,&local_728);
LAB_14e5471ff:
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_240,this,(pmf_a3ea3bba)0x14e53a930);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_240);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = uVar14 >> 0x10 ^ uVar14;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar15 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar15 = &this->_padding_;
          }
          iVar6 = *(int *)((longlong)plVar15 + (ulonglong)((int)this->_padding_ - 1U & uVar14) * 4);
          if (iVar6 != -1) {
            lVar16 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar6 * 0x20 + lVar16) == local_728) {
                if ((iVar6 != -1) && (lVar16 = (longlong)iVar6 * 0x20 + lVar16, lVar16 != 0)) {
                  pTVar12 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar16 + 8);
                  goto LAB_14e547350;
                }
                break;
              }
              iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar16);
            } while (iVar6 != -1);
          }
        }
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14,&local_728);
LAB_14e547350:
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_228,this,(pmf_95c8f66d)0x14e54f370);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_228);
        goto LAB_14e547409;
      }
      ::FString::FString(&local_328,&(this->Macro_CustomSrcLightmapIndexKey).Key);
      pFVar8 = ::FString::FString(&local_98,&local_578);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_328);
    }
    if (local_628.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e547409:
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_318);
  ::FString::ConcatFC(&local_568,pFVar8,L".GetDstLightmapIndex");
  if (local_318[0] != (void *)0x0) {
    FMemory::Free(local_318[0]);
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
                    (pFVar1,&this->Macro_CustomDstLightmapIndexKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<int,void>
              (pFVar1,&local_610,&this->Macro_CustomDstLightmapIndexKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_610);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::Get
                         (&local_610,&local_6c0);
      if ((EVar11 & Operation_Success) != None) {
        if (local_610.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_610.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_210,this,(pmf_a3ea3bba)0x14e53a1b0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_210);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_1f8,this,(pmf_95c8f66d)0x14e54ee90);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1f8);
        goto LAB_14e547765;
      }
      ::FString::FString(&local_308,&(this->Macro_CustomDstLightmapIndexKey).Key);
      pFVar8 = ::FString::FString(&local_88,&local_568);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_308);
    }
    if (local_610.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_610.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e547765:
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_2f8);
  ::FString::ConcatFC(&local_558,pFVar8,L".GetBuildScale3D");
  if (local_2f8[0] != (void *)0x0) {
    FMemory::Free(local_2f8[0]);
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
                    (pFVar1,&this->Macro_CustomBuildScale3DKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector<double>,void>
              (pFVar1,&local_5f8,&this->Macro_CustomBuildScale3DKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>::
            IsValid(&local_5f8);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>
               ::Get(&local_5f8,&local_58);
      if ((EVar11 & Operation_Success) != None) {
        if (local_5f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f8.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_120,this,(pmf_a3ea3bba)0x14e539f00);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_120);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_1c8,this,(pmf_95c8f66d)0x14e54ed20);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1c8);
        goto LAB_14e547a8a;
      }
      ::FString::FString(&local_3e8,&(this->Macro_CustomBuildScale3DKey).Key);
      pFVar8 = ::FString::FString(&local_78,&local_558);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_3e8);
    }
    if (local_5f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e547a8a:
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_448);
  ::FString::ConcatFC(&local_548,pFVar8,L".GetDistanceFieldResolutionScale");
  if (local_448[0] != (void *)0x0) {
    FMemory::Free(local_448[0]);
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
                    (pFVar1,&this->Macro_CustomDistanceFieldResolutionScaleKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar1,&local_5e0,&this->Macro_CustomDistanceFieldResolutionScaleKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_5e0);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                         (&local_5e0,&local_6bc);
      if ((EVar11 & Operation_Success) != None) {
        if (local_5e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e0.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_1b0,this,(pmf_a3ea3bba)0x14e53a120);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b0);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_198,this,(pmf_95c8f66d)0x14e54ee10);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_198);
        goto LAB_14e547dac;
      }
      ::FString::FString(&local_438,&(this->Macro_CustomDistanceFieldResolutionScaleKey).Key);
      pFVar8 = ::FString::FString(&local_68,&local_548);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_438);
    }
    if (local_5e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e547dac:
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_428);
  ::FString::ConcatFC(&local_538,pFVar8,L".GetDistanceFieldReplacementMesh");
  if (local_428[0] != (void *)0x0) {
    FMemory::Free(local_428[0]);
  }
  local_6e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_6e8.AssetPath.PackageName.Number = 0;
  local_6e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_6e8.AssetPath.AssetName.Number = 0;
  local_6e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.SubPathString.Data.ArrayNum = 0;
  local_6e8.SubPathString.Data.ArrayMax = 0;
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
                    (pFVar1,&this->Macro_CustomDistanceFieldReplacementMeshKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FSoftObjectPath,void>
              (pFVar1,&local_5c8,&this->Macro_CustomDistanceFieldReplacementMeshKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FSoftObjectPath,void>::IsValid
                      (&local_5c8);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<FSoftObjectPath,void>::Get
                         (&local_5c8,&local_6e8);
      if ((EVar11 & Operation_Success) != None) {
        if (local_5c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_180,this,(pmf_a3ea3bba)0x14e53a110);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_180);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_168,this,(pmf_95c8f66d)0x14e54ee00);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_168);
        goto LAB_14e5480e7;
      }
      ::FString::FString(&local_418,&(this->Macro_CustomDistanceFieldReplacementMeshKey).Key);
      pFVar8 = ::FString::FString(&local_108,&local_538);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_418);
    }
    if (local_5c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e5480e7:
  if (local_6e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_408);
  ::FString::ConcatFC(&local_528,pFVar8,L".GetMaxLumenMeshCards");
  if (local_408[0] != (void *)0x0) {
    FMemory::Free(local_408[0]);
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
                    (pFVar1,&this->Macro_CustomMaxLumenMeshCardsKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<int,void>
              (pFVar1,&local_5b0,&this->Macro_CustomMaxLumenMeshCardsKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_5b0);
    if (bVar5) {
      EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::Get
                         (&local_5b0,local_6b8);
      if ((EVar11 & Operation_Success) != None) {
        if (local_5b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b0.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_150,this,(pmf_a3ea3bba)0x14e53a740);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_150);
        uVar14 = ((uint)((ulonglong)local_728 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_728 >> 4))
                 * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        pTVar12 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar14 >> 0x10 ^ uVar14,&local_728);
        pTVar13 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeStaticMeshFactoryNode>
                            (&local_138,this,(pmf_95c8f66d)0x14e54f180);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar12->AllocatorInstance).Data;
        if (((pTVar3 <= pTVar13) && (pTVar13 < pTVar3 + pTVar12->ArrayMax)) &&
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
        iVar6 = pTVar12->ArrayNum;
        if (iVar6 == pTVar12->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar6 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 0x18),pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_138);
        goto LAB_14e548418;
      }
      ::FString::FString(&local_3f8,&(this->Macro_CustomMaxLumenMeshCardsKey).Key);
      pFVar8 = ::FString::FString(&local_f8,&local_528);
      UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_3f8);
    }
    if (local_5b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e548418:
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  return;
}

// FillAssetClassFromAttribute @ 14e54ea20

void __thiscall
UInterchangeStaticMeshFactoryNode::FillAssetClassFromAttribute
          (UInterchangeStaticMeshFactoryNode *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_68,pFVar4,L".GetAssetClassName");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (this_00,(FAttributeKey *)&this->_padding_);
  if (bVar2) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>
              (this_00,&local_28,(FAttributeKey *)&this->_padding_);
    bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_28);
    if (bVar2) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                        (&local_28,&local_88);
      if ((EVar5 & Operation_Success) == None) {
        ::FString::FString(&local_48,(FString *)&this->_padding_);
        pFVar4 = ::FString::FString(&local_38,&local_68);
        UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar4,(FAttributeKey *)&local_48);
      }
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
  local_res8 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_res8,&local_78);
  FVar7.Data = local_88.Data.AllocatorInstance.Data;
  if (local_88.Data.ArrayNum == local_78.Data.ArrayNum) {
    if (local_88.Data.ArrayNum < 2) {
      bVar2 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)local_88.Data.AllocatorInstance.Data,
                     (wchar_t *)local_78.Data.AllocatorInstance.Data);
      bVar2 = iVar3 == 0;
    }
  }
  else {
    bVar2 = local_88.Data.ArrayNum + local_78.Data.ArrayNum == 1;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    FVar7.Data = local_88.Data.AllocatorInstance.Data;
  }
  if (bVar2) {
    pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->AssetClass).Class.field0_0x0.DebugPtr = pUVar6;
    *(undefined1 *)&this->_padding_ = 1;
    FVar7.Data = local_88.Data.AllocatorInstance.Data;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// FillCustomBuildReversedIndexBufferFromAsset @ 14e54ed10

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomBuildReversedIndexBufferFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomBuildScale3DFromAsset @ 14e54ed20

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomBuildScale3DFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomDistanceFieldReplacementMeshFromAsset @ 14e54ee00

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomDistanceFieldReplacementMeshFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomDistanceFieldResolutionScaleFromAsset @ 14e54ee10

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomDistanceFieldResolutionScaleFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomDstLightmapIndexFromAsset @ 14e54ee90

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomDstLightmapIndexFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomGenerateDistanceFieldAsIfTwoSidedFromAsset @ 14e54efe0

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomGenerateDistanceFieldAsIfTwoSidedFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomGenerateLightmapUVsFromAsset @ 14e54eff0

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomGenerateLightmapUVsFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomMaxLumenMeshCardsFromAsset @ 14e54f180

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomMaxLumenMeshCardsFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomMinLightmapResolutionFromAsset @ 14e54f190

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomMinLightmapResolutionFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomSrcLightmapIndexFromAsset @ 14e54f370

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomSrcLightmapIndexFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// FillCustomSupportFaceRemapFromAsset @ 14e54f380

bool __thiscall
UInterchangeStaticMeshFactoryNode::FillCustomSupportFaceRemapFromAsset
          (UInterchangeStaticMeshFactoryNode *this,UObject *param_1)

{
  return false;
}

// GetCustomAutoComputeLODScreenSizes @ 14e551320

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomAutoComputeLODScreenSizes
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAutoComputeLODScreenSizes");
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
                     &this->Macro_CustomAutoComputeLODScreenSizesKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomBuildNanite @ 14e5515e0

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomBuildNanite
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetBuildNanite");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomBuildNaniteKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomBuildReversedIndexBuffer @ 14e551690

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomBuildReversedIndexBuffer
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetBuildReversedIndexBuffer");
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
                     &this->Macro_CustomBuildReversedIndexBufferKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomBuildScale3D @ 14e551740

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomBuildScale3D
          (UInterchangeStaticMeshFactoryNode *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetBuildScale3D");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TVector<double>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomBuildScale3DKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomDistanceFieldReplacementMesh @ 14e552250

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomDistanceFieldReplacementMesh
          (UInterchangeStaticMeshFactoryNode *this,FSoftObjectPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDistanceFieldReplacementMesh");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FSoftObjectPath>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDistanceFieldReplacementMeshKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomDistanceFieldResolutionScale @ 14e552300

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomDistanceFieldResolutionScale
          (UInterchangeStaticMeshFactoryNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDistanceFieldResolutionScale");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDistanceFieldResolutionScaleKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomDstLightmapIndex @ 14e552510

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomDstLightmapIndex
          (UInterchangeStaticMeshFactoryNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDstLightmapIndex");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomDstLightmapIndexKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomGenerateDistanceFieldAsIfTwoSided @ 14e552b50

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomGenerateDistanceFieldAsIfTwoSided
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGenerateDistanceFieldAsIfTwoSided");
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
                     &this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomGenerateLightmapUVs @ 14e552c00

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomGenerateLightmapUVs
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGenerateLightmapUVs");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGenerateLightmapUVsKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomMaxLumenMeshCards @ 14e554fd0

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomMaxLumenMeshCards
          (UInterchangeStaticMeshFactoryNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetMaxLumenMeshCards");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomMaxLumenMeshCardsKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomMinLightmapResolution @ 14e555130

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomMinLightmapResolution
          (UInterchangeStaticMeshFactoryNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetMinLightmapResolution");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomMinLightmapResolutionKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSrcLightmapIndex @ 14e556a20

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomSrcLightmapIndex
          (UInterchangeStaticMeshFactoryNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSrcLightmapIndex");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSrcLightmapIndexKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSubstituteUID @ 14e556ce0

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomSubstituteUID
          (UInterchangeStaticMeshFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSubstituteUID");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSubstituteUIDKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSupportFaceRemap @ 14e556d90

bool __thiscall
UInterchangeStaticMeshFactoryNode::GetCustomSupportFaceRemap
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSupportFaceRemap");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSupportFaceRemapKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetLODScreenSizeCount @ 14e558270

int __thiscall
UInterchangeStaticMeshFactoryNode::GetLODScreenSizeCount(UInterchangeStaticMeshFactoryNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<float>::GetCount(&this->LODScreenSizes);
  return iVar1;
}

// GetLODScreenSizes @ 14e558290

void __thiscall
UInterchangeStaticMeshFactoryNode::GetLODScreenSizes
          (UInterchangeStaticMeshFactoryNode *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<float>::GetItems(&this->LODScreenSizes,param_1);
  return;
}

// GetObjectClass @ 14e559590

UClass * __thiscall
UInterchangeStaticMeshFactoryNode::GetObjectClass(UInterchangeStaticMeshFactoryNode *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  if ((char)this->_padding_ == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3619282985158705251>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                       ,99,"bIsNodeClassInitialized");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UClass *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = (this->AssetClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (pUVar4 = (this->AssetClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
        pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
        if (pUVar5 != (UClass *)0x0) {
          iVar1 = (int)pUVar5->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            return (this->AssetClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
  return pUVar4;
}

// GetPrivateStaticClass @ 14e55bb10

UClass * __cdecl UInterchangeStaticMeshFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeStaticMeshFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeStaticMeshFactoryNode,0x4f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeStaticMeshFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeStaticMeshFactoryNode>,local_res8,
               UInterchangeMeshFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.InnerSingleton;
}

// GetSocketUidCount @ 14e55cf20

int __thiscall
UInterchangeStaticMeshFactoryNode::GetSocketUidCount(UInterchangeStaticMeshFactoryNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->SocketUids);
  return iVar1;
}

// GetSocketUids @ 14e55cf40

void __thiscall
UInterchangeStaticMeshFactoryNode::GetSocketUids
          (UInterchangeStaticMeshFactoryNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->SocketUids,param_1);
  return;
}

// GetTypeName @ 14e55d920

FString * __thiscall
UInterchangeStaticMeshFactoryNode::GetTypeName
          (UInterchangeStaticMeshFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"StaticMeshNode");
  return __return_storage_ptr__;
}

// InitializeStaticMeshNode @ 14e55e400

void __thiscall
UInterchangeStaticMeshFactoryNode::InitializeStaticMeshNode
          (UInterchangeStaticMeshFactoryNode *this,FString *param_1,FString *param_2,
          FString *param_3,UInterchangeBaseNodeContainer *param_4)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FString *pFVar3;
  EAttributeStorageResult EVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  *(undefined1 *)&this->_padding_ = 0;
  ::FString::FString(&local_38,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (param_4,(UInterchangeBaseNode *)this,param_1,param_2,FactoryData,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar3 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_48,pFVar3,L".SetAssetClassName");
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
      (*pcVar1)();
      return;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    ((FAttributeStorage *)this->_padding_,(FAttributeKey *)&this->_padding_,param_3,
                     None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&this->_padding_);
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
    UE::Interchange::LogAttributeStorageErrors(EVar4,&local_58,(FAttributeKey *)&local_18);
  }
  (**(code **)(this->_padding_ + 0x318))(this);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveSocketUd @ 14e55f960

bool __thiscall
UInterchangeStaticMeshFactoryNode::RemoveSocketUd
          (UInterchangeStaticMeshFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem(&this->SocketUids,param_1);
  return bVar1;
}

// SetCustomAutoComputeLODScreenSizes @ 14e563260

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomAutoComputeLODScreenSizes
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAutoComputeLODScreenSizes");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomAutoComputeLODScreenSizesKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomAutoComputeLODScreenSizesKey).Key);
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

// SetCustomBuildNanite @ 14e563e20

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomBuildNanite
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1,bool param_2)

{
  return false;
}

// SetCustomBuildReversedIndexBuffer @ 14e563e30

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomBuildReversedIndexBuffer
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetBuildReversedIndexBuffer");
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
                     &this->Macro_CustomBuildReversedIndexBufferKey,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomBuildReversedIndexBufferKey).Key);
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
    goto LAB_14e564540;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e563f90:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x118,L"");
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
      if (!bVar3) goto LAB_14e563f90;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomBuildReversedIndexBufferKey).Key);
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
              goto LAB_14e564070;
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
LAB_14e564070:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomBuildReversedIndexBufferToAsset;
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
              goto LAB_14e56432d;
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
LAB_14e56432d:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomBuildReversedIndexBufferFromAsset;
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
LAB_14e564540:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomBuildScale3D @ 14e5645a0

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomBuildScale3D
          (UInterchangeStaticMeshFactoryNode *this,TVector<double> *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetBuildScale3D");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector<double>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomBuildScale3DKey,param_1
                     ,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomBuildScale3DKey).Key);
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
    goto LAB_14e564cb0;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e564700:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,400,L"");
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
      if (!bVar3) goto LAB_14e564700;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomBuildScale3DKey).Key);
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
              goto LAB_14e5647e0;
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
LAB_14e5647e0:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomBuildScale3DToAsset;
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
              goto LAB_14e564a9d;
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
LAB_14e564a9d:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomBuildScale3DFromAsset;
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
LAB_14e564cb0:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomDistanceFieldReplacementMesh @ 14e567200

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomDistanceFieldReplacementMesh
          (UInterchangeStaticMeshFactoryNode *this,FSoftObjectPath *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetDistanceFieldReplacementMesh");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<FSoftObjectPath,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDistanceFieldReplacementMeshKey,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomDistanceFieldReplacementMeshKey).Key);
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
    goto LAB_14e567910;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e567360:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x1b2,L"");
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
      if (!bVar3) goto LAB_14e567360;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomDistanceFieldReplacementMeshKey).Key);
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
              goto LAB_14e567440;
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
LAB_14e567440:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomDistanceFieldReplacementMeshToAsset;
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
              goto LAB_14e5676fd;
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
LAB_14e5676fd:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomDistanceFieldReplacementMeshFromAsset;
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
LAB_14e567910:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomDistanceFieldResolutionScale @ 14e567970

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomDistanceFieldResolutionScale
          (UInterchangeStaticMeshFactoryNode *this,float *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetDistanceFieldResolutionScale");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomDistanceFieldResolutionScaleKey,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomDistanceFieldResolutionScaleKey).Key);
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
    goto LAB_14e568080;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e567ad0:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x1a1,L"");
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
      if (!bVar3) goto LAB_14e567ad0;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomDistanceFieldResolutionScaleKey).Key);
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
              goto LAB_14e567bb0;
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
LAB_14e567bb0:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomDistanceFieldResolutionScaleToAsset;
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
              goto LAB_14e567e6d;
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
LAB_14e567e6d:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomDistanceFieldResolutionScaleFromAsset;
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
LAB_14e568080:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomDstLightmapIndex @ 14e5689a0

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomDstLightmapIndex
          (UInterchangeStaticMeshFactoryNode *this,int *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetDstLightmapIndex");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomDstLightmapIndexKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomDstLightmapIndexKey).Key);
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
    goto LAB_14e5690b0;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e568b00:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x17f,L"");
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
      if (!bVar3) goto LAB_14e568b00;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomDstLightmapIndexKey).Key);
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
              goto LAB_14e568be0;
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
LAB_14e568be0:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomDstLightmapIndexToAsset;
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
              goto LAB_14e568e9d;
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
LAB_14e568e9d:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomDstLightmapIndexFromAsset;
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
LAB_14e5690b0:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomGenerateDistanceFieldAsIfTwoSided @ 14e56b800

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomGenerateDistanceFieldAsIfTwoSided
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetGenerateDistanceFieldAsIfTwoSided");
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
                     &this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key);
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
    goto LAB_14e56bf10;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e56b960:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x13a,L"");
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
      if (!bVar3) goto LAB_14e56b960;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomGenerateDistanceFieldAsIfTwoSidedKey).Key);
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
              goto LAB_14e56ba40;
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
LAB_14e56ba40:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomGenerateDistanceFieldAsIfTwoSidedToAsset;
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
              goto LAB_14e56bcfd;
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
LAB_14e56bcfd:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomGenerateDistanceFieldAsIfTwoSidedFromAsset;
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
LAB_14e56bf10:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomGenerateLightmapUVs @ 14e56bf70

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomGenerateLightmapUVs
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetGenerateLightmapUVs");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGenerateLightmapUVsKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomGenerateLightmapUVsKey).Key);
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
    goto LAB_14e56c680;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e56c0d0:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x129,L"");
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
      if (!bVar3) goto LAB_14e56c0d0;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomGenerateLightmapUVsKey).Key);
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
              goto LAB_14e56c1b0;
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
LAB_14e56c1b0:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomGenerateLightmapUVsToAsset;
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
              goto LAB_14e56c46d;
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
LAB_14e56c46d:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomGenerateLightmapUVsFromAsset;
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
LAB_14e56c680:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomMaxLumenMeshCards @ 14e570c10

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomMaxLumenMeshCards
          (UInterchangeStaticMeshFactoryNode *this,int *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetMaxLumenMeshCards");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomMaxLumenMeshCardsKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomMaxLumenMeshCardsKey).Key);
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
    goto LAB_14e571320;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e570d70:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x1db,L"");
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
      if (!bVar3) goto LAB_14e570d70;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomMaxLumenMeshCardsKey).Key);
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
              goto LAB_14e570e50;
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
LAB_14e570e50:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomMaxLumenMeshCardsToAsset;
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
              goto LAB_14e57110d;
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
LAB_14e57110d:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomMaxLumenMeshCardsFromAsset;
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
LAB_14e571320:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomMinLightmapResolution @ 14e5714d0

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomMinLightmapResolution
          (UInterchangeStaticMeshFactoryNode *this,int *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetMinLightmapResolution");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomMinLightmapResolutionKey,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomMinLightmapResolutionKey).Key);
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
    goto LAB_14e571be0;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e571630:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x15d,L"");
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
      if (!bVar3) goto LAB_14e571630;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomMinLightmapResolutionKey).Key);
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
              goto LAB_14e571710;
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
LAB_14e571710:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomMinLightmapResolutionToAsset;
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
              goto LAB_14e5719cd;
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
LAB_14e5719cd:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomMinLightmapResolutionFromAsset;
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
LAB_14e571be0:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomSrcLightmapIndex @ 14e578220

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomSrcLightmapIndex
          (UInterchangeStaticMeshFactoryNode *this,int *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetSrcLightmapIndex");
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
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSrcLightmapIndexKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomSrcLightmapIndexKey).Key);
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
    goto LAB_14e578930;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e578380:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x16e,L"");
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
      if (!bVar3) goto LAB_14e578380;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomSrcLightmapIndexKey).Key);
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
              goto LAB_14e578460;
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
LAB_14e578460:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomSrcLightmapIndexToAsset;
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
              goto LAB_14e57871d;
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
LAB_14e57871d:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomSrcLightmapIndexFromAsset;
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
LAB_14e578930:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomSubstituteUID @ 14e578d80

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomSubstituteUID
          (UInterchangeStaticMeshFactoryNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSubstituteUID");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSubstituteUIDKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomSubstituteUIDKey).Key);
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

// SetCustomSupportFaceRemap @ 14e578ed0

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetCustomSupportFaceRemap
          (UInterchangeStaticMeshFactoryNode *this,bool *param_1,bool param_2)

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
  UInterchangeStaticMeshFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UClass *local_108;
  UInterchangeStaticMeshFactoryNode *local_100;
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
  ::FString::ConcatFC(&local_f8,pFVar6,L".SetSupportFaceRemap");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSupportFaceRemapKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_38,&(this->Macro_CustomSupportFaceRemapKey).Key);
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
    goto LAB_14e5795e0;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e579030:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeStaticMeshFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeStaticMeshFactoryNode.cpp"
                         ,0x14c,L"");
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
      if (!bVar3) goto LAB_14e579030;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomSupportFaceRemapKey).Key);
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
              goto LAB_14e579110;
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
LAB_14e579110:
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
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = ApplyCustomSupportFaceRemapToAsset;
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
              goto LAB_14e5793cd;
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
LAB_14e5793cd:
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
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar11[4] = FillCustomSupportFaceRemapFromAsset;
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
LAB_14e5795e0:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetLODScreenSizes @ 14e57ed40

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetLODScreenSizes
          (UInterchangeStaticMeshFactoryNode *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UE::Interchange::TArrayAttributeHelper<float>::RemoveAllItems(&this->LODScreenSizes);
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UE::Interchange::TArrayAttributeHelper<float>::AddItem(&this->LODScreenSizes,(float *)pFVar3);
    pFVar3 = pFVar3 + 4;
  }
  return true;
}

// SetNodeClassFromClassAttribute @ 14e57ee60

bool __thiscall
UInterchangeStaticMeshFactoryNode::SetNodeClassFromClassAttribute
          (UInterchangeStaticMeshFactoryNode *this)

{
  if ((char)this->_padding_ == '\0') {
    (**(code **)(this->_padding_ + 0x318))();
    return (bool)(char)this->_padding_;
  }
  return (bool)(char)this->_padding_;
}

// StaticRegisterNativesUInterchangeStaticMeshFactoryNode @ 14e57fa50

void __cdecl
UInterchangeStaticMeshFactoryNode::StaticRegisterNativesUInterchangeStaticMeshFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x25;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddSocketUid @ 14e583de0

void __cdecl
UInterchangeStaticMeshFactoryNode::execAddSocketUid(UObject *param_1,FFrame *param_2,void *param_3)

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
                    ((TArrayAttributeHelper<FString> *)&param_1[0x1e].field_0x18,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddSocketUids @ 14e583ea0

void __cdecl
UInterchangeStaticMeshFactoryNode::execAddSocketUids(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  FString **ppFVar6;
  FString *pFVar7;
  undefined1 local_res10 [8];
  FString *local_28;
  undefined8 local_20;
  
  local_28 = (FString *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppFVar6 = &local_28;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar6 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppFVar6 + 1);
  pFVar5 = *ppFVar6;
  pFVar7 = pFVar5 + iVar1;
  while( true ) {
    if (*(int *)(ppFVar6 + 1) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar5 == pFVar7) break;
    bVar3 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                      ((TArrayAttributeHelper<FString> *)&param_1[0x1e].field_0x18,pFVar5);
    if (!bVar3) {
      uVar4 = 0;
LAB_14e583f73:
      *(undefined1 *)param_3 = uVar4;
      DestructItems<FString,int>(local_28,(int)local_20);
      if (local_28 != (FString *)0x0) {
        FMemory::Free(local_28);
      }
      return;
    }
    pFVar5 = pFVar5 + 1;
  }
  uVar4 = 1;
  goto LAB_14e583f73;
}

// execGetCustomAutoComputeLODScreenSizes @ 14e58b4c0

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomAutoComputeLODScreenSizes
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAutoComputeLODScreenSizes");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x1d),
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomBuildNanite @ 14e58bab0

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomBuildNanite
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetBuildNanite");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1c].field_0x18
                     ,&local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomBuildReversedIndexBuffer @ 14e58bbe0

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomBuildReversedIndexBuffer
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetBuildReversedIndexBuffer");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x18].field_0x8,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomBuildScale3D @ 14e58bd10

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomBuildScale3D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TVector<double> *pTVar5;
  FString local_48;
  void *local_38 [2];
  TVector<double> local_28;
  
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
  pTVar5 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".GetBuildScale3D");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TVector<double>_>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x1b),
                     &local_48,pTVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomDistanceFieldReplacementMesh @ 14e58d920

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldReplacementMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FSoftObjectPath *pFVar5;
  FString local_48;
  void *local_38 [2];
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
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
  pFVar5 = &local_28;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar5 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".GetDistanceFieldReplacementMesh");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FSoftObjectPath>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1b].field_0x20
                     ,&local_48,pFVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomDistanceFieldResolutionScale @ 14e58da70

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldResolutionScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0.0;
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
  pfVar5 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetDistanceFieldResolutionScale");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1b].field_0x10
                     ,&local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomDstLightmapIndex @ 14e58deb0

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomDstLightmapIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetDstLightmapIndex");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1a].field_0x18
                     ,&local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomGenerateDistanceFieldAsIfTwoSided @ 14e58ef00

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomGenerateDistanceFieldAsIfTwoSided
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetGenerateDistanceFieldAsIfTwoSided");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x19),
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomGenerateLightmapUVs @ 14e58f030

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomGenerateLightmapUVs
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetGenerateLightmapUVs");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x18].field_0x18
                     ,&local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomMaxLumenMeshCards @ 14e591f80

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomMaxLumenMeshCards
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetMaxLumenMeshCards");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1c].field_0x8,
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomMinLightmapResolution @ 14e592310

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomMinLightmapResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetMinLightmapResolution");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x19].field_0x20
                     ,&local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomSrcLightmapIndex @ 14e595b50

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomSrcLightmapIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetSrcLightmapIndex");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1a].field_0x8,
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomSubstituteUID @ 14e596010

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomSubstituteUID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
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
  pFVar5 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSubstituteUID");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1d].field_0x10
                     ,&local_28,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomSupportFaceRemap @ 14e596160

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetCustomSupportFaceRemap
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetSupportFaceRemap");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x19].field_0x10
                     ,&local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetLODScreenSizeCount @ 14e599160

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetLODScreenSizeCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<float>::GetCount
                    ((TArrayAttributeHelper<float> *)&param_1[0x1d].field_0x20);
  *(int *)param_3 = iVar1;
  return;
}

// execGetLODScreenSizes @ 14e5991a0

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetLODScreenSizes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
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
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<float>::GetItems
            ((TArrayAttributeHelper<float> *)&param_1[0x1d].field_0x20,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSocketUidCount @ 14e59aef0

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetSocketUidCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[0x1e].field_0x18);
  *(int *)param_3 = iVar1;
  return;
}

// execGetSocketUids @ 14e59af30

void __cdecl
UInterchangeStaticMeshFactoryNode::execGetSocketUids(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((TArrayAttributeHelper<FString> *)&param_1[0x1e].field_0x18,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execInitializeStaticMeshNode @ 14e59ca30

void __cdecl
UInterchangeStaticMeshFactoryNode::execInitializeStaticMeshNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UInterchangeBaseNodeContainer *this;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UInterchangeBaseNodeContainer *local_res8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res8 = (UInterchangeBaseNodeContainer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(param_1 + 0x18) = 0;
  ::FString::FString(&local_48,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (this,(UInterchangeBaseNode *)param_1,&local_68,&local_78,FactoryData,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_58,pFVar4,L".SetAssetClassName");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x17].field_0x18
                     ,&local_88,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0x17].field_0x18);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_58.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_98,(FAttributeKey *)&local_28);
  }
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveSocketUd @ 14e59dd30

void __cdecl
UInterchangeStaticMeshFactoryNode::execRemoveSocketUd
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
                    ((TArrayAttributeHelper<FString> *)&param_1[0x1e].field_0x18,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomAutoComputeLODScreenSizes @ 14e5a29e0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomAutoComputeLODScreenSizes
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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetAutoComputeLODScreenSizes");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x1d),pbVar7,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 0x1d));
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

// execSetCustomBuildNanite @ 14e5a32b0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomBuildNanite
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetCustomBuildReversedIndexBuffer @ 14e5a3380

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomBuildReversedIndexBuffer
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
  bVar2 = SetCustomBuildReversedIndexBuffer
                    ((UInterchangeStaticMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomBuildScale3D @ 14e5a3470

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomBuildScale3D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  TVector<double> local_38;
  
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
  local_res10[0] = 0;
  pTVar3 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomBuildScale3D
                    ((UInterchangeStaticMeshFactoryNode *)param_1,pTVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomDistanceFieldReplacementMesh @ 14e5a5d30

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldReplacementMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FSoftObjectPath *pFVar3;
  int local_res10 [2];
  FSoftObjectPath local_38;
  
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
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
  local_res10[0] = 0;
  pFVar3 = &local_38;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar3 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomDistanceFieldReplacementMesh
                    ((UInterchangeStaticMeshFactoryNode *)param_1,pFVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomDistanceFieldResolutionScale @ 14e5a5e40

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldResolutionScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  int local_res18 [2];
  
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
  local_res18[0] = 0;
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomDistanceFieldResolutionScale
                    ((UInterchangeStaticMeshFactoryNode *)param_1,pfVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomDstLightmapIndex @ 14e5a6450

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomDstLightmapIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  int local_res18 [2];
  
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
  local_res18[0] = 0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomDstLightmapIndex
                    ((UInterchangeStaticMeshFactoryNode *)param_1,piVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomGenerateDistanceFieldAsIfTwoSided @ 14e5a7800

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomGenerateDistanceFieldAsIfTwoSided
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
  bVar2 = SetCustomGenerateDistanceFieldAsIfTwoSided
                    ((UInterchangeStaticMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomGenerateLightmapUVs @ 14e5a78f0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomGenerateLightmapUVs
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
  bVar2 = SetCustomGenerateLightmapUVs
                    ((UInterchangeStaticMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomMaxLumenMeshCards @ 14e5abde0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomMaxLumenMeshCards
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  int local_res18 [2];
  
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
  local_res18[0] = 0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomMaxLumenMeshCards
                    ((UInterchangeStaticMeshFactoryNode *)param_1,piVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomMinLightmapResolution @ 14e5ac2a0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomMinLightmapResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  int local_res18 [2];
  
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
  local_res18[0] = 0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomMinLightmapResolution
                    ((UInterchangeStaticMeshFactoryNode *)param_1,piVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomSrcLightmapIndex @ 14e5b0cb0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomSrcLightmapIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  int local_res18 [2];
  
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
  local_res18[0] = 0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
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
  bVar2 = SetCustomSrcLightmapIndex
                    ((UInterchangeStaticMeshFactoryNode *)param_1,piVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomSubstituteUID @ 14e5b12e0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomSubstituteUID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSubstituteUID");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x1d].field_0x10
                     ,&local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0x1d].field_0x10);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomSupportFaceRemap @ 14e5b14d0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetCustomSupportFaceRemap
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
  bVar2 = SetCustomSupportFaceRemap
                    ((UInterchangeStaticMeshFactoryNode *)param_1,pbVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetLODScreenSizes @ 14e5b48f0

void __cdecl
UInterchangeStaticMeshFactoryNode::execSetLODScreenSizes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  int iVar2;
  FProperty *pFVar3;
  float *pfVar4;
  void **ppvVar5;
  undefined1 local_res8 [8];
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar5 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<float>::RemoveAllItems
            ((TArrayAttributeHelper<float> *)&param_1[0x1d].field_0x20);
  pfVar4 = *ppvVar5;
  iVar2 = *(int *)(ppvVar5 + 1);
  pfVar1 = pfVar4 + iVar2;
  while( true ) {
    if (*(int *)(ppvVar5 + 1) != iVar2) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pfVar4 == pfVar1) break;
    UE::Interchange::TArrayAttributeHelper<float>::AddItem
              ((TArrayAttributeHelper<float> *)&param_1[0x1d].field_0x20,pfVar4);
    pfVar4 = pfVar4 + 1;
  }
  *(undefined1 *)param_3 = 1;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

