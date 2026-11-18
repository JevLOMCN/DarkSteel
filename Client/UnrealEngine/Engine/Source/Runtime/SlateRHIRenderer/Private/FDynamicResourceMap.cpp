// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 21

// FDynamicResourceMap @ 145fe5980

FDynamicResourceMap * __thiscall FDynamicResourceMap::FDynamicResourceMap(FDynamicResourceMap *this)

{
  *(undefined8 *)&this->NativeTextureMap = 0;
  *(undefined8 *)&(this->NativeTextureMap).field_0x8 = 0;
  *(undefined8 *)&(this->NativeTextureMap).field_0x20 = 0;
  *(undefined4 *)&(this->NativeTextureMap).field_0x28 = 0;
  *(undefined4 *)&(this->NativeTextureMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NativeTextureMap).field_0x34 = 0;
  *(undefined4 *)&(this->NativeTextureMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NativeTextureMap).field_0x40 = 0;
  *(undefined4 *)&(this->NativeTextureMap).field_0x48 = 0;
  *(undefined8 *)&this->TextureMap = 0;
  *(undefined8 *)&(this->TextureMap).field_0x8 = 0;
  *(undefined8 *)&(this->TextureMap).field_0x20 = 0;
  *(undefined4 *)&(this->TextureMap).field_0x28 = 0;
  *(undefined4 *)&(this->TextureMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureMap).field_0x34 = 0;
  *(undefined4 *)&(this->TextureMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TextureMap).field_0x40 = 0;
  *(undefined4 *)&(this->TextureMap).field_0x48 = 0;
  *(undefined8 *)&this->MaterialMap = 0;
  *(undefined8 *)&(this->MaterialMap).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialMap).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialMap).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialMap).field_0x34 = 0;
  *(undefined4 *)&(this->MaterialMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MaterialMap).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialMap).field_0x48 = 0;
  *(undefined8 *)&this->ObjectMap = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectMap).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x48 = 0;
  return this;
}

// ~FDynamicResourceMap @ 145fe9d60

void __thiscall FDynamicResourceMap::~FDynamicResourceMap(FDynamicResourceMap *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ObjectMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectMap);
  *(undefined4 *)&(this->MaterialMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialMap);
  *(undefined4 *)&(this->TextureMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TextureMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextureMap);
  *(undefined4 *)&(this->NativeTextureMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NativeTextureMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddAtlasedTextureResource @ 145fef520

void __thiscall
FDynamicResourceMap::AddAtlasedTextureResource
          (FDynamicResourceMap *this,UTexture *param_1,
          TSharedRef<FSlateAtlasedTextureResource,1> *param_2)

{
  TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TSharedPtr<FSlateAtlasedTextureResource,1>_&&>
  local_res10;
  FSlateAtlasedTextureResource *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedPtr<FSlateAtlasedTextureResource,1> **local_18;
  FSlateAtlasedTextureResource **local_10;
  
  if (param_1 != (UTexture *)0x0) {
    local_28 = param_2->Object;
    local_20 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.Value = (TSharedPtr<FSlateAtlasedTextureResource,1> *)0x0;
    local_res10.Key = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_res10);
    local_18 = &local_res10.Value;
    local_10 = &local_28;
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TSharedPtr<FSlateAtlasedTextureResource,1>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
                *)&this->ObjectMap,&local_res10,(bool *)&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddDynamicTextureResource @ 145fef5f0

void __thiscall
FDynamicResourceMap::AddDynamicTextureResource
          (FDynamicResourceMap *this,FName param_1,
          TSharedRef<FSlateDynamicTextureResource,1> *param_2)

{
  TPairInitializer<FName_const_&,TSharedPtr<FSlateDynamicTextureResource,1>_&&> local_res8 [2];
  FSlateDynamicTextureResource *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedPtr<FSlateDynamicTextureResource,1> **local_18;
  FSlateDynamicTextureResource **local_10;
  
  local_28 = param_2->Object;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = &local_res8[0].Value;
  local_10 = &local_28;
  local_res8[0].Value = (TSharedPtr<FSlateDynamicTextureResource,1> *)param_1;
  TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FSlateDynamicTextureResource,1>_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddMaterialResource @ 145fef660

void __thiscall
FDynamicResourceMap::AddMaterialResource
          (FDynamicResourceMap *this,FMaterialKey *param_1,
          TSharedRef<FSlateMaterialResource,1> *param_2)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TPairInitializer<FMaterialKey_const_&,TSharedPtr<FSlateMaterialResource,1>_&&> local_res8;
  UMaterialInterface *local_res18 [2];
  FSlateMaterialResource *local_48;
  TReferenceControllerBase<1> *local_40;
  FMaterialKey *local_38;
  FSlateMaterialResource **local_30;
  
  pUVar1 = param_2->Object->MaterialObject;
  iVar4 = 0;
  iVar5 = 0;
  if (pUVar1 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_res8.Value = (TSharedPtr<FSlateMaterialResource,1> *)0x0;
    local_res18[0] = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)local_res18);
    iVar4 = local_res8.Value._4_4_;
    iVar5 = (int)local_res8.Value;
  }
  if (((param_1->Material).ObjectIndex != iVar5) ||
     ((param_1->Material).ObjectSerialNumber != iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InKey.Material == InMaterialResource->GetMaterialObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                       ,0x92,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48 = param_2->Object;
  local_40 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = &local_48;
  local_38 = param_1;
  TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMaterialKey_const_&,TSharedPtr<FSlateMaterialResource,1>_&&>_>
            ((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
              *)&this->MaterialMap,&local_res8,(bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddUTextureResource @ 145ff5c40

void __thiscall
FDynamicResourceMap::AddUTextureResource
          (FDynamicResourceMap *this,UTexture *param_1,TSharedRef<FSlateUTextureResource,1> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TPairInitializer<TWeakObjectPtr<UTexture,FWeakObjectPtr>_&&,TSharedPtr<FSlateUTextureResource,1>_&&>
  local_res10;
  UTexture *local_res20;
  FSlateUTextureResource *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedPtr<FSlateUTextureResource,1> **local_28;
  FSlateUTextureResource **local_20;
  
  if (param_1 != (UTexture *)0x0) {
    if (param_1 != (UTexture *)param_2->Object->_padding_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureObject == InResource->GetTextureObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                         ,0x8b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_38 = param_2->Object;
    local_30 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.Value = (TSharedPtr<FSlateUTextureResource,1> *)0x0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_res20);
    local_28 = &local_res10.Value;
    local_20 = &local_38;
    TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UTexture,FWeakObjectPtr>_&&,TSharedPtr<FSlateUTextureResource,1>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
                *)&this->TextureMap,&local_res10,(bool *)&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Empty @ 146004de0

void __thiscall FDynamicResourceMap::Empty(FDynamicResourceMap *this)

{
  undefined1 *puVar1;
  TMap<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->TextureMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
                      *)&this->TextureMap);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->TextureMap,0,*(int *)&(this->TextureMap).field_0x8);
  puVar1 = &(this->TextureMap).field_0xc;
  *(undefined4 *)&(this->TextureMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->TextureMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TextureMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->TextureMap).field_0x2c;
  *(undefined4 *)&(this->TextureMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TextureMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->TextureMap).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
              *)&this->TextureMap);
  }
  this_00 = &this->MaterialMap;
  bVar3 = 1 < *(int *)&(this->MaterialMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->MaterialMap).field_0x8);
  puVar1 = &(this->MaterialMap).field_0xc;
  *(undefined4 *)&(this->MaterialMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MaterialMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->MaterialMap).field_0x2c;
  *(undefined4 *)&(this->MaterialMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MaterialMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MaterialMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->MaterialMap).field_0x48 = 1;
    TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  bVar3 = 1 < *(int *)&(this->NativeTextureMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->NativeTextureMap).field_0x8);
  puVar1 = &(this->NativeTextureMap).field_0xc;
  *(undefined4 *)&(this->NativeTextureMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NativeTextureMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NativeTextureMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->NativeTextureMap).field_0x2c;
  *(undefined4 *)&(this->NativeTextureMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NativeTextureMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NativeTextureMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->NativeTextureMap).field_0x48 = 1;
    TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

// EmptyDynamicTextureResources @ 146004fe0

void __thiscall FDynamicResourceMap::EmptyDynamicTextureResources(FDynamicResourceMap *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->NativeTextureMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->NativeTextureMap).field_0x8);
  puVar1 = &(this->NativeTextureMap).field_0xc;
  *(undefined4 *)&(this->NativeTextureMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NativeTextureMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NativeTextureMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->NativeTextureMap).field_0x2c;
  *(undefined4 *)&(this->NativeTextureMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NativeTextureMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NativeTextureMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->NativeTextureMap).field_0x48 = 1;
    TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

// EmptyMaterialResources @ 146005100

void __thiscall FDynamicResourceMap::EmptyMaterialResources(FDynamicResourceMap *this)

{
  undefined1 *puVar1;
  TMap<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->MaterialMap;
  bVar3 = 1 < *(int *)&(this->MaterialMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->MaterialMap).field_0x8);
  puVar1 = &(this->MaterialMap).field_0xc;
  *(undefined4 *)&(this->MaterialMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MaterialMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->MaterialMap).field_0x2c;
  *(undefined4 *)&(this->MaterialMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MaterialMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MaterialMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->MaterialMap).field_0x48 = 1;
    TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// EmptyUTextureResources @ 1460051c0

void __thiscall FDynamicResourceMap::EmptyUTextureResources(FDynamicResourceMap *this)

{
  TMap<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->TextureMap;
  bVar3 = 1 < *(int *)&(this->TextureMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->TextureMap).field_0x8);
  puVar1 = &(this->TextureMap).field_0xc;
  *(undefined4 *)&(this->TextureMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TextureMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->TextureMap).field_0x2c;
  *(undefined4 *)&(this->TextureMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TextureMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->TextureMap).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// GetAtlasedTextureResource @ 14600c450

TSharedPtr<FSlateAtlasedTextureResource,1> * __thiscall
FDynamicResourceMap::GetAtlasedTextureResource
          (FDynamicResourceMap *this,
          TSharedPtr<FSlateAtlasedTextureResource,1> *__return_storage_ptr__,UTexture *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  longlong lVar3;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  if (param_1 == (UTexture *)0x0) {
    __return_storage_ptr__->Object = (FSlateAtlasedTextureResource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = (FWeakObjectPtr)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  local_res20 = local_res18;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
                      *)&this->ObjectMap,local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->ObjectMap).field_0x0, lVar3 == 0)) {
    __return_storage_ptr__->Object = (FSlateAtlasedTextureResource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FSlateAtlasedTextureResource **)(lVar3 + 8);
    pTVar1 = *(TReferenceControllerBase<1> **)(lVar3 + 0x10);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetDynamicTextureResource @ 14600c720

TSharedPtr<FSlateDynamicTextureResource,1> * __thiscall
FDynamicResourceMap::GetDynamicTextureResource
          (FDynamicResourceMap *this,
          TSharedPtr<FSlateDynamicTextureResource,1> *__return_storage_ptr__,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                   *)this,param_1);
  if (pTVar2 == (TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FSlateDynamicTextureResource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FSlateDynamicTextureResource **)&pTVar2->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetMaterialResource @ 14600cbc0

TSharedPtr<FSlateMaterialResource,1> * __thiscall
FDynamicResourceMap::GetMaterialResource
          (FDynamicResourceMap *this,TSharedPtr<FSlateMaterialResource,1> *__return_storage_ptr__,
          FMaterialKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = ::GetTypeHash(param_1);
  iVar3 = TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMaterialKey>
                    ((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
                      *)&this->MaterialMap,uVar2,param_1);
  if ((iVar3 == -1) ||
     (lVar4 = (longlong)iVar3 * 0x30 + *(longlong *)&(this->MaterialMap).field_0x0, lVar4 == 0)) {
    __return_storage_ptr__->Object = (FSlateMaterialResource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FSlateMaterialResource **)(lVar4 + 0x18);
    pTVar1 = *(TReferenceControllerBase<1> **)(lVar4 + 0x20);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetUTextureResource @ 146019590

TSharedPtr<FSlateUTextureResource,1> * __thiscall
FDynamicResourceMap::GetUTextureResource
          (FDynamicResourceMap *this,TSharedPtr<FSlateUTextureResource,1> *__return_storage_ptr__,
          UTexture *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  longlong lVar3;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  if (param_1 == (UTexture *)0x0) {
    __return_storage_ptr__->Object = (FSlateUTextureResource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = (FWeakObjectPtr)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  local_res20 = local_res18;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UTexture_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
                      *)&this->TextureMap,local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                     (TWeakObjectPtr<UTexture_const_,FWeakObjectPtr> *)&local_res20);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->TextureMap).field_0x0, lVar3 == 0)) {
    __return_storage_ptr__->Object = (FSlateUTextureResource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FSlateUTextureResource **)(lVar3 + 8);
    pTVar1 = *(TReferenceControllerBase<1> **)(lVar3 + 0x10);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// ReleaseResources @ 146021ba0

void __thiscall FDynamicResourceMap::ReleaseResources(FDynamicResourceMap *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  FRenderResource *pFVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
  *pTStack_d0;
  FDynamicResourceMap *local_c8;
  undefined2 local_c0;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  undefined1 local_48 [32];
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  
  TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
              *)this);
  iVar7 = 1;
  local_c0 = 0;
  stack0xffffffffffffff18 = local_78._16_16_;
  auStack_f0._0_8_ = local_78._8_8_;
  local_d8 = local_58;
  pTStack_d0 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_c8 = this;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar4 * 0x20 + *(longlong *)local_78._0_8_;
      if (*(longlong *)(lVar6 + 8) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 8);
      pFVar5 = (FRenderResource *)(lVar6 + 0x28);
      if (lVar6 == 0) {
        pFVar5 = (FRenderResource *)0x0;
      }
      BeginReleaseResource(pFVar5,(FRenderCommandPipe *)0x0);
      uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
      uVar4 = (ulonglong)uStack_dc;
    } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
    if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_c8->NativeTextureMap).field_0x8 -
              *(int *)&(local_c8->NativeTextureMap).field_0x34;
      if (uVar8 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar8) && (*(int *)&(local_c8->NativeTextureMap).field_0x48 < iVar3)) ||
         (iVar3 < *(int *)&(local_c8->NativeTextureMap).field_0x48)) {
        *(int *)&(local_c8->NativeTextureMap).field_0x48 = iVar3;
        TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                  *)local_c8);
      }
    }
  }
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_48,
             (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
              *)&this->TextureMap);
  stack0xffffffffffffff58 = local_48._16_16_;
  local_b8 = (longlong *)local_48._0_8_;
  auStack_b0._0_8_ = local_48._8_8_;
  local_80 = 0;
  local_98 = local_28;
  pTStack_90 = pTStack_20;
  uVar4 = local_48._24_8_ >> 0x20;
  local_88 = (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
              *)&this->TextureMap;
  if (local_48._28_4_ < *(int *)(local_48._16_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar4 * 0x20 + *local_b8;
      if (*(longlong *)(lVar6 + 8) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FSlateUTextureResource::ResetTexture(*(FSlateUTextureResource **)(lVar6 + 8));
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar4 = (ulonglong)uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (3 < uVar8) {
        uVar4 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_88->HashSize < iVar7)) || (iVar7 < local_88->HashSize)) {
        local_88->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  return;
}

// RemoveAtlasedTextureResource @ 146022210

void __thiscall
FDynamicResourceMap::RemoveAtlasedTextureResource(FDynamicResourceMap *this,UTexture *param_1)

{
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  if (*(int *)&(this->ObjectMap).field_0x8 != *(int *)&(this->ObjectMap).field_0x34) {
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
              ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
                *)&this->ObjectMap,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
               (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res10);
  }
  return;
}

// RemoveDynamicTextureResource @ 1460225e0

void __thiscall
FDynamicResourceMap::RemoveDynamicTextureResource(FDynamicResourceMap *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->NativeTextureMap).field_0x8 != *(int *)&(this->NativeTextureMap).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                         *)this,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// RemoveExpiredMaterialResources @ 146022620

void __thiscall
FDynamicResourceMap::RemoveExpiredMaterialResources
          (FDynamicResourceMap *this,
          TArray<TSharedPtr<FSlateMaterialResource,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  FWeakObjectPtr local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
              *)&this->MaterialMap);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
              *)&this->MaterialMap;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar2 = local_48;
      lVar8 = (longlong)(int)uVar6 * 0x30;
      local_res8.ObjectIndex = *(int *)(*local_48 + lVar8);
      local_res8.ObjectSerialNumber = *(int *)(*local_48 + 4 + lVar8);
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar5 == (UObject *)0x0) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        pFVar9 = (FScriptContainerElement *)(lVar8 + *plVar2 + 0x18);
        if (((pFVar7 <= pFVar9) && (pFVar9 < pFVar7 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        if (iVar4 == param_1->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar4 + 1;
        pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar7 = *(undefined8 *)pFVar9;
        lVar8 = *(longlong *)(pFVar9 + 8);
        *(longlong *)(pFVar7 + 8) = lVar8;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        lVar8 = *plVar2;
        lVar10 = (longlong)(int)uStack_2c;
        if ((*(longlong *)(lVar8 + 0x18 + lVar10 * 0x30) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FSlateMaterialResource::ResetMaterial
                  (*(FSlateMaterialResource **)(lVar8 + 0x18 + lVar10 * 0x30));
        TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uStack_2c);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar11 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// RemoveExpiredTextureResources @ 146022880

void __thiscall
FDynamicResourceMap::RemoveExpiredTextureResources
          (FDynamicResourceMap *this,
          TArray<TSharedPtr<FSlateUTextureResource,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
              *)&this->TextureMap);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
              *)&this->TextureMap;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar2 = local_48;
      lVar7 = (longlong)(int)uVar5 * 0x20;
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_48 + lVar7));
      if (!bVar3) {
        pFVar6 = (param_1->AllocatorInstance).Data;
        pFVar8 = (FScriptContainerElement *)(lVar7 + *plVar2 + 8);
        if (((pFVar6 <= pFVar8) && (pFVar8 < pFVar6 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        if (iVar4 == param_1->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar4 + 1;
        pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar6 = *(undefined8 *)pFVar8;
        lVar7 = *(longlong *)(pFVar8 + 8);
        *(longlong *)(pFVar6 + 8) = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        lVar7 = *plVar2;
        lVar9 = (longlong)(int)uStack_2c;
        if ((*(longlong *)(lVar9 * 0x20 + 8 + lVar7) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FSlateUTextureResource::ResetTexture(*(FSlateUTextureResource **)(lVar9 * 0x20 + 8 + lVar7))
        ;
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uStack_2c);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// RemoveMaterialResource @ 146022ad0

void __thiscall
FDynamicResourceMap::RemoveMaterialResource(FDynamicResourceMap *this,FMaterialKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (*(int *)&(this->MaterialMap).field_0x8 != *(int *)&(this->MaterialMap).field_0x34) {
    uVar2 = ::GetTypeHash(param_1);
    puVar4 = *(undefined1 **)&(this->MaterialMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MaterialMap).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + ((longlong)*(int *)&(this->MaterialMap).field_0x48 - 1U &
                              (longlong)(int)uVar2) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->MaterialMap).field_0x0;
      while ((((lVar3 = (longlong)iVar5,
               *(int *)(lVar1 + lVar3 * 0x30) != (param_1->Material).ObjectIndex ||
               (*(int *)(lVar1 + 4 + lVar3 * 0x30) != (param_1->Material).ObjectSerialNumber)) ||
              ((param_1->ImageSize).field0_0x0._s_0.X != *(float *)(lVar1 + 8 + lVar3 * 0x30))) ||
             (((param_1->ImageSize).field0_0x0._s_0.Y != *(float *)(lVar1 + 0xc + lVar3 * 0x30) ||
              (*(int *)(lVar1 + 0x10 + lVar3 * 0x30) != param_1->MaskKey))))) {
        iVar5 = *(int *)(lVar1 + 0x28 + lVar3 * 0x30);
        if (iVar5 == -1) {
          return;
        }
      }
      TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
                       *)&this->MaterialMap,iVar5);
    }
  }
  return;
}

// RemoveUTextureResource @ 146022ba0

void __thiscall
FDynamicResourceMap::RemoveUTextureResource(FDynamicResourceMap *this,UTexture *param_1)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  undefined1 *puVar4;
  FWeakObjectPtr *pFVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  if (param_1 != (UTexture *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = (FWeakObjectPtr)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    FVar2 = local_res10;
    if (*(int *)&(this->TextureMap).field_0x8 != *(int *)&(this->TextureMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->TextureMap).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->TextureMap).field_0x38;
      }
      iVar1 = *(int *)(puVar4 + ((longlong)
                                 (local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex) &
                                (longlong)*(int *)&(this->TextureMap).field_0x48 - 1U) * 4);
      while (iVar1 != -1) {
        pFVar5 = (FWeakObjectPtr *)
                 ((longlong)iVar1 * 0x20 + *(longlong *)&(this->TextureMap).field_0x0);
        local_res18 = FVar2;
        local_res20 = *pFVar5;
        bVar3 = TWeakObjectPtr<UTexture_const_,FWeakObjectPtr>::UEOpEquals<UTexture_const_,bool>
                          ((TWeakObjectPtr<UTexture_const_,FWeakObjectPtr> *)&local_res20,
                           (TWeakObjectPtr<UTexture_const_,FWeakObjectPtr> *)&local_res18);
        if (bVar3) {
          TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
                           *)&this->TextureMap,iVar1);
          return;
        }
        iVar1 = pFVar5[3].ObjectIndex;
      }
    }
  }
  return;
}

