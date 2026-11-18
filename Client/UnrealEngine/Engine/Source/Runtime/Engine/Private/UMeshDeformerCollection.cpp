// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14758d030

UClass * __cdecl UMeshDeformerCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerCollection",
               &Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton,
               StaticRegisterNativesUMeshDeformerCollection,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMeshDeformerCollection>,
               InternalVTableHelperCtorCaller<UMeshDeformerCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton;
}

// UMeshDeformerCollection @ 1475a7690

UMeshDeformerCollection * __thiscall
UMeshDeformerCollection::UMeshDeformerCollection
          (UMeshDeformerCollection *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshDeformerCollection__6B_;
  (this->MeshDeformers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDeformers).ArrayNum = 0;
  (this->MeshDeformers).ArrayMax = 0;
  (this->MeshDeformerCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDeformerCollections).ArrayNum = 0;
  (this->MeshDeformerCollections).ArrayMax = 0;
  return this;
}

// UMeshDeformerCollection @ 1475a76d0

UMeshDeformerCollection * __thiscall
UMeshDeformerCollection::UMeshDeformerCollection
          (UMeshDeformerCollection *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshDeformerCollection__6B_;
  (this->MeshDeformers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDeformers).ArrayNum = 0;
  (this->MeshDeformers).ArrayMax = 0;
  (this->MeshDeformerCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDeformerCollections).ArrayNum = 0;
  (this->MeshDeformerCollections).ArrayMax = 0;
  return this;
}

// ~UMeshDeformerCollection @ 1475aa9d0

void __thiscall UMeshDeformerCollection::~UMeshDeformerCollection(UMeshDeformerCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshDeformerCollection__6B_;
  pFVar1 = (this->MeshDeformerCollections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UMeshDeformer>,int>
            ((TSoftObjectPtr<UMeshDeformer> *)(this->MeshDeformers).AllocatorInstance.Data,
             (this->MeshDeformers).ArrayNum);
  pFVar1 = (this->MeshDeformers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetMeshDeformers @ 1475d55c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSoftObjectPtr<UMeshDeformer>,TSizedDefaultAllocator<32>_> * __thiscall
UMeshDeformerCollection::GetMeshDeformers
          (UMeshDeformerCollection *this,
          TArray<TSoftObjectPtr<UMeshDeformer>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  GetMeshDeformers_Internal
            (this,(TSet<TObjectPtr<UMeshDeformerCollection_const_>,DefaultKeyFuncs<TObjectPtr<UMeshDeformerCollection_const_>,0>,FDefaultSetAllocator>
                   *)local_68,__return_storage_ptr__);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// GetMeshDeformers_Internal @ 1475d56d0

void __thiscall
UMeshDeformerCollection::GetMeshDeformers_Internal
          (UMeshDeformerCollection *this,
          TSet<TObjectPtr<UMeshDeformerCollection_const_>,DefaultKeyFuncs<TObjectPtr<UMeshDeformerCollection_const_>,0>,FDefaultSetAllocator>
          *param_1,TArray<TSoftObjectPtr<UMeshDeformer>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UMeshDeformerCollection_const_>_u_0 local_res8;
  UMeshDeformerCollection *local_res20;
  
  local_res8.DebugPtr = this;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (this != (UMeshDeformerCollection *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMeshDeformerCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
  }
  uVar3 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar2 = TSet<TObjectPtr<UMeshDeformerCollection_const_>,DefaultKeyFuncs<TObjectPtr<UMeshDeformerCollection_const_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UMeshDeformerCollection_const_>_>
                    (param_1,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UMeshDeformerCollection_const_> *)&local_res8.ObjectPtr);
  if (iVar2 == -1) {
    pFVar4 = (this->MeshDeformers).AllocatorInstance.Data;
    iVar2 = (this->MeshDeformers).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((this->MeshDeformers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSoftObjectPtr<UMeshDeformer>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      if (*(longlong *)(pFVar4 + 8) != 0) {
        TArray<TSoftObjectPtr<UMeshDeformer>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TSoftObjectPtr<UMeshDeformer>_const_&>
                  (param_2,(TSoftObjectPtr<UMeshDeformer> *)pFVar4);
      }
      pFVar4 = pFVar4 + 0x28;
    }
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMeshDeformerCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TSet<TObjectPtr<UMeshDeformerCollection_const_>,DefaultKeyFuncs<TObjectPtr<UMeshDeformerCollection_const_>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<UMeshDeformerCollection_const_>_>
              (param_1,(TObjectPtr<UMeshDeformerCollection_const_> *)&local_res8.ObjectPtr,
               (bool *)&local_res20);
    pFVar4 = (this->MeshDeformerCollections).AllocatorInstance.Data;
    iVar2 = (this->MeshDeformerCollections).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->MeshDeformerCollections).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMeshDeformerCollection>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      if (*(UMeshDeformerCollection **)pFVar4 != (UMeshDeformerCollection *)0x0) {
        GetMeshDeformers_Internal(*(UMeshDeformerCollection **)pFVar4,param_1,param_2);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1475dbae0

UClass * __cdecl UMeshDeformerCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerCollection",
               &Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton,
               StaticRegisterNativesUMeshDeformerCollection,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMeshDeformerCollection>,
               InternalVTableHelperCtorCaller<UMeshDeformerCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton;
}

// StaticRegisterNativesUMeshDeformerCollection @ 1475fed90

void __cdecl UMeshDeformerCollection::StaticRegisterNativesUMeshDeformerCollection(void)

{
  return;
}

