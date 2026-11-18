// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 11

// StaticClass @ 14e10fc20

UClass * __cdecl UOptimusAdvancedSkeletonDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAdvancedSkeletonDataProvider",
               &Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusAdvancedSkeletonDataProvider,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusAdvancedSkeletonDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusAdvancedSkeletonDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.InnerSingleton;
}

// UOptimusAdvancedSkeletonDataProvider @ 14e158260

UOptimusAdvancedSkeletonDataProvider * __thiscall
UOptimusAdvancedSkeletonDataProvider::UOptimusAdvancedSkeletonDataProvider
          (UOptimusAdvancedSkeletonDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkeletalMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->AttributeBufferRuntimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeBufferRuntimeData).ArrayNum = 0;
  (this->AttributeBufferRuntimeData).ArrayMax = 0;
  this->ParameterBufferSize = 0;
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  this->bEnableLayeredSkinning = true;
  this->bIsLayeredSkinInitialized = false;
  *(undefined8 *)&(this->CachedWeightedBoneIndices).Elements = 0;
  *(undefined8 *)&(this->CachedWeightedBoneIndices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedWeightedBoneIndices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x34 = 0;
  (this->CachedWeightedBoneIndices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedWeightedBoneIndices).HashSize = 0;
  (this->CachedBoundaryBoneIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedBoundaryBoneIndex).ArrayNum = 0;
  (this->CachedBoundaryBoneIndex).ArrayMax = 0;
  (this->CachedLayerSpaceInitialBoneTransform).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedLayerSpaceInitialBoneTransform).ArrayNum = 0;
  (this->CachedLayerSpaceInitialBoneTransform).ArrayMax = 0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakDataInterface).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UOptimusAdvancedSkeletonDataProvider @ 14e158330

UOptimusAdvancedSkeletonDataProvider * __thiscall
UOptimusAdvancedSkeletonDataProvider::UOptimusAdvancedSkeletonDataProvider
          (UOptimusAdvancedSkeletonDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkeletalMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->AttributeBufferRuntimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeBufferRuntimeData).ArrayNum = 0;
  (this->AttributeBufferRuntimeData).ArrayMax = 0;
  this->ParameterBufferSize = 0;
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  this->bEnableLayeredSkinning = true;
  this->bIsLayeredSkinInitialized = false;
  *(undefined8 *)&(this->CachedWeightedBoneIndices).Elements = 0;
  *(undefined8 *)&(this->CachedWeightedBoneIndices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedWeightedBoneIndices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x34 = 0;
  (this->CachedWeightedBoneIndices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedWeightedBoneIndices).HashSize = 0;
  (this->CachedBoundaryBoneIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedBoundaryBoneIndex).ArrayNum = 0;
  (this->CachedBoundaryBoneIndex).ArrayMax = 0;
  (this->CachedLayerSpaceInitialBoneTransform).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedLayerSpaceInitialBoneTransform).ArrayNum = 0;
  (this->CachedLayerSpaceInitialBoneTransform).ArrayMax = 0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakDataInterface).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UOptimusAdvancedSkeletonDataProvider @ 14e162160

void __thiscall
UOptimusAdvancedSkeletonDataProvider::~UOptimusAdvancedSkeletonDataProvider
          (UOptimusAdvancedSkeletonDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  pFVar1 = (this->CachedLayerSpaceInitialBoneTransform).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedBoundaryBoneIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CachedWeightedBoneIndices).HashSize = 0;
  FVar2 = (this->CachedWeightedBoneIndices).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedWeightedBoneIndices).Elements);
  DestructItems<FOptimusAnimAttributeBufferRuntimeData,int>
            ((FOptimusAnimAttributeBufferRuntimeData *)
             (this->AttributeBufferRuntimeData).AllocatorInstance.Data,
             (this->AttributeBufferRuntimeData).ArrayNum);
  pFVar1 = (this->AttributeBufferRuntimeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusDeformerInstanceAccessor__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// ComputeBoneTransformsForLayeredSkinning @ 14e191440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UOptimusAdvancedSkeletonDataProvider::ComputeBoneTransformsForLayeredSkinning
          (UOptimusAdvancedSkeletonDataProvider *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FSkeletalMeshLODRenderData *param_2,FReferenceSkeleton *param_3)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  FSkinWeightVertexBuffer *this_00;
  UObject *pUVar12;
  UOptimusAdvancedSkeletonDataProvider *pUVar13;
  int *piVar14;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  bool bVar29;
  ushort uVar30;
  uint uVar31;
  uint uVar33;
  int iVar34;
  uint uVar35;
  undefined4 extraout_EAX;
  FSkinWeightVertexBuffer *pFVar36;
  FScriptContainerElement *pFVar37;
  TTransform<double> *pTVar38;
  ForElementType<FSetElementId> FVar39;
  uint uVar40;
  int iVar41;
  ulonglong uVar42;
  uint uVar43;
  uint uVar44;
  longlong lVar45;
  undefined1 *puVar46;
  uint *puVar47;
  FSkeletalMeshLODRenderData *pFVar48;
  uint uVar49;
  FReferenceSkeleton *pFVar50;
  uint uVar51;
  longlong lVar52;
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auStackY_3d8 [32];
  undefined1 local_388 [8];
  undefined8 local_380;
  undefined4 local_378 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_370;
  FReferenceSkeleton *local_360;
  uint local_358 [2];
  FSkinWeightVertexBuffer *local_350;
  UObject *local_348;
  UOptimusAdvancedSkeletonDataProvider *local_340;
  FSkeletalMeshLODRenderData *local_338;
  uint local_330 [2];
  int *local_328;
  TTransform<double> *local_320;
  int local_318 [2];
  uint local_310 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_308;
  longlong local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  int local_2e8;
  int local_2e4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_2e0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_2d8;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined1 *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  uint local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 uStack_280;
  undefined4 local_25c;
  FSkinWeightProfileStack local_258;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  uint uVar32;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  uVar44 = 0;
  local_380 = 1;
  uVar43 = 0;
  uVar31 = 0;
  uVar32 = 0;
  local_360 = param_3;
  local_340 = this;
  local_338 = param_2;
  local_2e0 = param_1;
  if (this->bIsLayeredSkinInitialized == false) {
    this->bIsLayeredSkinInitialized = true;
    local_300 = 4;
    local_348 = (UObject *)0xc;
    if (*(int *)&(this->CachedWeightedBoneIndices).Elements.field_0x8 !=
        *(int *)&(this->CachedWeightedBoneIndices).Elements.field_0x34) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
                (&this->CachedWeightedBoneIndices);
      iVar41 = *(int *)&(this->CachedWeightedBoneIndices).Elements.field_0xc;
      *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x8 = 0;
      if (iVar41 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&this->CachedWeightedBoneIndices,0,
                   (int *)&(this->CachedWeightedBoneIndices).Elements.field_0xc);
      }
      *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->CachedWeightedBoneIndices).Elements.field_0x28 = 0;
    }
    pTVar38 = (TTransform<double> *)&this->CachedBoundaryBoneIndex;
    (this->CachedBoundaryBoneIndex).ArrayNum = 0;
    local_320 = pTVar38;
    if ((this->CachedBoundaryBoneIndex).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pTVar38,0,&(this->CachedBoundaryBoneIndex).ArrayMax);
    }
    local_308 = &this->CachedLayerSpaceInitialBoneTransform;
    local_328 = &(this->CachedLayerSpaceInitialBoneTransform).ArrayNum;
    *local_328 = 0;
    if ((this->CachedLayerSpaceInitialBoneTransform).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&local_308->AllocatorInstance,0,
                 &(this->CachedLayerSpaceInitialBoneTransform).ArrayMax);
    }
    uVar49 = (param_3->FinalRefBoneInfo).ArrayNum;
    if ((uint)(*(int *)&(this->CachedWeightedBoneIndices).Elements.field_0x8 -
              *(int *)&(this->CachedWeightedBoneIndices).Elements.field_0x34) < uVar49) {
      if ((int)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar49);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->CachedWeightedBoneIndices,uVar49);
      iVar41 = (uint)local_380;
      if (3 < uVar49) {
        uVar42 = (ulonglong)((uVar49 >> 1) + 7) * 2 + 1;
        lVar45 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar45 == 0; lVar45 = lVar45 + -1) {
          }
        }
        local_2f0 = (undefined4)lVar45;
        iVar41 = (uint)local_380 << ((byte)lVar45 & 0x1f);
      }
      iVar34 = (this->CachedWeightedBoneIndices).HashSize;
      if ((iVar34 == 0) || (iVar34 < iVar41)) {
        (this->CachedWeightedBoneIndices).HashSize = iVar41;
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
                  (&this->CachedWeightedBoneIndices);
      }
    }
    pFVar36 = (param_2->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
    if (pFVar36 == (FSkinWeightVertexBuffer *)0x0) {
      pFVar36 = &param_2->SkinWeightVertexBuffer;
    }
    local_350 = pFVar36;
    bVar29 = FSkinWeightProfilesData::ContainsProfile
                       (&param_2->SkinWeightProfilesData,&this->SkinWeightProfile);
    if (bVar29) {
      local_258.Layers.Elements[0] = this->SkinWeightProfile;
      local_2f8 = 0;
      local_258.Layers.Elements[1].ComparisonIndex.Value = 0;
      local_258.Layers.Elements[1].Number = 0;
      pFVar36 = FSkinWeightProfilesData::GetOverrideBuffer
                          (&param_2->SkinWeightProfilesData,&local_258);
      local_350 = pFVar36;
    }
    this_00 = local_350;
    uVar49 = uVar44;
    if ((pFVar36->DataVertexBuffer).NumVertices != 0) {
      do {
        local_330[0] = 0xffffffff;
        local_318[0] = -1;
        FSkeletalMeshLODRenderData::GetSectionFromVertexIndex
                  (param_2,uVar49,(int *)local_330,local_318);
        local_318[1] = 0;
        local_358[0] = 0;
        FSkinWeightVertexBuffer::GetVertexInfluenceOffsetCount
                  (this_00,uVar49,(uint *)(local_318 + 1),local_358);
        uVar40 = uVar44;
        if (local_358[0] != 0) {
          do {
            uVar30 = FSkinWeightVertexBuffer::GetBoneWeight(this_00,uVar49,uVar40);
            if (0.0 < (float)uVar30) {
              uVar33 = FSkinWeightVertexBuffer::GetBoneIndex(this_00,uVar49,uVar40);
              lVar45 = (longlong)(int)local_330[0];
              uVar51 = uVar43;
              if ((int)local_330[0] < (param_2->RenderSections).ArrayNum) {
                uVar51 = ~local_330[0] >> 0x1f;
              }
              if ((uVar51 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar37 = (param_2->RenderSections).AllocatorInstance.Data;
              uVar51 = uVar31;
              if ((int)uVar33 < *(int *)(pFVar37 + lVar45 * 0x118 + 0x40)) {
                uVar51 = ~uVar33 >> 0x1f;
              }
              if ((uVar51 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_310[0] = (uint)*(ushort *)
                                    (*(longlong *)(pFVar37 + lVar45 * 0x118 + 0x38) +
                                    (longlong)(int)uVar33 * 2);
              TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
              Emplace<unsigned_int>
                        (&local_340->CachedWeightedBoneIndices,&local_2ec,(bool *)local_310);
              param_2 = local_338;
            }
            uVar40 = uVar40 + 1;
          } while (uVar40 < local_358[0]);
        }
        uVar49 = uVar49 + 1;
        pTVar38 = local_320;
      } while (uVar49 < (this_00->DataVertexBuffer).NumVertices);
    }
    pFVar50 = local_360;
    local_378[0] = 0xffffffff;
    uVar49 = (local_360->FinalRefBoneInfo).ArrayNum;
    uVar42 = (ulonglong)uVar49;
    if ((int)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar42);
    }
    puVar47 = (uint *)((longlong)(pTVar38->Rotation).XY.m128d_f64 + 0xc);
    *(undefined4 *)((pTVar38->Rotation).XY.m128d_f64 + 1) = 0;
    if (*puVar47 != uVar49) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar49,(ForAnyElementType *)pTVar38,0,(int *)puVar47);
    }
    if (0 < (int)uVar49) {
      do {
        pFVar37 = (FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0];
        if (((pFVar37 <= (FScriptContainerElement *)local_378) &&
            ((FScriptContainerElement *)local_378 < pFVar37 + (longlong)(int)*puVar47 * 4)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar49 = *(uint *)((pTVar38->Rotation).XY.m128d_f64 + 1);
        if (uVar49 == *puVar47) {
          uVar49 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pTVar38,(int *)puVar47);
        }
        *(uint *)((pTVar38->Rotation).XY.m128d_f64 + 1) = uVar49 + 1;
        *(undefined4 *)
         ((FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0] + (longlong)(int)uVar49 * 4
         ) = local_378[0];
        uVar42 = uVar42 - 1;
      } while (uVar42 != 0);
    }
    iVar41 = (pFVar50->FinalRefBoneInfo).ArrayNum;
    if (1 < iVar41) {
      local_350 = (FSkinWeightVertexBuffer *)&DAT_00000004;
      local_338 = (FSkeletalMeshLODRenderData *)&DAT_0000000c;
      uVar49 = (uint)local_380;
      do {
        pFVar48 = local_338;
        uVar51 = ~uVar49 >> 0x1f;
        uVar40 = uVar31;
        if ((int)uVar49 < (pFVar50->FinalRefBoneInfo).ArrayNum) {
          uVar40 = uVar51;
        }
        if ((uVar40 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar40 = *(uint *)((longlong)&pFVar48->_padding_ +
                          (longlong)(pFVar50->FinalRefBoneInfo).AllocatorInstance.Data);
        uVar33 = uVar43;
        if ((int)uVar40 < *(int *)((pTVar38->Rotation).XY.m128d_f64 + 1)) {
          uVar33 = ~uVar40 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0] +
                    (longlong)(int)uVar40 * 4) == -1) {
          if (*(int *)&(local_340->CachedWeightedBoneIndices).Elements.field_0x8 !=
              *(int *)&(local_340->CachedWeightedBoneIndices).Elements.field_0x34) {
            FVar1 = (local_340->CachedWeightedBoneIndices).Hash.SecondaryData;
            FVar39 = (ForElementType<FSetElementId>)&(local_340->CachedWeightedBoneIndices).Hash;
            if (FVar1 != (ForElementType<FSetElementId>)0x0) {
              FVar39 = FVar1;
            }
            iVar41 = *(int *)((longlong)FVar39 +
                             (ulonglong)
                             ((local_340->CachedWeightedBoneIndices).HashSize - 1U & uVar49) * 4);
            if (iVar41 != -1) {
              lVar45 = *(longlong *)&(local_340->CachedWeightedBoneIndices).Elements;
              do {
                if (*(uint *)(lVar45 + (longlong)iVar41 * 0xc) == uVar49) {
                  uVar40 = uVar43;
                  if ((int)uVar49 < *(int *)((pTVar38->Rotation).XY.m128d_f64 + 1)) {
                    uVar40 = uVar51;
                  }
                  if ((uVar40 == 0) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar29)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(uint *)((FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0] +
                           (longlong)&(local_350->DataVertexBuffer)._padding_) = uVar49;
                  break;
                }
                iVar41 = *(int *)(lVar45 + 4 + (longlong)iVar41 * 0xc);
              } while (iVar41 != -1);
            }
          }
        }
        else {
          uVar33 = uVar31;
          if ((int)uVar40 < *(int *)((pTVar38->Rotation).XY.m128d_f64 + 1)) {
            uVar33 = ~uVar40 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar54 = *(undefined4 *)
                    ((FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0] +
                    (longlong)(int)uVar40 * 4);
          uVar40 = uVar31;
          if ((int)uVar49 < *(int *)((pTVar38->Rotation).XY.m128d_f64 + 1)) {
            uVar40 = uVar51;
          }
          if ((uVar40 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)
           ((FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0] +
           (longlong)&(local_350->DataVertexBuffer)._padding_) = uVar54;
        }
        uVar49 = uVar49 + 1;
        local_338 = (FSkeletalMeshLODRenderData *)((longlong)&local_338->_padding_ + 4);
        local_350 = (FSkinWeightVertexBuffer *)
                    ((longlong)&(local_350->DataVertexBuffer)._padding_ + 4);
        iVar41 = (local_360->FinalRefBoneInfo).ArrayNum;
        pFVar50 = local_360;
      } while ((int)uVar49 < iVar41);
    }
    pTVar15 = local_308;
    iVar34 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,iVar41,&local_308->AllocatorInstance,&local_308->ArrayNum,
                        &local_308->ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((pTVar15->AllocatorInstance).Data + (longlong)iVar34 * 0x60,iVar41);
    if (1 < (pFVar50->FinalRefBoneInfo).ArrayNum) {
      lVar45 = 0x60;
      uVar43 = (uint)local_380;
      do {
        uVar40 = ~uVar43 >> 0x1f;
        uVar49 = uVar31;
        if ((int)uVar43 < *(int *)((pTVar38->Rotation).XY.m128d_f64 + 1)) {
          uVar49 = uVar40;
        }
        if ((uVar49 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0] + local_300) !=
            -1) {
          uVar49 = uVar31;
          if ((int)uVar43 < (pFVar50->FinalRefBoneInfo).ArrayNum) {
            uVar49 = uVar40;
          }
          if ((uVar49 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar49 = *(uint *)((pFVar50->FinalRefBoneInfo).AllocatorInstance.Data +
                            (longlong)local_348 + 8);
          uVar51 = uVar32;
          if ((int)uVar49 < *(int *)((pTVar38->Rotation).XY.m128d_f64 + 1)) {
            uVar51 = ~uVar49 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar41 = (local_360->FinalRefBonePose).ArrayNum;
          if (*(int *)((FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0] +
                      (longlong)(int)uVar49 * 4) == -1) {
            uVar49 = uVar32;
            if ((int)uVar43 < iVar41) {
              uVar49 = uVar40;
            }
            if ((uVar49 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar50 = local_360;
            pFVar2 = (local_360->FinalRefBonePose).AllocatorInstance.Data;
            pFVar37 = pFVar2 + lVar45;
            uVar54 = *(undefined4 *)pFVar37;
            uVar55 = *(undefined4 *)(pFVar37 + 4);
            uVar56 = *(undefined4 *)(pFVar37 + 8);
            uVar57 = *(undefined4 *)(pFVar37 + 0xc);
            pFVar37 = pFVar2 + lVar45 + 0x10;
            uVar58 = *(undefined4 *)pFVar37;
            uVar59 = *(undefined4 *)(pFVar37 + 4);
            uVar60 = *(undefined4 *)(pFVar37 + 8);
            uVar61 = *(undefined4 *)(pFVar37 + 0xc);
            pFVar37 = pFVar2 + lVar45 + 0x20;
            uVar62 = *(undefined4 *)pFVar37;
            uVar63 = *(undefined4 *)(pFVar37 + 4);
            uVar64 = *(undefined4 *)(pFVar37 + 8);
            uVar65 = *(undefined4 *)(pFVar37 + 0xc);
            pFVar37 = pFVar2 + lVar45 + 0x30;
            uVar66 = *(undefined4 *)pFVar37;
            uVar67 = *(undefined4 *)(pFVar37 + 4);
            uVar68 = *(undefined4 *)(pFVar37 + 8);
            uVar69 = *(undefined4 *)(pFVar37 + 0xc);
            pFVar37 = pFVar2 + lVar45 + 0x40;
            uVar70 = *(undefined4 *)pFVar37;
            uVar71 = *(undefined4 *)(pFVar37 + 4);
            uVar72 = *(undefined4 *)(pFVar37 + 8);
            uVar73 = *(undefined4 *)(pFVar37 + 0xc);
            pFVar2 = pFVar2 + lVar45 + 0x50;
            uVar74 = *(undefined4 *)pFVar2;
            uVar75 = *(undefined4 *)(pFVar2 + 4);
            uVar76 = *(undefined4 *)(pFVar2 + 8);
            uVar77 = *(undefined4 *)(pFVar2 + 0xc);
            uVar49 = uVar32;
            if ((int)uVar43 < *local_328) {
              uVar49 = uVar40;
            }
            if ((uVar49 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar37 = (local_308->AllocatorInstance).Data;
          }
          else {
            uVar51 = uVar32;
            if ((int)uVar43 < iVar41) {
              uVar51 = uVar40;
            }
            if ((uVar51 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_320 = (TTransform<double> *)
                        ((local_360->FinalRefBonePose).AllocatorInstance.Data +
                        (longlong)(int)uVar43 * 0x60);
            uVar51 = uVar32;
            if ((int)uVar49 < *local_328) {
              uVar51 = ~uVar49 >> 0x1f;
            }
            if ((uVar51 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar15 = local_308;
            local_248.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_248.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_248.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_248.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_248.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_248.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_248.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_248.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_248.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_248.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_248.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            local_248.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_248.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_248.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_248,local_320,
                       (TTransform<double> *)
                       ((local_308->AllocatorInstance).Data + (longlong)(int)uVar49 * 0x60));
            uVar54 = local_248.Rotation.XY.m128d_f64[0]._0_4_;
            uVar55 = local_248.Rotation.XY.m128d_f64[0]._4_4_;
            uVar56 = local_248.Rotation.XY.m128d_f64[1]._0_4_;
            uVar57 = local_248.Rotation.XY.m128d_f64[1]._4_4_;
            uVar58 = local_248.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar59 = local_248.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar60 = local_248.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar61 = local_248.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar62 = local_248.Translation.XY.m128d_f64[0]._0_4_;
            uVar63 = local_248.Translation.XY.m128d_f64[0]._4_4_;
            uVar64 = local_248.Translation.XY.m128d_f64[1]._0_4_;
            uVar65 = local_248.Translation.XY.m128d_f64[1]._4_4_;
            uVar49 = uVar32;
            if ((int)uVar43 < pTVar15->ArrayNum) {
              uVar49 = uVar40;
            }
            uVar66 = local_248.Translation.ZW.m128d_f64[0]._0_4_;
            uVar67 = local_248.Translation.ZW.m128d_f64[0]._4_4_;
            uVar68 = local_248.Translation.ZW.m128d_f64[1]._0_4_;
            uVar69 = local_248.Translation.ZW.m128d_f64[1]._4_4_;
            uVar70 = local_248.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar71 = local_248.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar72 = local_248.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar73 = local_248.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar74 = local_248.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar75 = local_248.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar76 = local_248.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar77 = local_248.Scale3D.ZW.m128d_f64[1]._4_4_;
            if ((uVar49 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar37 = (pTVar15->AllocatorInstance).Data;
            pFVar50 = local_360;
          }
          pFVar2 = pFVar37 + lVar45;
          *(undefined4 *)pFVar2 = uVar54;
          *(undefined4 *)(pFVar2 + 4) = uVar55;
          *(undefined4 *)(pFVar2 + 8) = uVar56;
          *(undefined4 *)(pFVar2 + 0xc) = uVar57;
          pFVar2 = pFVar37 + lVar45 + 0x10;
          *(undefined4 *)pFVar2 = uVar58;
          *(undefined4 *)(pFVar2 + 4) = uVar59;
          *(undefined4 *)(pFVar2 + 8) = uVar60;
          *(undefined4 *)(pFVar2 + 0xc) = uVar61;
          pFVar2 = pFVar37 + lVar45 + 0x20;
          *(undefined4 *)pFVar2 = uVar62;
          *(undefined4 *)(pFVar2 + 4) = uVar63;
          *(undefined4 *)(pFVar2 + 8) = uVar64;
          *(undefined4 *)(pFVar2 + 0xc) = uVar65;
          pFVar2 = pFVar37 + lVar45 + 0x30;
          *(undefined4 *)pFVar2 = uVar66;
          *(undefined4 *)(pFVar2 + 4) = uVar67;
          *(undefined4 *)(pFVar2 + 8) = uVar68;
          *(undefined4 *)(pFVar2 + 0xc) = uVar69;
          pFVar2 = pFVar37 + lVar45 + 0x40;
          *(undefined4 *)pFVar2 = uVar70;
          *(undefined4 *)(pFVar2 + 4) = uVar71;
          *(undefined4 *)(pFVar2 + 8) = uVar72;
          *(undefined4 *)(pFVar2 + 0xc) = uVar73;
          pFVar37 = pFVar37 + lVar45 + 0x50;
          *(undefined4 *)pFVar37 = uVar74;
          *(undefined4 *)(pFVar37 + 4) = uVar75;
          *(undefined4 *)(pFVar37 + 8) = uVar76;
          *(undefined4 *)(pFVar37 + 0xc) = uVar77;
        }
        local_300 = local_300 + 4;
        uVar43 = uVar43 + 1;
        local_348 = (UObject *)((longlong)local_348 + 0xc);
        lVar45 = lVar45 + 0x60;
      } while ((int)uVar43 < (pFVar50->FinalRefBoneInfo).ArrayNum);
    }
  }
  pUVar13 = local_340;
  uVar49 = (uint)local_380;
  local_348 = FWeakObjectPtr::Get(&(local_340->SkeletalMesh).WeakPtr);
  local_328 = (int *)((longlong)*(int *)&local_348[0x28].field_0x20 << 4);
  local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar41 = (local_360->FinalRefBoneInfo).ArrayNum;
  local_370.ArrayNum = 0;
  local_370.ArrayMax = 0;
  iVar34 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,iVar41,&local_370.AllocatorInstance,&local_370.ArrayNum,
                      &local_370.ArrayMax);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            (local_370.AllocatorInstance.Data + (longlong)iVar34 * 0x60,iVar41);
  pTVar38 = (TTransform<double> *)&(pUVar13->CachedWeightedBoneIndices).Elements.field_0x10;
  uVar43 = *(uint *)&(pUVar13->CachedWeightedBoneIndices).Elements.field_0x28;
  pFVar48 = (FSkeletalMeshLODRenderData *)&pUVar13->CachedWeightedBoneIndices;
  uStack_2bc = uVar32;
  uStack_2d0 = uVar32;
  local_2b8 = uVar32;
  if (uVar43 != 0) {
    puVar47 = *(uint **)&(pUVar13->CachedWeightedBoneIndices).Elements.field_0x20;
    if (puVar47 == (uint *)0x0) {
      puVar47 = (uint *)pTVar38;
    }
    uVar40 = *puVar47;
    uStack_2d0 = uVar44;
    local_2b8 = uVar44;
    while (uVar40 == 0) {
      lVar45 = (longlong)(int)uStack_2d0;
      local_2b8 = local_2b8 + 0x20;
      uStack_2d0 = uStack_2d0 + 1;
      uStack_2bc = uVar43;
      if ((int)((uVar43 - 1) + ((int)(uVar43 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2d0)
      goto LAB_14e19203d;
      uVar40 = puVar47[lVar45 + 1];
    }
    uVar49 = -uVar40 & uVar40;
    uVar42 = (ulonglong)uVar49 * 2 + 1;
    lVar45 = 0x3f;
    if (uVar42 != 0) {
      for (; uVar42 >> lVar45 == 0; lVar45 = lVar45 + -1) {
      }
    }
    local_2e8 = (int)lVar45;
    uStack_2bc = (local_2b8 - 1) + local_2e8;
    if ((int)uVar43 < (int)uStack_2bc) {
      uStack_2bc = uVar43;
    }
  }
LAB_14e19203d:
  uVar44 = *(uint *)&(pUVar13->CachedWeightedBoneIndices).Elements.field_0x28;
  uStack_2b4 = local_25c;
  iStack_2b0 = *(int *)&(pUVar13->CachedWeightedBoneIndices).Elements.field_0x8 -
               *(int *)&(pUVar13->CachedWeightedBoneIndices).Elements.field_0x34;
  uVar40 = uVar44 & 0xffffffe0;
  uStack_2c0 = 0xffffffff;
  TStack_2a0._padding_ = CONCAT44(uVar49,uStack_2d0);
  TStack_2a0.CurrentBitIndex = uStack_2bc;
  TStack_2a0.UnvisitedBitMask = 0xffffffff;
  iVar41 = (int)uVar44 >> 5;
  TStack_2a0._28_4_ = local_25c;
  TStack_2a0.BaseBitIndex = local_2b8;
  uStack_280 = CONCAT44(uStack_2ac,iStack_2b0);
  local_338 = pFVar48;
  local_320 = pTVar38;
  local_2d8 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)pFVar48;
  uStack_2cc = uVar49;
  local_2c8 = (undefined1 *)pTVar38;
  local_2a8 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)pFVar48;
  TStack_2a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar38;
  local_380._0_4_ = uVar44;
  if ((((int)uVar44 < 0) || ((int)uVar43 < (int)uVar44)) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar29)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = _UNK_15061cc8c;
  uVar33 = _UNK_15061cc88;
  uVar51 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar49 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar43 = *(uint *)&(pUVar13->CachedWeightedBoneIndices).Elements.field_0x28;
  if (uVar44 != uVar43) {
    puVar46 = *(undefined1 **)&(pUVar13->CachedWeightedBoneIndices).Elements.field_0x20;
    if (puVar46 == (undefined1 *)0x0) {
      puVar46 = (undefined1 *)pTVar38;
    }
    uVar44 = -1 << ((byte)uVar44 & 0x1f) & *(uint *)(puVar46 + (longlong)iVar41 * 4);
    while (uVar44 == 0) {
      lVar45 = (longlong)iVar41;
      uVar40 = uVar40 + 0x20;
      iVar41 = iVar41 + 1;
      uVar44 = uVar43;
      local_380._0_4_ = uVar43;
      if ((int)((uVar43 - 1) + ((int)(uVar43 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar41)
      goto LAB_14e192160;
      uVar44 = *(uint *)(puVar46 + lVar45 * 4 + 4);
    }
    uVar42 = (ulonglong)(-uVar44 & uVar44) * 2 + 1;
    lVar45 = 0x3f;
    if (uVar42 != 0) {
      for (; uVar42 >> lVar45 == 0; lVar45 = lVar45 + -1) {
      }
    }
    local_2e4 = (int)lVar45;
    uVar44 = (uVar40 - 1) + local_2e4;
    local_380._0_4_ = uVar44;
    if ((int)uVar43 < (int)uVar44) {
      uVar44 = uVar43;
      local_380._0_4_ = uVar43;
    }
  }
LAB_14e192160:
  do {
    pTVar16 = local_2a8;
    if (*(int *)&(local_2a8->Elements).field_0x8 - *(int *)&(local_2a8->Elements).field_0x34 !=
        (int)uStack_280) {
      local_388[0] = 0;
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_388);
    }
    pTVar15 = local_2e0;
    pUVar13 = local_340;
    _Var11.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    if (((TStack_2a0.CurrentBitIndex == uVar44) &&
        ((TTransform<double> *)TStack_2a0.Array == pTVar38)) &&
       ((FSkeletalMeshLODRenderData *)pTVar16 == pFVar48)) {
      if (local_2e0 != &local_370) {
        pFVar37 = (local_2e0->AllocatorInstance).Data;
        if (pFVar37 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar37);
        }
        (pTVar15->AllocatorInstance).Data = local_370.AllocatorInstance.Data;
        pTVar15->ArrayNum = local_370.ArrayNum;
        pTVar15->ArrayMax = local_370.ArrayMax;
        local_370.ArrayNum = 0;
        local_370.ArrayMax = 0;
        local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.AllocatorInstance.Data);
      }
      return;
    }
    uVar43 = *(uint *)(*(longlong *)&pTVar16->Elements + (longlong)TStack_2a0.CurrentBitIndex * 0xc)
    ;
    uVar40 = ~uVar43 >> 0x1f;
    if (uVar43 == 0) {
      if ((local_370.ArrayNum < 1) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(double (*) [2])local_370.AllocatorInstance.Data = _Var6.m128d_f64;
      *(double (*) [2])(local_370.AllocatorInstance.Data + 0x10) = _Var7.m128d_f64;
      *(double (*) [2])(local_370.AllocatorInstance.Data + 0x20) = _Var8.m128d_f64;
      *(double (*) [2])(local_370.AllocatorInstance.Data + 0x30) = _Var9.m128d_f64;
      *(double (*) [2])(local_370.AllocatorInstance.Data + 0x40) = _Var10.m128d_f64;
      *(double (*) [2])(local_370.AllocatorInstance.Data + 0x50) = _Var11.m128d_f64;
    }
    else {
      uVar44 = uVar32;
      if ((int)uVar43 < (local_340->CachedBoundaryBoneIndex).ArrayNum) {
        uVar44 = uVar40;
      }
      if ((uVar44 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar50 = local_360;
      uVar44 = *(uint *)((pUVar13->CachedBoundaryBoneIndex).AllocatorInstance.Data +
                        (longlong)(int)uVar43 * 4);
      uVar35 = uVar32;
      if ((int)uVar44 < (local_360->FinalRefBoneInfo).ArrayNum) {
        uVar35 = ~uVar44 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar13 = local_340;
      uVar44 = *(uint *)((pFVar50->FinalRefBoneInfo).AllocatorInstance.Data +
                        (longlong)(int)uVar44 * 0xc + 8);
      uVar35 = uVar32;
      if ((int)uVar43 < (local_340->CachedLayerSpaceInitialBoneTransform).ArrayNum) {
        uVar35 = uVar40;
      }
      if ((uVar35 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar37 = (pUVar13->CachedLayerSpaceInitialBoneTransform).AllocatorInstance.Data;
      lVar45 = (longlong)(int)uVar43 * 0x60;
      uVar35 = uVar32;
      if ((int)uVar44 < *(int *)(&local_348[0x27].field_0x8 + (longlong)local_328)) {
        uVar35 = ~uVar44 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar14 = local_328;
      pTVar38 = &local_188;
      local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_188.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_188.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (pTVar38,(TTransform<double> *)(pFVar37 + lVar45),
                 (TTransform<double> *)
                 ((longlong)(int)uVar44 * 0x60 +
                 *(longlong *)(&local_348[0x27].field_0x0 + (longlong)local_328)));
      lVar52 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(uVar5 & local_188.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 uVar33 & local_188.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar4._8_4_ = (int)lVar52;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(uVar51 & local_188.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       uVar49 & local_188.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar4._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
      uVar44 = movmskpd((int)pTVar38,auVar4);
      auVar53._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
            (double)CONCAT44(uVar5 & local_188.Scale3D.XY.m128d_f64[1]._4_4_,
                             uVar33 & local_188.Scale3D.XY.m128d_f64[1]._0_4_));
      auVar53._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
            (double)CONCAT44(uVar51 & local_188.Scale3D.XY.m128d_f64[0]._4_4_,
                             uVar49 & local_188.Scale3D.XY.m128d_f64[0]._0_4_));
      iVar41 = movmskpd(extraout_EAX,auVar53);
      if ((uVar44 & 0x3fffffff) == 0 && iVar41 == 0) {
        local_128.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_128.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_128.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_128.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_128.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_128.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_188,&local_128);
      }
      pUVar12 = local_348;
      uVar44 = uVar31;
      if ((int)uVar43 < *(int *)(&local_348[0x27].field_0x8 + (longlong)piVar14)) {
        uVar44 = uVar40;
      }
      if ((uVar44 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_1e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1e8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1e8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_1e8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1e8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_1e8,&local_128,
                 (TTransform<double> *)
                 (*(longlong *)(&pUVar12[0x27].field_0x0 + (longlong)piVar14) + lVar45));
      dVar28 = local_1e8.Scale3D.ZW.m128d_f64[1];
      dVar27 = local_1e8.Scale3D.ZW.m128d_f64[0];
      dVar24 = local_1e8.Translation.ZW.m128d_f64[1];
      dVar23 = local_1e8.Translation.ZW.m128d_f64[0];
      dVar20 = local_1e8.Rotation.ZW.m128d_f64[1];
      dVar19 = local_1e8.Rotation.ZW.m128d_f64[0];
      dVar18 = local_1e8.Rotation.XY.m128d_f64[1];
      dVar17 = local_1e8.Rotation.XY.m128d_f64[0];
      dVar21 = local_1e8.Translation.XY.m128d_f64[0];
      dVar22 = local_1e8.Translation.XY.m128d_f64[1];
      uVar44 = uVar31;
      if ((int)uVar43 < local_370.ArrayNum) {
        uVar44 = uVar40;
      }
      dVar25 = local_1e8.Scale3D.XY.m128d_f64[0];
      dVar26 = local_1e8.Scale3D.XY.m128d_f64[1];
      if ((uVar44 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(double *)(local_370.AllocatorInstance.Data + lVar45) = dVar17;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 8) = dVar18;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x10) = dVar19;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x10 + 8) = dVar20;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x20) = dVar21;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x20 + 8) = dVar22;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x30) = dVar23;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x30 + 8) = dVar24;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x40) = dVar25;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x40 + 8) = dVar26;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x50) = dVar27;
      *(double *)(local_370.AllocatorInstance.Data + lVar45 + 0x50 + 8) = dVar28;
      pFVar48 = local_338;
      pTVar38 = local_320;
      uVar44 = (uint)local_380;
    }
    TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
  } while( true );
}

// GetPrivateStaticClass @ 14e1d44e0

UClass * __cdecl UOptimusAdvancedSkeletonDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAdvancedSkeletonDataProvider",
               &Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusAdvancedSkeletonDataProvider,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusAdvancedSkeletonDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusAdvancedSkeletonDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1db790

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
UOptimusAdvancedSkeletonDataProvider::GetRenderProxy(UOptimusAdvancedSkeletonDataProvider *this)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FComputeDataProviderRenderProxy *pFVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  FComputeDataProviderRenderProxy FVar5;
  FSkeletalMeshLODRenderData *pFVar6;
  FName FVar7;
  TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *pTVar8;
  FOptimusAnimAttributeBufferRuntimeData *pFVar9;
  longlong lVar10;
  code *pcVar11;
  FName FVar12;
  longlong lVar13;
  UOptimusAdvancedSkeletonDataProvider *pUVar14;
  void *pvVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  UObject *pUVar21;
  UOptimusDeformerInstance *this_00;
  FName *pFVar22;
  FComputeDataProviderRenderProxy *pFVar23;
  USkeletalMeshComponent *pUVar24;
  USkinnedMeshComponent *this_01;
  USkinnedAsset *pUVar25;
  undefined8 uVar26;
  FName FVar27;
  FName *pFVar28;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *this_02;
  ForAnyElementType FVar32;
  FScriptContainerElement *pFVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  longlong *plVar37;
  longlong lVar38;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  longlong local_198;
  longlong local_190;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_188;
  longlong local_178;
  uint local_170;
  undefined1 local_16c;
  FName *local_168;
  void *local_160;
  longlong local_158;
  UOptimusAdvancedSkeletonDataProvider *local_150;
  FComputeDataProviderRenderProxy *local_148;
  FReferenceSkeleton *local_140;
  FComputeDataProviderRenderProxy local_138;
  FInstancedStruct local_130;
  void *local_120;
  uint uStack_118;
  undefined4 uStack_114;
  longlong local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  FName local_f8;
  FName local_f0 [2];
  undefined4 local_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  FName local_88;
  byte local_80;
  FName local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_150 = this;
  local_148 = ::operator_new(0xd0);
  pFVar34 = (FScriptContainerElement *)0x0;
  if (local_148 == (FComputeDataProviderRenderProxy *)0x0) {
    local_148 = (FComputeDataProviderRenderProxy *)0x0;
  }
  else {
    local_148[1] = (FComputeDataProviderRenderProxy)0x0;
    *local_148 = (FComputeDataProviderRenderProxy)
                 &___7FOptimusAdvancedSkeletonDataProviderProxy__6B_;
    local_148[2] = (FComputeDataProviderRenderProxy)0x0;
    local_148[3] = (FComputeDataProviderRenderProxy)0x0;
    local_148[4] = (FComputeDataProviderRenderProxy)0x0;
    local_148[5] = (FComputeDataProviderRenderProxy)0x0;
    local_148[6] = (FComputeDataProviderRenderProxy)0x0;
    local_148[7] = (FComputeDataProviderRenderProxy)0x0;
    local_148[8] = (FComputeDataProviderRenderProxy)0x0;
    local_148[9] = (FComputeDataProviderRenderProxy)0x0;
    local_148[10] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0xb] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0xc] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0xd] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0xe] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0xf] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x10] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x11] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x12] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x13] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x14] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x15] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x16] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x17] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x18] = (FComputeDataProviderRenderProxy)0x0;
    local_148[0x19] = (FComputeDataProviderRenderProxy)0x0;
  }
  pFVar23 = local_148;
  bVar16 = FWeakObjectPtr::IsValid(&(this->SkeletalMesh).WeakPtr);
  if ((bVar16) &&
     (pUVar21 = FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr),
     *(longlong *)&pUVar21[0x33].field_0x18 != 0)) {
    pUVar21 = FWeakObjectPtr::Get(&(this->WeakDataInterface).WeakPtr);
    this_00 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->WeakDeformerInstance).WeakPtr)
    ;
    if ((this_00 != (UOptimusDeformerInstance *)0x0) && (pUVar21 != (UObject *)0x0)) {
      pFVar22 = ::FName::FName(&local_f8,0x11,L"SkinWeightProfile",FNAME_Add);
      UOptimusDeformerInstance::GetDataInterfacePropertyOverride
                (this_00,(FOptimusValueContainerStruct *)&local_130,(UComputeDataInterface *)pUVar21
                 ,*pFVar22);
      pFVar22 = ::FName::FName(local_f0,FOptimusValueContainerStruct::ValuePropertyName);
      FInstancedPropertyBag::GetValueName
                ((FInstancedPropertyBag *)&local_130,
                 (TValueOrError<FName,EPropertyBagResult> *)&local_88,*pFVar22);
      uVar31 = (ulonglong)local_80;
      if ((2 < uVar31) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
        return pFVar23;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar31) != '\0') {
        if ((local_80 != 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
          return pFVar23;
        }
        if (this->SkinWeightProfile != local_88) {
          if ((local_80 != 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar16)) {
            pcVar11 = (code *)swi(3);
            pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
            return pFVar23;
          }
          this->SkinWeightProfile = local_88;
          if (this->bEnableLayeredSkinning != false) {
            this->bIsLayeredSkinInitialized = false;
          }
        }
      }
      FInstancedStruct::Reset(&local_130);
    }
    pUVar21 = FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
    FVar5 = *(FComputeDataProviderRenderProxy *)&pUVar21[0x33].field_0x18;
    local_138 = FVar5;
    uVar17 = (**(code **)(*(longlong *)FVar5 + 0xa0))(FVar5);
    plVar37 = *(longlong **)((longlong)FVar5 + 0x48);
    uVar29 = 0;
    if ((int)uVar17 < (int)plVar37[1]) {
      uVar29 = ~uVar17 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
      return pFVar23;
    }
    pFVar6 = *(FSkeletalMeshLODRenderData **)(*plVar37 + (longlong)(int)uVar17 * 8);
    bVar16 = Optimus::IsSkinWeightProfileAvailable(pFVar6,this->SkinWeightProfile);
    if (bVar16) {
      this_01 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
      pUVar25 = USkinnedMeshComponent::GetSkinnedAsset(this_01);
      local_140 = (FReferenceSkeleton *)(**(code **)(*(longlong *)pUVar25 + 800))(pUVar25);
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 0;
      local_188.ArrayMax = 0;
      if (this->bEnableLayeredSkinning != false) {
        ComputeBoneTransformsForLayeredSkinning(this,&local_188,pFVar6,local_140);
      }
      FVar32.Data = local_188.AllocatorInstance.Data;
      pUVar21 = FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
      iVar30 = (this->AttributeBufferRuntimeData).ArrayNum;
      lVar38 = (longlong)*(int *)&pUVar21[0x28].field_0x20 * 0x40 + (longlong)pUVar21;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = 0;
      local_198 = lVar38;
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar30,&local_1b8,(int *)&local_1b0,
                          (int *)((longlong)&local_1b0 + 4));
      memset(local_1b8.Data + (longlong)iVar18 * 0x10,0,(longlong)iVar30 << 4);
      local_1a4 = 0;
      uVar29 = 0;
      if (0 < (this->AttributeBufferRuntimeData).ArrayNum) {
        local_190 = 0;
        local_178 = 0;
        local_158 = 0;
        pFVar36 = pFVar34;
        do {
          pUVar14 = local_150;
          lVar13 = local_158;
          lVar10 = local_178;
          uVar35 = (uint)pFVar36;
          uVar17 = ~uVar35 >> 0x1f;
          uVar19 = 0;
          uVar20 = uVar19;
          if ((int)uVar35 < (local_150->AttributeBufferRuntimeData).ArrayNum) {
            uVar20 = uVar17;
          }
          local_1a0 = uVar17;
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
            return pFVar23;
          }
          pFVar22 = (FName *)((pUVar14->AttributeBufferRuntimeData).AllocatorInstance.Data + lVar13)
          ;
          iVar30 = (local_140->FinalRefBoneInfo).ArrayNum;
          uVar20 = uVar19;
          if ((int)uVar35 < (int)(uint)local_1b0) {
            uVar20 = uVar17;
          }
          local_19c = iVar30;
          local_168 = pFVar22;
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
            return pFVar23;
          }
          pFVar33 = local_1b8.Data + lVar10;
          iVar30 = iVar30 * pFVar22[2].Number;
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,iVar30,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 8),
                              (int *)(pFVar33 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memset(*pFVar33 + iVar18,0,(longlong)iVar30);
          local_1a8 = 0;
          pFVar33 = pFVar34;
          if (0 < local_19c) {
LAB_14e1dbca0:
            uVar20 = uVar19;
            if ((int)pFVar36 < (int)(uint)local_1b0) {
              uVar20 = uVar17;
            }
            if ((uVar20 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
              return pFVar23;
            }
            FVar12 = UE::Anim::BoneAttributeNamespace;
            FVar7 = *pFVar22;
            local_160 = (void *)((longlong)(int)((int)pFVar33 * pFVar22[2].Number) +
                                *(longlong *)(local_1b8.Data + local_178));
            local_78 = pFVar22[4];
            local_50 = (longlong *)0x0;
            if (local_78 != (FName)0x0) {
              FVar27 = pFVar22[9];
              if (FVar27 == (FName)0x0) {
                FVar27 = (FName)(pFVar22 + 6);
              }
              (*(code *)**(undefined8 **)FVar27)(FVar27,local_68);
              if (local_78 == (FName)0x0) goto LAB_14e1dbdd6;
              pTVar8 = *(TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> **)(lVar38 + 0xf68);
              FVar27 = pFVar22[10];
              iVar30 = *(int *)(local_198 + 0xf70);
              lVar38 = local_198;
              for (this_02 = pTVar8; local_198 = lVar38, this_02 != pTVar8 + iVar30;
                  this_02 = this_02 + 1) {
                bVar16 = TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>::
                         UEOpEquals<UScriptStruct,bool>(this_02,(UScriptStruct *)FVar27);
                lVar38 = local_198;
                if (bVar16) {
                  uVar17 = (uint)((longlong)this_02 - (longlong)pTVar8 >> 3);
                  if (uVar17 != 0xffffffff) {
                    uVar20 = uVar29;
                    if ((int)uVar17 < *(int *)(local_198 + 0xf50)) {
                      uVar20 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar11 = (code *)swi(3);
                      pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
                      return pFVar23;
                    }
                    pFVar22 = *(FName **)
                               (*(longlong *)(lVar38 + 0xf48) + (longlong)(int)uVar17 * 0x10);
                    pFVar28 = pFVar22;
                    goto joined_r0x00014e1dbf82;
                  }
                  break;
                }
              }
              goto LAB_14e1dbd92;
            }
            goto LAB_14e1dbdd6;
          }
LAB_14e1dbdea:
          local_1a4 = uVar35 + 1;
          pFVar36 = (FScriptContainerElement *)(ulonglong)local_1a4;
          local_190 = local_190 + 1;
          local_158 = local_158 + 0x80;
          local_178 = local_178 + 0x10;
          FVar32.Data = local_188.AllocatorInstance.Data;
          this = local_150;
        } while ((int)local_1a4 < (local_150->AttributeBufferRuntimeData).ArrayNum);
      }
      pFVar23 = local_148;
      local_148[1] = local_138;
      *(FName *)(local_148 + 2) = this->SkinWeightProfile;
      iVar30 = this->ParameterBufferSize;
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar30,(ForAnyElementType *)(local_148 + 3),(int *)(local_148 + 4),
                          (int *)&local_148[4].field_0x4);
      memset((void *)((longlong)iVar18 + (longlong)pFVar23[3]),0,(longlong)iVar30);
      pTVar1 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pFVar23 + 5);
      if (pTVar1 != &local_188) {
        pFVar36 = (pTVar1->AllocatorInstance).Data;
        if (pFVar36 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar36);
        }
        (pTVar1->AllocatorInstance).Data = FVar32.Data;
        *(int *)(pFVar23 + 6) = local_188.ArrayNum;
        *(int *)&pFVar23[6].field_0x4 = local_188.ArrayMax;
        FVar32.Data = pFVar34;
      }
      pFVar2 = pFVar23 + 7;
      if ((TArray<FOptimusAnimAttributeBufferRuntimeData,TSizedDefaultAllocator<32>_> *)pFVar2 !=
          &this->AttributeBufferRuntimeData) {
        DestructItems<FOptimusAnimAttributeBufferRuntimeData,int>
                  ((FOptimusAnimAttributeBufferRuntimeData *)*(FScriptContainerElement **)pFVar2,
                   *(int *)(pFVar23 + 8));
        iVar30 = (this->AttributeBufferRuntimeData).ArrayNum;
        puVar3 = &pFVar23[8].field_0x4;
        pFVar9 = (FOptimusAnimAttributeBufferRuntimeData *)
                 (this->AttributeBufferRuntimeData).AllocatorInstance.Data;
        iVar18 = *(int *)puVar3;
        *(int *)(pFVar23 + 8) = iVar30;
        if ((iVar30 == 0) && (iVar18 == 0)) {
          *(undefined4 *)puVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,iVar30,iVar18,(ForAnyElementType *)pFVar2,iVar30,(int *)puVar3);
          ConstructItems<FOptimusAnimAttributeBufferRuntimeData,FOptimusAnimAttributeBufferRuntimeData,int>
                    (*(FScriptContainerElement **)pFVar2,pFVar9,iVar30);
        }
      }
      pFVar2 = pFVar23 + 9;
      if (pFVar2 == (FComputeDataProviderRenderProxy *)&local_1b8) {
      }
      else {
        DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)*pFVar2,
                   *(int *)(pFVar23 + 10));
        if (*pFVar2 != (FComputeDataProviderRenderProxy)0x0) {
          FMemory::Free((void *)*pFVar2);
        }
        *pFVar2 = (FComputeDataProviderRenderProxy)local_1b8.Data;
        *(uint *)(pFVar23 + 10) = (uint)local_1b0;
        *(undefined4 *)&pFVar23[10].field_0x4 = local_1b0._4_4_;
        local_1b8.Data = (FScriptContainerElement *)0x0;
        local_1b0 = 0;
        local_1b0._0_4_ = uVar29;
      }
      DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_1b8.Data,(uint)local_1b0
                );
      if ((FComputeDataProviderRenderProxy)local_1b8.Data != (FComputeDataProviderRenderProxy)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      if (FVar32.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar32.Data);
      }
    }
    else {
      FVar7 = this->SkinWeightProfile;
      local_16c = 1;
      local_170 = uVar17;
      pUVar24 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
      Optimus::RequestSkinWeightProfileForDeformer(pUVar24,FVar7,(TOptional<int>)&local_170);
    }
  }
  return pFVar23;
joined_r0x00014e1dbf82:
  if (pFVar28 ==
      (FName *)((longlong)pFVar22 +
               (longlong)*(int *)(*(longlong *)(lVar38 + 0xf48) + 8 + (longlong)(int)uVar17 * 0x10)
               * 0x14)) goto LAB_14e1dbfa5;
  if (((pFVar28[2].ComparisonIndex.Value == local_1a8) && (pFVar28[1] == FVar7)) &&
     (*pFVar28 == FVar12)) {
    uVar20 = (uint)(((longlong)pFVar28 - (longlong)pFVar22) / 0x14);
    goto LAB_14e1dbfaa;
  }
  pFVar28 = (FName *)&pFVar28[2].Number;
  goto joined_r0x00014e1dbf82;
LAB_14e1dbfa5:
  uVar20 = 0xffffffff;
LAB_14e1dbfaa:
  if ((((int)uVar17 < 0) || (*(int *)(lVar38 + 0xf60) <= (int)uVar17)) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1265464598543204837>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                          ,0x1e5,"Values.IsValidIndex(TypeIndex)"), bVar16)) {
    pcVar11 = (code *)swi(3);
    pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
    return pFVar23;
  }
  uVar35 = uVar29;
  if ((int)uVar17 < *(int *)(lVar38 + 0xf60)) {
    uVar35 = ~uVar17 >> 0x1f;
  }
  if ((uVar35 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
    return pFVar23;
  }
  plVar37 = (longlong *)((longlong)(int)uVar17 * 0x10 + *(longlong *)(lVar38 + 0xf58));
  if (uVar20 != 0xffffffff) {
    plVar4 = plVar37 + 1;
    if ((((int)uVar20 < 0) || ((int)*plVar4 <= (int)uVar20)) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1265464598543204842>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                            ,0x1ea,"TypedArray.IsValidIndex(AttributeIndex)"), bVar16)) {
      pcVar11 = (code *)swi(3);
      pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
      return pFVar23;
    }
    uVar17 = uVar29;
    if ((int)uVar20 < (int)*plVar4) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
      return pFVar23;
    }
    pFVar22 = local_168;
    lVar10 = *(longlong *)(*plVar37 + (longlong)(int)uVar20 * 0x10);
    if (lVar10 != 0) {
      local_e0 = 0;
      uVar17 = *(int *)((longlong)FVar27 + 0x58) + -1 + (int)*(short *)((longlong)FVar27 + 0x5c) &
               -(int)*(short *)((longlong)FVar27 + 0x5c);
      uStack_118 = local_168[2].Number;
      local_120 = local_160;
      if (((int)uStack_118 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
        return pFVar23;
      }
      pvVar15 = local_120;
      uStack_b0 = CONCAT44(uStack_dc,local_e0);
      local_b8 = 0;
      uVar26 = CONCAT44(uStack_114,uStack_118);
      local_108 = lVar10;
      uStack_100 = uVar17;
      if (((int)uVar17 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        pFVar23 = (FComputeDataProviderRenderProxy *)(*pcVar11)();
        return pFVar23;
      }
      uStack_d0 = CONCAT44(uStack_fc,uStack_100);
      local_98 = local_b8;
      uStack_90 = uStack_b0;
      local_a8 = pvVar15;
      local_d8 = local_108;
      uStack_a0 = uVar26;
      UE::Core::Private::Function::CheckCallable((void *)local_78);
      FVar7 = local_78;
      plVar37 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar37 = local_50;
      }
      uVar26 = (**(code **)(*plVar37 + 8))();
      (*(code *)FVar7)(uVar26,&local_d8,&local_a8);
      goto LAB_14e1dbda7;
    }
  }
LAB_14e1dbd92:
  pFVar22 = local_168;
  memcpy(local_160,(void *)local_168[0xb],(ulonglong)local_168[0xc].ComparisonIndex.Value);
LAB_14e1dbda7:
  if (local_78 != (FName)0x0) {
    plVar37 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar37 = local_50;
    }
    (**(code **)(*plVar37 + 0x10))();
  }
  pFVar36 = (FScriptContainerElement *)(ulonglong)local_1a4;
  uVar17 = local_1a0;
LAB_14e1dbdd6:
  uVar35 = (uint)pFVar36;
  local_1a8 = local_1a8 + 1;
  pFVar33 = (FScriptContainerElement *)(ulonglong)local_1a8;
  if (local_19c <= (int)local_1a8) goto LAB_14e1dbdea;
  goto LAB_14e1dbca0;
}

// Init @ 14e1ea860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusAdvancedSkeletonDataProvider::Init
          (UOptimusAdvancedSkeletonDataProvider *this,UOptimusAdvancedSkeletonDataInterface *param_1
          ,USkeletalMeshComponent *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  FName FVar9;
  uint uVar10;
  longlong lVar11;
  FName *pFVar12;
  longlong lVar13;
  uint uVar14;
  FOptimusAnimAttributeBufferDescription *pFVar15;
  FOptimusAnimAttributeBufferDescription *pFVar16;
  longlong lVar17;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  FScriptContainerElement *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138 [4];
  uint local_134;
  FShaderParametersMetadataBuilder local_130;
  UOptimusAdvancedSkeletonDataInterface *local_118;
  USkeletalMeshComponent *local_110;
  FShaderParametersMetadata *local_108;
  undefined1 local_100 [4];
  undefined1 local_fc;
  USkeletalMeshComponent *local_f8;
  FShaderParametersMetadataAllocations local_f0;
  undefined1 local_c8 [32];
  FName local_a8;
  FName local_98;
  FName FStack_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  undefined8 local_68;
  FName local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_118 = param_1;
  local_f8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UOptimusAdvancedSkeletonDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakDataInterface).WeakPtr,(FObjectPtr)&local_118);
  this->bEnableLayeredSkinning = param_1->bEnableLayeredSkinning;
  local_110 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->SkeletalMesh).WeakPtr,(FObjectPtr)&local_110);
  this->SkinWeightProfile = param_1->SkinWeightProfile;
  iVar3 = (param_1->AttributeBufferArray).InnerArray.ArrayNum;
  pFVar15 = (FOptimusAnimAttributeBufferDescription *)
            (param_1->AttributeBufferArray).InnerArray.AllocatorInstance.Data;
  pFVar16 = pFVar15 + iVar3;
  lVar13 = 0;
  while( true ) {
    if ((param_1->AttributeBufferArray).InnerArray.ArrayNum != iVar3) {
      local_138[0] = 0;
      `TCheckedPointerIterator<FOptimusAnimAttributeBufferDescription_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_138);
    }
    if (pFVar15 == pFVar16) break;
    FOptimusAnimAttributeBufferRuntimeData::FOptimusAnimAttributeBufferRuntimeData
              ((FOptimusAnimAttributeBufferRuntimeData *)local_c8,pFVar15);
    pFVar4 = (this->AttributeBufferRuntimeData).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_c8) &&
       (lVar11 = (longlong)(this->AttributeBufferRuntimeData).ArrayMax,
       (FScriptContainerElement *)local_c8 < pFVar4 + lVar11 * 0x80)) {
      local_150 = (longlong)(this->AttributeBufferRuntimeData).ArrayNum;
      local_148 = 0x80;
      local_168 = local_c8;
      local_160 = pFVar4;
      local_158 = lVar11;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->AttributeBufferRuntimeData).ArrayNum;
    piVar1 = &(this->AttributeBufferRuntimeData).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1080,&(this->AttributeBufferRuntimeData).AllocatorInstance,piVar1);
    }
    (this->AttributeBufferRuntimeData).ArrayNum = iVar7 + 1;
    pFVar12 = (FName *)((this->AttributeBufferRuntimeData).AllocatorInstance.Data +
                       (longlong)iVar7 * 0x80);
    pFVar12->ComparisonIndex = (FNameEntryId)local_c8._0_4_;
    pFVar12->Number = local_c8._4_4_;
    pFVar12[1].ComparisonIndex = (FNameEntryId)local_c8._8_4_;
    pFVar12[1].Number = local_c8._12_4_;
    pFVar12[2].ComparisonIndex.Value = local_c8._16_4_;
    pFVar12[2].Number = local_c8._20_4_;
    pFVar12[4] = local_a8;
    pFVar12[9] = local_80;
    local_80.ComparisonIndex.Value = 0;
    local_80.Number = 0;
    pFVar12[6] = local_98;
    pFVar12[7] = FStack_90;
    pFVar12[8] = local_88;
    if (pFVar12[4] != (FName)0x0) {
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
    }
    pFVar12[0xb].ComparisonIndex = 0;
    pFVar12[0xb].Number = 0;
    pFVar12[10] = local_78;
    pFVar12[0xb] = local_70;
    local_70.ComparisonIndex.Value = 0;
    local_70.Number = 0;
    pFVar12[0xc].ComparisonIndex.Value = (uint)local_68;
    pFVar12[0xc].Number = local_68._4_4_;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    pFVar12[0xd].ComparisonIndex = 0;
    pFVar12[0xd].Number = 0;
    pFVar12[0xd] = local_60;
    local_60.ComparisonIndex.Value = 0;
    local_60.Number = 0;
    pFVar12[0xe].ComparisonIndex.Value = (uint)local_58;
    pFVar12[0xe].Number = local_58._4_4_;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)0x0,0);
    if (local_60 != (FName)0x0) {
      FMemory::Free((void *)local_60);
    }
    if (local_70 != (FName)0x0) {
      FMemory::Free((void *)local_70);
    }
    if (local_a8 != (FName)0x0) {
      FVar9 = (FName)&local_98;
      if (local_80 != (FName)0x0) {
        FVar9 = local_80;
      }
      (**(code **)((longlong)*(FName *)FVar9 + 0x10))();
    }
    pFVar15 = pFVar15 + 1;
  }
  local_130.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Members.ArrayNum = 0;
  local_130.Members.ArrayMax = 0;
  local_130.NextMemberOffset = 0;
  local_f0.ShaderParameterMetadatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ShaderParameterMetadatas.ArrayNum = 0;
  local_f0.ShaderParameterMetadatas.ArrayMax = 0;
  local_f0.Names.Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Names.Chunks.Array.ArrayMax = 0;
  local_f0.Names.NumElements = 0;
  local_f0.Names.Chunks.Array.ArrayNum = 0;
  (**(code **)(param_1->_padding_ + 0x2e8))(param_1,L"Dummy",&local_130,&local_f0);
  pFVar8 = FShaderParametersMetadataBuilder::Build
                     (&local_130,ShaderParameterStruct,L"UAnimAttributeDataInterface");
  local_108 = pFVar8;
  if (((pFVar8->Members).ArrayNum != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DummyMember.Num()==1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAdvancedSkeleton.cpp"
                         ,0x243,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (pFVar8->Members).ArrayNum;
  uVar10 = iVar3 - 1;
  uVar14 = 0;
  if ((int)uVar10 < iVar3) {
    uVar14 = ~uVar10 >> 0x1f;
  }
  if (uVar14 == 0) {
    local_168 = (undefined1 *)(longlong)(int)uVar10;
    local_160 = (FScriptContainerElement *)(longlong)iVar3;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar11 = *(longlong *)
            ((pFVar8->Members).AllocatorInstance.Data +
            (longlong)(pFVar8->Members).ArrayNum * 0x30 + -8);
  if ((*(int *)(lVar11 + 0x58) != (this->AttributeBufferRuntimeData).ArrayNum + 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceParameterMembers.Num() == AttributeBufferRuntimeData.Num() + 1"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAdvancedSkeleton.cpp"
                         ,0x247,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (0 < (this->AttributeBufferRuntimeData).ArrayNum) {
    uVar14 = 1;
    lVar17 = 0x30;
    do {
      iVar3 = (this->AttributeBufferRuntimeData).ArrayNum;
      uVar10 = 0;
      if ((int)(uVar14 - 1) < iVar3) {
        uVar10 = ~(uVar14 - 1) >> 0x1f;
      }
      local_134 = uVar14;
      if (uVar10 == 0) {
        local_168 = (undefined1 *)(longlong)(int)(uVar14 - 1);
        local_160 = (FScriptContainerElement *)(longlong)iVar3;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (this->AttributeBufferRuntimeData).AllocatorInstance.Data;
      uVar10 = 0;
      if ((int)uVar14 < *(int *)(lVar11 + 0x58)) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_168 = (undefined1 *)(longlong)(int)uVar14;
        local_160 = (FScriptContainerElement *)(longlong)*(int *)(lVar11 + 0x58);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      bVar6 = ::FName::Equals(*(FName *)(pFVar4 + lVar13 + 8),
                              *(wchar_t **)(*(longlong *)(lVar11 + 0x50) + lVar17));
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RuntimeData.HlslId == DataInterfaceParameterMembers[AttributeIndexInParameter].GetName()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAdvancedSkeleton.cpp"
                             ,0x24f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar14 < *(int *)(lVar11 + 0x58)) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_168 = (undefined1 *)(longlong)(int)uVar14;
        local_160 = (FScriptContainerElement *)(longlong)*(int *)(lVar11 + 0x58);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar14 = uVar14 + 1;
      puVar2 = (undefined4 *)(*(longlong *)(lVar11 + 0x50) + 0x14 + lVar17);
      lVar17 = lVar17 + 0x30;
      *(undefined4 *)(pFVar4 + lVar13 + 0x10) = *puVar2;
      lVar13 = lVar13 + 0x80;
      pFVar8 = local_108;
    } while ((int)local_134 < (this->AttributeBufferRuntimeData).ArrayNum);
  }
  this->ParameterBufferSize = pFVar8->Size;
  (**(code **)pFVar8->_padding_)(pFVar8,1);
  local_fc = 0;
  Optimus::RequestSkinWeightProfileForDeformer
            (local_f8,this->SkinWeightProfile,(TOptional<int>)local_100);
  FShaderParametersMetadataAllocations::~FShaderParametersMetadataAllocations(&local_f0);
  if (local_130.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Members.AllocatorInstance.Data);
  }
  return;
}

// SetDeformerInstance @ 14e21dd60

void __thiscall
UOptimusAdvancedSkeletonDataProvider::SetDeformerInstance
          (UOptimusAdvancedSkeletonDataProvider *this,UOptimusDeformerInstance *param_1)

{
  UOptimusDeformerInstance *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UOptimusDeformerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this->CachedWeightedBoneIndices).HashSize,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUOptimusAdvancedSkeletonDataProvider @ 14e225760

void __cdecl
UOptimusAdvancedSkeletonDataProvider::StaticRegisterNativesUOptimusAdvancedSkeletonDataProvider
          (void)

{
  return;
}

// _getUObject @ 14e238d20

UObject * __thiscall
UOptimusAdvancedSkeletonDataProvider::_getUObject(UOptimusAdvancedSkeletonDataProvider *this)

{
  return (UObject *)&this[-1].CachedBoundaryBoneIndex.ArrayNum;
}

