// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b480900

UClass * __cdecl UDS_DepthOfFieldDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DepthOfFieldDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DepthOfFieldDataAsset",
               &Z_Registration_Info_UClass_UDS_DepthOfFieldDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_DepthOfFieldDataAsset,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DepthOfFieldDataAsset>,
               InternalVTableHelperCtorCaller<UDS_DepthOfFieldDataAsset>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DepthOfFieldDataAsset.InnerSingleton;
}

// UDS_DepthOfFieldDataAsset @ 14b483920

UDS_DepthOfFieldDataAsset * __thiscall
UDS_DepthOfFieldDataAsset::UDS_DepthOfFieldDataAsset
          (UDS_DepthOfFieldDataAsset *this,FVTableHelper *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DepthOfFieldDataAsset__6B_;
  *(undefined8 *)&this->DataMap = 0;
  *(undefined8 *)&(this->DataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  return this;
}

// UDS_DepthOfFieldDataAsset @ 14b483970

UDS_DepthOfFieldDataAsset * __thiscall
UDS_DepthOfFieldDataAsset::UDS_DepthOfFieldDataAsset
          (UDS_DepthOfFieldDataAsset *this,FObjectInitializer *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DepthOfFieldDataAsset__6B_;
  *(undefined8 *)&this->DataMap = 0;
  *(undefined8 *)&(this->DataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  return this;
}

// ~UDS_DepthOfFieldDataAsset @ 14b4840d0

void __thiscall
UDS_DepthOfFieldDataAsset::~UDS_DepthOfFieldDataAsset(UDS_DepthOfFieldDataAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_DepthOfFieldDataAsset__6B_;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_DepthOfFieldType,FDS_DepthOfFieldData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_DepthOfFieldType,FDS_DepthOfFieldData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DataMap);
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b485320

UClass * __cdecl UDS_DepthOfFieldDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DepthOfFieldDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DepthOfFieldDataAsset",
               &Z_Registration_Info_UClass_UDS_DepthOfFieldDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_DepthOfFieldDataAsset,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DepthOfFieldDataAsset>,
               InternalVTableHelperCtorCaller<UDS_DepthOfFieldDataAsset>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DepthOfFieldDataAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_DepthOfFieldDataAsset @ 14b485640

void __cdecl UDS_DepthOfFieldDataAsset::StaticRegisterNativesUDS_DepthOfFieldDataAsset(void)

{
  return;
}

// GetData @ 14b9058e0

FDS_DepthOfFieldData * __thiscall
UDS_DepthOfFieldDataAsset::GetData
          (UDS_DepthOfFieldDataAsset *this,FDS_DepthOfFieldData *__return_storage_ptr__,
          EDS_DepthOfFieldType param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FDS_DepthOfFieldData *pFVar10;
  undefined1 *puVar11;
  
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->DataMap).field_0x38;
    }
    iVar9 = *(int *)(puVar11 +
                    ((ulonglong)(*(int *)&(this->DataMap).field_0x48 - 1) & (ulonglong)param_1) * 4)
    ;
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->DataMap;
      do {
        if (*(EDS_DepthOfFieldType *)(lVar2 + (longlong)iVar9 * 0x30) == param_1) {
          pFVar10 = TMapBase<enum_EDS_DepthOfFieldType,FDS_DepthOfFieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_DepthOfFieldType,FDS_DepthOfFieldData,0>_>
                    ::FindChecked(&this->DataMap,param_1);
          fVar3 = pFVar10->MinFstop;
          iVar9 = pFVar10->BladeCount;
          fVar4 = pFVar10->SensorWidth;
          fVar5 = pFVar10->SqueezeFactor;
          fVar6 = pFVar10->FocalDistance;
          fVar7 = pFVar10->FocalDistanceRatio;
          fVar8 = pFVar10->BlurAmount;
          fVar1 = pFVar10->BlurRadius;
          __return_storage_ptr__->Fstop = pFVar10->Fstop;
          __return_storage_ptr__->MinFstop = fVar3;
          __return_storage_ptr__->BladeCount = iVar9;
          __return_storage_ptr__->SensorWidth = fVar4;
          __return_storage_ptr__->SqueezeFactor = fVar5;
          __return_storage_ptr__->FocalDistance = fVar6;
          __return_storage_ptr__->FocalDistanceRatio = fVar7;
          __return_storage_ptr__->BlurAmount = fVar8;
          __return_storage_ptr__->BlurRadius = fVar1;
          return __return_storage_ptr__;
        }
        iVar9 = *(int *)(lVar2 + 0x28 + (longlong)iVar9 * 0x30);
      } while (iVar9 != -1);
    }
  }
  __return_storage_ptr__->FocalDistanceRatio = 1.0;
  __return_storage_ptr__->BlurAmount = 0.0;
  __return_storage_ptr__->Fstop = 0.0;
  __return_storage_ptr__->MinFstop = 0.0;
  __return_storage_ptr__->BladeCount = 0;
  __return_storage_ptr__->SensorWidth = 0.0;
  __return_storage_ptr__->SqueezeFactor = 0.0;
  __return_storage_ptr__->FocalDistance = 0.0;
  __return_storage_ptr__->BlurRadius = 0.0;
  return __return_storage_ptr__;
}

// GetInst @ 14b905aa0

TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr> __cdecl
UDS_DepthOfFieldDataAsset::GetInst(void)

{
  UDS_DepthOfFieldDataAsset *pUVar1;
  FWeakObjectPtr in_RCX;
  UDS_GameInstance *local_res10 [3];
  
  local_res10[0] = UDS_GameInstance::GetInst();
  if (local_res10[0] == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr>)in_RCX;
  }
  pUVar1 = (local_res10[0]->DepthOfFieldDataAsset).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_DepthOfFieldDataAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_DepthOfFieldDataAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RCX = 0;
  local_res10[0] = (UDS_GameInstance *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_DepthOfFieldDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr>)in_RCX;
}

