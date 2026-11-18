// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 38

// StaticClass @ 14ab98620

UClass * __cdecl UCustomizableObjectPrivate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectPrivate",
               &Z_Registration_Info_UClass_UCustomizableObjectPrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectPrivate,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPrivate>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPrivate.InnerSingleton;
}

// UCustomizableObjectPrivate @ 14aba0180

UCustomizableObjectPrivate * __thiscall
UCustomizableObjectPrivate::UCustomizableObjectPrivate
          (UCustomizableObjectPrivate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectPrivate__6B_;
  (this->MutableModel).Object = (FModel *)0x0;
  (this->MutableModel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->ModelStreamableData).field0_0x0.DebugPtr = (UModelStreamableData *)0x0;
  (this->ModelResources).field0_0x0.DebugPtr = (UModelResources *)0x0;
  FMeshCache::FMeshCache(&this->MeshCache);
  *(undefined8 *)&(this->TextureCache).GeneratedTextures = 0;
  *(undefined8 *)&(this->TextureCache).GeneratedTextures.field_0x8 = 0;
  *(undefined8 *)&(this->TextureCache).GeneratedTextures.field_0x20 = 0;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x28 = 0;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x34 = 0;
  *(undefined8 *)&(this->TextureCache).GeneratedTextures.field_0x40 = 0;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x48 = 0;
  *(undefined8 *)&(this->SkeletonCache).MergedSkeletons = 0;
  *(undefined8 *)&(this->SkeletonCache).MergedSkeletons.field_0x8 = 0;
  *(undefined8 *)&(this->SkeletonCache).MergedSkeletons.field_0x20 = 0;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x28 = 0;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x34 = 0;
  *(undefined8 *)&(this->SkeletonCache).MergedSkeletons.field_0x40 = 0;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x48 = 0;
  MakeShared<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
            (&this->MeshIdRegistry);
  MakeShared<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
            (&this->ImageIdRegistry);
  MakeShared<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
            (&this->MaterialIdRegistry);
  this->bLocked = false;
  *(undefined8 *)&(this->Status).OnStateChangedDelegate = 0;
  *(undefined8 *)&(this->Status).OnStateChangedDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Status).OnStateChangedDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Status).OnStateChangedDelegate.field_0x18 = 2;
  (this->Status).CurrentState = NoModel;
  (this->ParameterProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterProperties).ArrayNum = 0;
  (this->ParameterProperties).ArrayMax = 0;
  (this->ReferencedObjects).field0_0x0.DebugPtr = (UModelResources *)0x0;
  *(undefined8 *)&this->ParameterPropertiesLookupTable = 0;
  *(undefined8 *)&(this->ParameterPropertiesLookupTable).field_0x8 = 0;
  *(undefined8 *)&(this->ParameterPropertiesLookupTable).field_0x20 = 0;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x28 = 0;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x34 = 0;
  *(undefined8 *)&(this->ParameterPropertiesLookupTable).field_0x40 = 0;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x48 = 0;
  return this;
}

// UCustomizableObjectPrivate @ 14aba02f0

UCustomizableObjectPrivate * __thiscall
UCustomizableObjectPrivate::UCustomizableObjectPrivate
          (UCustomizableObjectPrivate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectPrivate__6B_;
  (this->MutableModel).Object = (FModel *)0x0;
  (this->MutableModel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->ModelStreamableData).field0_0x0.DebugPtr = (UModelStreamableData *)0x0;
  (this->ModelResources).field0_0x0.DebugPtr = (UModelResources *)0x0;
  FMeshCache::FMeshCache(&this->MeshCache);
  *(undefined8 *)&(this->TextureCache).GeneratedTextures = 0;
  *(undefined8 *)&(this->TextureCache).GeneratedTextures.field_0x8 = 0;
  *(undefined8 *)&(this->TextureCache).GeneratedTextures.field_0x20 = 0;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x28 = 0;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x34 = 0;
  *(undefined8 *)&(this->TextureCache).GeneratedTextures.field_0x40 = 0;
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x48 = 0;
  *(undefined8 *)&(this->SkeletonCache).MergedSkeletons = 0;
  *(undefined8 *)&(this->SkeletonCache).MergedSkeletons.field_0x8 = 0;
  *(undefined8 *)&(this->SkeletonCache).MergedSkeletons.field_0x20 = 0;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x28 = 0;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x34 = 0;
  *(undefined8 *)&(this->SkeletonCache).MergedSkeletons.field_0x40 = 0;
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x48 = 0;
  MakeShared<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
            (&this->MeshIdRegistry);
  MakeShared<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
            (&this->ImageIdRegistry);
  MakeShared<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
            (&this->MaterialIdRegistry);
  this->bLocked = false;
  *(undefined8 *)&(this->Status).OnStateChangedDelegate = 0;
  *(undefined8 *)&(this->Status).OnStateChangedDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Status).OnStateChangedDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Status).OnStateChangedDelegate.field_0x18 = 2;
  (this->Status).CurrentState = NoModel;
  (this->ParameterProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterProperties).ArrayNum = 0;
  (this->ParameterProperties).ArrayMax = 0;
  (this->ReferencedObjects).field0_0x0.DebugPtr = (UModelResources *)0x0;
  *(undefined8 *)&this->ParameterPropertiesLookupTable = 0;
  *(undefined8 *)&(this->ParameterPropertiesLookupTable).field_0x8 = 0;
  *(undefined8 *)&(this->ParameterPropertiesLookupTable).field_0x20 = 0;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x28 = 0;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x34 = 0;
  *(undefined8 *)&(this->ParameterPropertiesLookupTable).field_0x40 = 0;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x48 = 0;
  return this;
}

// ~UCustomizableObjectPrivate @ 14aba2a10

void __thiscall
UCustomizableObjectPrivate::~UCustomizableObjectPrivate(UCustomizableObjectPrivate *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectPrivate__6B_;
  *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ParameterPropertiesLookupTable).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FMutableParameterIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FMutableParameterIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FMutableParameterIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParameterPropertiesLookupTable);
  DestructItems<FMutableModelParameterProperties,int>
            ((FMutableModelParameterProperties *)(this->ParameterProperties).AllocatorInstance.Data,
             (this->ParameterProperties).ArrayNum);
  pFVar2 = (this->ParameterProperties).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->Status).OnStateChangedDelegate.field_0x8,
             *(int *)&(this->Status).OnStateChangedDelegate.field_0x10);
  pvVar1 = *(void **)&(this->Status).OnStateChangedDelegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Status);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaterialIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ImageIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshIdRegistry).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->SkeletonCache).MergedSkeletons.field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkeletonCache).MergedSkeletons.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkeletonCache);
  *(undefined4 *)&(this->TextureCache).GeneratedTextures.field_0x48 = 0;
  pvVar1 = *(void **)&(this->TextureCache).GeneratedTextures.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextureCache);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshCache).GeneratedMeshes.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MutableModel).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14aba56b0

UClass * __cdecl UCustomizableObjectPrivate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectPrivate",
               &Z_Registration_Info_UClass_UCustomizableObjectPrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectPrivate,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPrivate>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPrivate.InnerSingleton;
}

// StaticRegisterNativesUCustomizableObjectPrivate @ 14aba69d0

void __cdecl UCustomizableObjectPrivate::StaticRegisterNativesUCustomizableObjectPrivate(void)

{
  return;
}

// AddUncompiledCOWarning @ 14abc3310

void __thiscall
UCustomizableObjectPrivate::AddUncompiledCOWarning
          (UCustomizableObjectPrivate *this,FString *param_1)

{
  bool bVar1;
  UCustomizableObjectSystem *this_00;
  UCustomizableObject *pUVar2;
  
  this_00 = UCustomizableObjectSystem::GetInstance();
  if (this_00 != (UCustomizableObjectSystem *)0x0) {
    bVar1 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00);
    if ((bVar1) && (((uint)this_00->_padding_ >> 0xf & 1) == 0)) {
      pUVar2 = GetPublic(this);
      UCustomizableObjectSystem::AddUncompiledCOWarning(this_00,pUVar2,param_1);
    }
  }
  return;
}

// ApplyStateForcedValuesToParameters @ 14abc5410

void __thiscall
UCustomizableObjectPrivate::ApplyStateForcedValuesToParameters
          (UCustomizableObjectPrivate *this,FCustomizableObjectInstanceDescriptor *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UModelResources *pUVar4;
  FScriptContainerElement *_Src;
  bool bVar5;
  FMutableStateData *pFVar6;
  ulonglong uVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FString *pFVar13;
  undefined1 local_res8 [8];
  FCustomizableObjectInstanceDescriptor *local_res10;
  uint local_res18;
  FMutableStateData *local_res20;
  FString local_60 [2];
  
  pUVar4 = (this->ModelResources).field0_0x0.DebugPtr;
  if (pUVar4 != (UModelResources *)0x0) {
    local_res10 = param_1;
    FCustomizableObjectInstanceDescriptor::GetCurrentState(param_1,local_60);
    pFVar6 = TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
             ::Find((TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
                     *)&pUVar4->StateUIDataMap,local_60);
    local_res20 = pFVar6;
    if (pFVar6 != (FMutableStateData *)0x0) {
      local_res18 = (param_1->IntParameters).ArrayNum;
      uVar7 = (ulonglong)(int)local_res18;
      pFVar12 = (param_1->IntParameters).AllocatorInstance.Data;
      pFVar9 = pFVar12 + uVar7 * 0x40;
      pFVar11 = pFVar12 + 0x38;
      while( true ) {
        if ((param_1->IntParameters).ArrayNum != (int)uVar7) {
          `TCheckedPointerIterator<FCustomizableObjectIntParameterValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar12 == pFVar9) break;
        pFVar8 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                         *)&pFVar6->ForcedParameterValues,(FString *)pFVar12);
        if (pFVar8 != (FString *)0x0) {
          ::FString::operator=((FString *)(pFVar11 + -0x28),pFVar8);
          iVar2 = *(int *)pFVar11;
          pFVar10 = *(FString **)(pFVar11 + -8);
          pFVar13 = pFVar10 + iVar2;
          while( true ) {
            if (*(int *)pFVar11 != iVar2) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            param_1 = local_res10;
            pFVar6 = local_res20;
            if (pFVar10 == pFVar13) break;
            if (pFVar10 == pFVar8) {
LAB_14abc5573:
              pFVar10 = pFVar10 + 1;
            }
            else {
              iVar3 = (pFVar8->Data).ArrayNum;
              piVar1 = &(pFVar10->Data).ArrayMax;
              _Src = (pFVar8->Data).AllocatorInstance.Data;
              (pFVar10->Data).ArrayNum = iVar3;
              if ((iVar3 != 0) || (*piVar1 != 0)) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar3,*piVar1,(ForAnyElementType *)pFVar10,iVar3,piVar1);
                if (iVar3 != 0) {
                  memcpy((pFVar10->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
                }
                goto LAB_14abc5573;
              }
              *piVar1 = 0;
              pFVar10 = pFVar10 + 1;
            }
          }
        }
        uVar7 = (ulonglong)local_res18;
        pFVar12 = pFVar12 + 0x40;
        pFVar11 = pFVar11 + 0x40;
      }
      iVar2 = (param_1->BoolParameters).ArrayNum;
      pFVar11 = (param_1->BoolParameters).AllocatorInstance.Data;
      pFVar12 = pFVar11 + (longlong)iVar2 * 0x28;
      while( true ) {
        if ((param_1->BoolParameters).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FCustomizableObjectBoolParameterValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar11 == pFVar12) break;
        pFVar8 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                         *)&pFVar6->ForcedParameterValues,(FString *)pFVar11);
        if (pFVar8 != (FString *)0x0) {
          bVar5 = ::FString::ToBool(pFVar8);
          pFVar11[0x10].field_0x0 = bVar5;
        }
        pFVar11 = pFVar11 + 0x28;
      }
    }
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BackwardsCompatibleFixup @ 14abc63c0

void __thiscall
UCustomizableObjectPrivate::BackwardsCompatibleFixup(UCustomizableObjectPrivate *this,int param_1)

{
  return;
}

// FindIntParameterValue @ 14abd8400

int __thiscall
UCustomizableObjectPrivate::FindIntParameterValue
          (UCustomizableObjectPrivate *this,int param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar9 = (longlong)param_1;
  iVar5 = -1;
  if ((-1 < param_1) && (param_1 < (this->ParameterProperties).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    pFVar2 = (this->ParameterProperties).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + lVar9 * 0x28 + 0x20) != 0) {
      uVar10 = 0;
      if ((*(int *)(pFVar2 + lVar9 * 0x28 + 0x20) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar7 = *(int *)(pFVar2 + lVar9 * 0x28 + 0x20);
      iVar5 = *(int *)(*(longlong *)(pFVar2 + lVar9 * 0x28 + 0x18) + 0x10);
      uVar11 = uVar10;
      if (0 < iVar7) {
        do {
          uVar8 = (uint)uVar10;
          uVar6 = 0;
          if ((int)uVar8 < iVar7) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          iVar7 = (param_2->Data).ArrayNum;
          iVar1 = *(int *)(*(longlong *)(pFVar2 + lVar9 * 0x28 + 0x18) + 8 + uVar11);
          if (iVar1 == iVar7) {
            if (iVar1 < 2) {
              iVar7 = *(int *)(pFVar2 + lVar9 * 0x28 + 0x20);
              goto LAB_14abd85a1;
            }
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(*(longlong *)(pFVar2 + lVar9 * 0x28 + 0x18) + uVar11),
                               (wchar_t *)(param_2->Data).AllocatorInstance.Data);
            bVar4 = iVar7 == 0;
          }
          else {
            bVar4 = iVar1 + iVar7 == 1;
          }
          iVar7 = *(int *)(pFVar2 + lVar9 * 0x28 + 0x20);
          if (bVar4) {
LAB_14abd85a1:
            iVar5 = uVar8 + iVar5;
            uVar6 = 0;
            if ((int)uVar8 < iVar7) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar5 = (*pcVar3)();
              return iVar5;
            }
            if (*(int *)(*(longlong *)(pFVar2 + lVar9 * 0x28 + 0x18) + 0x10 +
                        (longlong)(int)uVar8 * 0x18) == iVar5) {
              return iVar5;
            }
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PossibleValues[OrderValue].Value == CorrectedValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                               ,0x638,L"");
            if (!bVar4) {
              return iVar5;
            }
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          uVar10 = (ulonglong)(uVar8 + 1);
          uVar11 = uVar11 + 0x18;
        } while ((int)(uVar8 + 1) < iVar7);
      }
    }
  }
  return iVar5;
}

// FindIntParameterValueName @ 14abd8630

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UCustomizableObjectPrivate::FindIntParameterValueName
          (UCustomizableObjectPrivate *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  longlong lVar6;
  FName local_28;
  FString local_20;
  
  lVar6 = (longlong)param_1;
  iVar5 = 0;
  if ((param_1 < 0) || ((this->ParameterProperties).ArrayNum <= param_1)) {
    if (2 < (byte)LogMutable._0_1_) {
      local_28 = (FName)this->_padding_;
      ::FName::ToString(&local_28,&local_20);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    pFVar1 = (this->ParameterProperties).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar6 * 0x28 + 0x20) != 0) {
      if ((*(int *)(pFVar1 + lVar6 * 0x28 + 0x20) < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      iVar5 = *(int *)(*(longlong *)(pFVar1 + lVar6 * 0x28 + 0x18) + 0x10);
    }
    iVar5 = param_2 - iVar5;
    if ((-1 < iVar5) && (iVar5 < *(int *)(pFVar1 + lVar6 * 0x28 + 0x20))) {
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      ::FString::FString(__return_storage_ptr__,
                         (FString *)
                         (*(longlong *)(pFVar1 + lVar6 * 0x28 + 0x18) + (longlong)iVar5 * 0x18));
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindParameter @ 14abd8a70

int __thiscall
UCustomizableObjectPrivate::FindParameter(UCustomizableObjectPrivate *this,FString *param_1)

{
  FMutableParameterIndex *pFVar1;
  
  pFVar1 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&this->ParameterPropertiesLookupTable,param_1);
  if (pFVar1 != (FMutableParameterIndex *)0x0) {
    return pFVar1->Index;
  }
  return -1;
}

// FindParameterTyped @ 14abd8aa0

int __thiscall
UCustomizableObjectPrivate::FindParameterTyped
          (UCustomizableObjectPrivate *this,FString *param_1,EMutableParameterType param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FMutableParameterIndex *pFVar6;
  
  pFVar6 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&this->ParameterPropertiesLookupTable,param_1);
  if (pFVar6 != (FMutableParameterIndex *)0x0) {
    uVar1 = pFVar6->Index;
    uVar4 = 0;
    if ((int)uVar1 < (this->ParameterProperties).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    if ((this->ParameterProperties).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x28 + 0x10] ==
        (FScriptContainerElement)param_2) {
      return pFVar6->TypedIndex;
    }
  }
  return -1;
}

// FindState @ 14abd8bc0

int __thiscall
UCustomizableObjectPrivate::FindState(UCustomizableObjectPrivate *this,FString *param_1)

{
  FModel *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar1 = (this->MutableModel).Object;
  pTVar2 = (this->MutableModel).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pFVar1 != (FModel *)0x0) {
    pFVar1 = (this->MutableModel).Object;
    pTVar2 = (this->MutableModel).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 == (FModel *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar5 = UE::Mutable::Private::FModel::FindState(pFVar1,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return iVar5;
  }
  return -1;
}

// GetComponentName @ 14abda1d0

FName __thiscall
UCustomizableObjectPrivate::GetComponentName
          (UCustomizableObjectPrivate *this,FCustomizableObjectComponentIndex param_1)

{
  UModelResources *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  uint in_register_00000014;
  int in_R8D;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1.Index;
  pUVar1 = (this->ModelResources).field0_0x0.DebugPtr;
  if (((pUVar1 != (UModelResources *)0x0) && (-1 < in_R8D)) &&
     (in_R8D < (pUVar1->ComponentNamesPerObjectComponent).ArrayNum)) {
    if (in_R8D < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FName)(*pcVar2)();
        return FVar4;
      }
    }
    *(undefined8 *)FVar4 =
         *(undefined8 *)
          ((pUVar1->ComponentNamesPerObjectComponent).AllocatorInstance.Data + (longlong)in_R8D * 8)
    ;
    return FVar4;
  }
  *(undefined8 *)FVar4 = 0;
  return FVar4;
}

// GetCustomizableObjectClassTags @ 14abda5c0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableObjectPrivate::GetCustomizableObjectClassTags(UCustomizableObjectPrivate *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x45a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar1 + 0xb0);
}

// GetCustomizableObjectParametersTags @ 14abda660

TMap<FString,FParameterTags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterTags,0>_>
* __thiscall
UCustomizableObjectPrivate::GetCustomizableObjectParametersTags(UCustomizableObjectPrivate *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TMap<FString,FParameterTags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterTags,0>_>
  *pTVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x45a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TMap<FString,FParameterTags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterTags,0>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TMap<FString,FParameterTags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterTags,0>_>
          *)(lVar1 + 0xd0);
}

// GetEnumParameterNumValues @ 14abdaad0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UCustomizableObjectPrivate::GetEnumParameterNumValues(UCustomizableObjectPrivate *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName local_res18 [2];
  FString local_18;
  
  if ((param_1 < 0) || ((this->ParameterProperties).ArrayNum <= param_1)) {
    if (2 < (byte)LogMutable._0_1_) {
      local_res18[0] = (FName)this->_padding_;
      ::FName::ToString(local_res18,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return 0;
  }
  if ((param_1 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return *(int *)((this->ParameterProperties).AllocatorInstance.Data +
                 (longlong)param_1 * 0x28 + 0x20);
}

// GetIntParameterAvailableOption @ 14abdb320

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UCustomizableObjectPrivate::GetIntParameterAvailableOption
          (UCustomizableObjectPrivate *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  uint uVar6;
  FName local_res20;
  FName local_38;
  FString local_30;
  FString local_20;
  
  if ((param_1 < 0) || ((this->ParameterProperties).ArrayNum <= param_1)) {
    if ((byte)LogMutable._0_1_ < 3) goto LAB_14abdb4df;
    local_38 = (FName)this->_padding_;
    ::FName::ToString(&local_38,&local_20);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    local_30.Data.AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
  }
  else {
    if ((-1 < param_2) && (iVar4 = GetEnumParameterNumValues(this,param_1), param_2 < iVar4)) {
      uVar6 = 0;
      if (param_1 < (this->ParameterProperties).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      pFVar1 = (this->ParameterProperties).AllocatorInstance.Data;
      uVar6 = 0;
      if (param_2 < *(int *)(pFVar1 + (longlong)param_1 * 0x28 + 0x20)) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      return (FString *)
             (*(longlong *)(pFVar1 + (longlong)param_1 * 0x28 + 0x18) + (longlong)param_2 * 0x18);
    }
    if ((byte)LogMutable._0_1_ < 3) goto LAB_14abdb4df;
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_30);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
LAB_14abdb4df:
  return &s_EmptyString;
}

// GetLowPriorityTextureNames @ 14abdb600

/* WARNING: Removing unreachable block (ram,0x00014abdb8fd) */

void __thiscall
UCustomizableObjectPrivate::GetLowPriorityTextureNames
          (UCustomizableObjectPrivate *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  UModelResources *pUVar2;
  longlong lVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  FName local_res18 [2];
  FString local_48;
  
  lVar15 = this->_padding_;
  if ((lVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x45a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)(lVar15 + 0xa8);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  piVar1 = &param_1->ArrayMax;
  if (param_1->ArrayMax < (int)uVar7) {
    DestructItems<FString,int>((FString *)pFVar11,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar7,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar11,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar12 = 0;
  pUVar2 = (this->ModelResources).field0_0x0.DebugPtr;
  if (pUVar2 != (UModelResources *)0x0) {
    lVar15 = this->_padding_;
    if ((lVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Public",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x45a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)(lVar15 + 0xa8) != 0) &&
       (lVar15 = (longlong)(pUVar2->ImageProperties).ArrayNum, uVar14 = uVar12, 0 < lVar15)) {
      do {
        lVar3 = this->_padding_;
        if ((lVar3 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Public",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                               ,0x45a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar13 < (pUVar2->ImageProperties).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (pUVar2->ImageProperties).AllocatorInstance.Data;
        iVar8 = *(int *)(pFVar11 + uVar14 + 8);
        uVar7 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar7 = 0;
        }
        pFVar9 = ::FName::FName(local_res18,uVar7,*(wchar_t **)(pFVar11 + uVar14),FNAME_Add);
        pFVar4 = *(FName **)(lVar3 + 0xa0);
        for (pFVar10 = pFVar4; pFVar10 != pFVar4 + *(int *)(lVar3 + 0xa8); pFVar10 = pFVar10 + 1) {
          if (*pFVar10 == *pFVar9) {
            if ((int)((longlong)pFVar10 - (longlong)pFVar4 >> 3) != -1) {
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
              ::FString::AppendInt(&local_48,uVar13);
              pFVar11 = (param_1->AllocatorInstance).Data;
              if (((pFVar11 <= (FScriptContainerElement *)&local_48) &&
                  ((FScriptContainerElement *)&local_48 < pFVar11 + (longlong)*piVar1 * 0x10)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar8 = param_1->ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_1->AllocatorInstance,piVar1);
              }
              param_1->ArrayNum = iVar8 + 1;
              pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
              *(undefined8 *)pFVar11 = 0;
              *(FScriptContainerElement **)pFVar11 = local_48.Data.AllocatorInstance.Data;
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar11 + 8) = local_48.Data.ArrayNum;
              *(int *)(pFVar11 + 0xc) = local_48.Data.ArrayMax;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
            }
            break;
          }
        }
        uVar12 = (ulonglong)(uVar13 + 1);
        lVar15 = lVar15 + -1;
        uVar14 = uVar14 + 0x20;
      } while (lVar15 != 0);
    }
  }
  return;
}

// GetMinLODIndex @ 14abdc440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uchar __thiscall
UCustomizableObjectPrivate::GetMinLODIndex(UCustomizableObjectPrivate *this,FName *param_1)

{
  UModelResources *pUVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  uint uVar6;
  UCustomizableObjectSystem *pUVar7;
  TTuple<FName,FPerQualityLevelInt> *pTVar8;
  uint *puVar9;
  TTuple<FName,FPerPlatformInt> *pTVar10;
  TTuple<FName,unsigned_char> *pTVar11;
  uint *puVar12;
  byte bVar13;
  uint *puVar14;
  byte bVar15;
  
  pUVar1 = (this->ModelResources).field0_0x0.DebugPtr;
  bVar15 = 0;
  puVar14 = (uint *)0x0;
  if (pUVar1 == (UModelResources *)0x0) {
LAB_14abdc5c7:
    bVar13 = 0;
    if (pUVar1 == (UModelResources *)0x0) goto LAB_14abdc5f0;
  }
  else if ((GEngine == (UEngine *)0x0) || (GEngine->UseSkeletalMeshMinLODPerQualityLevels == false))
  {
    pTVar10 = TSet<TTuple<FName,FPerPlatformInt>,TDefaultMapHashableKeyFuncs<FName,FPerPlatformInt,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FPerPlatformInt>,TDefaultMapHashableKeyFuncs<FName,FPerPlatformInt,0>,FDefaultSetAllocator>
                      *)&pUVar1->MinLODPerComponent,*param_1);
    puVar9 = (uint *)&pTVar10->field_0x8;
    if (pTVar10 == (TTuple<FName,FPerPlatformInt> *)0x0) {
      puVar9 = puVar14;
    }
    if (puVar9 == (uint *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1597570788632823740>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x7bc,"PlatformInt");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      goto LAB_14abdc5c7;
    }
    bVar15 = (byte)*puVar9;
  }
  else {
    pUVar7 = UCustomizableObjectSystem::GetInstance();
    if (pUVar7 != (UCustomizableObjectSystem *)0x0) {
      pUVar7 = UCustomizableObjectSystem::GetInstance();
      uVar5 = UCustomizableObjectSystem::GetSkeletalMeshMinLODQualityLevel(pUVar7);
      pTVar8 = TSet<TTuple<FName,FPerQualityLevelInt>,TDefaultMapHashableKeyFuncs<FName,FPerQualityLevelInt,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FPerQualityLevelInt>,TDefaultMapHashableKeyFuncs<FName,FPerQualityLevelInt,0>,FDefaultSetAllocator>
                       *)&pUVar1->MinQualityLevelLODPerComponent,*param_1);
      puVar9 = (uint *)&pTVar8->field_0x8;
      if (pTVar8 == (TTuple<FName,FPerQualityLevelInt> *)0x0) {
        puVar9 = puVar14;
      }
      if (puVar9 == (uint *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1597570788632823731>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x7b3,"QualityLevelInt");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
      }
      else {
        if ((puVar9[8] != puVar9[0x13]) && (-1 < (int)uVar5)) {
          puVar12 = *(uint **)(puVar9 + 0x16);
          if (*(uint **)(puVar9 + 0x16) == (uint *)0x0) {
            puVar12 = puVar9 + 0x14;
          }
          uVar6 = puVar12[puVar9[0x18] - 1 & uVar5];
          if (uVar6 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)(puVar9 + 6));
              if (*puVar12 == uVar5) {
                puVar9 = puVar12 + 1;
                if (puVar12 == (uint *)0x0) {
                  puVar9 = puVar14;
                }
                if (puVar9 != (uint *)0x0) goto LAB_14abdc569;
                break;
              }
              uVar6 = puVar12[2];
            } while (uVar6 != 0xffffffff);
          }
        }
        puVar9 = (uint *)&pTVar8->field_0x18;
        if (pTVar8 == (TTuple<FName,FPerQualityLevelInt> *)0x0) {
          puVar9 = (uint *)&DAT_00000010;
        }
LAB_14abdc569:
        bVar15 = (byte)*puVar9;
      }
    }
  }
  bVar13 = 0;
  pTVar11 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                    *)&pUVar1->FirstLODAvailable,*param_1);
  puVar9 = (uint *)&pTVar11->field_0x8;
  if (pTVar11 == (TTuple<FName,unsigned_char> *)0x0) {
    puVar9 = puVar14;
  }
  if (puVar9 != (uint *)0x0) {
    bVar13 = (byte)*puVar9;
  }
LAB_14abdc5f0:
  if (bVar13 < bVar15) {
    bVar13 = bVar15;
  }
  return bVar13;
}

// GetModel @ 14abdc690

TSharedPtr<UE::Mutable::Private::FModel,1> * __thiscall
UCustomizableObjectPrivate::GetModel(UCustomizableObjectPrivate *this)

{
  return &this->MutableModel;
}

// GetModel @ 14abdc6a0

TSharedPtr<UE::Mutable::Private::FModel_const_,1> * __thiscall
UCustomizableObjectPrivate::GetModel
          (UCustomizableObjectPrivate *this,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->MutableModel).Object;
  pTVar1 = (this->MutableModel).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetModelResources @ 14abdc6d0

UModelResources * __thiscall
UCustomizableObjectPrivate::GetModelResources(UCustomizableObjectPrivate *this)

{
  return (this->ModelResources).field0_0x0.DebugPtr;
}

// GetModelResources @ 14abdc6e0

UModelResources * __thiscall
UCustomizableObjectPrivate::GetModelResources(UCustomizableObjectPrivate *this)

{
  return (this->ModelResources).field0_0x0.DebugPtr;
}

// GetModelResourcesChecked @ 14abdc6f0

UModelResources * __thiscall
UCustomizableObjectPrivate::GetModelResourcesChecked(UCustomizableObjectPrivate *this)

{
  code *pcVar1;
  bool bVar2;
  UModelResources *pUVar3;
  
  pUVar3 = (this->ModelResources).field0_0x0.DebugPtr;
  if (pUVar3 == (UModelResources *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalModelResources",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x8e2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UModelResources *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetModelStreamableBulkData @ 14abdc740

TSharedPtr<FModelStreamableBulkData,1> * __thiscall
UCustomizableObjectPrivate::GetModelStreamableBulkData
          (UCustomizableObjectPrivate *this,
          TSharedPtr<FModelStreamableBulkData,1> *__return_storage_ptr__,bool param_1)

{
  UModelStreamableData *pUVar1;
  FModelStreamableBulkData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pUVar1 = (this->ModelStreamableData).field0_0x0.DebugPtr;
  if (pUVar1 != (UModelStreamableData *)0x0) {
    pFVar2 = (pUVar1->StreamingData).Object;
    pTVar3 = (pUVar1->StreamingData).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FModelStreamableBulkData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetParameterType @ 14abdf230

/* WARNING: Enum "Type": Some values do not have unique names */

EMutableParameterType __thiscall
UCustomizableObjectPrivate::GetParameterType(UCustomizableObjectPrivate *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EMutableParameterType EVar3;
  
  if ((-1 < param_1) && (param_1 < (this->ParameterProperties).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    return (EMutableParameterType)
           (this->ParameterProperties).AllocatorInstance.Data[(longlong)param_1 * 0x28 + 0x10];
  }
  if (1 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  return None;
}

// GetPopulationClassTags @ 14abdf9d0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableObjectPrivate::GetPopulationClassTags(UCustomizableObjectPrivate *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x45a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar1 + 0xc0);
}

// GetPublic @ 14abe0610

UCustomizableObject * __thiscall
UCustomizableObjectPrivate::GetPublic(UCustomizableObjectPrivate *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObject *pUVar3;
  
  pUVar3 = (UCustomizableObject *)this->_padding_;
  if (pUVar3 == (UCustomizableObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x45a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCustomizableObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetStateName @ 14abe0ae0

FString * __thiscall
UCustomizableObjectPrivate::GetStateName
          (UCustomizableObjectPrivate *this,FString *__return_storage_ptr__,int param_1)

{
  FModel *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar1 = (this->MutableModel).Object;
  pTVar2 = (this->MutableModel).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pFVar1 != (FModel *)0x0) {
    pFVar1 = (this->MutableModel).Object;
    pTVar2 = (this->MutableModel).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 == (FModel *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar5 = UE::Mutable::Private::FModel::GetStateName(pFVar1,param_1);
    ::FString::operator=(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return __return_storage_ptr__;
}

// GetStateParameterIndex @ 14abe0c30

int __thiscall
UCustomizableObjectPrivate::GetStateParameterIndex
          (UCustomizableObjectPrivate *this,int param_1,int param_2)

{
  FModel *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar1 = (this->MutableModel).Object;
  pTVar2 = (this->MutableModel).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pFVar1 == (FModel *)0x0) {
    iVar5 = 0;
  }
  else {
    pFVar1 = (this->MutableModel).Object;
    pTVar2 = (this->MutableModel).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 == (FModel *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar5 = UE::Mutable::Private::FModel::GetStateParameterIndex(pFVar1,param_1,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return iVar5;
}

// GetStreamableBulkData @ 14abe0eb0

UCustomizableObjectBulk * __thiscall
UCustomizableObjectPrivate::GetStreamableBulkData(UCustomizableObjectPrivate *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UCustomizableObjectBulk *pUVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x45a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCustomizableObjectBulk *)(*pcVar2)();
      return pUVar4;
    }
  }
  return *(UCustomizableObjectBulk **)(lVar1 + 0x120);
}

// IsLocked @ 14abe3530

bool __thiscall UCustomizableObjectPrivate::IsLocked(UCustomizableObjectPrivate *this)

{
  return this->bLocked;
}

// IsParameterMultidimensional @ 14abe3f60

bool __thiscall
UCustomizableObjectPrivate::IsParameterMultidimensional
          (UCustomizableObjectPrivate *this,int *param_1)

{
  FModel *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (*param_1 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParamIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x75e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_00 = (this->MutableModel).Object;
  pTVar1 = (this->MutableModel).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != (FModel *)0x0) {
    bVar3 = UE::Mutable::Private::FModel::IsParameterMultidimensional(this_00,*param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return bVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return false;
}

// LoadEmbeddedData @ 14abe7ad0

void __thiscall
UCustomizableObjectPrivate::LoadEmbeddedData(UCustomizableObjectPrivate *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ulong64 local_res10;
  TSharedPtr<UE::Mutable::Private::FModel,1> local_58;
  FUnrealMutableInputStream local_48;
  FGuid local_38;
  FInputArchive local_28;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId932,"Mutable_UCustomizableObject::LoadEmbeddedData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
               ,0x3a4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId932);
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_res10);
    }
  }
  else {
    local_res10 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  if (local_res10 == 0xffffffffffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1597570788632822699>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3ab,"InternalVersion != INDEX_NONE");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FUnrealMutableInputStream::FUnrealMutableInputStream(&local_48,param_1);
    UE::Mutable::Private::FInputArchive::FInputArchive(&local_28,(FInputStream *)&local_48);
    UE::Mutable::Private::FModel::StaticUnserialise(&local_58,&local_28);
    local_38.A = 0;
    local_38.B = 0;
    local_38.C = 0;
    local_38.D = 0;
    SetModel(this,&local_58,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    local_28._padding_ = (longlong)&___7FInputArchive_Private_Mutable_UE__6B_;
    DestructItems<TSharedPtr<void,1>,int>
              ((TSharedPtr<void,1> *)local_28.History.AllocatorInstance.Data,
               local_28.History.ArrayNum);
    if ((TSharedPtr<void,1> *)local_28.History.AllocatorInstance.Data != (TSharedPtr<void,1> *)0x0)
    {
      FMemory::Free(local_28.History.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetModel @ 14abf0f20

void __thiscall
UCustomizableObjectPrivate::SetModel
          (UCustomizableObjectPrivate *this,TSharedPtr<UE::Mutable::Private::FModel,1> *param_1,
          FGuid *param_2)

{
  undefined1 *puVar1;
  EState EVar2;
  FModel *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  EState EVar15;
  FDestructionSentinel local_38;
  
  pFVar3 = param_1->Object;
  if ((this->MutableModel).Object != pFVar3) {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (this->MutableModel).SharedReferenceCount.ReferenceController;
    (this->MutableModel).Object = pFVar3;
    (this->MutableModel).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    UpdateParameterPropertiesFromModel(this,param_1);
    EVar15 = (param_1->Object == (FModel *)0x0) + ModelLoaded;
    if ((FCustomizableObjectStatusTypes::ValidTransitions[(this->Status).CurrentState][EVar15] ==
         false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("T::ValidTransitions[static_cast<int32>(CurrentState)][static_cast<int32>(State)]"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Internal\\MuCO\\StateMachine.h"
                           ,0x19,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar2 = (this->Status).CurrentState;
    (this->Status).CurrentState = EVar15;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Status,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(this->Status).OnStateChangedDelegate.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar9 = false;
    uVar13 = *(int *)&(this->Status).OnStateChangedDelegate.field_0x10 - 1;
    if (-1 < (int)uVar13) {
      lVar14 = (longlong)(int)uVar13 << 4;
      bVar9 = false;
      do {
        uVar12 = 0;
        if ((int)uVar13 < *(int *)&(this->Status).OnStateChangedDelegate.field_0x10) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(this->Status).OnStateChangedDelegate.field_0x8;
        if (((*(int *)(lVar14 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar14 + lVar5), plVar6 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar6 + 0x68))(plVar6,EVar2,EVar15), cVar11 == '\0')) {
          bVar9 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(this->Status).OnStateChangedDelegate.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar9) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->Status,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// UpdateParameterPropertiesFromModel @ 14abf5bd0

void __thiscall
UCustomizableObjectPrivate::UpdateParameterPropertiesFromModel
          (UCustomizableObjectPrivate *this,TSharedPtr<UE::Mutable::Private::FModel,1> *param_1)

{
  undefined1 *puVar1;
  TMap<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
  *this_00;
  FMutableModelParameterProperties *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  EParameterType EVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FString *pFVar14;
  longlong lVar15;
  int *piVar16;
  TArray<FMutableModelParameterProperties,TSizedDefaultAllocator<32>_> *pTVar17;
  TPairInitializer<FString_const_&,FMutableParameterIndex_&&> local_res18;
  FString local_b8;
  undefined1 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  TSharedPtr<UE::Mutable::Private::FParameters,1> local_90;
  ForAnyElementType local_80;
  int local_78 [2];
  TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
  *local_70;
  TArray<FMutableModelParameterProperties,TSizedDefaultAllocator<32>_> *local_68;
  int *local_60;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> local_58;
  FString *local_48;
  FMutableParameterIndex **local_40;
  
  local_58.Object = param_1->Object;
  if (local_58.Object == (FModel *)0x0) {
    DestructItems<FMutableModelParameterProperties,int>
              ((FMutableModelParameterProperties *)
               (this->ParameterProperties).AllocatorInstance.Data,
               (this->ParameterProperties).ArrayNum);
    piVar16 = &(this->ParameterProperties).ArrayMax;
    (this->ParameterProperties).ArrayNum = 0;
    if (*piVar16 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->ParameterProperties).AllocatorInstance,0,piVar16);
    }
    this_00 = &this->ParameterPropertiesLookupTable;
    bVar7 = 1 < *(int *)&(this->ParameterPropertiesLookupTable).field_0x48;
    if (!bVar7) {
      TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FMutableParameterIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FMutableParameterIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->ParameterPropertiesLookupTable).field_0x8);
    puVar1 = &(this->ParameterPropertiesLookupTable).field_0xc;
    *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x34 = 0;
    iVar9 = *(int *)&(this->ParameterPropertiesLookupTable).field_0x2c;
    *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x28 = 0;
    if ((iVar9 < 0) || (0x80 < iVar9)) {
      *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ParameterPropertiesLookupTable).field_0x10,0);
    }
    if (bVar7) {
      *(undefined4 *)&(this->ParameterPropertiesLookupTable).field_0x48 = 1;
      TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                *)this_00);
      return;
    }
  }
  else {
    local_58.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Mutable::Private::FModel::NewParameters
              (&local_90,&local_58,(FParameters *)0x0,
               (TMap<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
                *)0x0,(TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                       *)0x0,
               (TMap<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
                *)0x0);
    if ((local_90.Object == (FParameters *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = UE::Mutable::Private::FParameters::GetCount(local_90.Object);
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0xb,&local_80,local_78,local_78 + 1);
    lVar15 = (longlong)iVar9;
    pTVar17 = &this->ParameterProperties;
    *(undefined8 *)(local_80.Data + lVar15 * 4) = 0;
    *(undefined8 *)(local_80.Data + lVar15 * 4 + 8) = 0;
    *(undefined8 *)(local_80.Data + lVar15 * 4 + 0x10) = 0;
    *(undefined8 *)(local_80.Data + lVar15 * 4 + 0x10 + 8) = 0;
    *(undefined8 *)(local_80.Data + lVar15 * 4 + 0x20) = 0;
    *(undefined4 *)(local_80.Data + lVar15 * 4 + 0x28) = 0;
    local_68 = pTVar17;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    pFVar2 = (FMutableModelParameterProperties *)(pTVar17->AllocatorInstance).Data;
    iVar9 = (this->ParameterProperties).ArrayNum;
    piVar16 = &(this->ParameterProperties).ArrayMax;
    local_60 = piVar16;
    if (*piVar16 < (int)uVar8) {
      DestructItems<FMutableModelParameterProperties,int>(pFVar2,iVar9);
      (this->ParameterProperties).ArrayNum = 0;
      if (*piVar16 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar8,&pTVar17->AllocatorInstance,0,piVar16);
      }
    }
    else {
      DestructItems<FMutableModelParameterProperties,int>(pFVar2,iVar9);
      (this->ParameterProperties).ArrayNum = 0;
    }
    local_70 = (TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                *)&this->ParameterPropertiesLookupTable;
    TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
    ::Empty(local_70,uVar8);
    iVar9 = 0;
    if (0 < (int)uVar8) {
      do {
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        local_a8 = 0;
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_98 = 0;
        if ((local_90.Object == (FParameters *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = UE::Mutable::Private::FParameters::GetName(local_90.Object,iVar9);
        if (&local_b8 != pFVar14) {
          iVar13 = (pFVar14->Data).ArrayNum;
          pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
          local_b8.Data.ArrayNum = iVar13;
          if ((iVar13 == 0) && (local_b8.Data.ArrayMax == 0)) {
            local_b8.Data.ArrayNum = 0;
            local_b8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar13,local_b8.Data.ArrayMax,(ForAnyElementType *)&local_b8,iVar13,
                       &local_b8.Data.ArrayMax);
            if (iVar13 != 0) {
              memcpy(local_b8.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar13 * 2);
            }
          }
        }
        local_a8 = 0;
        if ((local_90.Object == (FParameters *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        EVar10 = UE::Mutable::Private::FParameters::GetType(local_90.Object,iVar9);
        switch(EVar10) {
        case Bool:
          local_a8 = 1;
          break;
        case Int:
          local_a8 = 2;
          if ((local_90.Object == (FParameters *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar11 = UE::Mutable::Private::FParameters::GetIntPossibleValueCount
                             (local_90.Object,iVar9);
          if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
          }
          if (local_98._4_4_ < (int)uVar11) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar11,&local_a0,(int)local_98,(int *)((longlong)&local_98 + 4));
          }
          iVar13 = 0;
          if (0 < (int)uVar11) {
            do {
              iVar12 = (int)local_98;
              if ((int)local_98 == local_98._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_a0,(int *)((longlong)&local_98 + 4));
              }
              local_98 = CONCAT44(local_98._4_4_,iVar12 + 1);
              pFVar3 = local_a0.Data + (longlong)iVar12 * 0x18;
              DefaultConstructItems<FMutableModelParameterValue,int>(pFVar3,1);
              if ((local_90.Object == (FParameters *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar14 = UE::Mutable::Private::FParameters::GetIntPossibleValueName
                                  (local_90.Object,iVar9,iVar13);
              ::FString::operator=((FString *)pFVar3,pFVar14);
              if ((local_90.Object == (FParameters *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar12 = UE::Mutable::Private::FParameters::GetIntPossibleValue
                                 (local_90.Object,iVar9,iVar13);
              iVar13 = iVar13 + 1;
              *(int *)(pFVar3 + 0x10) = iVar12;
            } while (iVar13 < (int)uVar11);
          }
          piVar16 = &pTVar17->ArrayMax;
          break;
        case Float:
          local_a8 = 3;
          break;
        case Color:
          local_a8 = 4;
          break;
        case Projector:
          local_a8 = 5;
          break;
        case Image:
          local_a8 = 6;
          break;
        case Mesh:
          local_a8 = 8;
          break;
        case Material:
          local_a8 = 9;
          break;
        default:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                             ,0x5cf,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        case Matrix:
          local_a8 = 7;
        }
        pFVar3 = (pTVar17->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar3 + (longlong)*piVar16 * 0x28)) &&
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
        iVar13 = pTVar17->ArrayNum;
        if (iVar13 == *piVar16) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar17->AllocatorInstance,piVar16);
        }
        pTVar17->ArrayNum = iVar13 + 1;
        pFVar3 = (pTVar17->AllocatorInstance).Data + (longlong)iVar13 * 0x28;
        ::FString::FString((FString *)pFVar3,&local_b8);
        FVar6.Data = local_a0.Data;
        pFVar5 = pFVar3 + 0x18;
        *(undefined1 *)
         &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3[0x10].field_0x0)->
          AllocatorInstance).Data = local_a8;
        *(undefined8 *)&pFVar5->field_0x0 = 0;
        iVar13 = (int)local_98;
        *(int *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3[0x20].field_0x0)->
                 AllocatorInstance).Data = (int)local_98;
        if ((int)local_98 == 0) {
          *(int *)&pFVar3[0x24].field_0x0 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(int)local_98,0,(ForAnyElementType *)pFVar5,(int)local_98,
                     (int *)(pFVar3 + 0x24));
          ConstructItems<FMutableModelParameterValue,FMutableModelParameterValue,int>
                    (*(void **)&pFVar5->field_0x0,(FMutableModelParameterValue *)FVar6.Data,iVar13);
        }
        uVar11 = 0;
        if ((int)EVar10 < local_78[0]) {
          uVar11 = ~EVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res18.Value._4_4_ = *(int *)(local_80.Data + (longlong)(int)EVar10 * 4);
        *(int *)(local_80.Data + (longlong)(int)EVar10 * 4) = local_res18.Value._4_4_ + 1;
        local_48 = &local_b8;
        local_40 = &local_res18.Value;
        local_res18.Value._0_4_ = iVar9;
        TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FMutableParameterIndex_&&>_>
                  (local_70,&local_res18,(bool *)&local_48);
        DestructItems<FMutableModelParameterValue,int>
                  ((FMutableModelParameterValue *)local_a0.Data,(int)local_98);
        if ((FMutableModelParameterValue *)local_a0.Data != (FMutableModelParameterValue *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        iVar9 = iVar9 + 1;
        piVar16 = local_60;
        pTVar17 = local_68;
      } while (iVar9 < (int)uVar8);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
  }
  return;
}

