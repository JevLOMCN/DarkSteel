// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticClass @ 14e11b7c0

UClass * __cdecl UOptimusSkinWeightsAsVertexMaskDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinWeightsAsVertexMaskDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.
                InnerSingleton,StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataProvider,0xd8
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSkinWeightsAsVertexMaskDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinWeightsAsVertexMaskDataProvider>,
               local_res8,UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.InnerSingleton;
}

// UOptimusSkinWeightsAsVertexMaskDataProvider @ 14e15cf20

UOptimusSkinWeightsAsVertexMaskDataProvider * __thiscall
UOptimusSkinWeightsAsVertexMaskDataProvider::UOptimusSkinWeightsAsVertexMaskDataProvider
          (UOptimusSkinWeightsAsVertexMaskDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkeletalMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  (this->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneNames).ArrayNum = 0;
  (this->BoneNames).ArrayMax = 0;
  this->ExpandTowardsRoot = 0;
  this->ExpandTowardsLeaf = 0;
  this->bDebugDrawIncludedBones = false;
  (this->DebugDrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  *(undefined8 *)&(this->CachedSelectedBones).Elements = 0;
  *(undefined8 *)&(this->CachedSelectedBones).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedSelectedBones).Elements.field_0x20 = 0;
  this->bIsInitialized = false;
  *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x34 = 0;
  (this->CachedSelectedBones).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedSelectedBones).HashSize = 0;
  (this->CachedBoneIsSelectedPerSectionPerLod).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedBoneIsSelectedPerSectionPerLod).ArrayNum = 0;
  (this->CachedBoneIsSelectedPerSectionPerLod).ArrayMax = 0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakDataInterface).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UOptimusSkinWeightsAsVertexMaskDataProvider @ 14e15cff0

UOptimusSkinWeightsAsVertexMaskDataProvider * __thiscall
UOptimusSkinWeightsAsVertexMaskDataProvider::UOptimusSkinWeightsAsVertexMaskDataProvider
          (UOptimusSkinWeightsAsVertexMaskDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkeletalMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  (this->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneNames).ArrayNum = 0;
  (this->BoneNames).ArrayMax = 0;
  this->ExpandTowardsRoot = 0;
  this->ExpandTowardsLeaf = 0;
  this->bDebugDrawIncludedBones = false;
  (this->DebugDrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  *(undefined8 *)&(this->CachedSelectedBones).Elements = 0;
  *(undefined8 *)&(this->CachedSelectedBones).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedSelectedBones).Elements.field_0x20 = 0;
  this->bIsInitialized = false;
  *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x34 = 0;
  (this->CachedSelectedBones).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedSelectedBones).HashSize = 0;
  (this->CachedBoneIsSelectedPerSectionPerLod).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedBoneIsSelectedPerSectionPerLod).ArrayNum = 0;
  (this->CachedBoneIsSelectedPerSectionPerLod).ArrayMax = 0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakDataInterface).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UOptimusSkinWeightsAsVertexMaskDataProvider @ 14e163fa0

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataProvider::~UOptimusSkinWeightsAsVertexMaskDataProvider
          (UOptimusSkinWeightsAsVertexMaskDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  DestructItems<TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
             )(this->CachedBoneIsSelectedPerSectionPerLod).AllocatorInstance.Data,
             (this->CachedBoneIsSelectedPerSectionPerLod).ArrayNum);
  pFVar1 = (this->CachedBoneIsSelectedPerSectionPerLod).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CachedSelectedBones).HashSize = 0;
  FVar2 = (this->CachedSelectedBones).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedSelectedBones).Elements);
  pFVar1 = (this->BoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusDeformerInstanceAccessor__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d90c0

UClass * __cdecl UOptimusSkinWeightsAsVertexMaskDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinWeightsAsVertexMaskDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.
                InnerSingleton,StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataProvider,0xd8
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSkinWeightsAsVertexMaskDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinWeightsAsVertexMaskDataProvider>,
               local_res8,UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dda00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusSkinWeightsAsVertexMaskDataProvider::GetRenderProxy
          (UOptimusSkinWeightsAsVertexMaskDataProvider *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  FComputeDataProviderRenderProxy *pFVar4;
  undefined1 *puVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  FComputeDataProviderRenderProxy FVar9;
  FName FVar10;
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar11;
  ForElementType<FSetElementId> FVar12;
  code *pcVar13;
  UOptimusSkinWeightsAsVertexMaskDataProvider *pUVar14;
  ForAnyElementType FVar15;
  TArray<TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  UObject *pUVar20;
  UOptimusDeformerInstance *this_00;
  FName *pFVar21;
  FComputeDataProviderRenderProxy *pFVar22;
  TValueOrError<FName,EPropertyBagResult> *pTVar23;
  USkeletalMeshComponent *pUVar24;
  USkinnedMeshComponent *this_01;
  USkinnedAsset *pUVar25;
  longlong lVar26;
  TTuple<FName,int> *pTVar27;
  uint *puVar28;
  uint uVar29;
  ForElementType<FSetElementId> FVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  uint *puVar34;
  UOptimusSkinWeightsAsVertexMaskDataProvider *pUVar35;
  uint *puVar36;
  ulonglong uVar37;
  FName *pFVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  ForAnyElementType *pFVar41;
  uint uVar42;
  uint *puVar43;
  longlong *plVar44;
  UOptimusSkinWeightsAsVertexMaskDataProvider *pUVar45;
  uint *puVar46;
  undefined1 auStackY_278 [32];
  bool local_228;
  byte local_227;
  undefined1 local_226 [2];
  uint local_224;
  ForAnyElementType local_220;
  int local_218 [2];
  UOptimusSkinWeightsAsVertexMaskDataProvider *local_210;
  uint local_208 [2];
  ForAnyElementType local_200;
  int local_1f8 [2];
  undefined4 local_1f0;
  uint local_1ec;
  uint local_1e8;
  FComputeDataProviderRenderProxy *local_1e0;
  uint local_1d8;
  undefined1 local_1d4;
  longlong local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  int local_1b0;
  FScriptContainerElement local_1ac [4];
  FScriptContainerElement local_1a8 [4];
  undefined4 local_1a4;
  FScriptContainerElement local_1a0 [4];
  int local_19c;
  FScriptContainerElement *local_198;
  longlong local_190;
  TArray<TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_188;
  int *local_180;
  FComputeDataProviderRenderProxy local_178;
  FInstancedStruct local_170;
  FInstancedStruct local_160;
  FInstancedStruct local_150;
  FInstancedStruct local_140;
  FInstancedStruct local_130;
  FSparseArrayAllocationInfo local_120;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  int local_c0;
  byte local_bc;
  int local_b8;
  byte local_b4;
  FName local_b0;
  byte local_a8;
  TValueOrError<FName,EPropertyBagResult> local_a4;
  TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> local_98;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this;
  local_1e0 = ::operator_new(0x48);
  uVar37 = 0;
  if (local_1e0 == (FComputeDataProviderRenderProxy *)0x0) {
    local_1e0 = (FComputeDataProviderRenderProxy *)0x0;
  }
  else {
    local_1e0[1] = (FComputeDataProviderRenderProxy)0x0;
    *local_1e0 = (FComputeDataProviderRenderProxy)
                 &___7FOptimusSkinWeightsAsVertexMaskDataProviderProxy__6B_;
    local_1e0[2] = (FComputeDataProviderRenderProxy)0x0;
    local_1e0[3] = (FComputeDataProviderRenderProxy)0x0;
    local_1e0[4] = (FComputeDataProviderRenderProxy)0x0;
    local_1e0[5] = (FComputeDataProviderRenderProxy)0x0;
    local_1e0[6] = (FComputeDataProviderRenderProxy)0x0;
    local_1e0[7] = (FComputeDataProviderRenderProxy)0x0;
    local_1e0[8] = (FComputeDataProviderRenderProxy)0x0;
  }
  pFVar22 = local_1e0;
  pUVar20 = FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
  if ((pUVar20 != (UObject *)0x0) &&
     (pUVar20 = FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr),
     *(longlong *)&pUVar20[0x33].field_0x18 != 0)) {
    pUVar20 = FWeakObjectPtr::Get(&(this->WeakDataInterface).WeakPtr);
    this_00 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->WeakDeformerInstance).WeakPtr)
    ;
    if ((this_00 != (UOptimusDeformerInstance *)0x0) && (pUVar20 != (UObject *)0x0)) {
      pFVar21 = ::FName::FName(&local_110,0x11,L"SkinWeightProfile",FNAME_Add);
      UOptimusDeformerInstance::GetDataInterfacePropertyOverride
                (this_00,(FOptimusValueContainerStruct *)&local_170,(UComputeDataInterface *)pUVar20
                 ,*pFVar21);
      pFVar21 = ::FName::FName(&local_108,FOptimusValueContainerStruct::ValuePropertyName);
      FInstancedPropertyBag::GetValueName
                ((FInstancedPropertyBag *)&local_170,
                 (TValueOrError<FName,EPropertyBagResult> *)&local_b0,*pFVar21);
      uVar32 = (ulonglong)local_a8;
      if ((2 < uVar32) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
        return pFVar22;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar32) != '\0') {
        if ((local_a8 != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
          return pFVar22;
        }
        this->SkinWeightProfile = local_b0;
      }
      FInstancedStruct::Reset(&local_170);
      pFVar21 = ::FName::FName(&local_100,9,L"BoneNames",FNAME_Add);
      UOptimusDeformerInstance::GetDataInterfacePropertyOverride
                (this_00,(FOptimusValueContainerStruct *)&local_160,(UComputeDataInterface *)pUVar20
                 ,*pFVar21);
      pFVar21 = ::FName::FName(&local_f8,FOptimusValueContainerStruct::ValuePropertyName);
      FInstancedPropertyBag::GetArrayRef((FInstancedPropertyBag *)&local_160,&local_98,*pFVar21);
      uVar32 = (ulonglong)local_98.Variant.TypeIndex;
      if ((2 < uVar32) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
        return pFVar22;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar32 + 4) != '\0') {
        local_220.Data = (FScriptContainerElement *)0x0;
        local_218[0] = 0;
        local_218[1] = 0;
        iVar19 = 0;
        if (local_98.Variant.TypeIndex != 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L"");
          if (bVar17) {
            pcVar13 = (code *)swi(3);
            pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
            return pFVar22;
          }
          iVar19 = local_218[0];
        }
        uVar40 = *(uint *)(local_98.Variant._padding_ + 8);
        if (iVar19 < (int)uVar40) {
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,4,uVar40 - iVar19,&local_220,local_218,local_218 + 1);
          memset(local_220.Data + (longlong)iVar18 * 8,0,(longlong)(int)(uVar40 - iVar19) << 3);
          iVar19 = local_218[0];
        }
        else {
          if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
          }
          if ((int)uVar40 < iVar19) {
            uVar42 = iVar19 - uVar40;
            if ((int)(uVar40 | uVar42) < 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 );
              if (bVar17) {
                pcVar13 = (code *)swi(3);
                pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                return pFVar22;
              }
              iVar19 = local_218[0];
            }
            this = local_210;
            if (uVar42 != 0) {
              iVar18 = (iVar19 - uVar40) - uVar42;
              if (iVar18 != 0) {
                memmove(local_220.Data + (longlong)(int)uVar40 * 8,
                        local_220.Data + (longlong)(int)uVar40 * 8 + (longlong)(int)uVar42 * 8,
                        (longlong)iVar18 << 3);
                iVar19 = local_218[0];
              }
              local_218[0] = iVar19 - uVar42;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,&local_220,iVar19 - uVar42,local_218 + 1);
              this = local_210;
              iVar19 = local_218[0];
            }
          }
        }
        uVar32 = uVar37;
        if (0 < iVar19) {
          do {
            if ((local_98.Variant.TypeIndex != 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index == TypeIndex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                    ,0x97,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
              return pFVar22;
            }
            uVar40 = (uint)uVar32;
            pTVar23 = FPropertyBagArrayRef::GetValueName
                                ((FPropertyBagArrayRef *)&local_98,&local_a4,uVar40);
            if (((pTVar23->Variant).TypeIndex != '\0') &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index == TypeIndex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                    ,0x97,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
              return pFVar22;
            }
            uVar8 = *(undefined8 *)&pTVar23->Variant;
            uVar42 = 0;
            if ((int)uVar40 < local_218[0]) {
              uVar42 = ~uVar40 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
              return pFVar22;
            }
            *(undefined8 *)(local_220.Data + uVar37) = uVar8;
            uVar37 = uVar37 + 8;
            this = local_210;
            uVar32 = (ulonglong)(uVar40 + 1);
            iVar19 = local_218[0];
          } while ((int)(uVar40 + 1) < local_218[0]);
        }
        pTVar1 = &this->BoneNames;
        if (((iVar19 != (this->BoneNames).ArrayNum) ||
            (bVar17 = CompareItems<FName,int>
                                ((FName *)local_220.Data,(FName *)(pTVar1->AllocatorInstance).Data,
                                 iVar19), !bVar17)) &&
           (this->bIsInitialized = false,
           pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_220)) {
          pFVar39 = (pTVar1->AllocatorInstance).Data;
          if (pFVar39 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar39);
            iVar19 = local_218[0];
          }
          (pTVar1->AllocatorInstance).Data = local_220.Data;
          (this->BoneNames).ArrayMax = local_218[1];
          local_218[0] = 0;
          local_218[1] = 0;
          local_220.Data = (FScriptContainerElement *)0x0;
          (this->BoneNames).ArrayNum = iVar19;
        }
        if ((FName *)local_220.Data != (FName *)0x0) {
          FMemory::Free(local_220.Data);
        }
      }
      FInstancedStruct::Reset(&local_160);
      pFVar21 = ::FName::FName(&local_f0,0x11,L"ExpandTowardsRoot",FNAME_Add);
      UOptimusDeformerInstance::GetDataInterfacePropertyOverride
                (this_00,(FOptimusValueContainerStruct *)&local_150,(UComputeDataInterface *)pUVar20
                 ,*pFVar21);
      ::FName::FName(&local_e8,FOptimusValueContainerStruct::ValuePropertyName);
      FInstancedPropertyBag::GetValueInt32((FInstancedPropertyBag *)&local_150,(FName)&local_b8);
      uVar37 = (ulonglong)local_b4;
      if ((2 < uVar37) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
        return pFVar22;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar37) != '\0') {
        if ((local_b4 != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
          return pFVar22;
        }
        if (this->ExpandTowardsRoot != local_b8) {
          this->bIsInitialized = false;
          if ((local_b4 != 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
            return pFVar22;
          }
          this->ExpandTowardsRoot = local_b8;
        }
      }
      FInstancedStruct::Reset(&local_150);
      pFVar21 = ::FName::FName(&local_e0,0x11,L"ExpandTowardsLeaf",FNAME_Add);
      UOptimusDeformerInstance::GetDataInterfacePropertyOverride
                (this_00,(FOptimusValueContainerStruct *)&local_140,(UComputeDataInterface *)pUVar20
                 ,*pFVar21);
      ::FName::FName(&local_d8,FOptimusValueContainerStruct::ValuePropertyName);
      FInstancedPropertyBag::GetValueInt32((FInstancedPropertyBag *)&local_140,(FName)&local_c0);
      uVar37 = (ulonglong)local_bc;
      if ((2 < uVar37) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
        return pFVar22;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar37) != '\0') {
        if ((local_bc != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
          return pFVar22;
        }
        if (this->ExpandTowardsLeaf != local_c0) {
          this->bIsInitialized = false;
          if ((local_bc != 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
            return pFVar22;
          }
          this->ExpandTowardsLeaf = local_c0;
        }
      }
      FInstancedStruct::Reset(&local_140);
      pFVar21 = ::FName::FName(&local_c8,0x17,L"bDebugDrawIncludedBones",FNAME_Add);
      UOptimusDeformerInstance::GetDataInterfacePropertyOverride
                (this_00,(FOptimusValueContainerStruct *)&local_130,(UComputeDataInterface *)pUVar20
                 ,*pFVar21);
      ::FName::FName(&local_d0,FOptimusValueContainerStruct::ValuePropertyName);
      FInstancedPropertyBag::GetValueBool((FInstancedPropertyBag *)&local_130,(FName)&local_228);
      uVar37 = (ulonglong)local_227;
      if ((2 < uVar37) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
        return pFVar22;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar37) != '\0') {
        if ((local_227 != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
          return pFVar22;
        }
        if (this->bDebugDrawIncludedBones != local_228) {
          if ((local_227 != 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
            return pFVar22;
          }
          this->bDebugDrawIncludedBones = local_228;
        }
      }
      FInstancedStruct::Reset(&local_130);
    }
    iVar19 = this->ExpandTowardsRoot;
    if (this->ExpandTowardsRoot < 0) {
      iVar19 = 0;
    }
    this->ExpandTowardsRoot = iVar19;
    iVar19 = this->ExpandTowardsLeaf;
    if (this->ExpandTowardsLeaf < 0) {
      iVar19 = 0;
    }
    this->ExpandTowardsLeaf = iVar19;
    pUVar20 = FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
    FVar9 = *(FComputeDataProviderRenderProxy *)&pUVar20[0x33].field_0x18;
    local_178 = FVar9;
    pUVar20 = FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
    plVar44 = *(longlong **)((longlong)FVar9 + 0x48);
    uVar40 = *(uint *)&pUVar20[0x31].field_0xc;
    uVar42 = 0;
    if ((int)uVar40 < (int)plVar44[1]) {
      uVar42 = ~uVar40 >> 0x1f;
    }
    local_1c0 = plVar44;
    if ((uVar42 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
      return pFVar22;
    }
    bVar17 = Optimus::IsSkinWeightProfileAvailable
                       (*(FSkeletalMeshLODRenderData **)(*plVar44 + (longlong)(int)uVar40 * 8),
                        this->SkinWeightProfile);
    if (bVar17) {
      if (this->bIsInitialized == false) {
        this->bIsInitialized = true;
        if (*(int *)&(this->CachedSelectedBones).Elements.field_0x8 !=
            *(int *)&(this->CachedSelectedBones).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                    (&this->CachedSelectedBones);
          iVar19 = *(int *)&(this->CachedSelectedBones).Elements.field_0xc;
          *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x8 = 0;
          if (iVar19 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)&this->CachedSelectedBones,0,
                       (int *)&(this->CachedSelectedBones).Elements.field_0xc);
          }
          *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x30 = 0xffffffff;
          *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x34 = 0;
          *(undefined4 *)&(this->CachedSelectedBones).Elements.field_0x28 = 0;
        }
        piVar2 = &(this->CachedBoneIsSelectedPerSectionPerLod).ArrayMax;
        pTVar11 = (TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(this->CachedBoneIsSelectedPerSectionPerLod).AllocatorInstance.Data;
        iVar19 = (this->CachedBoneIsSelectedPerSectionPerLod).ArrayNum;
        if ((this->CachedBoneIsSelectedPerSectionPerLod).ArrayMax < 0) {
          DestructItems<TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                    (pTVar11,iVar19);
          (this->CachedBoneIsSelectedPerSectionPerLod).ArrayNum = 0;
          if (*piVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->CachedBoneIsSelectedPerSectionPerLod).AllocatorInstance,0,
                       piVar2);
          }
        }
        else {
          DestructItems<TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                    (pTVar11,iVar19);
          (this->CachedBoneIsSelectedPerSectionPerLod).ArrayNum = 0;
        }
        this_01 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
        pUVar25 = USkinnedMeshComponent::GetSkinnedAsset(this_01);
        lVar26 = (**(code **)(*(longlong *)pUVar25 + 800))(pUVar25);
        local_200.Data = (FScriptContainerElement *)0x0;
        local_1f8[0] = 0;
        local_1f8[1] = 0;
        uVar40 = *(uint *)(lVar26 + 0x28);
        if ((int)uVar40 < 1) {
          if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
          }
        }
        else {
          iVar19 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,4,uVar40,&local_200,local_1f8,local_1f8 + 1);
          DefaultConstructItems<TOptional<int>,int>(local_200.Data + (longlong)iVar19 * 8,uVar40);
        }
        pFVar38 = (FName *)(this->BoneNames).AllocatorInstance.Data;
        local_1ec = (local_210->BoneNames).ArrayNum;
        uVar37 = (ulonglong)(int)local_1ec;
        pTVar3 = &local_210->CachedSelectedBones;
        pFVar21 = pFVar38 + uVar37;
        while( true ) {
          pUVar35 = local_210;
          if ((local_210->BoneNames).ArrayNum != (int)uVar37) {
            local_226[0] = 0;
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_226);
          }
          pUVar14 = local_210;
          if (pFVar38 == pFVar21) break;
          uVar40 = 0xffffffff;
          if (*pFVar38 != (FName)0x0) {
            pTVar27 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                              *)(lVar26 + 0x90),*pFVar38);
            puVar28 = (uint *)&pTVar27->field_0x8;
            if (pTVar27 == (TTuple<FName,int> *)0x0) {
              puVar28 = (uint *)0x0;
            }
            if (puVar28 != (uint *)0x0) {
              uVar40 = *puVar28;
            }
          }
          pUVar35 = local_210;
          iVar19 = 0;
          local_208[0] = uVar40;
          if (uVar40 != 0xffffffff) {
            do {
              iVar18 = -iVar19;
              if (-iVar19 < 0) {
                iVar18 = iVar19;
              }
              local_208[0] = uVar40;
              if (pUVar35->ExpandTowardsRoot < iVar18) break;
              uVar42 = 0;
              if ((int)uVar40 < local_1f8[0]) {
                uVar42 = ~uVar40 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                return pFVar22;
              }
              if (local_200.Data[(longlong)(int)uVar40 * 8 + 4] != (FScriptContainerElement)0x0) {
                lVar33 = (longlong)(int)local_208[0];
                uVar40 = 0;
                if ((int)local_208[0] < local_1f8[0]) {
                  uVar40 = ~local_208[0] >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                  return pFVar22;
                }
                pFVar39 = local_200.Data + lVar33 * 8;
                if ((local_200.Data[lVar33 * 8 + 4] == (FScriptContainerElement)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                  return pFVar22;
                }
                if (*(int *)pFVar39 <= iVar19) break;
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (pTVar3,&local_1b0,(bool *)local_208);
              lVar33 = (longlong)(int)local_208[0];
              uVar40 = 0;
              if ((int)local_208[0] < local_1f8[0]) {
                uVar40 = ~local_208[0] >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                return pFVar22;
              }
              pFVar39 = local_200.Data + lVar33 * 8;
              if (local_1ac != pFVar39) {
                *(int *)pFVar39 = iVar19;
                pFVar39[4] = (FScriptContainerElement)0x1;
              }
              lVar33 = (longlong)(int)local_208[0];
              iVar19 = iVar19 + -1;
              uVar40 = 0;
              if ((int)local_208[0] < *(int *)(lVar26 + 0x28)) {
                uVar40 = ~local_208[0] >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                return pFVar22;
              }
              uVar40 = *(uint *)(*(longlong *)(lVar26 + 0x20) + 8 + lVar33 * 0xc);
              local_208[0] = uVar40;
            } while (uVar40 != 0xffffffff);
            uVar37 = (ulonglong)local_1ec;
          }
          pFVar38 = pFVar38 + 1;
        }
        puVar28 = (uint *)0x0;
        local_224 = 0;
        uVar40 = 0;
        if (0 < *(int *)(lVar26 + 0x28)) {
          pTVar3 = &local_210->CachedSelectedBones;
          puVar34 = puVar28;
          pUVar45 = local_210;
          do {
            uVar29 = (uint)puVar34;
            uVar42 = 0;
            if ((int)uVar29 < local_1f8[0]) {
              uVar42 = ~uVar29 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
              return pFVar22;
            }
            if (local_200.Data[(longlong)(int)uVar29 * 8 + 4] == (FScriptContainerElement)0x0) {
              lVar33 = (longlong)(int)local_224;
              uVar42 = 0;
              if ((int)local_224 < *(int *)(lVar26 + 0x28)) {
                uVar42 = ~local_224 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                return pFVar22;
              }
              uVar42 = *(uint *)(*(longlong *)(lVar26 + 0x20) + 8 + lVar33 * 0xc);
              if (uVar42 != 0xffffffff) {
                uVar29 = uVar40;
                if ((int)uVar42 < local_1f8[0]) {
                  uVar29 = ~uVar42 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                  return pFVar22;
                }
                lVar33 = (longlong)(int)uVar42 * 8;
                if (local_200.Data[lVar33 + 4] != (FScriptContainerElement)0x0) {
                  uVar29 = uVar40;
                  if ((int)uVar42 < local_1f8[0]) {
                    uVar29 = ~uVar42 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                    return pFVar22;
                  }
                  FVar15.Data = local_200.Data;
                  if ((local_200.Data[lVar33 + 4] == (FScriptContainerElement)0x0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0x1bd,
                                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                         ), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                    return pFVar22;
                  }
                  iVar19 = *(int *)(FVar15.Data + lVar33);
                  if (iVar19 < 0) {
                    iVar18 = -iVar19;
                    if (-iVar19 < 0) {
                      iVar18 = iVar19;
                    }
                    if (iVar18 < pUVar45->ExpandTowardsRoot) {
                      lVar33 = (longlong)(int)local_224;
                      uVar42 = uVar40;
                      if ((int)local_224 < local_1f8[0]) {
                        uVar42 = ~local_224 >> 0x1f;
                      }
                      if ((uVar42 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar13 = (code *)swi(3);
                        pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                        return pFVar22;
                      }
                      pFVar39 = local_200.Data + lVar33 * 8;
                      if (local_1a8 != pFVar39) {
                        *(int *)pFVar39 = iVar19 + -1;
                        pFVar39[4] = (FScriptContainerElement)0x1;
                      }
                      iVar19 = *(int *)&(pUVar14->CachedSelectedBones).Elements.field_0x34;
                      if (iVar19 == 0) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0xc,4,1,(ForAnyElementType *)pTVar3,
                                            (int *)&(pUVar14->CachedSelectedBones).Elements.
                                                    field_0x8,
                                            (int *)&(pUVar14->CachedSelectedBones).Elements.
                                                    field_0xc);
                        TBitArray<FDefaultBitArrayAllocator>::Add
                                  ((TBitArray<FDefaultBitArrayAllocator> *)
                                   &(pUVar14->CachedSelectedBones).Elements.field_0x10,false);
                      }
                      else {
                        iVar18 = *(int *)&(pUVar14->CachedSelectedBones).Elements.field_0x30;
                        iVar19 = iVar19 + -1;
                        lVar33 = *(longlong *)&pTVar3->Elements;
                        iVar7 = *(int *)(lVar33 + 4 + (longlong)iVar18 * 0xc);
                        *(int *)&(pUVar14->CachedSelectedBones).Elements.field_0x30 = iVar7;
                        *(int *)&(pUVar14->CachedSelectedBones).Elements.field_0x34 = iVar19;
                        if (iVar19 != 0) {
                          *(undefined4 *)(lVar33 + (longlong)iVar7 * 0xc) = 0xffffffff;
                        }
                      }
                      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                       *)pTVar3,&local_120,iVar18);
                      puVar34 = puVar28;
                      if (local_120.Pointer != (uint *)0x0) {
                        *(uint *)local_120.Pointer = local_224;
                        *(uint *)((longlong)local_120.Pointer + 4) = 0xffffffff;
                        puVar34 = local_120.Pointer;
                      }
                      iVar19 = *(int *)&(pUVar14->CachedSelectedBones).Elements.field_0x8;
                      iVar18 = *(int *)&(pUVar14->CachedSelectedBones).Elements.field_0x34;
                      uVar42 = *puVar34;
                      if ((iVar19 - iVar18 != 1) && (iVar19 != iVar18)) {
                        FVar12 = (pUVar14->CachedSelectedBones).Hash.SecondaryData;
                        FVar30 = (ForElementType<FSetElementId>)&(pUVar14->CachedSelectedBones).Hash
                        ;
                        if (FVar12 != (ForElementType<FSetElementId>)0x0) {
                          FVar30 = FVar12;
                        }
                        iVar19 = *(int *)((longlong)FVar30 +
                                         (ulonglong)
                                         ((pUVar14->CachedSelectedBones).HashSize - 1U & uVar42) * 4
                                         );
                        if (iVar19 != -1) {
                          do {
                            if (*(uint *)(*(longlong *)&pTVar3->Elements + (longlong)iVar19 * 0xc)
                                == uVar42) {
                              pUVar45 = local_210;
                              if (iVar19 != -1) {
                                *(uint *)(*(longlong *)&pTVar3->Elements + (longlong)iVar19 * 0xc) =
                                     uVar42;
                                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                ::RemoveAtUninitialized
                                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                            *)pTVar3,local_120.Index,1);
                                pUVar45 = local_210;
                                goto LAB_14e1deb27;
                              }
                              break;
                            }
                            iVar19 = *(int *)(*(longlong *)&pTVar3->Elements + 4 +
                                             (longlong)iVar19 * 0xc);
                          } while (iVar19 != -1);
                        }
                      }
                      uVar29 = *(int *)&(pUVar45->CachedSelectedBones).Elements.field_0x8 -
                               *(int *)&(pUVar14->CachedSelectedBones).Elements.field_0x34;
                      if (uVar29 < 4) {
                        iVar19 = 1;
                      }
                      else {
                        uVar37 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
                        lVar33 = 0x3f;
                        if (uVar37 != 0) {
                          for (; uVar37 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                          }
                        }
                        local_1a4 = (undefined4)lVar33;
                        iVar19 = 1 << ((byte)lVar33 & 0x1f);
                      }
                      if (((int)uVar29 < 1) || (iVar19 <= (pUVar14->CachedSelectedBones).HashSize))
                      {
                        uVar42 = (pUVar14->CachedSelectedBones).HashSize - 1U & uVar42;
                        puVar34[2] = uVar42;
                        FVar12 = (pUVar14->CachedSelectedBones).Hash.SecondaryData;
                        FVar30 = (ForElementType<FSetElementId>)&(pUVar14->CachedSelectedBones).Hash
                        ;
                        if (FVar12 != (ForElementType<FSetElementId>)0x0) {
                          FVar30 = FVar12;
                        }
                        uVar37 = (longlong)(pUVar45->CachedSelectedBones).HashSize - 1U &
                                 (longlong)(int)uVar42;
                        puVar34[1] = *(uint *)((longlong)FVar30 + uVar37 * 4);
                        *(int *)((longlong)FVar30 + uVar37 * 4) = local_120.Index;
                      }
                      else {
                        (pUVar14->CachedSelectedBones).HashSize = iVar19;
                        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar3);
                      }
                    }
                  }
                  else if (iVar19 < pUVar45->ExpandTowardsLeaf) {
                    lVar33 = (longlong)(int)local_224;
                    uVar42 = uVar40;
                    if ((int)local_224 < local_1f8[0]) {
                      uVar42 = ~local_224 >> 0x1f;
                    }
                    if ((uVar42 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                      return pFVar22;
                    }
                    pFVar39 = local_200.Data + lVar33 * 8;
                    if (local_1a0 != pFVar39) {
                      *(int *)pFVar39 = iVar19 + 1;
                      pFVar39[4] = (FScriptContainerElement)0x1;
                    }
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              (pTVar3,&local_19c,(bool *)&local_224);
                  }
                }
              }
            }
LAB_14e1deb27:
            local_224 = local_224 + 1;
            puVar34 = (uint *)(ulonglong)local_224;
            pUVar35 = local_210;
          } while ((int)local_224 < *(int *)(lVar26 + 0x28));
        }
        local_1ec = 0;
        iVar19 = (int)local_1c0[1];
        if (0 < iVar19) {
          local_188 = &pUVar35->CachedBoneIsSelectedPerSectionPerLod;
          local_1b8 = 0;
          local_180 = &(pUVar35->CachedBoneIsSelectedPerSectionPerLod).ArrayMax;
          puVar34 = puVar28;
          plVar44 = local_1c0;
          do {
            piVar2 = local_180;
            pTVar16 = local_188;
            lVar26 = local_1b8;
            uVar42 = uVar40;
            if ((int)(uint)puVar34 < iVar19) {
              uVar42 = ~(uint)puVar34 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
              return pFVar22;
            }
            lVar33 = *(longlong *)(lVar26 + *plVar44);
            iVar19 = pTVar16->ArrayNum;
            local_190 = lVar33;
            if (iVar19 == *piVar2) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar16->AllocatorInstance,piVar2);
            }
            pTVar16->ArrayNum = iVar19 + 1;
            pFVar39 = (pTVar16->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
            local_1e8 = 0;
            *(undefined8 *)&pFVar39->field_0x0 = 0;
            *(undefined8 *)&pFVar39[8].field_0x0 = 0;
            local_198 = pFVar39;
            if (0 < *(int *)(lVar33 + 0x18)) {
              local_1c8 = 0;
              puVar34 = puVar28;
              do {
                lVar26 = local_1c8;
                iVar19 = *(int *)&pFVar39[8].field_0x0;
                if (iVar19 == *(int *)(pFVar39 + 0xc)) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,(ForAnyElementType *)pFVar39,(int *)(pFVar39 + 0xc));
                }
                *(int *)&pFVar39[8].field_0x0 = iVar19 + 1;
                pFVar41 = (ForAnyElementType *)
                          (*(longlong *)&pFVar39->field_0x0 + (longlong)iVar19 * 0x10);
                pFVar41->Data = (FScriptContainerElement *)0x0;
                pFVar41[1].Data = (FScriptContainerElement *)0x0;
                uVar42 = uVar40;
                if ((int)(uint)puVar34 < *(int *)(lVar33 + 0x18)) {
                  uVar42 = ~(uint)puVar34 >> 0x1f;
                }
                if ((uVar42 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                  return pFVar22;
                }
                local_1d0 = *(longlong *)(lVar33 + 0x10) + lVar26;
                local_1f0 = 0;
                uVar42 = *(uint *)(local_1d0 + 0x40);
                uVar37 = (ulonglong)uVar42;
                if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum(uVar37);
                }
                puVar34 = (uint *)((longlong)&pFVar41[1].Data + 4);
                *(undefined4 *)&pFVar41[1].Data = 0;
                if (*puVar34 != uVar42) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar42,pFVar41,0,(int *)puVar34);
                }
                if (0 < (int)uVar42) {
                  do {
                    if (((pFVar41->Data <= (FScriptContainerElement *)(local_1f8 + 2)) &&
                        ((FScriptContainerElement *)(local_1f8 + 2) <
                         pFVar41->Data + (longlong)(int)*puVar34 * 4)) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                      return pFVar22;
                    }
                    uVar29 = *(uint *)&pFVar41[1].Data;
                    if (uVar29 == *puVar34) {
                      uVar29 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,pFVar41,(int *)puVar34);
                    }
                    *(uint *)&pFVar41[1].Data = uVar29 + 1;
                    *(undefined4 *)(pFVar41->Data + (longlong)(int)uVar29 * 4) = local_1f0;
                    uVar37 = uVar37 - 1;
                    puVar36 = puVar28;
                    puVar43 = puVar28;
                    puVar46 = puVar28;
                  } while (uVar37 != 0);
                  do {
                    uVar31 = (uint)puVar36;
                    uVar29 = uVar40;
                    if ((int)uVar31 < *(int *)(local_1d0 + 0x40)) {
                      uVar29 = ~uVar31 >> 0x1f;
                    }
                    if ((uVar29 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                      return pFVar22;
                    }
                    uVar6 = *(ushort *)(*(longlong *)(local_1d0 + 0x38) + (longlong)puVar46);
                    if (*(int *)&(local_210->CachedSelectedBones).Elements.field_0x8 !=
                        *(int *)&(local_210->CachedSelectedBones).Elements.field_0x34) {
                      FVar12 = (local_210->CachedSelectedBones).Hash.SecondaryData;
                      FVar30 = (ForElementType<FSetElementId>)&(local_210->CachedSelectedBones).Hash
                      ;
                      if (FVar12 != (ForElementType<FSetElementId>)0x0) {
                        FVar30 = FVar12;
                      }
                      iVar19 = *(int *)((longlong)FVar30 +
                                       ((ulonglong)((local_210->CachedSelectedBones).HashSize - 1) &
                                       (ulonglong)uVar6) * 4);
                      if (iVar19 != -1) {
                        lVar26 = *(longlong *)&(local_210->CachedSelectedBones).Elements;
                        do {
                          if (*(uint *)(lVar26 + (longlong)iVar19 * 0xc) == (uint)uVar6) {
                            uVar29 = uVar40;
                            if ((int)uVar31 < *(int *)&pFVar41[1].Data) {
                              uVar29 = ~uVar31 >> 0x1f;
                            }
                            if ((uVar29 == 0) &&
                               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                              pcVar13 = (code *)swi(3);
                              pFVar22 = (FComputeDataProviderRenderProxy *)(*pcVar13)();
                              return pFVar22;
                            }
                            *(undefined4 *)((longlong)puVar43 + (longlong)pFVar41->Data) = 1;
                            break;
                          }
                          iVar19 = *(int *)(lVar26 + 4 + (longlong)iVar19 * 0xc);
                        } while (iVar19 != -1);
                      }
                    }
                    puVar36 = (uint *)(ulonglong)(uVar31 + 1);
                    pFVar39 = local_198;
                    lVar26 = local_1c8;
                    puVar43 = puVar43 + 1;
                    lVar33 = local_190;
                    puVar46 = (uint *)((longlong)puVar46 + 2);
                  } while ((int)(uVar31 + 1) < (int)uVar42);
                }
                local_1e8 = local_1e8 + 1;
                puVar34 = (uint *)(ulonglong)local_1e8;
                local_1c8 = lVar26 + 0x118;
                lVar26 = local_1b8;
                plVar44 = local_1c0;
              } while ((int)local_1e8 < *(int *)(lVar33 + 0x18));
            }
            local_1b8 = lVar26 + 8;
            iVar19 = (int)plVar44[1];
            local_1ec = local_1ec + 1;
            puVar34 = (uint *)(ulonglong)local_1ec;
          } while ((int)local_1ec < iVar19);
        }
        this = local_210;
        pFVar22 = local_1e0;
        if (local_200.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data);
          this = local_210;
          pFVar22 = local_1e0;
        }
      }
      pFVar4 = pFVar22 + 3;
      pFVar22[1] = local_178;
      *(FName *)(pFVar22 + 2) = this->SkinWeightProfile;
      if ((TArray<TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)pFVar4 != &this->CachedBoneIsSelectedPerSectionPerLod) {
        DestructItems<TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)*(FScriptContainerElement **)pFVar4,*(int *)(pFVar22 + 4));
        iVar19 = (this->CachedBoneIsSelectedPerSectionPerLod).ArrayNum;
        puVar5 = &pFVar22[4].field_0x4;
        pTVar11 = (TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(this->CachedBoneIsSelectedPerSectionPerLod).AllocatorInstance.Data;
        iVar18 = *(int *)puVar5;
        *(int *)(pFVar22 + 4) = iVar19;
        if ((iVar19 == 0) && (iVar18 == 0)) {
          *(undefined4 *)puVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar19,iVar18,(ForAnyElementType *)pFVar4,iVar19,(int *)puVar5);
          ConstructItems<TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                    (*(FScriptContainerElement **)pFVar4,pTVar11,iVar19);
        }
      }
    }
    else {
      FVar10 = this->SkinWeightProfile;
      local_1d4 = 1;
      local_1d8 = uVar40;
      pUVar24 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
      Optimus::RequestSkinWeightProfileForDeformer(pUVar24,FVar10,(TOptional<int>)&local_1d8);
    }
  }
  return pFVar22;
}

// Init @ 14e1ebc00

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataProvider::Init
          (UOptimusSkinWeightsAsVertexMaskDataProvider *this,
          UOptimusSkinWeightsAsVertexMaskDataInterface *param_1,USkeletalMeshComponent *param_2)

{
  FName FVar1;
  USkeletalMeshComponent *local_res8;
  
  local_res8 = (USkeletalMeshComponent *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UOptimusSkinWeightsAsVertexMaskDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakDataInterface).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->SkeletalMesh).WeakPtr,(FObjectPtr)&local_res8);
  this->SkinWeightProfile = param_1->SkinWeightProfile;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->BoneNames,&param_1->BoneNames);
  FVar1 = this->SkinWeightProfile;
  this->ExpandTowardsRoot = param_1->ExpandTowardsRoot;
  this->ExpandTowardsLeaf = param_1->ExpandTowardsLeaf;
  this->bDebugDrawIncludedBones = param_1->bDebugDrawIncludedBones;
  (this->DebugDrawColor).field0_0x0 = (param_1->DebugDrawColor).field0_0x0;
  local_res8._0_5_ = (uint5)(uint)local_res8;
  Optimus::RequestSkinWeightProfileForDeformer(param_2,FVar1,(TOptional<int>)&local_res8);
  return;
}

// SetDeformerInstance @ 14e21ddf0

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataProvider::SetDeformerInstance
          (UOptimusSkinWeightsAsVertexMaskDataProvider *this,UOptimusDeformerInstance *param_1)

{
  UOptimusDeformerInstance *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UOptimusDeformerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this->CachedSelectedBones).Hash,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataProvider @ 14e225eb0

void __cdecl
UOptimusSkinWeightsAsVertexMaskDataProvider::
StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataProvider(void)

{
  return;
}

// _getUObject @ 14e239060

UObject * __thiscall
UOptimusSkinWeightsAsVertexMaskDataProvider::_getUObject
          (UOptimusSkinWeightsAsVertexMaskDataProvider *this)

{
  return (UObject *)&this[-1].CachedSelectedBones.HashSize;
}

