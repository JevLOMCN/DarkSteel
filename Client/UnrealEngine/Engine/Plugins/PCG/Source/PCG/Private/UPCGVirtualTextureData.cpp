// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 1498595d0

UClass * __cdecl UPCGVirtualTextureData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureData",
               &Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton,
               StaticRegisterNativesUPCGVirtualTextureData,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGVirtualTextureData>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton;
}

// UPCGVirtualTextureData @ 14988f850

UPCGVirtualTextureData * __thiscall
UPCGVirtualTextureData::UPCGVirtualTextureData(UPCGVirtualTextureData *this,FVTableHelper *param_1)

{
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVirtualTextureData__6B_;
  (this->RuntimeVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  return this;
}

// UPCGVirtualTextureData @ 14988f890

UPCGVirtualTextureData * __thiscall
UPCGVirtualTextureData::UPCGVirtualTextureData
          (UPCGVirtualTextureData *this,FObjectInitializer *param_1)

{
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVirtualTextureData__6B_;
  (this->RuntimeVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  return this;
}

// ~UPCGVirtualTextureData @ 149891c80

void __thiscall UPCGVirtualTextureData::~UPCGVirtualTextureData(UPCGVirtualTextureData *this)

{
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// CopyInternal @ 1498a5740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGVirtualTextureData::CopyInternal(UPCGVirtualTextureData *this,FPCGContext *param_1)

{
  URuntimeVirtualTexture *pUVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UPCGSpatialData *pUVar5;
  UObject *pUVar6;
  UPCGVirtualTextureData *pUVar7;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGVirtualTextureData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UPCGSpatialData *)(*pcVar2)();
        return pUVar5;
      }
    }
  }
  else {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UPCGSpatialData *)(*pcVar2)();
          return pUVar5;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar6 = GetTransientPackageAsObject();
      pUVar7 = NewObject<UPCGVirtualTextureData>(pUVar6);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar7 == (UPCGVirtualTextureData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UPCGSpatialData *)(*pcVar2)();
          return pUVar5;
        }
      }
      local_res18[0] = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UPCGVirtualTextureData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a579d;
    }
  }
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UPCGVirtualTextureData>(pUVar6);
LAB_1498a579d:
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  *(char *)&pUVar7->_padding_ = (char)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->RuntimeVirtualTexture).field0_0x0.DebugPtr,
     pUVar1 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar7->RuntimeVirtualTexture).field0_0x0 = (this->RuntimeVirtualTexture).field0_0x0;
  return (UPCGSpatialData *)pUVar7;
}

// CreatePointArrayData @ 1498ae380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGVirtualTextureData::CreatePointArrayData
          (UPCGVirtualTextureData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGPointArrayData *pUVar1;
  UPCGVirtualTextureData *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  undefined8 local_10;
  
  pUVar1 = FPCGContext::NewObject_AnyThread<UPCGPointArrayData>(param_1);
  local_48 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (this == (UPCGVirtualTextureData *)0x0)) {
    local_30 = 0;
    local_40 = 0;
    local_35 = 0;
    if (this != (UPCGVirtualTextureData *)0x0) {
      local_30 = (**(code **)(this->_padding_ + 800))(this);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    local_40 = 0;
    local_35 = 0;
    local_30 = (**(code **)(this->_padding_ + 800))(this);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_10 = 0;
  local_38 = 0x101;
  local_36 = 1;
  (**(code **)(pUVar1->_padding_ + 0x468))(pUVar1,&local_48);
  if ((this != (UPCGVirtualTextureData *)0x0) && ((char)local_38 != '\0')) {
    (**(code **)(pUVar1->_padding_ + 0x470))(pUVar1,&local_48);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_18,(int)local_10);
  if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return pUVar1;
}

// CreatePointData @ 1498af540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGVirtualTextureData::CreatePointData(UPCGVirtualTextureData *this,FPCGContext *param_1)

{
  UPCGPointData *pUVar1;
  UPCGVirtualTextureData *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  undefined8 local_10;
  
  pUVar1 = FPCGContext::NewObject_AnyThread<UPCGPointData>(param_1);
  local_48 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (this == (UPCGVirtualTextureData *)0x0)) {
    local_30 = 0;
    local_40 = 0;
    local_35 = 0;
    if (this != (UPCGVirtualTextureData *)0x0) {
      local_30 = (**(code **)(this->_padding_ + 800))(this);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    local_40 = 0;
    local_35 = 0;
    local_30 = (**(code **)(this->_padding_ + 800))(this);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_10 = 0;
  local_38 = 0x101;
  local_36 = 1;
  (**(code **)(pUVar1->_padding_ + 0x468))(pUVar1,&local_48);
  if ((this != (UPCGVirtualTextureData *)0x0) && ((char)local_38 != '\0')) {
    (**(code **)(pUVar1->_padding_ + 0x470))(pUVar1,&local_48);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_18,(int)local_10);
  if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return pUVar1;
}

// GetBounds @ 1498b5ed0

TBox<double> * __thiscall
UPCGVirtualTextureData::GetBounds(UPCGVirtualTextureData *this,TBox<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetDataType @ 1498b84c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGVirtualTextureData::GetDataType(UPCGVirtualTextureData *this)

{
  return VirtualTexture;
}

// GetDataTypeId @ 1498b92d0

FPCGDataTypeBaseId * __thiscall UPCGVirtualTextureData::GetDataTypeId(UPCGVirtualTextureData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVirtualTexture::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVirtualTexture::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVirtualTexture::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVirtualTexture::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVirtualTexture::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture,(UObject *)pUVar3,
                         L"PCGDataTypeInfoVirtualTexture");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b9353;
  }
  else {
LAB_1498b9353:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton
    ;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b93aa;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1498b93ac;
  }
LAB_1498b93aa:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b93ac:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVirtualTexture::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVirtualTexture::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoVirtualTexture::AsId(void)'
          ::__l2::Id;
}

// GetPrivateStaticClass @ 1498bd3d0

UClass * __cdecl UPCGVirtualTextureData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureData",
               &Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton,
               StaticRegisterNativesUPCGVirtualTextureData,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGVirtualTextureData>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureData.InnerSingleton;
}

// Initialize @ 1498cdd40

void __thiscall
UPCGVirtualTextureData::Initialize
          (UPCGVirtualTextureData *this,URuntimeVirtualTextureComponent *param_1)

{
  URuntimeVirtualTexture *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (URuntimeVirtualTextureComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InVirtualTextureComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGVirtualTextureData.cpp"
                       ,0x12,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (param_1->VirtualTexture).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->RuntimeVirtualTexture).field0_0x0.DebugPtr = pUVar1;
  return;
}

// SamplePoint @ 1498dc100

bool __thiscall
UPCGVirtualTextureData::SamplePoint
          (UPCGVirtualTextureData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  return false;
}

// StaticRegisterNativesUPCGVirtualTextureData @ 1498f6b70

void __cdecl UPCGVirtualTextureData::StaticRegisterNativesUPCGVirtualTextureData(void)

{
  return;
}

