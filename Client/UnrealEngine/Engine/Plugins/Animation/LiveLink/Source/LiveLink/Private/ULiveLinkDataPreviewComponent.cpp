// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 19

// StaticClass @ 14cff47f0

UClass * __cdecl ULiveLinkDataPreviewComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDataPreviewComponent",
               &Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton,
               StaticRegisterNativesULiveLinkDataPreviewComponent,0xb20,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDataPreviewComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkDataPreviewComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton;
}

// ULiveLinkDataPreviewComponent @ 14d013990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ULiveLinkDataPreviewComponent * __thiscall
ULiveLinkDataPreviewComponent::ULiveLinkDataPreviewComponent
          (ULiveLinkDataPreviewComponent *this,FVTableHelper *param_1)

{
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,param_1);
  this->BoneVisualType = Bone;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SubjectName).Name = (FName)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7ULiveLinkDataPreviewComponent__6B_;
  (this->MarkerLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerLabels).ArrayNum = 0;
  (this->MarkerLabels).ArrayMax = 0;
  (this->CachedSkeletonData)._padding_ = 0;
  (this->CachedSkeletonData)._padding_ = 0;
  (this->CachedSkeletonData).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSkeletonData).BoneNames.ArrayNum = 0;
  (this->CachedSkeletonData).BoneNames.ArrayMax = 0;
  (this->CachedSkeletonData).BoneParents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSkeletonData).BoneParents.ArrayNum = 0;
  (this->CachedSkeletonData).BoneParents.ArrayMax = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)&this->CachedAnimationData);
  (this->CachedAnimationData).Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAnimationData).Transforms.ArrayNum = 0;
  (this->CachedAnimationData).Transforms.ArrayMax = 0;
  (this->CachedRootSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRootSpaceTransforms).ArrayNum = 0;
  (this->CachedRootSpaceTransforms).ArrayMax = 0;
  (this->CachedChildTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildTransformIndices).ArrayNum = 0;
  (this->CachedChildTransformIndices).ArrayMax = 0;
  return this;
}

// ULiveLinkDataPreviewComponent @ 14d013aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ULiveLinkDataPreviewComponent * __thiscall
ULiveLinkDataPreviewComponent::ULiveLinkDataPreviewComponent
          (ULiveLinkDataPreviewComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,pFVar2);
  this->bEvaluateLiveLink = true;
  this->bDrawLabels = false;
  this->BoneVisualType = Bone;
  this->bIsDirty = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SubjectName).Name = (FName)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7ULiveLinkDataPreviewComponent__6B_;
  (this->MarkerLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerLabels).ArrayNum = 0;
  (this->MarkerLabels).ArrayMax = 0;
  (this->CachedSkeletonData)._padding_ = 0;
  (this->CachedSkeletonData)._padding_ = 0;
  (this->CachedSkeletonData).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSkeletonData).BoneNames.ArrayNum = 0;
  (this->CachedSkeletonData).BoneNames.ArrayMax = 0;
  (this->CachedSkeletonData).BoneParents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSkeletonData).BoneParents.ArrayNum = 0;
  (this->CachedSkeletonData).BoneParents.ArrayMax = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)&this->CachedAnimationData);
  (this->CachedAnimationData).Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAnimationData).Transforms.ArrayNum = 0;
  (this->CachedAnimationData).Transforms.ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  (this->CachedRootSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRootSpaceTransforms).ArrayNum = 0;
  (this->CachedRootSpaceTransforms).ArrayMax = 0;
  (this->CachedChildTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildTransformIndices).ArrayNum = 0;
  (this->CachedChildTransformIndices).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 5;
  return this;
}

// ~ULiveLinkDataPreviewComponent @ 14d017050

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ULiveLinkDataPreviewComponent::~ULiveLinkDataPreviewComponent(ULiveLinkDataPreviewComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7ULiveLinkDataPreviewComponent__6B_;
  DestructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             (this->CachedChildTransformIndices).AllocatorInstance.Data,
             (this->CachedChildTransformIndices).ArrayNum);
  pFVar1 = (this->CachedChildTransformIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedRootSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedAnimationData).Transforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->CachedAnimationData)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CachedAnimationData)._padding_ = 0;
  pvVar2 = (void *)(this->CachedAnimationData)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CachedAnimationData)._padding_);
  pFVar1 = (this->CachedSkeletonData).BoneParents.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSkeletonData).BoneNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->CachedSkeletonData)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->MarkerLabels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this);
  return;
}

// CacheSkeletalAnimationData @ 14d028ac0

void __thiscall
ULiveLinkDataPreviewComponent::CacheSkeletalAnimationData
          (ULiveLinkDataPreviewComponent *this,FLiveLinkSkeletonStaticData *param_1,
          FLiveLinkAnimationFrameData *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<TTuple<bool,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  TArray<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_> *this_00
  ;
  
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this->CachedSkeletonData,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)param_1);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CachedSkeletonData).BoneNames,&param_1->BoneNames);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CachedSkeletonData).BoneParents,&param_1->BoneParents);
  FLiveLinkAnimationFrameData::operator=(&this->CachedAnimationData,param_2);
  uVar8 = (param_2->Transforms).ArrayNum;
  if (((param_1->BoneNames).ArrayNum != uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStaticData->BoneNames.Num() == NumTransforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Visualizers\\LiveLinkDataPreviewComponent.cpp"
                         ,0x16e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->BoneParents).ArrayNum != uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStaticData->BoneParents.Num() == NumTransforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Visualizers\\LiveLinkDataPreviewComponent.cpp"
                         ,0x16f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((int)param_1->_padding_ != (int)param_2->_padding_) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStaticData->PropertyNames.Num() == InFrameData->PropertyValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Visualizers\\LiveLinkDataPreviewComponent.cpp"
                         ,0x170,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = &this->CachedRootSpaceTransforms;
  iVar7 = (this->CachedRootSpaceTransforms).ArrayNum;
  piVar1 = &(this->CachedRootSpaceTransforms).ArrayNum;
  if (iVar7 < (int)uVar8) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,0x10,uVar8 - iVar7,&pTVar3->AllocatorInstance,piVar1,
                       &(this->CachedRootSpaceTransforms).ArrayMax);
    DefaultConstructItems<TTuple<bool,UE::Math::TTransform<double>_>,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x70,uVar8 - iVar7);
  }
  else {
    if ((int)uVar8 < 0) goto LAB_14d028e65;
    if ((int)uVar8 < iVar7) {
      uVar9 = iVar7 - uVar8;
      if (((int)(uVar9 | uVar8) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar9 != 0) {
        _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x70;
        iVar7 = (*piVar1 - uVar9) - uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 0x70,(longlong)iVar7 * 0x70);
        }
        *piVar1 = *piVar1 - uVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,&pTVar3->AllocatorInstance,*piVar1,
                   &(this->CachedRootSpaceTransforms).ArrayMax);
      }
    }
  }
  this_00 = &this->CachedChildTransformIndices;
  iVar7 = (this->CachedChildTransformIndices).ArrayNum;
  piVar2 = &(this->CachedChildTransformIndices).ArrayNum;
  if (iVar7 < (int)uVar8) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar8 - iVar7,&this_00->AllocatorInstance,piVar2,
                       &(this->CachedChildTransformIndices).ArrayMax);
    DefaultConstructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x18,uVar8 - iVar7);
  }
  else {
    if ((int)uVar8 < 0) {
LAB_14d028e65:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar7) {
      uVar9 = iVar7 - uVar8;
      if (((int)(uVar9 | uVar8) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar9 != 0) {
        TArray<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,uVar8,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this_00->AllocatorInstance,*piVar2,
                   &(this->CachedChildTransformIndices).ArrayMax);
      }
    }
  }
  uVar9 = 0;
  lVar10 = (longlong)(int)uVar8;
  if (0 < (int)uVar8) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pTVar3->AllocatorInstance).Data[lVar12] = (FScriptContainerElement)0x0;
      uVar8 = 0;
      if ((int)uVar9 < (this->CachedChildTransformIndices).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x70;
      (this_00->AllocatorInstance).Data[lVar11] = (FScriptContainerElement)0x0;
      lVar11 = lVar11 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// CreateInstances @ 14d035ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULiveLinkDataPreviewComponent::CreateInstances(ULiveLinkDataPreviewComponent *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  UClass *pUVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  TTransform<double> *pTVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_268 [32];
  longlong local_248;
  ulonglong local_240;
  ForAnyElementType local_238;
  undefined8 local_230;
  longlong local_228;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_220;
  UClass *local_210;
  UClass *local_208;
  UClass *local_200;
  void *local_1f8 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1e8;
  void *local_1d8 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1c8;
  void *local_1b8 [2];
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  longlong *plVar14;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_268;
  pIVar7 = IModularFeatures::Get();
  lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,ILiveLinkClient::ModularFeatureName,0);
  plVar12 = (longlong *)0x0;
  plVar14 = (longlong *)(lVar8 + -8);
  if (lVar8 == 0) {
    plVar14 = plVar12;
  }
  (**(code **)(*plVar14 + 0xd0))(plVar14,&local_228,(this->SubjectName).Name);
  lVar8 = local_228;
  if (local_228 == 0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar6 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar8 + 0x38) < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar9->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if (local_228 == 0) {
    return;
  }
  pcVar2 = *(code **)(*plVar14 + 0xe8);
  local_210 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_210 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_210);
  }
  cVar3 = (*pcVar2)(plVar14,(this->SubjectName).Name,&local_210);
  if (cVar3 == '\0') {
    pcVar2 = *(code **)(*plVar14 + 0xe8);
    local_208 = Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_208);
    }
    cVar3 = (*pcVar2)(plVar14,(this->SubjectName).Name,&local_208);
    if (cVar3 != '\0') {
      local_238.Data = (FScriptContainerElement *)0x0;
      local_230 = 0;
      GetLocatorPositions(this,&local_220);
      plVar14 = plVar12;
      if (0 < local_220.ArrayNum) {
        do {
          uVar13 = (uint)plVar14;
          uVar5 = 0;
          if ((int)uVar13 < local_220.ArrayNum) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_240 = (ulonglong)local_220.ArrayNum;
            local_248 = (longlong)(int)uVar13;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          local_148.Translation.ZW.m128d_f64[0] =
               *(double *)(local_220.AllocatorInstance.Data + 0x10 + (longlong)plVar12);
          local_148.Translation.XY.m128d_f64[0] =
               *(double *)(local_220.AllocatorInstance.Data + (longlong)plVar12);
          local_148.Translation.XY.m128d_f64[1] =
               *(double *)(local_220.AllocatorInstance.Data + (longlong)plVar12 + 8);
          local_148.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_148.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_148.Translation.ZW.m128d_f64[1] = 0.0;
          local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_148.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_148.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_1a8,&local_148,(TTransform<double> *)&this->_padding_);
          iVar6 = (int)local_230;
          if ((int)local_230 == local_230._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&local_238,(int *)((longlong)&local_230 + 4));
          }
          local_230 = CONCAT44(local_230._4_4_,iVar6 + 1);
          plVar12 = plVar12 + 3;
          lVar8 = (longlong)iVar6 * 0x60;
          *(double *)(local_238.Data + lVar8) = local_1a8.Rotation.XY.m128d_f64[0];
          *(double *)(local_238.Data + lVar8 + 8) = local_1a8.Rotation.XY.m128d_f64[1];
          *(double *)(local_238.Data + lVar8 + 0x10) = local_1a8.Rotation.ZW.m128d_f64[0];
          *(double *)(local_238.Data + lVar8 + 0x10 + 8) = local_1a8.Rotation.ZW.m128d_f64[1];
          *(double *)(local_238.Data + lVar8 + 0x20) = local_1a8.Translation.XY.m128d_f64[0];
          *(double *)(local_238.Data + lVar8 + 0x20 + 8) = local_1a8.Translation.XY.m128d_f64[1];
          *(double *)(local_238.Data + lVar8 + 0x30) = local_1a8.Translation.ZW.m128d_f64[0];
          *(double *)(local_238.Data + lVar8 + 0x30 + 8) = local_1a8.Translation.ZW.m128d_f64[1];
          pFVar1 = local_238.Data + lVar8 + 0x40;
          *(undefined4 *)pFVar1 = local_1a8.Scale3D.XY.m128d_f64[0]._0_4_;
          *(undefined4 *)(pFVar1 + 4) = local_1a8.Scale3D.XY.m128d_f64[0]._4_4_;
          *(undefined4 *)(pFVar1 + 8) = local_1a8.Scale3D.XY.m128d_f64[1]._0_4_;
          *(undefined4 *)(pFVar1 + 0xc) = local_1a8.Scale3D.XY.m128d_f64[1]._4_4_;
          *(double *)(local_238.Data + lVar8 + 0x50) = local_1a8.Scale3D.ZW.m128d_f64[0];
          *(double *)(local_238.Data + lVar8 + 0x50 + 8) = local_1a8.Scale3D.ZW.m128d_f64[1];
          plVar14 = (longlong *)(ulonglong)(uVar13 + 1);
        } while ((int)(uVar13 + 1) < local_220.ArrayNum);
      }
      local_240 = local_240 & 0xffffffffffffff00;
      local_248 = CONCAT71(local_248._1_7_,1);
      (**(code **)(this->_padding_ + 3000))(this,local_1b8,&local_238,0);
      if (local_1b8[0] != (void *)0x0) {
        FMemory::Free(local_1b8[0]);
      }
      this->bIsDirty = false;
      if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.AllocatorInstance.Data);
      }
      if (local_238.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_238.Data);
      return;
    }
    pcVar2 = *(code **)(*plVar14 + 0xe8);
    local_200 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_200 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_200);
    }
    cVar3 = (*pcVar2)(plVar14,(this->SubjectName).Name,&local_200);
    if (cVar3 == '\0') {
      return;
    }
    pcVar2 = *(code **)(this->_padding_ + 0xbb0);
    pTVar11 = GetSingleTransform(this,&local_88);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_e8,pTVar11,(TTransform<double> *)&this->_padding_)
    ;
    (*pcVar2)(this,&local_e8,1);
    goto LAB_14d036007;
  }
  if (this->BoneVisualType == Joint) {
    pcVar2 = *(code **)(this->_padding_ + 3000);
    pTVar10 = GetJointTransforms(this,&local_1c8);
    local_240 = local_240 & 0xffffffffffffff00;
    local_248 = CONCAT71(local_248._1_7_,1);
    (*pcVar2)(this,local_1d8,pTVar10,0);
    if (local_1d8[0] != (void *)0x0) {
      FMemory::Free(local_1d8[0]);
    }
LAB_14d035c6f:
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
  }
  else if (this->BoneVisualType == Bone) {
    pcVar2 = *(code **)(this->_padding_ + 3000);
    pTVar10 = GetBoneTransforms(this,&local_1e8);
    local_240 = local_240 & 0xffffffffffffff00;
    local_248 = CONCAT71(local_248._1_7_,1);
    (*pcVar2)(this,local_1f8,pTVar10,0);
    local_1c8.AllocatorInstance.Data = local_1e8.AllocatorInstance.Data;
    if (local_1f8[0] != (void *)0x0) {
      FMemory::Free(local_1f8[0]);
      local_1c8.AllocatorInstance.Data = local_1e8.AllocatorInstance.Data;
    }
    goto LAB_14d035c6f;
  }
  if (3 < (byte)LogLiveLink._0_1_) {
    UInstancedStaticMeshComponent::GetInstanceCount((UInstancedStaticMeshComponent *)this);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
    if (3 < (byte)LogLiveLink._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
    }
  }
LAB_14d036007:
  this->bIsDirty = false;
  return;
}

// GetBoneTransforms @ 14d048930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkDataPreviewComponent::GetBoneTransforms
          (ULiveLinkDataPreviewComponent *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStackY_358 [32];
  ForAnyElementType local_308;
  int local_300;
  int local_2fc;
  ForAnyElementType local_2f8;
  int local_2f0;
  int local_2ec;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  TQuat<double> local_298;
  double local_278;
  double dStack_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  uVar17 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  dVar7 = __real_3ff0000000000000;
  __return_storage_ptr__->ArrayMax = 0;
  local_2f0 = (this->CachedAnimationData).Transforms.ArrayNum;
  lVar16 = (longlong)local_2f0;
  pFVar1 = (this->CachedAnimationData).Transforms.AllocatorInstance.Data;
  local_2e8._s_0.Z = __real_3ff0000000000000;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  uVar19 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_228.Rotation.XY.m128d_f64[1]._0_4_ = uVar19;
  local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_228.Rotation.XY.m128d_f64[1]._4_4_ = uVar20;
  local_1c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar19;
  local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar20;
  uVar19 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_228.Rotation.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_228.Rotation.ZW.m128d_f64[1]._4_4_ = uVar20;
  local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar20;
  uVar19 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_228.Translation.XY.m128d_f64[1]._0_4_ = uVar19;
  local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_228.Translation.XY.m128d_f64[1]._4_4_ = uVar20;
  local_1c8.Translation.XY.m128d_f64[1]._0_4_ = uVar19;
  local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8.Translation.XY.m128d_f64[1]._4_4_ = uVar20;
  uVar19 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_228.Translation.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_228.Translation.ZW.m128d_f64[1]._4_4_ = uVar20;
  local_1c8.Translation.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1c8.Translation.ZW.m128d_f64[1]._4_4_ = uVar20;
  uVar19 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_228.Scale3D.XY.m128d_f64[1]._0_4_ = uVar19;
  local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_228.Scale3D.XY.m128d_f64[1]._4_4_ = uVar20;
  local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar19;
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar20;
  uVar19 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_228.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_228.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar20;
  local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar20;
  if (local_2f0 == 0) {
    local_2ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_2f0,0,&local_2f8,local_2f0,&local_2ec);
    memcpy(local_2f8.Data,pFVar1,lVar16 * 0x60);
  }
  local_300 = (this->CachedSkeletonData).BoneParents.ArrayNum;
  lVar16 = (longlong)local_300;
  pFVar1 = (this->CachedSkeletonData).BoneParents.AllocatorInstance.Data;
  local_308.Data = (FScriptContainerElement *)0x0;
  if (local_300 == 0) {
    local_2fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_300,0,&local_308,local_300,&local_2fc);
    memcpy(local_308.Data,pFVar1,lVar16 << 2);
  }
  uVar10 = local_2e8._s_0.Z;
  dVar9 = _UNK_150689688;
  dVar8 = ___xmm_3ff00000000000003ff0000000000000;
  uVar18 = uVar17;
  if (0 < (this->CachedSkeletonData).BoneNames.ArrayNum) {
    do {
      uVar15 = (uint)uVar17;
      GetTransformRootSpace(this,uVar15,&local_228);
      local_168.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_168.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_168.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_168.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_168.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_168.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_168,&local_228,(TTransform<double> *)&this->_padding_);
      local_228.Rotation.XY.m128d_f64[0] = local_168.Rotation.XY.m128d_f64[0];
      local_228.Rotation.XY.m128d_f64[1] = local_168.Rotation.XY.m128d_f64[1];
      local_228.Rotation.ZW.m128d_f64[0] = local_168.Rotation.ZW.m128d_f64[0];
      local_228.Rotation.ZW.m128d_f64[1] = local_168.Rotation.ZW.m128d_f64[1];
      uVar12 = 0;
      if ((int)uVar15 < (this->CachedSkeletonData).BoneParents.ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      local_228.Translation.XY.m128d_f64[0] = local_168.Translation.XY.m128d_f64[0];
      local_228.Translation.XY.m128d_f64[1] = local_168.Translation.XY.m128d_f64[1];
      local_228.Translation.ZW.m128d_f64[0] = local_168.Translation.ZW.m128d_f64[0];
      local_228.Translation.ZW.m128d_f64[1] = local_168.Translation.ZW.m128d_f64[1];
      local_228.Scale3D.XY.m128d_f64[0] = local_168.Scale3D.XY.m128d_f64[0];
      local_228.Scale3D.XY.m128d_f64[1] = local_168.Scale3D.XY.m128d_f64[1];
      local_228.Scale3D.ZW.m128d_f64[0] = local_168.Scale3D.ZW.m128d_f64[0];
      local_228.Scale3D.ZW.m128d_f64[1] = local_168.Scale3D.ZW.m128d_f64[1];
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar14;
      }
      GetTransformRootSpace
                (this,*(int *)((this->CachedSkeletonData).BoneParents.AllocatorInstance.Data +
                              uVar18),&local_1c8);
      local_108.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_108.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_108.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_108.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_108.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_108.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_108,&local_1c8,(TTransform<double> *)&this->_padding_);
      local_278 = local_108.Translation.XY.m128d_f64[0];
      dStack_270 = local_108.Translation.XY.m128d_f64[1];
      local_268 = local_108.Translation.ZW.m128d_f64[0];
      local_1c8.Rotation.ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
      local_1c8.Rotation.ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
      local_1c8.Scale3D.ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0];
      local_1c8.Scale3D.ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1];
      dVar4 = local_108.Translation.ZW.m128d_f64[0] - local_228.Translation.ZW.m128d_f64[0];
      local_1c8.Rotation.XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
      local_1c8.Rotation.XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
      local_1c8.Scale3D.XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
      local_1c8.Scale3D.XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
      dVar6 = local_108.Translation.XY.m128d_f64[0] - local_228.Translation.XY.m128d_f64[0];
      local_260 = local_228.Translation.XY.m128d_f64[0];
      dStack_258 = local_228.Translation.XY.m128d_f64[1];
      dVar5 = local_108.Translation.XY.m128d_f64[1] - local_228.Translation.XY.m128d_f64[1];
      local_2d0._s_0.Z = dVar7;
      local_1c8.Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
      local_1c8.Translation.XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
      local_1c8.Translation.ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
      local_1c8.Translation.ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
      local_250 = local_228.Translation.ZW.m128d_f64[0];
      local_248 = dVar8;
      dStack_240 = dVar9;
      local_228.Scale3D.XY.m128d_f64[1] = dVar9;
      local_228.Scale3D.XY.m128d_f64[0] = dVar8;
      local_2b8._s_0.Z = (double)uVar10;
      local_2e8._s_0.Z = local_268;
      local_2d0._s_0.X = dVar8;
      local_2d0._s_0.Y = dVar9;
      local_2b8._s_0.X = 0.0;
      local_2b8._s_0.Y = 0.0;
      local_238 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4);
      local_2e8._s_0.X = local_278;
      local_2e8._s_0.Y = dStack_270;
      local_228.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_228.Scale3D.ZW.m128d_f64[0] = local_238;
      AnimationCore::SolveAim
                (&local_298,&local_228,(TVector<double> *)&local_2e8._s_0,
                 (TVector<double> *)&local_2b8._s_0,false,(TVector<double> *)&local_2d0._s_0,0.0);
      local_228.Rotation.XY.m128d_f64[1] = local_298.Y;
      local_228.Rotation.XY.m128d_f64[0] = local_298.X;
      pTVar2 = (TTransform<double> *)(__return_storage_ptr__->AllocatorInstance).Data;
      local_228.Rotation.ZW.m128d_f64[1] = local_298.W;
      local_228.Rotation.ZW.m128d_f64[0] = local_298.Z;
      if (((pTVar2 <= &local_228) && (&local_228 < pTVar2 + __return_storage_ptr__->ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar14;
      }
      iVar13 = __return_storage_ptr__->ArrayNum;
      if (iVar13 == __return_storage_ptr__->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar13 + 1;
      uVar17 = (ulonglong)(uVar15 + 1);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar16 = (longlong)iVar13 * 0x60;
      *(double *)(pFVar1 + lVar16) = local_228.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 8) = local_228.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x10) = local_228.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x10 + 8) = local_228.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x20) = local_228.Translation.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x20 + 8) = local_228.Translation.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x30) = local_228.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x30 + 8) = local_228.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x40) = local_228.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x40 + 8) = local_228.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x50) = local_228.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x50 + 8) = local_228.Scale3D.ZW.m128d_f64[1];
      uVar18 = uVar18 + 4;
    } while ((int)(uVar15 + 1) < (this->CachedSkeletonData).BoneNames.ArrayNum);
  }
  if (local_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data);
  }
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  return __return_storage_ptr__;
}

// GetJointTransforms @ 14d04e020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkDataPreviewComponent::GetJointTransforms
          (ULiveLinkDataPreviewComponent *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TTransform<double> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_148 [32];
  TTransform<double> *local_128;
  TTransform<double> *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  iVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_f8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  if (0 < (this->CachedSkeletonData).BoneNames.ArrayNum) {
    do {
      GetTransformRootSpace(this,iVar8,&local_f8);
      local_98.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_98.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_98.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_98.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_98.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_98.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_98,&local_f8,(TTransform<double> *)&this->_padding_);
      pTVar1 = (TTransform<double> *)(__return_storage_ptr__->AllocatorInstance).Data;
      local_f8.Rotation.XY.m128d_f64[0] = local_98.Rotation.XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] = local_98.Rotation.XY.m128d_f64[1];
      local_f8.Rotation.ZW.m128d_f64[0] = local_98.Rotation.ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] = local_98.Rotation.ZW.m128d_f64[1];
      local_f8.Translation.XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
      local_f8.Translation.XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
      local_f8.Translation.ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
      local_f8.Scale3D.XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
      local_f8.Scale3D.XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
      local_f8.Scale3D.ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0];
      local_f8.Scale3D.ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1];
      if ((pTVar1 <= &local_f8) && (&local_f8 < pTVar1 + __return_storage_ptr__->ArrayMax)) {
        local_110 = (longlong)__return_storage_ptr__->ArrayNum;
        local_108 = 0x60;
        local_128 = &local_f8;
        local_120 = pTVar1;
        local_118 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1060,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      iVar8 = iVar8 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar7 = (longlong)iVar5 * 0x60;
      *(double *)(pFVar2 + lVar7) = local_f8.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar2 + lVar7 + 8) = local_f8.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar2 + lVar7 + 0x10) = local_f8.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar2 + lVar7 + 0x10 + 8) = local_f8.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar2 + lVar7 + 0x20) = local_f8.Translation.XY.m128d_f64[0];
      *(double *)(pFVar2 + lVar7 + 0x20 + 8) = local_f8.Translation.XY.m128d_f64[1];
      *(double *)(pFVar2 + lVar7 + 0x30) = local_f8.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar2 + lVar7 + 0x30 + 8) = local_f8.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar2 + lVar7 + 0x40) = local_f8.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar2 + lVar7 + 0x40 + 8) = local_f8.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar2 + lVar7 + 0x50) = local_f8.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar2 + lVar7 + 0x50 + 8) = local_f8.Scale3D.ZW.m128d_f64[1];
    } while (iVar8 < (this->CachedSkeletonData).BoneNames.ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetLocatorPositions @ 14d04edc0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkDataPreviewComponent::GetLocatorPositions
          (ULiveLinkDataPreviewComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  bool bVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  UClass *pUVar8;
  undefined8 uVar9;
  longlong lVar10;
  UScriptStruct *pUVar11;
  FLiveLinkLocatorFrameData *pFVar12;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong *plVar14;
  longlong local_res8;
  UClass *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FStructOnScope local_78;
  FStructOnScope local_50;
  
  pIVar6 = IModularFeatures::Get();
  lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,ILiveLinkClient::ModularFeatureName,0);
  plVar14 = (longlong *)(lVar7 + -8);
  if (lVar7 == 0) {
    plVar14 = (longlong *)0x0;
  }
  (**(code **)(*plVar14 + 0xd0))(plVar14,&local_res8,(this->SubjectName).Name);
  lVar7 = local_res8;
  if ((local_res8 == 0) ||
     (pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar8 == (UClass *)0x0))
  goto LAB_14d04f0ef;
  iVar1 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar7 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar8->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_14d04f0ef;
  if (local_res8 != 0) {
    pcVar2 = *(code **)(*plVar14 + 0xe8);
    local_res18 = Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    cVar4 = (*pcVar2)(plVar14,(this->SubjectName).Name,&local_res18);
    if ((cVar4 != '\0') &&
       (cVar4 = (**(code **)(*plVar14 + 0x108))(plVar14,(this->SubjectName).Name), cVar4 != '\0')) {
      FStructOnScope::FStructOnScope(&local_78);
      FStructOnScope::FStructOnScope(&local_50);
      lVar7 = *plVar14;
      uVar9 = (**(code **)(lVar7 + 0xd0))(plVar14,local_res20,(this->SubjectName).Name);
      (**(code **)(lVar7 + 0x198))(plVar14,(this->SubjectName).Name,uVar9);
      lVar7 = (**(code **)(local_78._padding_ + 0x18))(&local_78);
      lVar10 = (**(code **)(local_78._padding_ + 0x20))(&local_78);
      if (lVar10 == 0) {
LAB_14d04ef90:
        pFVar12 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkLocatorFrameData>
                            ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_50);
LAB_14d04ef9c:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MarkerStaticData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Visualizers\\LiveLinkDataPreviewComponent.cpp"
                           ,0x141,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar13 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar13;
        }
      }
      else {
        pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar1) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar8->_padding_)) ||
           (pUVar11 = FLiveLinkLocatorStaticData::StaticStruct(), pUVar11 == (UScriptStruct *)0x0))
        goto LAB_14d04ef90;
        iVar1 = (int)pUVar11->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar11->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_14d04ef90;
        pFVar12 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkLocatorFrameData>
                            ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_50);
        if (lVar7 == 0) goto LAB_14d04ef9c;
      }
      if ((pFVar12 == (FLiveLinkLocatorFrameData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MarkerFrameData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Visualizers\\LiveLinkDataPreviewComponent.cpp"
                             ,0x142,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar13 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar13;
      }
      if (0 < (pFVar12->Locators).ArrayNum) {
        local_80 = (pFVar12->Locators).ArrayNum;
        lVar7 = (longlong)local_80;
        pFVar3 = (pFVar12->Locators).AllocatorInstance.Data;
        local_88.Data = (FScriptContainerElement *)0x0;
        if (local_80 == 0) {
          local_7c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_80,0,&local_88,local_80,&local_7c);
          memcpy(local_88.Data,pFVar3,lVar7 * 0x18);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar1 = (pFVar12->Locators).ArrayNum;
        pFVar3 = (pFVar12->Locators).AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = iVar1;
        if (iVar1 == 0) {
          __return_storage_ptr__->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                     &__return_storage_ptr__->ArrayMax);
          memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,(longlong)iVar1 * 0x18);
        }
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        FStructOnScope::~FStructOnScope(&local_50);
        FStructOnScope::~FStructOnScope(&local_78);
        return __return_storage_ptr__;
      }
      FStructOnScope::~FStructOnScope(&local_50);
      FStructOnScope::~FStructOnScope(&local_78);
      goto LAB_14d04f0ef;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
LAB_14d04f0ef:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d052430

UClass * __cdecl ULiveLinkDataPreviewComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDataPreviewComponent",
               &Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton,
               StaticRegisterNativesULiveLinkDataPreviewComponent,0xb20,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDataPreviewComponent>,
               InternalVTableHelperCtorCaller<ULiveLinkDataPreviewComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton;
}

// GetSingleTransform @ 14d054b20

TTransform<double> * __thiscall
ULiveLinkDataPreviewComponent::GetSingleTransform
          (ULiveLinkDataPreviewComponent *this,TTransform<double> *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  char cVar11;
  IModularFeatures *pIVar12;
  longlong lVar13;
  undefined8 uVar14;
  FLiveLinkTransformFrameData *pFVar15;
  longlong *plVar16;
  UClass *local_res8;
  FStructOnScope local_58;
  FStructOnScope local_30;
  
  pIVar12 = IModularFeatures::Get();
  lVar13 = (**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,ILiveLinkClient::ModularFeatureName,0);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  plVar16 = (longlong *)(lVar13 + -8);
  if (lVar13 == 0) {
    plVar16 = (longlong *)0x0;
  }
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  pcVar1 = *(code **)(*plVar16 + 0xe8);
  local_res8 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  cVar11 = (*pcVar1)(plVar16,(this->SubjectName).Name,&local_res8);
  if (cVar11 != '\0') {
    cVar11 = (**(code **)(*plVar16 + 0x108))(plVar16,(this->SubjectName).Name);
    if (cVar11 != '\0') {
      FStructOnScope::FStructOnScope(&local_58);
      FStructOnScope::FStructOnScope(&local_30);
      lVar13 = *plVar16;
      uVar14 = (**(code **)(lVar13 + 0xd0))(plVar16,&local_res8,(this->SubjectName).Name);
      (**(code **)(lVar13 + 0x198))(plVar16,(this->SubjectName).Name,uVar14,&local_58);
      pFVar15 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkTransformFrameData>
                          ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_30);
      dVar10 = (pFVar15->Transform).Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
           (pFVar15->Transform).Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
      dVar10 = (pFVar15->Transform).Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
           (pFVar15->Transform).Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
      dVar10 = (pFVar15->Transform).Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
           (pFVar15->Transform).Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
      dVar10 = (pFVar15->Transform).Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
           (pFVar15->Transform).Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar10;
      dVar10 = (pFVar15->Transform).Scale3D.XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
           (pFVar15->Transform).Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
      dVar10 = (pFVar15->Transform).Scale3D.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
           (pFVar15->Transform).Scale3D.ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar10;
      FStructOnScope::~FStructOnScope(&local_30);
      FStructOnScope::~FStructOnScope(&local_58);
    }
  }
  return __return_storage_ptr__;
}

// GetTransformRootSpace @ 14d057600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ULiveLinkDataPreviewComponent::GetTransformRootSpace
          (ULiveLinkDataPreviewComponent *this,int param_1,TTransform<double> *param_2)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [32];
  void *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  ForElementType<FSetElementId> local_168;
  int local_160;
  longlong local_158;
  longlong lStack_150;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined4 local_120;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  *&(param_2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  lVar9 = (longlong)param_1;
  local_1a8._0_8_ = (FScriptContainerElement *)0x0;
  local_1a8._8_8_ = 0;
  local_180 = ___xmm_00000000ffffffff0000008000000000;
  uStack_178 = _UNK_150631d98;
  local_188 = (void *)0x0;
  local_168 = (ForElementType<FSetElementId>)0x0;
  local_160 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)local_1a8,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&(this->CachedAnimationData)._padding_);
  local_140 = (int)(this->CachedAnimationData)._padding_;
  lVar7 = (longlong)local_140;
  _Src = (void *)(this->CachedAnimationData)._padding_;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_158 = (this->CachedAnimationData)._padding_;
  lStack_150 = (this->CachedAnimationData)._padding_;
  if (local_140 == 0) {
    local_13c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_140,0,&local_148,local_140,&local_13c);
    memcpy(local_148.Data,_Src,lVar7 << 2);
  }
  local_110 = (this->CachedAnimationData).Transforms.ArrayNum;
  lVar7 = (longlong)local_110;
  local_128 = (this->CachedAnimationData)._padding_;
  local_120 = (undefined4)(this->CachedAnimationData)._padding_;
  pFVar8 = (this->CachedAnimationData).Transforms.AllocatorInstance.Data;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_138 = (this->CachedAnimationData)._padding_;
  lStack_130 = (this->CachedAnimationData)._padding_;
  if (local_110 == 0) {
    local_10c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_110,0,&local_118,local_110,&local_10c);
    memcpy(local_118.Data,pFVar8,lVar7 * 0x60);
  }
  if ((param_1 < 0) || (local_110 <= param_1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  local_160 = 0;
  if (local_168 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1a8,0,local_1a8._8_4_);
  iVar1 = SUB84(local_1a8._8_8_,4);
  local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
  }
  uVar6 = local_180._4_4_;
  uStack_178 = 0xffffffff;
  local_180 = (ulonglong)local_180._4_4_ << 0x20;
  if (0x80 < uVar6) {
    local_180 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  if (!bVar5) {
    return;
  }
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->CachedRootSpaceTransforms).ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (this->CachedRootSpaceTransforms).AllocatorInstance.Data + lVar9 * 0x70;
  if (*pFVar8 != (FScriptContainerElement)0x0) {
    dVar4 = *(double *)(pFVar8 + 0x18);
    (param_2->Rotation).XY.m128d_f64[0] = *(double *)(pFVar8 + 0x10);
    (param_2->Rotation).XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)(pFVar8 + 0x28);
    (param_2->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x20);
    (param_2->Rotation).ZW.m128d_f64[1] = dVar4;
    dVar4 = *(double *)(pFVar8 + 0x38);
    (param_2->Translation).XY.m128d_f64[0] = *(double *)(pFVar8 + 0x30);
    (param_2->Translation).XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)(pFVar8 + 0x48);
    (param_2->Translation).ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x40);
    (param_2->Translation).ZW.m128d_f64[1] = dVar4;
    dVar4 = *(double *)(pFVar8 + 0x58);
    (param_2->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar8 + 0x50);
    (param_2->Scale3D).XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)(pFVar8 + 0x68);
    (param_2->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x60);
    (param_2->Scale3D).ZW.m128d_f64[1] = dVar4;
    return;
  }
  uVar6 = 0;
  if (param_1 < (this->CachedSkeletonData).BoneParents.ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = *(int *)((this->CachedSkeletonData).BoneParents.AllocatorInstance.Data + lVar9 * 4);
  uVar6 = 0;
  if (param_1 < (this->CachedAnimationData).Transforms.ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar15 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar16 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar17 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar18 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar19 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar20 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar21 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar22 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar2 = (this->CachedAnimationData).Transforms.AllocatorInstance.Data;
  local_108.Rotation.XY.m128d_f64[1] = (double)fVar12;
  local_108.Rotation.XY.m128d_f64[0] = (double)fVar11;
  local_108.Rotation.ZW.m128d_f64[1] = (double)fVar14;
  local_108.Rotation.ZW.m128d_f64[0] = (double)fVar13;
  local_108.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar16,0);
  local_108.Translation.XY.m128d_f64[0] = (double)fVar15;
  local_108.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
  local_108.Translation.ZW.m128d_f64[1] = (double)fVar18;
  local_108.Translation.ZW.m128d_f64[0] = (double)fVar17;
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar20,0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)fVar19;
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar20 >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1] = (double)fVar22;
  local_108.Scale3D.ZW.m128d_f64[0] = (double)fVar21;
  if (param_1 == 0) {
    if ((this->CachedSkeletonData).BoneParents.ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar19 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar20 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar21 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar22 = GlobalVectorConstants::Float1110.m128_f32[3];
      fVar15 = GlobalVectorConstants::FloatZero.m128_f32[0];
      fVar16 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar17 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar18 = GlobalVectorConstants::FloatZero.m128_f32[3];
      fVar11 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar12 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar13 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
    }
    if (*(int *)(this->CachedSkeletonData).BoneParents.AllocatorInstance.Data == 0) {
      local_108.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_108.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_108.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_108.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      goto LAB_14d057ae2;
    }
  }
  GetTransformRootSpace(this,iVar1,&local_108);
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar15 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar16 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar17 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar18 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar19 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar20 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar21 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar22 = GlobalVectorConstants::Float1110.m128_f32[3];
LAB_14d057ae2:
  local_a8.Rotation.XY.m128d_f64[0] = (double)fVar11;
  local_a8.Rotation.XY.m128d_f64[1] = (double)fVar12;
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar13;
  local_a8.Rotation.ZW.m128d_f64[1] = (double)fVar14;
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar17;
  local_a8.Translation.ZW.m128d_f64[1] = (double)fVar18;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar16,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar15;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar21;
  local_a8.Scale3D.ZW.m128d_f64[1] = (double)fVar22;
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar20,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar19;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar20 >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_a8,(TTransform<double> *)(pFVar2 + lVar9 * 0x60),&local_108);
  (param_2->Rotation).XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
  (param_2->Rotation).XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
  (param_2->Rotation).ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
  (param_2->Rotation).ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
  (param_2->Translation).XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
  (param_2->Translation).XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
  (param_2->Translation).ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
  (param_2->Translation).ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
  (param_2->Scale3D).XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
  (param_2->Scale3D).XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
  (param_2->Scale3D).ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
  (param_2->Scale3D).ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
  *pFVar8 = (FScriptContainerElement)0x1;
  dVar4 = (param_2->Rotation).XY.m128d_f64[1];
  *(double *)(pFVar8 + 0x10) = (param_2->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar8 + 0x18) = dVar4;
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar8 + 0x20) = (param_2->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar8 + 0x28) = dVar4;
  dVar4 = (param_2->Translation).XY.m128d_f64[1];
  *(double *)(pFVar8 + 0x30) = (param_2->Translation).XY.m128d_f64[0];
  *(double *)(pFVar8 + 0x38) = dVar4;
  dVar4 = (param_2->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar8 + 0x40) = (param_2->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar8 + 0x48) = dVar4;
  dVar4 = (param_2->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar8 + 0x50) = (param_2->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar8 + 0x58) = dVar4;
  dVar4 = (param_2->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar8 + 0x60) = (param_2->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar8 + 0x68) = dVar4;
  return;
}

// IsValidTransformIndex @ 14d060a90

bool __cdecl
ULiveLinkDataPreviewComponent::IsValidTransformIndex
          (int param_1,FLiveLinkAnimationFrameData *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  if ((param_1 < 0) || ((param_2->Transforms).ArrayNum <= param_1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pFVar1 = (param_2->Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)param_2->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_2->_padding_);
  }
  *(undefined4 *)&param_2->_padding_ = 0;
  if ((void *)param_2->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_2->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_2->_padding_);
  return bVar2;
}

// OnRegister @ 14d06ace0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ULiveLinkDataPreviewComponent::OnRegister(ULiveLinkDataPreviewComponent *this)

{
  UInstancedStaticMeshComponent::OnRegister((UInstancedStaticMeshComponent *)this);
  (**(code **)(this->_padding_ + 0xc38))(this);
  this->bIsDirty = true;
  return;
}

// OnUnregister @ 14d06bcf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ULiveLinkDataPreviewComponent::OnUnregister(ULiveLinkDataPreviewComponent *this)

{
  UInstancedStaticMeshComponent::OnUnregister((UInstancedStaticMeshComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x00014d06bd09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc38))(this);
  return;
}

// StaticRegisterNativesULiveLinkDataPreviewComponent @ 14d080740

void __cdecl ULiveLinkDataPreviewComponent::StaticRegisterNativesULiveLinkDataPreviewComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ULiveLinkDataPreviewComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14d082790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ULiveLinkDataPreviewComponent::TickComponent
          (ULiveLinkDataPreviewComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  AActor *pAVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  UClass *pUVar10;
  undefined8 uVar11;
  FLiveLinkSkeletonStaticData *pFVar12;
  FLiveLinkAnimationFrameData *pFVar13;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  TTransform<double> *pTVar15;
  UWorld *pUVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 auStackY_3a8 [32];
  ForAnyElementType local_368;
  undefined8 local_360;
  longlong local_358;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_350;
  UClass *local_340;
  UClass *local_338;
  UClass *local_330;
  FString local_328;
  undefined1 local_318 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_310;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_300;
  TVector<double>_u_0 local_2f0;
  FStructOnScope local_2d8;
  FStructOnScope local_2b0;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pIVar8 = IModularFeatures::Get();
  lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,ILiveLinkClient::ModularFeatureName,0);
  plVar18 = (longlong *)0x0;
  plVar19 = (longlong *)(lVar9 + -8);
  if (lVar9 == 0) {
    plVar19 = plVar18;
  }
  (**(code **)(*plVar19 + 0xd0))(plVar19,&local_358,(this->SubjectName).Name);
  lVar9 = local_358;
  if ((local_358 == 0) ||
     (pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar10 == (UClass *)0x0))
  goto LAB_14d082e81;
  iVar6 = (int)pUVar10->_padding_;
  if ((*(int *)(lVar9 + 0x38) < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar10->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((!bVar5) || (local_358 == 0)) || (this->bIsDirty != false)) goto LAB_14d082e81;
  pcVar2 = *(code **)(*plVar19 + 0xe8);
  local_340 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_340 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_340);
  }
  cVar4 = (*pcVar2)(plVar19,(this->SubjectName).Name,&local_340);
  if (cVar4 == '\0') {
    pcVar2 = *(code **)(*plVar19 + 0xe8);
    local_338 = Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_338 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_338);
    }
    cVar4 = (*pcVar2)(plVar19,(this->SubjectName).Name,&local_338);
    if ((cVar4 == '\0') || (this->bEvaluateLiveLink == false)) {
      pcVar2 = *(code **)(*plVar19 + 0xe8);
      local_330 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_330 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_330);
      }
      cVar4 = (*pcVar2)(plVar19,(this->SubjectName).Name,&local_330);
      if ((cVar4 == '\0') || (this->bEvaluateLiveLink == false)) goto LAB_14d082e81;
      pcVar2 = *(code **)(this->_padding_ + 0xc10);
      pTVar15 = GetSingleTransform(this,&local_108);
      local_168.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_168.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_168.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_168.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_168.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_168.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_168,pTVar15,(TTransform<double> *)&this->_padding_);
      (*pcVar2)(this,0,1,&local_168);
      if (this->bDrawLabels == false) goto LAB_14d082e81;
      pTVar15 = GetSingleTransform(this,&local_a8);
      local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_1c8,pTVar15,(TTransform<double> *)&this->_padding_);
      pUVar16 = (UWorld *)this->_padding_;
      local_2f0._s_0.Z = local_1c8.Translation.ZW.m128d_f64[0];
      local_2f0._s_0.X = local_1c8.Translation.XY.m128d_f64[0];
      local_2f0._s_0.Y = local_1c8.Translation.XY.m128d_f64[1];
      if (pUVar16 == (UWorld *)0x0) {
        pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      pAVar3 = (AActor *)this->_padding_;
      ::FString::FString(&local_328,L"this is some text");
      DrawDebugString(pUVar16,(TVector<double> *)&local_2f0._s_0,&local_328,pAVar3,&FColor::Red,
                      __real_3f800000,false,__real_3f800000);
    }
    else {
      local_368.Data = (FScriptContainerElement *)0x0;
      local_360 = 0;
      GetLocatorPositions(this,&local_350);
      plVar19 = plVar18;
      if (0 < local_350.ArrayNum) {
        do {
          uVar17 = (uint)plVar18;
          uVar7 = 0;
          if ((int)uVar17 < local_350.ArrayNum) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          local_228.Translation.ZW.m128d_f64[0] =
               *(double *)((longlong)(plVar19 + 2) + local_350.AllocatorInstance.Data);
          local_228.Translation.XY.m128d_f64[0] =
               *(double *)((longlong)plVar19 + local_350.AllocatorInstance.Data);
          local_228.Translation.XY.m128d_f64[1] =
               *(double *)((longlong)plVar19 + local_350.AllocatorInstance.Data + 8);
          local_228.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_228.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_228.Translation.ZW.m128d_f64[1] = 0.0;
          local_288.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_288.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_228.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_228.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_288.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_288.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_288.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_288.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_288.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_288.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_288.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_288.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_288.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_288.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_288.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_288.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_288,&local_228,(TTransform<double> *)&this->_padding_);
          iVar6 = (int)local_360;
          if ((int)local_360 == local_360._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&local_368,(int *)((longlong)&local_360 + 4));
          }
          local_360 = CONCAT44(local_360._4_4_,iVar6 + 1);
          plVar18 = (longlong *)(ulonglong)(uVar17 + 1);
          lVar9 = (longlong)iVar6 * 0x60;
          *(double *)(local_368.Data + lVar9) = local_288.Rotation.XY.m128d_f64[0];
          *(double *)(local_368.Data + lVar9 + 8) = local_288.Rotation.XY.m128d_f64[1];
          *(double *)(local_368.Data + lVar9 + 0x10) = local_288.Rotation.ZW.m128d_f64[0];
          *(double *)(local_368.Data + lVar9 + 0x10 + 8) = local_288.Rotation.ZW.m128d_f64[1];
          *(double *)(local_368.Data + lVar9 + 0x20) = local_288.Translation.XY.m128d_f64[0];
          *(double *)(local_368.Data + lVar9 + 0x20 + 8) = local_288.Translation.XY.m128d_f64[1];
          *(double *)(local_368.Data + lVar9 + 0x30) = local_288.Translation.ZW.m128d_f64[0];
          *(double *)(local_368.Data + lVar9 + 0x30 + 8) = local_288.Translation.ZW.m128d_f64[1];
          pFVar1 = local_368.Data + lVar9 + 0x40;
          *(undefined4 *)pFVar1 = local_288.Scale3D.XY.m128d_f64[0]._0_4_;
          *(undefined4 *)(pFVar1 + 4) = local_288.Scale3D.XY.m128d_f64[0]._4_4_;
          *(undefined4 *)(pFVar1 + 8) = local_288.Scale3D.XY.m128d_f64[1]._0_4_;
          *(undefined4 *)(pFVar1 + 0xc) = local_288.Scale3D.XY.m128d_f64[1]._4_4_;
          *(double *)(local_368.Data + lVar9 + 0x50) = local_288.Scale3D.ZW.m128d_f64[0];
          *(double *)(local_368.Data + lVar9 + 0x50 + 8) = local_288.Scale3D.ZW.m128d_f64[1];
          plVar19 = plVar19 + 3;
        } while ((int)(uVar17 + 1) < local_350.ArrayNum);
      }
      (**(code **)(this->_padding_ + 0xc08))(this,0,&local_368,1);
      local_328.Data.AllocatorInstance.Data = local_368.Data;
      if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.AllocatorInstance.Data);
        local_328.Data.AllocatorInstance.Data = local_368.Data;
      }
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    goto LAB_14d082e81;
  }
  cVar4 = (**(code **)(*plVar19 + 0x108))(plVar19,(this->SubjectName).Name);
  if (cVar4 == '\0') goto LAB_14d082e81;
  FStructOnScope::FStructOnScope(&local_2d8);
  FStructOnScope::FStructOnScope(&local_2b0);
  lVar9 = *plVar19;
  uVar11 = (**(code **)(lVar9 + 0xd0))(plVar19,local_318,(this->SubjectName).Name);
  (**(code **)(lVar9 + 0x198))(plVar19,(this->SubjectName).Name,uVar11,&local_2d8);
  pFVar12 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                      ((FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_2d8);
  pFVar13 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                      ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_2b0);
  if ((pFVar12 == (FLiveLinkSkeletonStaticData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkeletonStaticData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Visualizers\\LiveLinkDataPreviewComponent.cpp"
                         ,0x30,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar13 == (FLiveLinkAnimationFrameData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimationFrameData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Visualizers\\LiveLinkDataPreviewComponent.cpp"
                         ,0x31,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  CacheSkeletalAnimationData(this,pFVar12,pFVar13);
  iVar6 = UInstancedStaticMeshComponent::GetInstanceCount((UInstancedStaticMeshComponent *)this);
  if (iVar6 < 1) {
    CreateInstances(this);
  }
  if (this->bEvaluateLiveLink != false) {
    if (this->BoneVisualType == Joint) {
      pcVar2 = *(code **)(this->_padding_ + 0xc08);
      pTVar14 = GetJointTransforms(this,&local_300);
      (*pcVar2)(this,0,pTVar14,1);
      local_310.AllocatorInstance.Data = local_300.AllocatorInstance.Data;
    }
    else {
      if (this->BoneVisualType != Bone) goto LAB_14d082a1d;
      pcVar2 = *(code **)(this->_padding_ + 0xc08);
      pTVar14 = GetBoneTransforms(this,&local_310);
      (*pcVar2)(this,0,pTVar14,1);
    }
    if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.AllocatorInstance.Data);
    }
  }
LAB_14d082a1d:
  FStructOnScope::~FStructOnScope(&local_2b0);
  FStructOnScope::~FStructOnScope(&local_2d8);
LAB_14d082e81:
  if (this->bIsDirty != false) {
    CreateInstances(this);
  }
  return;
}

// execSetDrawLabels @ 14d08f690

void __cdecl
ULiveLinkDataPreviewComponent::execSetDrawLabels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
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
  param_1[0x40].field_0x9 = local_res8[0] != 0;
  return;
}

// execSetEvaluateLiveLinkData @ 14d08f8c0

void __cdecl
ULiveLinkDataPreviewComponent::execSetEvaluateLiveLinkData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
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
  param_1[0x40].field_0x8 = local_res8[0] != 0;
  return;
}

