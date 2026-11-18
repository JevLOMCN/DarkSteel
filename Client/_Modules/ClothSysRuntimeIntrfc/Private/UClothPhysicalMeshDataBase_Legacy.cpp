// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 10

// StaticClass @ 144644cd0

UClass * __cdecl UClothPhysicalMeshDataBase_Legacy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothPhysicalMeshDataBase_Legacy",
               &Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton,
               StaticRegisterNativesUClothPhysicalMeshDataBase_Legacy,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothPhysicalMeshDataBase_Legacy>,
               InternalVTableHelperCtorCaller<UClothPhysicalMeshDataBase_Legacy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton;
}

// UClothPhysicalMeshDataBase_Legacy @ 144648700

UClothPhysicalMeshDataBase_Legacy * __thiscall
UClothPhysicalMeshDataBase_Legacy::UClothPhysicalMeshDataBase_Legacy
          (UClothPhysicalMeshDataBase_Legacy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClothPhysicalMeshDataBase_Legacy__6B_;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = 0;
  (this->Normals).ArrayMax = 0;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  (this->InverseMasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseMasses).ArrayNum = 0;
  (this->InverseMasses).ArrayMax = 0;
  (this->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).ArrayNum = 0;
  (this->BoneData).ArrayMax = 0;
  (this->SelfCollisionIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelfCollisionIndices).ArrayNum = 0;
  (this->SelfCollisionIndices).ArrayMax = 0;
  *(undefined8 *)&this->IdToArray = 0;
  *(undefined8 *)&(this->IdToArray).field_0x8 = 0;
  *(undefined8 *)&(this->IdToArray).field_0x20 = 0;
  *(undefined4 *)&(this->IdToArray).field_0x28 = 0;
  *(undefined4 *)&(this->IdToArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->IdToArray).field_0x34 = 0;
  *(undefined4 *)&(this->IdToArray).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IdToArray).field_0x40 = 0;
  *(undefined4 *)&(this->IdToArray).field_0x48 = 0;
  return this;
}

// UClothPhysicalMeshDataBase_Legacy @ 1446487b0

UClothPhysicalMeshDataBase_Legacy * __thiscall
UClothPhysicalMeshDataBase_Legacy::UClothPhysicalMeshDataBase_Legacy
          (UClothPhysicalMeshDataBase_Legacy *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UClothPhysicalMeshDataBase_Legacy__6B_;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = 0;
  (this->Normals).ArrayMax = 0;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  (this->InverseMasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseMasses).ArrayNum = 0;
  (this->InverseMasses).ArrayMax = 0;
  (this->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).ArrayNum = 0;
  (this->BoneData).ArrayMax = 0;
  this->NumFixedVerts = 0;
  this->MaxBoneWeights = 0;
  (this->SelfCollisionIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelfCollisionIndices).ArrayNum = 0;
  (this->SelfCollisionIndices).ArrayMax = 0;
  *(undefined8 *)&this->IdToArray = 0;
  *(undefined8 *)&(this->IdToArray).field_0x8 = 0;
  *(undefined8 *)&(this->IdToArray).field_0x20 = 0;
  *(undefined4 *)&(this->IdToArray).field_0x28 = 0;
  *(undefined4 *)&(this->IdToArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->IdToArray).field_0x34 = 0;
  *(undefined4 *)&(this->IdToArray).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IdToArray).field_0x40 = 0;
  *(undefined4 *)&(this->IdToArray).field_0x48 = 0;
  return this;
}

// ~UClothPhysicalMeshDataBase_Legacy @ 144648cd0

void __thiscall
UClothPhysicalMeshDataBase_Legacy::~UClothPhysicalMeshDataBase_Legacy
          (UClothPhysicalMeshDataBase_Legacy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UClothPhysicalMeshDataBase_Legacy__6B_;
  *(undefined4 *)&(this->IdToArray).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IdToArray).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IdToArray);
  pFVar2 = (this->SelfCollisionIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BoneData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InverseMasses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Indices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Normals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetFloatArray @ 14464b780

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UClothPhysicalMeshDataBase_Legacy::GetFloatArray
          (UClothPhysicalMeshDataBase_Legacy *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> **ppTVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->IdToArray).field_0x8 != *(int *)&(this->IdToArray).field_0x34) {
    puVar7 = *(undefined1 **)&(this->IdToArray).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->IdToArray).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->IdToArray).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->IdToArray;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar4 * 0x18) == param_1) goto LAB_14464b7fb;
        iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IdToArray.Contains(Id)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Private\\ClothPhysicalMeshDataBase_Legacy.cpp"
                     ,0x11,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14464b7fb:
  ppTVar6 = TMapBase<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
            ::FindChecked((TMapBase<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
                           *)&this->IdToArray,param_1);
  return *ppTVar6;
}

// GetFloatArrayIds @ 14464b820

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
UClothPhysicalMeshDataBase_Legacy::GetFloatArrayIds
          (UClothPhysicalMeshDataBase_Legacy *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
              *)&this->IdToArray,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFloatArrays @ 14464b850

TArray<TArray<float,TSizedDefaultAllocator<32>_>_*,TSizedDefaultAllocator<32>_> * __thiscall
UClothPhysicalMeshDataBase_Legacy::GetFloatArrays
          (UClothPhysicalMeshDataBase_Legacy *this,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
              *)&this->IdToArray,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14464b990

UClass * __cdecl UClothPhysicalMeshDataBase_Legacy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothPhysicalMeshDataBase_Legacy",
               &Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton,
               StaticRegisterNativesUClothPhysicalMeshDataBase_Legacy,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothPhysicalMeshDataBase_Legacy>,
               InternalVTableHelperCtorCaller<UClothPhysicalMeshDataBase_Legacy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.InnerSingleton;
}

// RegisterFloatArray @ 14464c010

void __thiscall
UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
          (UClothPhysicalMeshDataBase_Legacy *this,uint param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<float,TSizedDefaultAllocator<32>_> **ppTVar4;
  undefined1 *puVar5;
  TMap<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
  *this_00;
  TPairInitializer<unsigned_int_const_&,TArray<float,TSizedDefaultAllocator<32>_>_*_const_&>
  local_res8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_res18 [2];
  TArray<float,TSizedDefaultAllocator<32>_> ***local_18;
  TArray<float,TSizedDefaultAllocator<32>_> **local_10;
  
  local_res8.Value._0_4_ = param_1;
  local_res18[0] = param_2;
  if ((param_1 == 0xffffffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Id != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Private\\ClothPhysicalMeshDataBase_Legacy.cpp"
                         ,0x27,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((local_res18[0] == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Array != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Private\\ClothPhysicalMeshDataBase_Legacy.cpp"
                         ,0x28,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = &this->IdToArray;
  if (*(int *)&(this->IdToArray).field_0x8 != *(int *)&(this->IdToArray).field_0x34) {
    puVar5 = *(undefined1 **)&(this->IdToArray).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->IdToArray).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->IdToArray).field_0x48 - 1U & (uint)local_res8.Value)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) ==
            (uint)local_res8.Value) {
          ppTVar4 = TMapBase<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
                    ::FindChecked((TMapBase<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>_>
                                   *)this_00,(uint)local_res8.Value);
          if ((*ppTVar4 != local_res18[0]) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IdToArray.Contains(Id) || IdToArray[Id] == Array",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Private\\ClothPhysicalMeshDataBase_Legacy.cpp"
                                 ,0x29,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TArray<float,TSizedDefaultAllocator<32>_>_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<float,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_18);
  return;
}

// StaticRegisterNativesUClothPhysicalMeshDataBase_Legacy @ 14464c7b0

void __cdecl
UClothPhysicalMeshDataBase_Legacy::StaticRegisterNativesUClothPhysicalMeshDataBase_Legacy(void)

{
  return;
}

