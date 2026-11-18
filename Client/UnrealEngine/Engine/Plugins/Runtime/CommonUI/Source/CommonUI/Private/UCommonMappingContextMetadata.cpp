// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// StaticClass @ 14a7889d0

UClass * __cdecl UCommonMappingContextMetadata::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonMappingContextMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonMappingContextMetadata",
               &Z_Registration_Info_UClass_UCommonMappingContextMetadata.InnerSingleton,
               StaticRegisterNativesUCommonMappingContextMetadata,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonMappingContextMetadata>,
               InternalVTableHelperCtorCaller<UCommonMappingContextMetadata>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonMappingContextMetadata.InnerSingleton;
}

// UCommonMappingContextMetadata @ 14a7ae230

UCommonMappingContextMetadata * __thiscall
UCommonMappingContextMetadata::UCommonMappingContextMetadata
          (UCommonMappingContextMetadata *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDataAsset__;
  this->_padding_ = (longlong)&_vftable__for__ICommonMappingContextMetadataInterface__;
  (this->EnhancedInputMetadata).field0_0x0.DebugPtr = (UCommonInputMetadata *)0x0;
  *(undefined8 *)&this->PerActionEnhancedInputMetadata = 0;
  *(undefined8 *)&(this->PerActionEnhancedInputMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->PerActionEnhancedInputMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x34 = 0;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerActionEnhancedInputMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x48 = 0;
  return this;
}

// UCommonMappingContextMetadata @ 14a7ae2a0

UCommonMappingContextMetadata * __thiscall
UCommonMappingContextMetadata::UCommonMappingContextMetadata
          (UCommonMappingContextMetadata *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDataAsset__;
  this->_padding_ = (longlong)&_vftable__for__ICommonMappingContextMetadataInterface__;
  (this->EnhancedInputMetadata).field0_0x0.DebugPtr = (UCommonInputMetadata *)0x0;
  *(undefined8 *)&this->PerActionEnhancedInputMetadata = 0;
  *(undefined8 *)&(this->PerActionEnhancedInputMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->PerActionEnhancedInputMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x34 = 0;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerActionEnhancedInputMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x48 = 0;
  return this;
}

// ~UCommonMappingContextMetadata @ 14a7b30d0

void __thiscall
UCommonMappingContextMetadata::~UCommonMappingContextMetadata(UCommonMappingContextMetadata *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDataAsset__;
  this->_padding_ = (longlong)&_vftable__for__ICommonMappingContextMetadataInterface__;
  *(undefined4 *)&(this->PerActionEnhancedInputMetadata).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerActionEnhancedInputMetadata).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerActionEnhancedInputMetadata);
  this->_padding_ = (longlong)&___7ICommonMappingContextMetadataInterface__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetCommonInputMetadata @ 14a7e1560

UCommonInputMetadata * __thiscall
UCommonMappingContextMetadata::GetCommonInputMetadata
          (UCommonMappingContextMetadata *this,UInputAction *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  UInputAction *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (FObjectPtr_u_0 *)
           TMapBase<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>,0>_>
           ::Find((TMapBase<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction>,TObjectPtr<UCommonInputMetadata_const_>,0>_>
                   *)&this->_padding_,(TObjectPtr<UInputAction_const_>)&local_res8);
  if (pFVar1 != (FObjectPtr_u_0 *)0x0) {
    return (UCommonInputMetadata *)(FObjectPtr)pFVar1->Handle;
  }
  return (UCommonInputMetadata *)this->_padding_;
}

// GetPrivateStaticClass @ 14a7e5c80

UClass * __cdecl UCommonMappingContextMetadata::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonMappingContextMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonMappingContextMetadata",
               &Z_Registration_Info_UClass_UCommonMappingContextMetadata.InnerSingleton,
               StaticRegisterNativesUCommonMappingContextMetadata,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonMappingContextMetadata>,
               InternalVTableHelperCtorCaller<UCommonMappingContextMetadata>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonMappingContextMetadata.InnerSingleton;
}

// StaticRegisterNativesUCommonMappingContextMetadata @ 14a81e6e0

void __cdecl UCommonMappingContextMetadata::StaticRegisterNativesUCommonMappingContextMetadata(void)

{
  return;
}

// _getUObject @ 14a82b9f0

UObject * __thiscall UCommonMappingContextMetadata::_getUObject(UCommonMappingContextMetadata *this)

{
  return (UObject *)&this[-1].PerActionEnhancedInputMetadata.field_0x20;
}

