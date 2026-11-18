// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 6

// FMutableUIMetadata @ 14ab9f9f0

FMutableUIMetadata * __thiscall FMutableUIMetadata::FMutableUIMetadata(FMutableUIMetadata *this)

{
  undefined1 *this_00;
  
  (this->ObjectFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectFriendlyName).Data.ArrayNum = 0;
  (this->ObjectFriendlyName).Data.ArrayMax = 0;
  (this->UISectionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UISectionName).Data.ArrayNum = 0;
  (this->UISectionName).Data.ArrayMax = 0;
  this->UIOrder = 0;
  this_00 = &(this->UIThumbnail).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->UIThumbnail).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->UIThumbnail).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->UIThumbnail).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->UIThumbnail).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->ExtraInformation = 0;
  *(undefined8 *)&(this->ExtraInformation).field_0x8 = 0;
  *(undefined8 *)&(this->ExtraInformation).field_0x20 = 0;
  *(undefined4 *)&(this->ExtraInformation).field_0x28 = 0;
  *(undefined4 *)&(this->ExtraInformation).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtraInformation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtraInformation).field_0x34 = 0;
  *(undefined8 *)&(this->ExtraInformation).field_0x40 = 0;
  *(undefined4 *)&(this->ExtraInformation).field_0x48 = 0;
  *(undefined8 *)&this->ExtraAssets = 0;
  *(undefined8 *)&(this->ExtraAssets).field_0x8 = 0;
  *(undefined8 *)&(this->ExtraAssets).field_0x20 = 0;
  *(undefined4 *)&(this->ExtraAssets).field_0x28 = 0;
  *(undefined4 *)&(this->ExtraAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtraAssets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtraAssets).field_0x34 = 0;
  *(undefined8 *)&(this->ExtraAssets).field_0x40 = 0;
  *(undefined4 *)&(this->ExtraAssets).field_0x48 = 0;
  return this;
}

// ~FMutableUIMetadata @ 14aba2660

void __thiscall FMutableUIMetadata::~FMutableUIMetadata(FMutableUIMetadata *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ExtraAssets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExtraAssets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExtraAssets);
  *(undefined4 *)&(this->ExtraInformation).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExtraInformation).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExtraInformation);
  pvVar1 = *(void **)&(this->UIThumbnail).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->UISectionName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjectFriendlyName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14aba3b30

FMutableUIMetadata * __thiscall
FMutableUIMetadata::operator=(FMutableUIMetadata *this,FMutableUIMetadata *param_1)

{
  ::FString::operator=(&this->ObjectFriendlyName,&param_1->ObjectFriendlyName);
  ::FString::operator=(&this->UISectionName,&param_1->UISectionName);
  this->UIOrder = param_1->UIOrder;
  *(undefined8 *)&(this->UIThumbnail).SoftObjectPtr =
       *(undefined8 *)&(param_1->UIThumbnail).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->UIThumbnail).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->UIThumbnail).SoftObjectPtr.field_0x8);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->ExtraInformation,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->ExtraInformation);
  TSet<TTuple<FString,TSoftObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TSoftObjectPtr<UObject>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TSoftObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TSoftObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)&this->ExtraAssets,
              (TSet<TTuple<FString,TSoftObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TSoftObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)&param_1->ExtraAssets);
  return this;
}

// FMutableUIMetadata @ 14abbcb60

FMutableUIMetadata * __thiscall
FMutableUIMetadata::FMutableUIMetadata(FMutableUIMetadata *this,FMutableUIMetadata *param_1)

{
  undefined1 *puVar1;
  TMap<FString,TSoftObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSoftObjectPtr<UObject>,0>_>
  *this_00;
  
  ::FString::FString(&this->ObjectFriendlyName,&param_1->ObjectFriendlyName);
  ::FString::FString(&this->UISectionName,&param_1->UISectionName);
  this->UIOrder = param_1->UIOrder;
  *(undefined8 *)&(this->UIThumbnail).SoftObjectPtr =
       *(undefined8 *)&(param_1->UIThumbnail).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->UIThumbnail).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->UIThumbnail).SoftObjectPtr.field_0x8);
  *(undefined8 *)&(this->ExtraInformation).field_0x0 = 0;
  *(undefined8 *)&(this->ExtraInformation).field_0x8 = 0;
  *(undefined8 *)&(this->ExtraInformation).field_0x20 = 0;
  *(undefined4 *)&(this->ExtraInformation).field_0x28 = 0;
  *(undefined4 *)&(this->ExtraInformation).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtraInformation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtraInformation).field_0x34 = 0;
  *(undefined8 *)&(this->ExtraInformation).field_0x40 = 0;
  *(undefined4 *)&(this->ExtraInformation).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->ExtraInformation,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->ExtraInformation);
  this_00 = &this->ExtraAssets;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ExtraAssets).field_0x8 = 0;
  puVar1 = &(this->ExtraAssets).field_0x48;
  *(undefined8 *)&(this->ExtraAssets).field_0x20 = 0;
  *(undefined4 *)&(this->ExtraAssets).field_0x28 = 0;
  *(undefined4 *)&(this->ExtraAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtraAssets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtraAssets).field_0x34 = 0;
  *(undefined8 *)&(this->ExtraAssets).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->ExtraAssets) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ExtraAssets).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->ExtraAssets).field_0x38,
               *(int *)&(param_1->ExtraAssets).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ExtraAssets);
  }
  return this;
}

// operator= @ 14abc0e90

FMutableUIMetadata * __thiscall
FMutableUIMetadata::operator=(FMutableUIMetadata *this,FMutableUIMetadata *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar3
  ;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  undefined1 *puVar4;
  undefined1 *puVar5;
  TMap<FString,TSoftObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSoftObjectPtr<UObject>,0>_>
  *this_01;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  TMap<FString,TSoftObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSoftObjectPtr<UObject>,0>_>
  *pTVar8;
  
  if (this != param_1) {
    pFVar6 = (this->ObjectFriendlyName).Data.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this->ObjectFriendlyName).Data.AllocatorInstance.Data =
         (param_1->ObjectFriendlyName).Data.AllocatorInstance.Data;
    (param_1->ObjectFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ObjectFriendlyName).Data.ArrayNum = (param_1->ObjectFriendlyName).Data.ArrayNum;
    (this->ObjectFriendlyName).Data.ArrayMax = (param_1->ObjectFriendlyName).Data.ArrayMax;
    (param_1->ObjectFriendlyName).Data.ArrayNum = 0;
    (param_1->ObjectFriendlyName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->UISectionName;
  pFVar2 = &this->UISectionName;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UISectionName).Data.ArrayNum = (param_1->UISectionName).Data.ArrayNum;
    (this->UISectionName).Data.ArrayMax = (param_1->UISectionName).Data.ArrayMax;
    (param_1->UISectionName).Data.ArrayNum = 0;
    (param_1->UISectionName).Data.ArrayMax = 0;
  }
  this->UIOrder = param_1->UIOrder;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->UIThumbnail,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->UIThumbnail);
  pTVar3 = &param_1->ExtraInformation;
  this_00 = &this->ExtraInformation;
  if (this_00 != pTVar3) {
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->ExtraInformation).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar4 = &(param_1->ExtraInformation).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar3;
    puVar5 = &(this->ExtraInformation).field_0x10;
    *(undefined8 *)pTVar3 = 0;
    *(undefined4 *)&(this->ExtraInformation).field_0x8 =
         *(undefined4 *)&(param_1->ExtraInformation).field_0x8;
    *(undefined4 *)&(this->ExtraInformation).field_0xc =
         *(undefined4 *)&(param_1->ExtraInformation).field_0xc;
    *(undefined8 *)&(param_1->ExtraInformation).field_0x8 = 0;
    if (puVar5 != puVar4) {
      if (*(longlong *)&(param_1->ExtraInformation).field_0x20 == 0) {
        memmove(puVar5,puVar4,0x10);
      }
      pvVar7 = *(void **)&(this->ExtraInformation).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(undefined8 *)&(this->ExtraInformation).field_0x20 =
           *(undefined8 *)&(param_1->ExtraInformation).field_0x20;
      *(undefined8 *)&(param_1->ExtraInformation).field_0x20 = 0;
      *(undefined4 *)&(this->ExtraInformation).field_0x28 =
           *(undefined4 *)&(param_1->ExtraInformation).field_0x28;
      *(undefined4 *)&(this->ExtraInformation).field_0x2c =
           *(undefined4 *)&(param_1->ExtraInformation).field_0x2c;
      *(undefined8 *)&(param_1->ExtraInformation).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ExtraInformation).field_0x30 =
         *(undefined4 *)&(param_1->ExtraInformation).field_0x30;
    *(undefined4 *)&(this->ExtraInformation).field_0x34 =
         *(undefined4 *)&(param_1->ExtraInformation).field_0x34;
    *(undefined4 *)&(param_1->ExtraInformation).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ExtraInformation).field_0x34 = 0;
    if (*(longlong *)&(param_1->ExtraInformation).field_0x40 == 0) {
      *(undefined4 *)&(this->ExtraInformation).field_0x38 =
           *(undefined4 *)&(param_1->ExtraInformation).field_0x38;
    }
    pvVar7 = *(void **)&(this->ExtraInformation).field_0x40;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    *(undefined8 *)&(this->ExtraInformation).field_0x40 =
         *(undefined8 *)&(param_1->ExtraInformation).field_0x40;
    *(undefined8 *)&(param_1->ExtraInformation).field_0x40 = 0;
    *(undefined4 *)&(this->ExtraInformation).field_0x48 =
         *(undefined4 *)&(param_1->ExtraInformation).field_0x48;
    *(undefined4 *)&(param_1->ExtraInformation).field_0x48 = 0;
  }
  pTVar8 = &param_1->ExtraAssets;
  this_01 = &this->ExtraAssets;
  if (this_01 != pTVar8) {
    TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->ExtraAssets).field_0x8);
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    puVar4 = &(param_1->ExtraAssets).field_0x10;
    *(undefined8 *)this_01 = *(undefined8 *)pTVar8;
    puVar5 = &(this->ExtraAssets).field_0x10;
    *(undefined8 *)pTVar8 = 0;
    *(undefined4 *)&(this->ExtraAssets).field_0x8 = *(undefined4 *)&(param_1->ExtraAssets).field_0x8
    ;
    *(undefined4 *)&(this->ExtraAssets).field_0xc = *(undefined4 *)&(param_1->ExtraAssets).field_0xc
    ;
    *(undefined8 *)&(param_1->ExtraAssets).field_0x8 = 0;
    if (puVar5 != puVar4) {
      if (*(longlong *)&(param_1->ExtraAssets).field_0x20 == 0) {
        memmove(puVar5,puVar4,0x10);
      }
      pvVar7 = *(void **)&(this->ExtraAssets).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(undefined8 *)&(this->ExtraAssets).field_0x20 =
           *(undefined8 *)&(param_1->ExtraAssets).field_0x20;
      *(undefined8 *)&(param_1->ExtraAssets).field_0x20 = 0;
      *(undefined4 *)&(this->ExtraAssets).field_0x28 =
           *(undefined4 *)&(param_1->ExtraAssets).field_0x28;
      *(undefined4 *)&(this->ExtraAssets).field_0x2c =
           *(undefined4 *)&(param_1->ExtraAssets).field_0x2c;
      *(undefined8 *)&(param_1->ExtraAssets).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ExtraAssets).field_0x30 =
         *(undefined4 *)&(param_1->ExtraAssets).field_0x30;
    *(undefined4 *)&(this->ExtraAssets).field_0x34 =
         *(undefined4 *)&(param_1->ExtraAssets).field_0x34;
    *(undefined4 *)&(param_1->ExtraAssets).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ExtraAssets).field_0x34 = 0;
    if (*(longlong *)&(param_1->ExtraAssets).field_0x40 == 0) {
      *(undefined4 *)&(this->ExtraAssets).field_0x38 =
           *(undefined4 *)&(param_1->ExtraAssets).field_0x38;
    }
    pvVar7 = *(void **)&(this->ExtraAssets).field_0x40;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    *(undefined8 *)&(this->ExtraAssets).field_0x40 =
         *(undefined8 *)&(param_1->ExtraAssets).field_0x40;
    *(undefined8 *)&(param_1->ExtraAssets).field_0x40 = 0;
    *(undefined4 *)&(this->ExtraAssets).field_0x48 =
         *(undefined4 *)&(param_1->ExtraAssets).field_0x48;
    *(undefined4 *)&(param_1->ExtraAssets).field_0x48 = 0;
  }
  return this;
}

// StaticStruct @ 14ac02390

UScriptStruct * __cdecl FMutableUIMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableUIMetadata.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableUIMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableUIMetadata,(UObject *)pUVar1,
                         L"MutableUIMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FMutableUIMetadata.OuterSingleton;
}

