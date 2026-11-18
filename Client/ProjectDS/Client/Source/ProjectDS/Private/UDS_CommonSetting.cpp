// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b462db0

UClass * __cdecl UDS_CommonSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonSetting",
               &Z_Registration_Info_UClass_UDS_CommonSetting.InnerSingleton,
               StaticRegisterNativesUDS_CommonSetting,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonSetting>,
               InternalVTableHelperCtorCaller<UDS_CommonSetting>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonSetting.InnerSingleton;
}

// UDS_CommonSetting @ 14b465df0

UDS_CommonSetting * __thiscall
UDS_CommonSetting::UDS_CommonSetting(UDS_CommonSetting *this,FVTableHelper *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->StreamingSourceRadius = 1.0;
  this->_padding_ = (longlong)&___7UDS_CommonSetting__6B_;
  *(undefined8 *)&(this->StreamingTargetGridList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StreamingTargetGridList).Elements = 0;
  *(undefined8 *)&(this->StreamingTargetGridList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StreamingTargetGridList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StreamingTargetGridList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingTargetGridList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamingTargetGridList).Elements.field_0x34 = 0;
  (this->StreamingTargetGridList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StreamingTargetGridList).HashSize = 0;
  (this->ServerInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfoList).ArrayNum = 0;
  (this->ServerInfoList).ArrayMax = 0;
  this->HoveringRotateSpeed = 5.0;
  this->LookAtEnableAngle = 100.0;
  this->LookAtInAngleSpeed = 8.0;
  this->LookAtOutAngleSpeed = 16.0;
  this->LookAtInSpeed = 3.5;
  this->LookAtOutSpeed = 2.0;
  (this->RootWindowPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->RootWindowPath).AssetPath.PackageName.Number = 0;
  (this->RootWindowPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->RootWindowPath).AssetPath.AssetName.Number = 0;
  (this->RootWindowPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootWindowPath).SubPathString.Data.ArrayNum = 0;
  (this->RootWindowPath).SubPathString.Data.ArrayMax = 0;
  (this->WindowFramePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WindowFramePath).AssetPath.PackageName.Number = 0;
  (this->WindowFramePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WindowFramePath).AssetPath.AssetName.Number = 0;
  (this->WindowFramePath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->WindowFramePath).SubPathString.Data.ArrayNum = 0;
  (this->WindowFramePath).SubPathString.Data.ArrayMax = 0;
  (this->WindowBaseCompositePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WindowBaseCompositePath).AssetPath.PackageName.Number = 0;
  (this->WindowBaseCompositePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WindowBaseCompositePath).AssetPath.AssetName.Number = 0;
  (this->WindowBaseCompositePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WindowBaseCompositePath).SubPathString.Data.ArrayNum = 0;
  (this->WindowBaseCompositePath).SubPathString.Data.ArrayMax = 0;
  (this->WindowBaseCompositePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowBaseCompositePaths).ArrayNum = 0;
  (this->WindowBaseCompositePaths).ArrayMax = 0;
  *(undefined8 *)&this->ClientBPPath = 0;
  *(undefined8 *)&(this->ClientBPPath).field_0x8 = 0;
  *(undefined8 *)&(this->ClientBPPath).field_0x20 = 0;
  (this->LookAtLocationOffset).field0_0x0._s_0.Z = 100.0;
  (this->LookAtLocationOffset).field0_0x0._s_0.X = 0.0;
  (this->LookAtLocationOffset).field0_0x0._s_0.Y = 0.0;
  *(undefined4 *)&(this->ClientBPPath).field_0x28 = 0;
  *(undefined4 *)&(this->ClientBPPath).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientBPPath).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientBPPath).field_0x34 = 0;
  *(undefined8 *)&(this->ClientBPPath).field_0x40 = 0;
  *(undefined4 *)&(this->ClientBPPath).field_0x48 = 0;
  *(undefined8 *)&this->ClientTablePath = 0;
  *(undefined8 *)&(this->ClientTablePath).field_0x8 = 0;
  *(undefined8 *)&(this->ClientTablePath).field_0x20 = 0;
  *(undefined4 *)&(this->ClientTablePath).field_0x28 = 0;
  *(undefined4 *)&(this->ClientTablePath).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientTablePath).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientTablePath).field_0x34 = 0;
  *(undefined8 *)&(this->ClientTablePath).field_0x40 = 0;
  *(undefined4 *)&(this->ClientTablePath).field_0x48 = 0;
  return this;
}

// UDS_CommonSetting @ 14b465fa0

UDS_CommonSetting * __thiscall
UDS_CommonSetting::UDS_CommonSetting(UDS_CommonSetting *this,FObjectInitializer *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->StreamingSourceRadius = 1.0;
  this->_padding_ = (longlong)&___7UDS_CommonSetting__6B_;
  *(undefined8 *)&(this->StreamingTargetGridList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StreamingTargetGridList).Elements = 0;
  *(undefined8 *)&(this->StreamingTargetGridList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StreamingTargetGridList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StreamingTargetGridList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingTargetGridList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamingTargetGridList).Elements.field_0x34 = 0;
  (this->StreamingTargetGridList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StreamingTargetGridList).HashSize = 0;
  (this->ServerInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerInfoList).ArrayNum = 0;
  (this->ServerInfoList).ArrayMax = 0;
  this->HoveringRotateSpeed = 5.0;
  this->LookAtEnableAngle = 100.0;
  this->LookAtInAngleSpeed = 8.0;
  this->LookAtOutAngleSpeed = 16.0;
  this->LookAtInSpeed = 3.5;
  this->LookAtOutSpeed = 2.0;
  (this->RootWindowPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->RootWindowPath).AssetPath.PackageName.Number = 0;
  (this->RootWindowPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->RootWindowPath).AssetPath.AssetName.Number = 0;
  (this->RootWindowPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootWindowPath).SubPathString.Data.ArrayNum = 0;
  (this->RootWindowPath).SubPathString.Data.ArrayMax = 0;
  (this->WindowFramePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WindowFramePath).AssetPath.PackageName.Number = 0;
  (this->WindowFramePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WindowFramePath).AssetPath.AssetName.Number = 0;
  (this->WindowFramePath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->WindowFramePath).SubPathString.Data.ArrayNum = 0;
  (this->WindowFramePath).SubPathString.Data.ArrayMax = 0;
  (this->WindowBaseCompositePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WindowBaseCompositePath).AssetPath.PackageName.Number = 0;
  (this->WindowBaseCompositePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WindowBaseCompositePath).AssetPath.AssetName.Number = 0;
  (this->WindowBaseCompositePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WindowBaseCompositePath).SubPathString.Data.ArrayNum = 0;
  (this->WindowBaseCompositePath).SubPathString.Data.ArrayMax = 0;
  (this->WindowBaseCompositePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowBaseCompositePaths).ArrayNum = 0;
  (this->WindowBaseCompositePaths).ArrayMax = 0;
  *(undefined8 *)&this->ClientBPPath = 0;
  *(undefined8 *)&(this->ClientBPPath).field_0x8 = 0;
  *(undefined8 *)&(this->ClientBPPath).field_0x20 = 0;
  (this->LookAtLocationOffset).field0_0x0._s_0.Z = 100.0;
  (this->LookAtLocationOffset).field0_0x0._s_0.X = 0.0;
  (this->LookAtLocationOffset).field0_0x0._s_0.Y = 0.0;
  *(undefined4 *)&(this->ClientBPPath).field_0x28 = 0;
  *(undefined4 *)&(this->ClientBPPath).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientBPPath).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientBPPath).field_0x34 = 0;
  *(undefined8 *)&(this->ClientBPPath).field_0x40 = 0;
  *(undefined4 *)&(this->ClientBPPath).field_0x48 = 0;
  *(undefined8 *)&this->ClientTablePath = 0;
  *(undefined8 *)&(this->ClientTablePath).field_0x8 = 0;
  *(undefined8 *)&(this->ClientTablePath).field_0x20 = 0;
  *(undefined4 *)&(this->ClientTablePath).field_0x28 = 0;
  *(undefined4 *)&(this->ClientTablePath).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientTablePath).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientTablePath).field_0x34 = 0;
  *(undefined8 *)&(this->ClientTablePath).field_0x40 = 0;
  *(undefined4 *)&(this->ClientTablePath).field_0x48 = 0;
  return this;
}

// ~UDS_CommonSetting @ 14b4667c0

void __thiscall UDS_CommonSetting::~UDS_CommonSetting(UDS_CommonSetting *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7UDS_CommonSetting__6B_;
  *(undefined4 *)&(this->ClientTablePath).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClientTablePath).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ClientResourceType,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ClientResourceType,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ClientTablePath);
  *(undefined4 *)&(this->ClientBPPath).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClientBPPath).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ClientResourceType,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ClientResourceType,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ClientBPPath);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->WindowBaseCompositePaths).AllocatorInstance.Data,
             (this->WindowBaseCompositePaths).ArrayNum);
  pFVar2 = (this->WindowBaseCompositePaths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WindowBaseCompositePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WindowFramePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RootWindowPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_ServerInfo,int>
            ((FDS_ServerInfo *)(this->ServerInfoList).AllocatorInstance.Data,
             (this->ServerInfoList).ArrayNum);
  pFVar2 = (this->ServerInfoList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->StreamingTargetGridList).HashSize = 0;
  FVar3 = (this->StreamingTargetGridList).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StreamingTargetGridList).Elements);
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b4687a0

UClass * __cdecl UDS_CommonSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonSetting",
               &Z_Registration_Info_UClass_UDS_CommonSetting.InnerSingleton,
               StaticRegisterNativesUDS_CommonSetting,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonSetting>,
               InternalVTableHelperCtorCaller<UDS_CommonSetting>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonSetting.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonSetting @ 14b468d20

void __cdecl UDS_CommonSetting::StaticRegisterNativesUDS_CommonSetting(void)

{
  return;
}

// __VTableCtorCaller @ 14b469eb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_CommonSetting::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimaryDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UPrimaryDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimaryDataAsset *)0x0) {
    UPrimaryDataAsset::UPrimaryDataAsset(this,param_1);
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined ***)this = &___7UDS_CommonSetting__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0x40a00000;
    *(undefined4 *)&this[3].field_0x28 = 0x42c80000;
    *(undefined4 *)&this[3].field_0x2c = 0x41000000;
    *(undefined4 *)(this + 4) = 0x41800000;
    *(undefined4 *)&this[4].field_0x4 = 0x40600000;
    *(undefined4 *)&this[4].field_0x8 = 0x40000000;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x28 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x28 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0x4059000000000000;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[7].field_0x18 = 0;
    *(undefined4 *)&this[7].field_0x1c = 0x80;
    *(undefined4 *)&this[7].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[7].field_0x24 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)&this[8].field_0x8 = 0;
    *(undefined8 *)&this[8].field_0x10 = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined4 *)&this[9].field_0x8 = 0;
    *(undefined4 *)&this[9].field_0xc = 0x80;
    *(undefined4 *)&this[9].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[9].field_0x14 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined4 *)&this[9].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// GetClientBPPath @ 14b905230

FSoftObjectPath * __cdecl
UDS_CommonSetting::GetClientBPPath
          (FSoftObjectPath *__return_storage_ptr__,EDS_ClientResourceType *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FSoftObjectPath *this;
  FString *pFVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res18 [2];
  TStringView<wchar_t> local_38;
  FString local_28;
  FString local_18;
  
  GetInst();
  bVar2 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (bVar2) {
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (*(int *)&pUVar3[8].field_0x8 != *(int *)&pUVar3[9].field_0xc) {
      puVar5 = *(undefined1 **)&pUVar3[9].field_0x18;
      if (*(undefined1 **)&pUVar3[9].field_0x18 == (undefined1 *)0x0) {
        puVar5 = &pUVar3[9].field_0x10;
      }
      iVar1 = *(int *)(puVar5 + ((ulonglong)(*(int *)&pUVar3[9].field_0x20 - 1) &
                                (ulonglong)*param_1) * 4);
      if (iVar1 != -1) {
        do {
          if (*(EDS_ClientResourceType *)(*(longlong *)(pUVar3 + 8) + (longlong)iVar1 * 0x30) ==
              *param_1) {
            if (iVar1 != -1) {
              pUVar3 = FWeakObjectPtr::Get(local_res18);
              this = TMapBase<enum_EDS_ClientResourceType,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ClientResourceType,FSoftObjectPath,0>_>
                     ::FindChecked(pUVar3 + 8,*param_1);
              pFVar4 = FSoftObjectPath::ToString(this,&local_18);
              pFVar4 = FWN_SoftObjectUtils::GetObjectPath(&local_28,pFVar4,false);
              (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
              (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
              (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
              (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
              (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
              (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
              local_38.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
              iVar1 = (pFVar4->Data).ArrayNum;
              local_38.Size = iVar1 + -1;
              if (iVar1 == 0) {
                local_38.Size = 0;
              }
              FSoftObjectPath::SetPath(__return_storage_ptr__,&local_38);
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
              if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
              return __return_storage_ptr__;
            }
            break;
          }
          iVar1 = *(int *)(*(longlong *)(pUVar3 + 8) + 0x28 + (longlong)iVar1 * 0x30);
        } while (iVar1 != -1);
      }
    }
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
    *(undefined8 *)&(__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  }
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  return __return_storage_ptr__;
}

// GetClientTablePath @ 14b9053c0

FSoftObjectPath * __cdecl
UDS_CommonSetting::GetClientTablePath
          (FSoftObjectPath *__return_storage_ptr__,EDS_ClientResourceType *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FSoftObjectPath *this;
  FString *pFVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res18 [2];
  TStringView<wchar_t> local_38;
  FString local_28;
  FString local_18;
  
  GetInst();
  bVar2 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (bVar2) {
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (*(int *)&pUVar3[10].field_0x8 != *(int *)&pUVar3[0xb].field_0xc) {
      puVar5 = *(undefined1 **)&pUVar3[0xb].field_0x18;
      if (*(undefined1 **)&pUVar3[0xb].field_0x18 == (undefined1 *)0x0) {
        puVar5 = &pUVar3[0xb].field_0x10;
      }
      iVar1 = *(int *)(puVar5 + ((ulonglong)(*(int *)&pUVar3[0xb].field_0x20 - 1) &
                                (ulonglong)*param_1) * 4);
      if (iVar1 != -1) {
        do {
          if (*(EDS_ClientResourceType *)(*(longlong *)(pUVar3 + 10) + (longlong)iVar1 * 0x30) ==
              *param_1) {
            if (iVar1 != -1) {
              pUVar3 = FWeakObjectPtr::Get(local_res18);
              this = TMapBase<enum_EDS_ClientResourceType,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ClientResourceType,FSoftObjectPath,0>_>
                     ::FindChecked(pUVar3 + 10,*param_1);
              pFVar4 = FSoftObjectPath::ToString(this,&local_18);
              pFVar4 = FWN_SoftObjectUtils::GetObjectPath(&local_28,pFVar4,false);
              (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
              (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
              (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
              (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
              (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
              (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
              local_38.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
              iVar1 = (pFVar4->Data).ArrayNum;
              local_38.Size = iVar1 + -1;
              if (iVar1 == 0) {
                local_38.Size = 0;
              }
              FSoftObjectPath::SetPath(__return_storage_ptr__,&local_38);
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
              if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
              return __return_storage_ptr__;
            }
            break;
          }
          iVar1 = *(int *)(*(longlong *)(pUVar3 + 10) + 0x28 + (longlong)iVar1 * 0x30);
        } while (iVar1 != -1);
      }
    }
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
    *(undefined8 *)&(__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  }
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  return __return_storage_ptr__;
}

// GetInst @ 14b9059f0

TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> __cdecl UDS_CommonSetting::GetInst(void)

{
  UDS_CommonSetting *pUVar1;
  FWeakObjectPtr in_RCX;
  UDS_GameInstance *local_res10 [3];
  
  local_res10[0] = UDS_GameInstance::GetInst();
  if (local_res10[0] == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>)in_RCX;
  }
  pUVar1 = (local_res10[0]->CommonSetting).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_CommonSetting *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_CommonSetting *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RCX = 0;
  local_res10[0] = (UDS_GameInstance *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_CommonSetting *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>)in_RCX;
}

