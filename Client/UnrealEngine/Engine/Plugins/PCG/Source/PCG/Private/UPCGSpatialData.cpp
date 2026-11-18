// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 75

// CopyInternal @ 1497f6b10

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
UPCGSpatialData::CopyInternal(UPCGSpatialData *this,FPCGContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialData.h"
             ,0x11e,L"Pure virtual not implemented (%s)");
  return (UPCGSpatialData *)0x0;
}

// CopyInternal @ 1497f6b40

UPCGSpatialData * __thiscall UPCGSpatialData::CopyInternal(UPCGSpatialData *this)

{
  return (UPCGSpatialData *)0x0;
}

// FindFirstConcreteShapeFromNetwork @ 149802ae0

UPCGSpatialData * __thiscall
UPCGSpatialData::FindFirstConcreteShapeFromNetwork(UPCGSpatialData *this)

{
  ulonglong uVar1;
  UPCGSpatialData *pUVar2;
  
  uVar1 = (**(code **)(this->_padding_ + 0x2b0))();
  pUVar2 = (UPCGSpatialData *)0x0;
  if ((uVar1 & 0x35fe) != 0) {
    pUVar2 = this;
  }
  return pUVar2;
}

// GetNormal @ 149816480

TVector<double> * __thiscall
UPCGSpatialData::GetNormal(UPCGSpatialData *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetStrictBounds @ 14981ba50

TBox<double> * __thiscall
UPCGSpatialData::GetStrictBounds(UPCGSpatialData *this,TBox<double> *__return_storage_ptr__)

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

// HasNonTrivialTransform @ 14981db20

bool __thiscall UPCGSpatialData::HasNonTrivialTransform(UPCGSpatialData *this)

{
  return false;
}

// HasSpatialDataParent @ 14981db70

bool __thiscall UPCGSpatialData::HasSpatialDataParent(UPCGSpatialData *this)

{
  return false;
}

// IntersectWith @ 14981f840

UPCGIntersectionData * __thiscall
UPCGSpatialData::IntersectWith(UPCGSpatialData *this,UPCGSpatialData *param_1)

{
  UPCGIntersectionData *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014981f848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGIntersectionData *)(**(code **)(this->_padding_ + 1000))(this,0,param_1);
  return pUVar1;
}

// IsBounded @ 14981fb60

bool __thiscall UPCGSpatialData::IsBounded(UPCGSpatialData *this)

{
  return true;
}

// PrepareForSpatialQuery @ 1498259c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSpatialData::PrepareForSpatialQuery
          (UPCGSpatialData *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGContext *param_1,TBox<double> *param_2)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// ProjectOn @ 149825d60

UPCGSpatialData * __thiscall
UPCGSpatialData::ProjectOn
          (UPCGSpatialData *this,UPCGSpatialData *param_1,FPCGProjectionParams *param_2)

{
  UPCGSpatialData *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149825d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGSpatialData *)(**(code **)(this->_padding_ + 0x3f8))(this,0,param_1,param_2);
  return pUVar1;
}

// RequiresCollapseToSample @ 14982a3f0

bool __thiscall UPCGSpatialData::RequiresCollapseToSample(UPCGSpatialData *this)

{
  return false;
}

// StaticClass @ 149847120

UClass * __cdecl UPCGSpatialData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpatialData",
               &Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton,
               StaticRegisterNativesUPCGSpatialData,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpatialData>,
               InternalVTableHelperCtorCaller<UPCGSpatialData>,aFStackX_8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton;
}

// Subtract @ 149847260

UPCGDifferenceData * __thiscall
UPCGSpatialData::Subtract(UPCGSpatialData *this,UPCGSpatialData *param_1)

{
  UPCGDifferenceData *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149847268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGDifferenceData *)(**(code **)(this->_padding_ + 0x418))(this,0,param_1);
  return pUVar1;
}

// SupportsSpatialDataInheritance @ 1498472b0

bool __thiscall UPCGSpatialData::SupportsSpatialDataInheritance(UPCGSpatialData *this)

{
  return false;
}

// ToPointData @ 1498472c0

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
UPCGSpatialData::ToPointData(UPCGSpatialData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialData.h"
             ,0xad,L"Pure virtual not implemented (%s)");
  return (UPCGPointData *)0x0;
}

// UnionWith @ 149848ea0

UPCGUnionData * __thiscall
UPCGSpatialData::UnionWith(UPCGSpatialData *this,UPCGSpatialData *param_1)

{
  UPCGUnionData *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149848ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGUnionData *)(**(code **)(this->_padding_ + 0x408))(this,0,param_1);
  return pUVar1;
}

// UPCGSpatialData @ 14988ed60

UPCGSpatialData * __thiscall
UPCGSpatialData::UPCGSpatialData(UPCGSpatialData *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  (this->TargetActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetActor).WeakPtr,(FObjectPtr)local_res8);
  this->bKeepZeroDensityPoints = false;
  this->bHasCachedLastSelector = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CachedLastSelector);
  return this;
}

// UPCGSpatialData @ 14988edb0

UPCGSpatialData * __thiscall
UPCGSpatialData::UPCGSpatialData(UPCGSpatialData *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPCGMetadata *this_00;
  FName local_res8;
  FPCGMetadataDomainID local_18;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  (this->TargetActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FWeakObjectPtr::operator=(&(this->TargetActor).WeakPtr,(FObjectPtr)&local_res8);
  this->bKeepZeroDensityPoints = false;
  this->bHasCachedLastSelector = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CachedLastSelector);
  pFVar2 = ::FName::FName(&local_res8,L"Metadata");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UPCGMetadata_NoRegister();
  this_00 = (UPCGMetadata *)
            FObjectInitializer::CreateDefaultSubobject
                      (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPCGMetadata *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  this->_padding_ = (longlong)this_00;
  local_18 = PCGMetadataDomainID::Data;
  UPCGMetadata::SetupDomain(this_00,&local_18,true);
  return this;
}

// ~UPCGSpatialData @ 149891960

void __thiscall UPCGSpatialData::~UPCGSpatialData(UPCGSpatialData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->CachedLastSelector).field_0x28,
             *(int *)&(this->CachedLastSelector).field_0x30);
  pvVar1 = *(void **)&(this->CachedLastSelector).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// AddToCrc @ 14989e1d0

void __thiscall UPCGSpatialData::AddToCrc(UPCGSpatialData *this,FArchiveCrc32 *param_1,bool param_2)

{
  undefined1 local_res8 [8];
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  return;
}

// CreateEmptyMetadata @ 1498ad5d0

/* WARNING: Enum "Type": Some values do not have unique names */

UPCGMetadata * __thiscall UPCGSpatialData::CreateEmptyMetadata(UPCGSpatialData *this)

{
  UPCGMetadata *pUVar1;
  
  if ((this->_padding_ != 0) && (2 < (byte)LogPCG._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  pUVar1 = NewObject<UPCGMetadata>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGMetadata *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  return pUVar1;
}

// DuplicateData @ 1498b2190

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
UPCGSpatialData::DuplicateData(UPCGSpatialData *this,FPCGContext *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UPCGSpatialData *pUVar3;
  UPCGSpatialData *local_48;
  undefined8 local_40;
  char local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  undefined8 local_10;
  
  pUVar3 = (UPCGSpatialData *)(**(code **)(this->_padding_ + 0x458))();
  if (pUVar3 == (UPCGSpatialData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSpatialData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
                       ,0x1e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGSpatialData *)(*pcVar1)();
      return pUVar3;
    }
  }
  if (pUVar3->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSpatialData->Metadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
                       ,0x1e6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGSpatialData *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_48 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_40 = 0;
  local_37 = 0x101;
  local_30 = (**(code **)(this->_padding_ + 800))(this);
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_10 = 0;
  local_35 = 1;
  local_38 = param_2;
  (**(code **)(pUVar3->_padding_ + 0x468))(pUVar3,&local_48);
  if ((local_48 != (UPCGSpatialData *)0x0) && (local_38 != '\0')) {
    (**(code **)(pUVar3->_padding_ + 0x470))(pUVar3,&local_48);
  }
  if (this->bHasCachedLastSelector != false) {
    (**(code **)(pUVar3->_padding_ + 0x308))(pUVar3,&this->CachedLastSelector);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_18,(int)local_10);
  if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return pUVar3;
}

// GetBounds @ 1498b5db0

TBox<double> * __thiscall
UPCGSpatialData::GetBounds(UPCGSpatialData *this,TBox<double> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialData.h"
             ,0x91,L"Pure virtual not implemented (%s)");
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

// GetCachedLastSelector @ 1498b63c0

FPCGAttributePropertyInputSelector * __thiscall
UPCGSpatialData::GetCachedLastSelector
          (UPCGSpatialData *this,FPCGAttributePropertyInputSelector *__return_storage_ptr__)

{
  int iVar1;
  FName FVar2;
  FPCGAttributePropertySelector local_48;
  
  if (this->bHasCachedLastSelector != false) {
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)__return_storage_ptr__,
               (FPCGAttributePropertySelector *)&this->CachedLastSelector);
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
    return __return_storage_ptr__;
  }
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_48);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    iVar1 = UPCGMetadata::GetAttributeCount((UPCGMetadata *)this->_padding_);
    if (0 < iVar1) {
      FVar2 = UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
      FPCGAttributePropertySelector::SetAttributeName(&local_48,*(FName *)FVar2,true);
    }
  }
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,&local_48);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDataType @ 1498b8450

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGSpatialData::GetDataType(UPCGSpatialData *this)

{
  return Spatial;
}

// GetDataTypeId @ 1498b8e30

FPCGDataTypeBaseId * __thiscall UPCGSpatialData::GetDataTypeId(UPCGSpatialData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial,(UObject *)pUVar3,
                         L"PCGDataTypeInfoSpatial");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14989f613;
  }
  else {
LAB_14989f613:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14989f66a;
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
    if (bVar2) goto LAB_14989f66c;
  }
LAB_14989f66a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_14989f66c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
          ::__l2::Id;
}

// GetDensityAtPosition @ 1498b9530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UPCGSpatialData::GetDensityAtPosition(UPCGSpatialData *this,TVector<double> *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  undefined1 local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  uVar10 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar11 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1d8 = 0;
  local_128 = 1.0;
  local_c8 = 0x3f000000;
  local_c0 = 0xffffffffffffffff;
  local_198 = 1;
  uVar6 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar7 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_160 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_158 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_150 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar8 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar9 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar4 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar5 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar2 = (uint)__xmm_80000000000000008000000000000000;
  uVar3 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_118 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                             0x20) ^ uVar3,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar2);
  local_188._8_4_ = uVar10;
  local_188._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_188._12_4_ = uVar11;
  local_120 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                             0x20) ^ uVar3,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar2);
  local_108 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_100 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_e8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_e0 = _UNK_150689688;
  local_d8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_d0 = _UNK_150689688;
  local_110 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar3,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar2);
  local_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z *
              ___xmm_40000000000000004000000000000000;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_98 = *(undefined4 *)&param_1->field0_0x0;
  uStack_94 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_90 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_8c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X *
              ___xmm_40000000000000004000000000000000;
  dStack_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * _UNK_150689698;
  local_88 = (param_1->field0_0x0)._s_0.Z;
  local_1b8 = 0;
  local_178._8_4_ = uVar6;
  local_178._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_178._12_4_ = uVar7;
  local_148._8_4_ = uVar8;
  local_148._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148._12_4_ = uVar9;
  local_138._8_4_ = uVar4;
  local_138._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_138._12_4_ = uVar5;
  local_f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_b8._8_4_ = uVar10;
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8._12_4_ = uVar11;
  local_a8._8_4_ = uVar6;
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8._12_4_ = uVar7;
  uStack_80 = 0;
  local_78._8_4_ = uVar8;
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78._12_4_ = uVar9;
  local_68._8_4_ = uVar4;
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68._12_4_ = uVar5;
  cVar1 = (**(code **)(this->_padding_ + 0x3c0))(local_1b0,local_b8,&local_1c8,local_188);
  if (cVar1 == '\0') {
    local_128 = 0.0;
  }
  return local_128;
}

// GetDimension @ 1498b9b00

int __thiscall UPCGSpatialData::GetDimension(UPCGSpatialData *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialData.h"
             ,0x8d,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetPrivateStaticClass @ 1498bcd10

UClass * __cdecl UPCGSpatialData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpatialData",
               &Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton,
               StaticRegisterNativesUPCGSpatialData,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpatialData>,
               InternalVTableHelperCtorCaller<UPCGSpatialData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpatialData.InnerSingleton;
}

// GetResourceSizeEx @ 1498c5580

void __thiscall UPCGSpatialData::GetResourceSizeEx(UPCGSpatialData *this,FResourceSizeEx *param_1)

{
  longlong *plVar1;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 400))(plVar1,param_1);
  }
  return;
}

// HasCachedLastSelector @ 1498ca540

bool __thiscall UPCGSpatialData::HasCachedLastSelector(UPCGSpatialData *this)

{
  int iVar1;
  
  if (this->bHasCachedLastSelector != false) {
    return true;
  }
  if (((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) &&
     (iVar1 = UPCGMetadata::GetAttributeCount((UPCGMetadata *)this->_padding_), 0 < iVar1)) {
    return true;
  }
  return false;
}

// InitializeFromData @ 1498cf390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGSpatialData::InitializeFromData
          (UPCGSpatialData *this,UPCGSpatialData *param_1,UPCGMetadata *param_2,bool param_3,
          bool param_4)

{
  UPCGSpatialData *local_48;
  undefined8 local_40;
  char local_38;
  bool local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  undefined8 local_10;
  
  local_48 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    local_40 = 0;
    local_35 = 0;
    local_30 = (**(code **)(param_1->_padding_ + 800))(param_1);
  }
  else {
    local_30 = 0;
    local_40 = 0;
    local_35 = 0;
    if (param_1 != (UPCGSpatialData *)0x0) {
      local_30 = (**(code **)(param_1->_padding_ + 800))(param_1);
    }
  }
  local_28 = (void *)0x0;
  local_18 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_20 = 0;
  local_10 = 0;
  local_37 = param_4;
  local_36 = 1;
  local_38 = param_3;
  (**(code **)(this->_padding_ + 0x468))(this,&local_48);
  if (param_1 != (UPCGSpatialData *)0x0) {
    if (param_2 == (UPCGMetadata *)0x0) {
      if (local_38 != '\0') {
        (**(code **)(this->_padding_ + 0x470))(this,&local_48);
      }
    }
    else {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      UPCGMetadata::Initialize((UPCGMetadata *)this->_padding_,param_2,param_4);
    }
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_18,(int)local_10);
  if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// InitializeFromDataWithParams @ 1498cf500

void __thiscall
UPCGSpatialData::InitializeFromDataWithParams
          (UPCGSpatialData *this,FPCGInitializeFromDataParams *param_1)

{
  (**(code **)(this->_padding_ + 0x468))();
  if (((param_1->Source).field0_0x0.DebugPtr != (UPCGSpatialData *)0x0) &&
     (param_1->bInheritMetadata != false)) {
    (**(code **)(this->_padding_ + 0x470))(this,param_1);
  }
  return;
}

// InitializeMetadata @ 1498cf880

void __thiscall
UPCGSpatialData::InitializeMetadata(UPCGSpatialData *this,FPCGInitializeFromDataParams *param_1)

{
  if (param_1->bInheritMetadata != false) {
                    /* WARNING: Could not recover jumptable at 0x0001498cf889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x470))();
    return;
  }
  return;
}

// InitializeMetadataInternal @ 1498cf8a0

void __thiscall
UPCGSpatialData::InitializeMetadataInternal
          (UPCGSpatialData *this,FPCGInitializeFromDataParams *param_1)

{
  UPCGSpatialData *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
                       ,0x198,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (param_1->Source).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001498cf8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x450))(pUVar1,param_1,this->_padding_);
  return;
}

// InitializeSpatialDataInternal @ 1498cfa20

void __thiscall
UPCGSpatialData::InitializeSpatialDataInternal
          (UPCGSpatialData *this,FPCGInitializeFromDataParams *param_1)

{
  UPCGSpatialData *pUVar1;
  
  pUVar1 = (param_1->Source).field0_0x0.DebugPtr;
  if (((pUVar1 != (UPCGSpatialData *)0x0) && ((this->TargetActor).WeakPtr.ObjectIndex == 0)) &&
     ((this->TargetActor).WeakPtr.ObjectSerialNumber == 0)) {
    (this->TargetActor).WeakPtr = (pUVar1->TargetActor).WeakPtr;
  }
  return;
}

// InitializeTargetMetadata @ 1498d0250

void __thiscall
UPCGSpatialData::InitializeTargetMetadata
          (UPCGSpatialData *this,FPCGInitializeFromDataParams *param_1,UPCGMetadata *param_2)

{
  code *pcVar1;
  bool bVar2;
  UPCGMetadata *pUVar3;
  FPCGMetadataInitializeParams *pFVar4;
  FPCGMetadataInitializeParams local_38;
  
  if (param_1->bInheritMetadata == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.bInheritMetadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
                       ,0x19e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (UPCGMetadata *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetadataToInitialize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
                       ,0x19f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = &param_1->MetadataInitializeParams;
  local_38.Parent = (UPCGMetadata *)0x0;
  local_38.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DomainMapping.ArrayNum = 0;
  local_38.DomainMapping.ArrayMax = 0;
  local_38.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DomainInitializeParams.ArrayNum = 0;
  local_38.DomainInitializeParams.ArrayMax = 0;
  pUVar3 = (UPCGMetadata *)(**(code **)(((param_1->Source).field0_0x0.DebugPtr)->_padding_ + 800))()
  ;
  if (pFVar4->Parent != pUVar3) {
    FPCGMetadataInitializeParams::operator=(&local_38,pFVar4);
    local_38.Parent =
         (UPCGMetadata *)(**(code **)(((param_1->Source).field0_0x0.DebugPtr)->_padding_ + 800))();
    pFVar4 = &local_38;
  }
  if ((param_2->Parent).field0_0x0.DebugPtr == (UPCGMetadata *)0x0) {
    UPCGMetadata::Initialize(param_2,pFVar4);
  }
  else {
    UPCGMetadata::AddAttributes(param_2,pFVar4);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
             local_38.DomainInitializeParams.AllocatorInstance.Data,
             local_38.DomainInitializeParams.ArrayNum);
  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
      local_38.DomainInitializeParams.AllocatorInstance.Data !=
      (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
  }
  if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
  }
  return;
}

// IntersectWith @ 1498d0910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGIntersectionData * __thiscall
UPCGSpatialData::IntersectWith(UPCGSpatialData *this,FPCGContext *param_1,UPCGSpatialData *param_2)

{
  UPCGIntersectionData *this_00;
  
  this_00 = FPCGContext::NewObject_AnyThread<UPCGIntersectionData>(param_1);
  UPCGIntersectionData::Initialize(this_00,this,param_2);
  return this_00;
}

// K2_IntersectWith @ 1498d1370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGIntersectionData * __thiscall
UPCGSpatialData::K2_IntersectWith(UPCGSpatialData *this,UPCGSpatialData *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FPCGContext *pFVar1;
  UPCGIntersectionData *pUVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 1000);
  pFVar1 = UPCGBlueprintBaseElement::ResolveContext();
                    /* WARNING: Could not recover jumptable at 0x0001498d13af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UPCGIntersectionData *)(*UNRECOVERED_JUMPTABLE)(this,pFVar1,param_1);
  return pUVar2;
}

// K2_ProjectOn @ 1498d13c0

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
UPCGSpatialData::K2_ProjectOn
          (UPCGSpatialData *this,UPCGSpatialData *param_1,FPCGProjectionParams *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  FPCGContext *pFVar1;
  UPCGSpatialData *pUVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x3f8);
  pFVar1 = UPCGBlueprintBaseElement::ResolveContext();
                    /* WARNING: Could not recover jumptable at 0x0001498d1411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UPCGSpatialData *)(*UNRECOVERED_JUMPTABLE)(this,pFVar1,param_1,param_2);
  return pUVar2;
}

// K2_ProjectPoint @ 1498d1420

bool __thiscall
UPCGSpatialData::K2_ProjectPoint
          (UPCGSpatialData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGProjectionParams *param_3,FPCGPoint *param_4,UPCGMetadata *param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001498d142a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x3d0))();
  return (bool)uVar1;
}

// K2_SamplePoint @ 1498d1440

bool __thiscall
UPCGSpatialData::K2_SamplePoint
          (UPCGSpatialData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001498d144a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x3c0))();
  return (bool)uVar1;
}

// K2_Subtract @ 1498d1460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDifferenceData * __thiscall
UPCGSpatialData::K2_Subtract(UPCGSpatialData *this,UPCGSpatialData *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FPCGContext *pFVar1;
  UPCGDifferenceData *pUVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x418);
  pFVar1 = UPCGBlueprintBaseElement::ResolveContext();
                    /* WARNING: Could not recover jumptable at 0x0001498d149f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UPCGDifferenceData *)(*UNRECOVERED_JUMPTABLE)(this,pFVar1,param_1);
  return pUVar2;
}

// K2_UnionWith @ 1498d14b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGUnionData * __thiscall
UPCGSpatialData::K2_UnionWith(UPCGSpatialData *this,UPCGSpatialData *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FPCGContext *pFVar1;
  UPCGUnionData *pUVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x408);
  pFVar1 = UPCGBlueprintBaseElement::ResolveContext();
                    /* WARNING: Could not recover jumptable at 0x0001498d14ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UPCGUnionData *)(*UNRECOVERED_JUMPTABLE)(this,pFVar1,param_1);
  return pUVar2;
}

// ProjectOn @ 1498d3a50

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
UPCGSpatialData::ProjectOn
          (UPCGSpatialData *this,FPCGContext *param_1,UPCGSpatialData *param_2,
          FPCGProjectionParams *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  UPCGSpatialData *pUVar4;
  UPCGProjectionData *this_00;
  
  if (param_2 == (UPCGSpatialData *)0x0) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
                    /* WARNING: Could not recover jumptable at 0x0001498d3aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UPCGSpatialData *)(**(code **)(this->_padding_ + 0x310))(this,param_1,1);
    return pUVar4;
  }
  pcVar1 = *(code **)(param_2->_padding_ + 0x380);
  iVar2 = (**(code **)(this->_padding_ + 0x380))();
  iVar3 = (*pcVar1)(param_2);
  if (iVar3 < iVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      (**(code **)(param_2->_padding_ + 0x380))(param_2);
      (**(code **)(this->_padding_ + 0x380))(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    pUVar4 = (UPCGSpatialData *)(**(code **)(param_2->_padding_ + 0x430))(param_2);
    if (pUVar4 != (UPCGSpatialData *)0x0) {
      this_00 = FPCGContext::NewObject_AnyThread<UPCGProjectionData>(param_1);
      UPCGProjectionData::Initialize(this_00,this,pUVar4,param_3);
      return (UPCGSpatialData *)this_00;
    }
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  pUVar4 = (UPCGSpatialData *)(**(code **)(this->_padding_ + 0x310))(this,param_1,1);
  return pUVar4;
}

// ProjectPoint @ 1498d4ff0

bool __thiscall
UPCGSpatialData::ProjectPoint
          (UPCGSpatialData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGProjectionParams *param_3,FPCGPoint *param_4,UPCGMetadata *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  
  uVar4 = (**(code **)(this->_padding_ + 0x3c0))();
  if (param_3->bProjectPositions == false) {
    dVar2 = (param_1->Translation).XY.m128d_f64[1];
    dVar1 = (param_1->Translation).ZW.m128d_f64[0];
    (param_4->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (param_4->Transform).Translation.XY.m128d_f64[1] = dVar2;
    (param_4->Transform).Translation.ZW.m128d_f64[0] = dVar1;
    (param_4->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  }
  if (param_3->bProjectRotations == false) {
    dVar1 = (param_1->Rotation).XY.m128d_f64[1];
    dVar2 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
    (param_4->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (param_4->Transform).Rotation.XY.m128d_f64[1] = dVar1;
    (param_4->Transform).Rotation.ZW.m128d_f64[0] = dVar2;
    (param_4->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  }
  if (param_3->bProjectScales == false) {
    dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
    dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
    (param_4->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (param_4->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
    (param_4->Transform).Scale3D.ZW.m128d_f64[0] = dVar1;
    (param_4->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  return (bool)uVar4;
}

// ProjectPoints @ 1498d5260

void __thiscall
UPCGSpatialData::ProjectPoints
          (UPCGSpatialData *this,
          TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_const_,int>
          *param_1,FPCGProjectionParams *param_2,TArrayView<FPCGPoint,int> *param_3,
          UPCGMetadata *param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  bool bVar11;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId300,"UPCGSpatialData::ProjectPoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
               ,300);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId300);
  }
  if ((param_1->ArrayNum != param_3->ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSamples.Num() == OutPoints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
                         ,0x12d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar5) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar9 = &param_1->DataPtr->field_0x0 + lVar10;
      uVar4 = 0;
      if ((int)uVar7 < param_3->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar6 = (longlong)(param_3->DataPtr->Transform).Rotation.XY.m128d_f64 + lVar8;
      cVar3 = (**(code **)(this->_padding_ + 0x3d0))
                        (this,puVar9,puVar9 + 0x60,param_2,lVar6,param_4);
      if (cVar3 == '\0') {
        *(undefined4 *)(lVar6 + 0x60) = 0;
      }
      iVar5 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0xa0;
      lVar8 = lVar8 + 0xd0;
    } while ((int)uVar7 < iVar5);
  }
  if (!bVar11) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// SamplePoint @ 1498dae90

bool __thiscall
UPCGSpatialData::SamplePoint
          (UPCGSpatialData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialData.h"
             ,0xb4,L"Pure virtual not implemented (%s)");
  return false;
}

// SamplePoints @ 1498de290

void __thiscall
UPCGSpatialData::SamplePoints
          (UPCGSpatialData *this,
          TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_const_,int>
          *param_1,TArrayView<FPCGPoint,int> *param_2,UPCGMetadata *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  bool bVar11;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId256,"UPCGSpatialData::SamplePoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
               ,0x100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId256);
  }
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSamples.Num() == OutPoints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
                         ,0x101,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar5) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar9 = &param_1->DataPtr->field_0x0 + lVar10;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar6 = (longlong)(param_2->DataPtr->Transform).Rotation.XY.m128d_f64 + lVar8;
      cVar3 = (**(code **)(this->_padding_ + 0x3c0))(this,puVar9,puVar9 + 0x60,lVar6,param_3);
      if (cVar3 == '\0') {
        *(undefined4 *)(lVar6 + 0x60) = 0;
      }
      iVar5 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0xa0;
      lVar8 = lVar8 + 0xd0;
    } while ((int)uVar7 < iVar5);
  }
  if (!bVar11) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// SetLastSelector @ 1498df0a0

void __thiscall
UPCGSpatialData::SetLastSelector(UPCGSpatialData *this,FPCGAttributePropertySelector *param_1)

{
  FName FVar1;
  
  if ((param_1->Selection == Attribute) &&
     ((((FVar1 = param_1->AttributeName, FVar1 == PCGMetadataAttributeConstants::LastAttributeName
        || (FVar1 == PCGMetadataAttributeConstants::LastCreatedAttributeName)) ||
       (FVar1 == PCGMetadataAttributeConstants::SourceAttributeName)) ||
      (FVar1 == PCGMetadataAttributeConstants::SourceNameAttributeName)))) {
    return;
  }
  this->bHasCachedLastSelector = true;
  FPCGAttributePropertySelector::ImportFromOtherSelector
            ((FPCGAttributePropertySelector *)&this->CachedLastSelector,param_1);
  return;
}

// StaticRegisterNativesUPCGSpatialData @ 1498f6a50

void __cdecl UPCGSpatialData::StaticRegisterNativesUPCGSpatialData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UPCGSpatialData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Subtract @ 1498f6bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDifferenceData * __thiscall
UPCGSpatialData::Subtract(UPCGSpatialData *this,FPCGContext *param_1,UPCGSpatialData *param_2)

{
  code *pcVar1;
  bool bVar2;
  UPCGDifferenceData *pUVar3;
  
  pUVar3 = FPCGContext::NewObject_AnyThread<UPCGDifferenceData>(param_1);
  if (this == (UPCGSpatialData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGDifferenceData *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar3->Source).field0_0x0.DebugPtr = this;
  pUVar3->_padding_ = (longlong)(this->TargetActor).WeakPtr;
  UPCGDifferenceData::AddDifference(pUVar3,param_1,param_2);
  return pUVar3;
}

// ToBasePointData @ 1498f7290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGSpatialData::ToBasePointData(UPCGSpatialData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  UPCGBasePointData *pUVar4;
  
  pTVar1 = CVarPCGEnablePointArrayData.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_1498f72cf;
    }
  }
  lVar3 = 0;
LAB_1498f72cf:
  if (pTVar1->ShadowedValue[lVar3] == false) {
    pUVar4 = (UPCGBasePointData *)(**(code **)(this->_padding_ + 0x3b0))(this,param_1,param_2);
  }
  else {
    pUVar4 = (UPCGBasePointData *)(**(code **)(this->_padding_ + 0x3b8))();
  }
  return pUVar4;
}

// ToBasePointDataWithContext @ 1498f7770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGSpatialData::ToBasePointDataWithContext
          (UPCGSpatialData *this,FPCGBlueprintContextHandle *param_1)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UPCGBasePointData *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar6 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1498f77b0;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (pFVar2 = pFVar1->Context, pFVar2 != (FPCGContext *)0x0)) {
      local_17 = 0;
      local_13 = 0;
      local_11 = 0;
      local_18 = 0;
      local_48._s_0.X = 0.0;
      local_48._s_0.Y = 0.0;
      local_48._s_0.Z = 0.0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      pUVar5 = ToBasePointData(this,pFVar2,(TBox<double> *)&local_48._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return pUVar5;
    }
  }
LAB_1498f77b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (UPCGBasePointData *)0x0;
}

// ToPointArrayData @ 1498f7ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UPCGSpatialData::ToPointArrayData(UPCGSpatialData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGBasePointData *pUVar1;
  UPCGPointArrayData *pUVar2;
  undefined1 auStack_c8 [32];
  UPCGBasePointData *local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_78;
  undefined8 local_70;
  TArrayView<int_const_,int> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_28 = 0;
  local_27 = 0;
  local_23 = 0;
  local_21 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  pUVar1 = (UPCGBasePointData *)(**(code **)(this->_padding_ + 0x3b0))(0,0,&local_58);
  pUVar2 = (UPCGPointArrayData *)0x0;
  if (pUVar1 != (UPCGBasePointData *)0x0) {
    pUVar2 = FPCGContext::NewObject_AnyThread<UPCGPointArrayData>(param_1);
    local_a8 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_a0 = 0;
    local_98 = 0x101;
    local_95 = 0;
    local_90 = (**(code **)(pUVar1->_padding_ + 800))(pUVar1);
    local_88 = (void *)0x0;
    local_80 = 0;
    local_78 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
    local_70 = 0;
    local_96 = 0;
    (**(code **)(pUVar2->_padding_ + 0x468))(pUVar2,&local_a8);
    if ((local_a8 != (UPCGBasePointData *)0x0) && ((char)local_98 != '\0')) {
      (**(code **)(pUVar2->_padding_ + 0x470))(pUVar2,&local_a8);
    }
    local_68.DataPtr = (int *)0x0;
    local_68.ArrayNum = 0;
    UPCGBasePointData::SetPoints(pUVar1,(UPCGBasePointData *)pUVar2,&local_68,true);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_78,(int)local_70);
    if (local_78 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
  }
  return pUVar2;
}

// UnionWith @ 1498f9520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGUnionData * __thiscall
UPCGSpatialData::UnionWith(UPCGSpatialData *this,FPCGContext *param_1,UPCGSpatialData *param_2)

{
  code *pcVar1;
  bool bVar2;
  UPCGUnionData *pUVar3;
  
  pUVar3 = FPCGContext::NewObject_AnyThread<UPCGUnionData>(param_1);
  if ((this == (UPCGSpatialData *)0x0) || (param_2 == (UPCGSpatialData *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InA && InB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGUnionData *)(*pcVar1)();
      return pUVar3;
    }
  }
  UPCGUnionData::AddData(pUVar3,this);
  UPCGUnionData::AddData(pUVar3,param_2);
  return pUVar3;
}

// execCreateEmptyMetadata @ 1498fc440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGSpatialData::execCreateEmptyMetadata(UObject *param_1,FFrame *param_2,void *param_3)

{
  UPCGMetadata *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[1].field_0x10 != 0) && (2 < (byte)LogPCG._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  pUVar1 = NewObject<UPCGMetadata>(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGMetadata *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UPCGMetadata **)&param_1[1].field_0x10 = pUVar1;
  *(UPCGMetadata **)param_3 = pUVar1;
  return;
}

// execGetBounds @ 1498fc5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGSpatialData::execGetBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x388))(param_1,local_48);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar2[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar2[6];
  return;
}

// execGetDensityAtPosition @ 1498fc710

void __cdecl
UPCGSpatialData::execGetDensityAtPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined4 uVar3;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = (**(code **)(*(longlong *)param_1 + 0x3a8))(param_1,puVar2);
  *(undefined4 *)param_3 = uVar3;
  return;
}

// execGetDimension @ 1498fc7f0

void __cdecl UPCGSpatialData::execGetDimension(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x380))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNormal @ 1498fd230

void __cdecl UPCGSpatialData::execGetNormal(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x3a0))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetStrictBounds @ 1498fd830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGSpatialData::execGetStrictBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x398))(param_1,local_48);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar2[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar2[6];
  return;
}

// execHasNonTrivialTransform @ 1498fdb70

void __cdecl
UPCGSpatialData::execHasNonTrivialTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3e0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execInitializeFromData @ 1498fe100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGSpatialData::execInitializeFromData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGMetadata *pUVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  int local_res8 [2];
  int local_res10 [4];
  UPCGMetadata *local_res20;
  UObject *local_88 [2];
  UObject *local_78;
  undefined8 local_70;
  char local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_48;
  undefined8 local_40;
  
  uVar4 = 0;
  local_88[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_res20 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar5 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_88[0];
  pUVar2 = local_res20;
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_88[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_88[0]);
  }
  local_70 = 0;
  local_65 = 0;
  if (pUVar3 != (UObject *)0x0) {
    uVar4 = (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_40 = 0;
  local_66 = 1;
  local_68 = bVar5;
  local_67 = bVar6;
  local_60 = uVar4;
  (**(code **)(*(longlong *)param_1 + 0x468))(param_1,&local_78);
  if (pUVar3 != (UObject *)0x0) {
    if (pUVar2 == (UPCGMetadata *)0x0) {
      if (local_68 != '\0') {
        (**(code **)(*(longlong *)param_1 + 0x470))(param_1,&local_78);
      }
    }
    else {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      UPCGMetadata::Initialize(*(UPCGMetadata **)&param_1[1].field_0x10,pUVar2,bVar6);
    }
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_48,(int)local_40);
  if (local_48 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execInitializeFromDataWithParams @ 1498fe330

void __cdecl
UPCGSpatialData::execInitializeFromDataWithParams(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong local_48 [2];
  undefined4 local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  undefined8 local_10;
  
  local_38 = 0x10101;
  local_48[0] = 0;
  local_48[1] = 0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  plVar2 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar2 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x468))(param_1,plVar2);
  if ((*plVar2 != 0) && ((char)plVar2[2] != '\0')) {
    (**(code **)(*(longlong *)param_1 + 0x470))(param_1,plVar2);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_18,(int)local_10);
  if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execK2_IntersectWith @ 1498ff000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGSpatialData::execK2_IntersectWith(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FPCGContext *pFVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 1000);
  pFVar3 = UPCGBlueprintBaseElement::ResolveContext();
  uVar4 = (*pcVar2)(param_1,pFVar3,uVar4);
  *(undefined8 *)param_3 = uVar4;
  return;
}

// execK2_ProjectOn @ 1498ff0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGSpatialData::execK2_ProjectOn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FPCGContext *pFVar3;
  undefined8 uVar4;
  uchar *puVar5;
  undefined8 local_res8;
  uchar local_38 [8];
  FString local_30;
  undefined2 local_20;
  undefined1 local_1e;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_38[0] = '\x01';
  local_38[1] = '\x01';
  local_38[2] = '\0';
  local_38[3] = '\0';
  ::FString::FString(&local_30,L"");
  local_20 = 0x700;
  local_1e = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  uVar4 = local_res8;
  puVar5 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x3f8);
  pFVar3 = UPCGBlueprintBaseElement::ResolveContext();
  uVar4 = (*pcVar2)(param_1,pFVar3,uVar4,puVar5);
  *(undefined8 *)param_3 = uVar4;
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// execK2_ProjectPoint @ 1498ff1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGSpatialData::execK2_ProjectPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  double *pdVar13;
  uchar *puVar14;
  uchar *puVar15;
  double *pdVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_208 [32];
  double *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uchar local_1d0 [8];
  FString local_1c8;
  undefined2 local_1b8;
  undefined1 local_1b6;
  undefined1 *local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  uchar local_78 [48];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_208;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_c8 = (double)fVar6;
  dStack_c0 = (double)fVar9;
  local_a8 = (double)fVar7;
  dStack_a0 = (double)fVar10;
  local_b8._8_4_ = SUB84((double)fVar4,0);
  local_b8._0_8_ = (double)fVar2;
  local_b8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_88 = (double)fVar8;
  dStack_80 = (double)fVar11;
  local_98._8_4_ = SUB84((double)fVar5,0);
  local_98._0_8_ = (double)fVar3;
  local_98._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_1b0 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar16 = &local_d8;
  if (pdVar13 != (double *)0x0) {
    pdVar16 = pdVar13;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_1d0[0] = '\x01';
  local_1d0[1] = '\x01';
  local_1d0[2] = '\0';
  local_1d0[3] = '\0';
  puVar15 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  ::FString::FString(&local_1c8,L"");
  local_1b8 = 0x700;
  local_1b6 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d0);
  }
  local_1a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_1a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_148 = 0x3f800000;
  local_e8 = 0x3f000000;
  puVar14 = local_1d0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar14 = param_2->MostRecentPropertyAddress;
  }
  local_e0 = 0xffffffffffffffff;
  local_198 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_190 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_188._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_188._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_168._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_178 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_170 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_158 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_150 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_138 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                             0x20) ^ uVar18,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar17);
  local_140 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                             0x20) ^ uVar18,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar17);
  local_128 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_120 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_108 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_100 = _UNK_150689688;
  local_f8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_f0 = _UNK_150689688;
  local_130 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar18,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar17);
  local_118 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1d8 = 0;
  pdVar13 = &local_1a8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  local_1e0 = local_1d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1e8 = pdVar13;
  uVar12 = (**(code **)(*(longlong *)param_1 + 0x3d0))(param_1,pdVar16,puVar15,puVar14);
  *local_1b0 = uVar12;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return;
}

// execK2_SamplePoint @ 1498ff550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGSpatialData::execK2_SamplePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 uVar14;
  double *pdVar15;
  uchar *puVar16;
  double *pdVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1b8 [2];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  uchar local_78 [48];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_d8 = (double)fVar2;
  dStack_d0 = (double)fVar5;
  local_c8 = (double)fVar8;
  dStack_c0 = (double)fVar11;
  local_a8 = (double)fVar9;
  dStack_a0 = (double)fVar12;
  local_b8._8_4_ = SUB84((double)fVar6,0);
  local_b8._0_8_ = (double)fVar3;
  local_b8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_88 = (double)fVar10;
  dStack_80 = (double)fVar13;
  local_98._8_4_ = SUB84((double)fVar7,0);
  local_98._0_8_ = (double)fVar4;
  local_98._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar17 = &local_d8;
  if (pdVar15 != (double *)0x0) {
    pdVar17 = pdVar15;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_1a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_1a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_148 = 0x3f800000;
  local_e8 = 0x3f000000;
  puVar16 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar16 = param_2->MostRecentPropertyAddress;
  }
  local_e0 = 0xffffffffffffffff;
  local_198 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_190 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_188._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_188._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_168._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_178 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_170 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar18 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_158 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_150 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_138 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                             0x20) ^ uVar19,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar18);
  local_140 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                             0x20) ^ uVar19,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar18);
  local_128 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_120 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_108 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_100 = _UNK_150689688;
  local_f8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_f0 = _UNK_150689688;
  local_130 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar19,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar18);
  local_118 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1b8[0] = 0;
  pdVar15 = &local_1a8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1b8);
  }
  local_1c8 = local_1b8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar14 = (**(code **)(*(longlong *)param_1 + 0x3c0))(param_1,pdVar17,puVar16,pdVar15);
  *(undefined1 *)param_3 = uVar14;
  return;
}

// execK2_Subtract @ 1498ff830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGSpatialData::execK2_Subtract(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FPCGContext *pFVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x418);
  pFVar3 = UPCGBlueprintBaseElement::ResolveContext();
  uVar4 = (*pcVar2)(param_1,pFVar3,uVar4);
  *(undefined8 *)param_3 = uVar4;
  return;
}

// execK2_UnionWith @ 1498ff8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGSpatialData::execK2_UnionWith(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FPCGContext *pFVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x408);
  pFVar3 = UPCGBlueprintBaseElement::ResolveContext();
  uVar4 = (*pcVar2)(param_1,pFVar3,uVar4);
  *(undefined8 *)param_3 = uVar4;
  return;
}

// execToBasePointDataWithContext @ 1498ffc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGSpatialData::execToBasePointDataWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  UPCGBasePointData *pUVar4;
  FPCGContext *pFVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  UPCGBasePointData *pUVar8;
  longlong *plVar9;
  UPCGBasePointData *pUVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  TVector<double>_u_0 local_58;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pUVar8 = (UPCGBasePointData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  plVar9 = &local_68;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = (UPCGBasePointData *)plVar9[1];
  pUVar10 = pUVar4;
  if (pUVar4 != (UPCGBasePointData *)0x0) {
    aVar6 = *(atomic<int> *)&pUVar4->_padding_;
    do {
      pUVar10 = pUVar8;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1498ffd11;
      LOCK();
      aVar7 = *(atomic<int> *)&pUVar4->_padding_;
      bVar11 = aVar6 == aVar7;
      if (bVar11) {
        *(atomic<int> *)&pUVar4->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar11);
    pUVar10 = pUVar4;
    if ((*plVar9 != 0) && (pFVar5 = *(FPCGContext **)(*plVar9 + 0x10), pFVar5 != (FPCGContext *)0x0)
       ) {
      local_28 = 0;
      local_27 = 0;
      local_23 = 0;
      local_21 = 0;
      local_58._s_0.X = 0.0;
      local_58._s_0.Y = 0.0;
      local_58._s_0.Z = 0.0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      pUVar8 = ToBasePointData((UPCGSpatialData *)param_1,pFVar5,(TBox<double> *)&local_58._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar4);
      goto LAB_1498ffd35;
    }
  }
LAB_1498ffd11:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar10);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
LAB_1498ffd35:
  *(UPCGBasePointData **)param_3 = pUVar8;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_60 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_60 + 8))(plStack_60,1);
    }
  }
  return;
}

// execToPointData @ 1498ffde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGSpatialData::execToPointData(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_18 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3b0))(param_1,0,&local_48);
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execToPointDataWithContext @ 1498ffe70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGSpatialData::execToPointDataWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298;
  undefined4 local_297;
  undefined2 local_293;
  undefined1 local_291;
  FPCGContext local_288;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  FPCGContext::FPCGContext(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_298 = 0;
  pFVar3 = &local_288;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_297 = 0;
  local_293 = 0;
  local_291 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x3b0))(param_1,pFVar3,&local_2c8);
  *(undefined8 *)param_3 = uVar2;
  FPCGContext::~FPCGContext(&local_288);
  return;
}

