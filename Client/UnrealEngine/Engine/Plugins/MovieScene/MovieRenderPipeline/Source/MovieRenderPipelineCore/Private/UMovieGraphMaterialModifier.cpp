// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dc9c9e0

UClass * __cdecl UMovieGraphMaterialModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMaterialModifier",
               &Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton,
               StaticRegisterNativesUMovieGraphMaterialModifier,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphMaterialModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphMaterialModifier>,local_res8,
               UMovieGraphCollectionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton;
}

// UMovieGraphMaterialModifier @ 14dcaff50

UMovieGraphMaterialModifier * __thiscall
UMovieGraphMaterialModifier::UMovieGraphMaterialModifier
          (UMovieGraphMaterialModifier *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->Material).SoftObjectPtr.field_0x18;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieGraphMaterialModifier__6B_;
  *(undefined8 *)&this->ModifiedComponents = 0;
  *(undefined8 *)&(this->ModifiedComponents).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedComponents).field_0x20 = 0;
  *(undefined4 *)&(this->ModifiedComponents).field_0x28 = 0;
  *(undefined4 *)&(this->ModifiedComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModifiedComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModifiedComponents).field_0x34 = 0;
  *(undefined8 *)&(this->ModifiedComponents).field_0x40 = 0;
  *(undefined4 *)&(this->ModifiedComponents).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UMovieGraphMaterialModifier @ 14dcaffe0

UMovieGraphMaterialModifier * __thiscall
UMovieGraphMaterialModifier::UMovieGraphMaterialModifier
          (UMovieGraphMaterialModifier *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->Material).SoftObjectPtr.field_0x18;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieGraphMaterialModifier__6B_;
  *(undefined8 *)&this->ModifiedComponents = 0;
  *(undefined8 *)&(this->ModifiedComponents).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedComponents).field_0x20 = 0;
  *(undefined4 *)&(this->ModifiedComponents).field_0x28 = 0;
  *(undefined4 *)&(this->ModifiedComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModifiedComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModifiedComponents).field_0x34 = 0;
  *(undefined8 *)&(this->ModifiedComponents).field_0x40 = 0;
  *(undefined4 *)&(this->ModifiedComponents).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Material).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UMovieGraphMaterialModifier @ 14dcb2e30

void __thiscall
UMovieGraphMaterialModifier::~UMovieGraphMaterialModifier(UMovieGraphMaterialModifier *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphMaterialModifier__6B_;
  pvVar1 = *(void **)&(this->Material).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->ModifiedComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModifiedComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModifiedComponents);
  this->_padding_ = (longlong)&___7UMovieGraphCollectionModifier__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UMovieGraphModifierBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyModifier @ 14dcbae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014dcbb24d) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphMaterialModifier::ApplyModifier(UMovieGraphMaterialModifier *this,UWorld *param_1)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  UMaterialInterface *pUVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  UObject *pUVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  size_t _Size;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ForAnyElementType FVar14;
  TMap<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar15;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  uint local_1e4;
  uint local_1e0;
  int local_1d8 [2];
  undefined1 local_1d0 [24];
  FUtf8String local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FScriptContainerElement *local_198;
  undefined8 *local_190;
  undefined1 local_188 [8];
  FName local_180;
  FName FStack_178;
  FUtf8String local_170;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_160;
  UObject *local_150;
  UMaterialInterface *local_148;
  UObject *local_140;
  TMap<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>_>
  *local_138;
  FScriptContainerElement *local_130;
  UMovieGraphMaterialModifier *local_128;
  undefined8 *local_120;
  UWorld *local_118;
  undefined1 local_110 [8];
  FSoftObjectPath local_108;
  FMovieGraphEvaluationResult local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_128 = this;
  local_118 = param_1;
  local_148 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(&this->Material);
  if (local_148 != (UMaterialInterface *)0x0) {
    this_00 = &this->ModifiedComponents;
    bVar5 = 1 < *(int *)&(this->ModifiedComponents).field_0x48;
    local_138 = this_00;
    if (!bVar5) {
      TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->ModifiedComponents).field_0x8);
    puVar1 = &(this->ModifiedComponents).field_0xc;
    *(undefined4 *)&(this->ModifiedComponents).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ModifiedComponents).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ModifiedComponents).field_0x34 = 0;
    iVar7 = *(int *)&(this->ModifiedComponents).field_0x2c;
    *(undefined4 *)&(this->ModifiedComponents).field_0x28 = 0;
    if ((iVar7 < 0) || (0x80 < iVar7)) {
      *(undefined4 *)&(this->ModifiedComponents).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModifiedComponents).field_0x10,0);
    }
    if (bVar5) {
      *(undefined4 *)&(this->ModifiedComponents).field_0x48 = 1;
      TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00);
    }
    local_1e0 = (uint)this->_padding_;
    uVar10 = (ulonglong)(int)local_1e0;
    puVar13 = (undefined8 *)this->_padding_;
    puVar12 = puVar13 + uVar10;
    local_120 = puVar12;
    while( true ) {
      local_190 = puVar13;
      if ((int)this->_padding_ != (int)uVar10) {
        local_1e8 = 0;
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphCollection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1e8);
      }
      if (puVar13 == puVar12) break;
      if ((UMovieGraphCollection *)*puVar13 != (UMovieGraphCollection *)0x0) {
        UMovieGraphCollection::EvaluateActorsAndComponents
                  ((UMovieGraphCollection *)*puVar13,&local_e8,param_1);
        FMovieGraphEvaluationResult::GetAllComponentsOfType<UPrimitiveComponent>
                  (&local_e8,&local_160);
        local_1e4 = local_160.ArrayNum;
        uVar10 = (ulonglong)(int)local_1e4;
        local_130 = local_160.AllocatorInstance.Data + uVar10 * 8;
        FVar14.Data = local_160.AllocatorInstance.Data;
        while( true ) {
          pFVar11 = local_130;
          local_198 = FVar14.Data;
          if (local_160.ArrayNum != (int)uVar10) {
            local_1e7[0] = 0;
            `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_1e7);
          }
          if (FVar14.Data == pFVar11) break;
          pUVar2 = *(UObject **)FVar14.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          local_1a8 = 0;
          FStack_178.ComparisonIndex.Value = 0;
          FStack_178.Number = 0;
          local_180.ComparisonIndex.Value = 0;
          local_180.Number = 0;
          local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_170.Data.ArrayNum = 0;
          local_170.Data.ArrayMax = 0;
          local_188 = (undefined1  [8])0x0;
          FUtf8String::Reset(&local_170,0);
          local_150 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_188,(FObjectPtr)&local_150);
          _Src.Data = local_170.Data.AllocatorInstance.Data;
          _Size = (size_t)local_170.Data.ArrayNum;
          local_110 = local_188;
          local_108.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.SubPathString.Data.ArrayNum = local_170.Data.ArrayNum;
          local_108.AssetPath.PackageName = local_180;
          local_108.AssetPath.AssetName = FStack_178;
          if (local_170.Data.ArrayNum == 0) {
            local_108.SubPathString.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_170.Data.ArrayNum,0,(ForAnyElementType *)&local_108.SubPathString,
                       local_170.Data.ArrayNum,&local_108.SubPathString.Data.ArrayMax);
            memcpy(local_108.SubPathString.Data.AllocatorInstance.Data,_Src.Data,_Size);
          }
          uVar6 = ::GetTypeHash(&local_108);
          if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
          }
          pTVar8 = TMapBase<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindOrAddImpl<TSoftObjectPtr<UPrimitiveComponent>_>
                             ((TMapBase<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>_>
                               *)this_00,uVar6,(TSoftObjectPtr<UPrimitiveComponent> *)local_188);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          iVar15 = 0;
          iVar7 = (**(code **)(*(longlong *)pUVar2 + 0x810))(pUVar2);
          pUVar4 = local_148;
          if (0 < iVar7) {
            local_1a0 = 0;
            do {
              pUVar9 = (UObject *)(**(code **)(*(longlong *)pUVar2 + 0x690))(pUVar2);
              local_1d8[0] = iVar15;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar9);
              }
              local_1d0._16_8_ = 0;
              local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b8.Data.ArrayNum = 0;
              local_1b8.Data.ArrayMax = 0;
              local_1d0._0_8_ = 0;
              local_1d0._8_8_ = 0;
              FUtf8String::Reset(&local_1b8,0);
              local_140 = pUVar9;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar9);
              }
              FSoftObjectPtr::operator=((FSoftObjectPtr *)local_1d0,(FObjectPtr)&local_140);
              pFVar11 = (pTVar8->AllocatorInstance).Data;
              if (((pFVar11 <= (FScriptContainerElement *)local_1d8) &&
                  ((FScriptContainerElement *)local_1d8 <
                   pFVar11 + (longlong)pTVar8->ArrayMax * 0x30)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = pTVar8->ArrayNum;
              if (iVar7 == pTVar8->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
              }
              pTVar8->ArrayNum = iVar7 + 1;
              pFVar11 = (pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
              *(int *)pFVar11 = local_1d8[0];
              *(undefined8 *)(pFVar11 + 8) = local_1d0._0_8_;
              *(undefined4 *)(pFVar11 + 0x10) = local_1d0._8_4_;
              *(undefined4 *)(pFVar11 + 0x14) = local_1d0._12_4_;
              *(undefined4 *)(pFVar11 + 0x18) = local_1d0._16_4_;
              *(undefined4 *)(pFVar11 + 0x1c) = local_1d0._20_4_;
              *(undefined8 *)(pFVar11 + 0x20) = 0;
              *(FScriptContainerElement **)(pFVar11 + 0x20) = local_1b8.Data.AllocatorInstance.Data;
              *(int *)(pFVar11 + 0x28) = local_1b8.Data.ArrayNum;
              *(int *)(pFVar11 + 0x2c) = local_1b8.Data.ArrayMax;
              local_1b8.Data.ArrayNum = 0;
              local_1b8.Data.ArrayMax = 0;
              local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (**(code **)(*(longlong *)pUVar2 + 0x6b8))(pUVar2,iVar15,pUVar4);
              iVar15 = iVar15 + 1;
              iVar7 = (**(code **)(*(longlong *)pUVar2 + 0x810))(pUVar2);
              FVar14.Data = local_198;
            } while (iVar15 < iVar7);
          }
          FVar14.Data = FVar14.Data + 8;
          uVar10 = (ulonglong)local_1e4;
          this_00 = local_138;
        }
        if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.AllocatorInstance.Data);
        }
        local_e8.MatchingComponents.HashSize = 0;
        if (local_e8.MatchingComponents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8.MatchingComponents.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_e8.MatchingComponents.Elements);
        local_e8.MatchingActors.HashSize = 0;
        if (local_e8.MatchingActors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8.MatchingActors.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&local_e8);
        puVar12 = local_120;
        this = local_128;
        puVar13 = local_190;
        param_1 = local_118;
      }
      uVar10 = (ulonglong)local_1e0;
      puVar13 = puVar13 + 1;
    }
  }
  return;
}

// GetModifierName @ 14dcce9c0

FText * __thiscall
UMovieGraphMaterialModifier::GetModifierName
          (UMovieGraphMaterialModifier *this,FText *__return_storage_ptr__)

{
  TRefCountPtr<ITextData> TVar1;
  undefined1 local_res10 [24];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&ModifierName,L"MovieGraph",L"MaterialModifierName",L"Material");
      atexit(`UMovieGraphMaterialModifier::GetModifierName'::__l2::
             _dynamic_atexit_destructor_for__ModifierName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  TVar1 = ModifierName.TextData;
  (__return_storage_ptr__->TextData).Reference = ModifierName.TextData.Reference;
  if (TVar1.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar1.Reference + 8))(TVar1.Reference,local_res10);
  }
  __return_storage_ptr__->Flags = ModifierName.Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd28e0

UClass * __cdecl UMovieGraphMaterialModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMaterialModifier",
               &Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton,
               StaticRegisterNativesUMovieGraphMaterialModifier,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphMaterialModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphMaterialModifier>,local_res8,
               UMovieGraphCollectionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphMaterialModifier @ 14dce6580

void __cdecl UMovieGraphMaterialModifier::StaticRegisterNativesUMovieGraphMaterialModifier(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphMaterialModifier_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UndoModifier @ 14dce9790

void __thiscall UMovieGraphMaterialModifier::UndoModifier(UMovieGraphMaterialModifier *this)

{
  TMap<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  FWeakObjectPtr FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  TPersistentObjectPtr<FSoftObjectPath> *this_02;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  this_00 = &this->ModifiedComponents;
  iVar3 = *(int *)&(this->ModifiedComponents).field_0x28;
  puVar17 = &(this->ModifiedComponents).field_0x10;
  iVar16 = 0;
  uVar9 = 1;
  iVar18 = 0;
  iVar10 = iVar16;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->ModifiedComponents).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar17;
    }
    uVar15 = *puVar19;
    iVar16 = 0;
    iVar18 = 0;
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      iVar18 = iVar18 + 0x20;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14dce982d;
      uVar15 = puVar19[iVar16];
    }
    uVar9 = ~(uVar15 - 1) & uVar15;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar10 = local_res20 + -1 + iVar18;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14dce982d:
  uVar15 = *(uint *)&(this->ModifiedComponents).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar9,iVar16);
  TStack_78.CurrentBitIndex = iVar10;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_78._28_4_ = iVar10;
  TStack_78.BaseBitIndex = iVar18;
  uStack_58 = CONCAT44(uStack_84,
                       *(int *)&(this->ModifiedComponents).field_0x8 -
                       *(int *)&(this->ModifiedComponents).field_0x34);
  local_res18 = uVar15;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar17;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->ModifiedComponents).field_0x28;
  if (uVar15 != uVar9) {
    puVar4 = *(undefined1 **)&(this->ModifiedComponents).field_0x20;
    if (puVar4 != (undefined1 *)0x0) {
      puVar17 = puVar4;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar14 = uVar14 + 0x20;
      uVar15 = uVar9;
      local_res18 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar16) goto LAB_14dce9930;
      uVar15 = *(uint *)(puVar17 + (longlong)iVar16 * 4);
    }
    uVar2 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar15 = (int)lVar6 + -1 + uVar14;
    local_res18 = uVar15;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
      local_res18 = uVar9;
    }
  }
LAB_14dce9930:
  do {
    puVar17 = &(this->ModifiedComponents).field_0x10;
    if (*(int *)&(this->ModifiedComponents).field_0x8 -
        *(int *)&(this->ModifiedComponents).field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_78.CurrentBitIndex == uVar15) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) {
      bVar8 = 1 < *(int *)&(this->ModifiedComponents).field_0x48;
      if (!bVar8) {
        TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->ModifiedComponents).field_0x8);
      puVar4 = &(this->ModifiedComponents).field_0xc;
      *(undefined4 *)&(this->ModifiedComponents).field_0x8 = 0;
      if (*(int *)puVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar4);
      }
      *(undefined4 *)&(this->ModifiedComponents).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ModifiedComponents).field_0x34 = 0;
      iVar3 = *(int *)&(this->ModifiedComponents).field_0x2c;
      *(undefined4 *)&(this->ModifiedComponents).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->ModifiedComponents).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)puVar17,0);
      }
      if (bVar8) {
        *(undefined4 *)&(this->ModifiedComponents).field_0x48 = 1;
        TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      return;
    }
    this_02 = (TPersistentObjectPtr<FSoftObjectPath> *)
              ((longlong)TStack_78.CurrentBitIndex * 0x40 + *(longlong *)&this_00->field_0x0);
    pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_02);
    if (pUVar11 == (UObject *)0x0) {
      if ((this_02->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_02->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_02);
        goto LAB_14dce999a;
      }
    }
    else {
LAB_14dce999a:
      if (pUVar11 != (UObject *)0x0) {
        pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar3 = (int)pUVar12->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar12->_padding_)) {
          uVar9 = this_02[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value;
          FVar5 = this_02[1].WeakPtr;
          this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)FVar5 + 8);
          while( true ) {
            if (this_02[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value != uVar9) {
              `TCheckedPointerIterator<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res10);
            }
            piVar1 = &this_01[-1].ObjectID.SubPathString.Data.ArrayNum;
            uVar15 = local_res18;
            if (piVar1 == (int *)((longlong)(int)uVar9 * 0x30 + (longlong)FVar5)) break;
            pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
            if (pUVar13 == (UObject *)0x0) {
              if ((this_01->ObjectID).AssetPath.PackageName != (FName)0x0) {
                FSoftObjectPath::TryLoad(&this_01->ObjectID,(FUObjectSerializeContext *)0x0);
                pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
                goto LAB_14dce9a34;
              }
            }
            else {
LAB_14dce9a34:
              if (pUVar13 != (UObject *)0x0) {
                pUVar12 = Z_Construct_UClass_UMaterialInterface_NoRegister();
                iVar3 = (int)pUVar12->_padding_;
                if ((iVar3 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar3 * 8)
                    == &pUVar12->_padding_)) {
                  (**(code **)(*(longlong *)pUVar11 + 0x6b8))(pUVar11,*piVar1,pUVar13);
                }
              }
            }
            this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_01[1].ObjectID;
          }
        }
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// execSetMaterial @ 14dcf3900

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UMovieGraphMaterialModifier::execSetMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType _Src;
  size_t _Size;
  FWeakObjectPtr local_58;
  FName local_50;
  FName FStack_48;
  FUtf8String local_40;
  TPersistentObjectPtr<FSoftObjectPath> local_30;
  
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FUtf8String::Reset(&local_40,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  _Src.Data = local_40.Data.AllocatorInstance.Data;
  local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_40.Data.ArrayNum;
  local_30.WeakPtr = local_58;
  local_30.ObjectID.SubPathString.Data.ArrayNum = local_40.Data.ArrayNum;
  local_30.ObjectID.AssetPath.PackageName = local_50;
  local_30.ObjectID.AssetPath.AssetName = FStack_48;
  if (local_40.Data.ArrayNum == 0) {
    local_30.ObjectID.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_40.Data.ArrayNum,0,(ForAnyElementType *)&local_30.ObjectID.SubPathString,
               local_40.Data.ArrayNum,&local_30.ObjectID.SubPathString.Data.ArrayMax);
    memcpy(local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data,_Src.Data,_Size);
  }
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[3].field_0x18,&local_30);
  if (local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

