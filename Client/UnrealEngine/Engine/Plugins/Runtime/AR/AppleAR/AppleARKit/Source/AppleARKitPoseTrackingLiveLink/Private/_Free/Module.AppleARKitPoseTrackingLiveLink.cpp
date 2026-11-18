// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 29

// `dynamic_initializer_for_'LogAppleARKitPoseTracking'' @ 1413c4640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAppleARKitPoseTracking__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAppleARKitPoseTracking,L"LogAppleARKitPoseTracking",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAppleARKitPoseTracking__);
  return;
}

// `dynamic_initializer_for_'LogMrMesh'' @ 1413c4680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMrMesh__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMrMesh,L"LogMrMesh",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogMrMesh__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAppleARKitPoseTrackingLiveLink'' @ 1413c46c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAppleARKitPoseTrackingLiveLink__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AppleARKitPoseTrackingLiveLink";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AppleARKitPoseTrackingLiveLink",0x1e);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAppleARKitPoseTrackingLiveLinkModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'PoseTrackingLiveLinkInstance'' @ 1413c4710

void __cdecl _dynamic_initializer_for__PoseTrackingLiveLinkInstance__(void)

{
  atexit(_dynamic_atexit_destructor_for__PoseTrackingLiveLinkInstance__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKitPoseTrackingLiveLink_Private_AppleARKitPoseTrackingLiveLinkRemapAsset_h__Script_AppleARKitPoseTrackingLiveLink_734314190'' @ 1413c4730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKitPoseTrackingLiveLink_Private_AppleARKitPoseTrackingLiveLinkRemapAsset_h__Script_AppleARKitPoseTrackingLiveLink_734314190__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKitPoseTrackingLiveLink",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKitPoseTrackingLiveLink_Private_AppleARKitPoseTrackingLiveLinkRemapAsset_h__Script_AppleARKitPoseTrackingLiveLink_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AppleARKitPoseTrackingLiveLink'' @ 1413c4770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AppleARKitPoseTrackingLiveLink__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x871967cc;
  local_res8[0].DeclarationsHash = 0x9033bda0;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AppleARKitPoseTrackingLiveLink,
             L"/Script/AppleARKitPoseTrackingLiveLink",
             &Z_Registration_Info_UPackage__Script_AppleARKitPoseTrackingLiveLink,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14cfe2e80

void * __thiscall
FAppleARKitPoseTrackingLiveLinkModule::_scalar_deleting_destructor_
          (FAppleARKitPoseTrackingLiveLinkModule *this,uint param_1)

{
  *(undefined ***)this = IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UPackage__Script_AppleARKitPoseTrackingLiveLink @ 14cfe2ec0

UPackage * __cdecl Z_Construct_UPackage__Script_AppleARKitPoseTrackingLiveLink(void)

{
  if (Z_Registration_Info_UPackage__Script_AppleARKitPoseTrackingLiveLink.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AppleARKitPoseTrackingLiveLink.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AppleARKitPoseTrackingLiveLink.OuterSingleton;
}

// Z_Construct_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset @ 14cfe2fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.OuterSingleton
      == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.
                OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.
         OuterSingleton;
}

// InternalConstructor<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset> @ 14cfe3070

void __cdecl
InternalConstructor<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset>
          (FObjectInitializer *param_1)

{
  if ((UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *)param_1->Obj !=
      (UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *)0x0) {
    UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::
    UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset
              ((UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset> @ 14cfe3090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    ULiveLinkRetargetAsset::ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0xbff0000000000000;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0x3ff0000000000000;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14cfe4260

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAppleARKitPoseTrackingLiveLink,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAppleARKitPoseTrackingLiveLink,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfe42a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppleARKitPoseTrackingLiveLinkSource,SharedPointerInternals::DefaultDeleter<FAppleARKitPoseTrackingLiveLinkSource>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAppleARKitPoseTrackingLiveLinkSource,SharedPointerInternals::DefaultDeleter<FAppleARKitPoseTrackingLiveLinkSource>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfe42e0

void * __thiscall
FAppleARKitPoseTrackingLiveLink::_scalar_deleting_destructor_
          (FAppleARKitPoseTrackingLiveLink *this,uint param_1)

{
  ~FAppleARKitPoseTrackingLiveLink(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfe4320

void * __thiscall
FAppleARKitPoseTrackingLiveLinkSource::_scalar_deleting_destructor_
          (FAppleARKitPoseTrackingLiveLinkSource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAppleARKitPoseTrackingLiveLinkSource__6B_;
  pFVar1 = (this->RefTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfe4380

void * __thiscall ILiveLinkSource::_scalar_deleting_destructor_(ILiveLinkSource *this,uint param_1)

{
  *this = (ILiveLinkSource)&___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfe43c0

void * __thiscall
ILiveLinkSourceARKitPoseTracking::_scalar_deleting_destructor_
          (ILiveLinkSourceARKitPoseTracking *this,uint param_1)

{
  *this = (ILiveLinkSourceARKitPoseTracking)&___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfe4400

void * __thiscall
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::_scalar_deleting_destructor_
          (UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset__6B_;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AppleARKitBoneNamesToMeshBoneNames);
  ULiveLinkRetargetAsset::~ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitPoseTrackingLiveLinkRemapAsset @ 14cfe56a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitPoseTrackingLiveLinkRemapAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitPoseTrackingLiveLink_init @ 14cfe56b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitPoseTrackingLiveLink_init(void)

{
  return;
}

// GetAppleBoneToComponentTransform @ 14cfe56c0

TTransform<double> * __cdecl
GetAppleBoneToComponentTransform
          (TTransform<double> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  while( true ) {
    if (param_3 < 0) {
      UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      return __return_storage_ptr__;
    }
    uVar3 = 0;
    if (param_3 < param_2->ArrayNum) {
      uVar3 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,__return_storage_ptr__,
               (TTransform<double> *)
               ((param_2->AllocatorInstance).Data + (ulonglong)(uint)param_3 * 0x60));
    uVar3 = 0;
    if (param_3 < param_1->ArrayNum) {
      uVar3 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
    param_3 = *(int *)((param_1->AllocatorInstance).Data + (ulonglong)(uint)param_3 * 4);
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTransform<double> *)(*pcVar1)();
  return pTVar4;
}

// GetAppleBoneToComponentTransformFromFrameData @ 14cfe5810

TTransform<double> * __cdecl
GetAppleBoneToComponentTransformFromFrameData
          (TTransform<double> *__return_storage_ptr__,FLiveLinkSkeletonStaticData *param_1,
          FLiveLinkAnimationFrameData *param_2,int param_3)

{
  GetAppleBoneToComponentTransform
            (__return_storage_ptr__,&param_1->BoneParents,&param_2->Transforms,param_3);
  return __return_storage_ptr__;
}

// GetAppleBoneToComponentTransformFromRefSkeleton @ 14cfe5840

TTransform<double> * __cdecl
GetAppleBoneToComponentTransformFromRefSkeleton
          (TTransform<double> *__return_storage_ptr__,FLiveLinkSkeletonStaticData *param_1,
          int param_2)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  int *piVar6;
  
  pIVar2 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                  ::__l2::FeatureName,L"AppleARKitPoseTrackingLiveLink");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if ((*piVar6 < `public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"AppleARKitPoseTrackingLiveLink");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar5 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar5 = (longlong *)0x0;
    }
    pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (**(code **)(*plVar5 + 8))();
    if (pTVar4 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      GetAppleBoneToComponentTransform(__return_storage_ptr__,&param_1->BoneParents,pTVar4,param_2);
      return __return_storage_ptr__;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetRefMeshBoneToComponent @ 14cfe5b90

TTransform<double> * __cdecl
GetRefMeshBoneToComponent
          (TTransform<double> *__return_storage_ptr__,FCompactPose *param_1,int param_2)

{
  ushort uVar1;
  longlong *plVar2;
  ushort *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  uint uVar8;
  ushort *puVar9;
  longlong *plVar10;
  
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (param_2 < 0) {
    return __return_storage_ptr__;
  }
  while( true ) {
    plVar2 = *(longlong **)&param_1->field_0x10;
    puVar3 = (ushort *)*plVar2;
    puVar9 = puVar3;
    while( true ) {
      if (puVar9 == puVar3 + (int)plVar2[1]) {
        return __return_storage_ptr__;
      }
      if ((uint)*puVar9 == param_2) break;
      puVar9 = puVar9 + 1;
    }
    uVar8 = (uint)((longlong)puVar9 - (longlong)puVar3 >> 1);
    if (uVar8 == 0xffffffff) break;
    if (plVar2[0x1d] == 0) {
      plVar10 = (longlong *)(plVar2[9] + 0x30);
    }
    else {
      plVar10 = (longlong *)(plVar2[0x1d] + 0x10);
    }
    uVar6 = 0;
    if ((int)uVar8 < (int)plVar2[1]) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar4)();
      return pTVar7;
    }
    uVar1 = *(ushort *)(*plVar2 + (longlong)(int)uVar8 * 2);
    if (((int)plVar10[1] <= (int)(uint)uVar1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar4)();
      return pTVar7;
    }
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,__return_storage_ptr__,
               (TTransform<double> *)((ulonglong)uVar1 * 0x60 + *plVar10));
    param_2 = FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&param_1->field_0x10,param_2);
    if (param_2 < 0) {
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset_NoRegister @ 14cfe6dd0

UClass * __cdecl
Z_Construct_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitPoseTrackingLiveLink",L"AppleARKitPoseTrackingLiveLinkRemapAsset"
               ,&Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.
                 InnerSingleton,
               UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::
               StaticRegisterNativesUDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset,0xa8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset>,
               InternalVTableHelperCtorCaller<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset>,
               local_res8,ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.
         InnerSingleton;
}

// IMPLEMENT_MODULE_AppleARKitPoseTrackingLiveLink @ 14cfe6e90

void __cdecl IMPLEMENT_MODULE_AppleARKitPoseTrackingLiveLink(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAppleARKitPoseTracking'' @ 150455440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAppleARKitPoseTracking__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAppleARKitPoseTracking);
  return;
}

// `dynamic_atexit_destructor_for_'LogMrMesh'' @ 150455460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMrMesh__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMrMesh);
  return;
}

// `dynamic_atexit_destructor_for_'PoseTrackingLiveLinkInstance'' @ 150455480

void __cdecl _dynamic_atexit_destructor_for__PoseTrackingLiveLinkInstance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (PoseTrackingLiveLinkInstance.SharedReferenceCount.ReferenceController);
  return;
}

