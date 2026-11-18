// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 25

// StaticClass @ 149789950

UClass * __cdecl UPCGProxyForGPUData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProxyForGPUData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProxyForGPUData",
               &Z_Registration_Info_UClass_UPCGProxyForGPUData.InnerSingleton,
               StaticRegisterNativesUPCGProxyForGPUData,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGProxyForGPUData>,
               InternalVTableHelperCtorCaller<UPCGProxyForGPUData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProxyForGPUData.InnerSingleton;
}

// UPCGProxyForGPUData @ 1497e1660

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPCGProxyForGPUData * __thiscall
UPCGProxyForGPUData::UPCGProxyForGPUData(UPCGProxyForGPUData *this,FVTableHelper *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->DataIndexInCollection = -1;
  this->_padding_ = (longlong)&___7UPCGProxyForGPUData__6B_;
  (this->DataCollectionOnGPU).Object = (FPCGProxyForGPUDataCollection *)0x0;
  (this->DataCollectionOnGPU).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UPCGProxyForGPUData @ 1497e16a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPCGProxyForGPUData * __thiscall
UPCGProxyForGPUData::UPCGProxyForGPUData(UPCGProxyForGPUData *this,FObjectInitializer *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->DataIndexInCollection = -1;
  this->_padding_ = (longlong)&___7UPCGProxyForGPUData__6B_;
  (this->DataCollectionOnGPU).Object = (FPCGProxyForGPUDataCollection *)0x0;
  (this->DataCollectionOnGPU).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UPCGProxyForGPUData @ 1497e3280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPCGProxyForGPUData::~UPCGProxyForGPUData(UPCGProxyForGPUData *this)

{
  this->_padding_ = (longlong)&___7UPCGProxyForGPUData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataCollectionOnGPU).SharedReferenceCount.ReferenceController);
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// AddToCrc @ 1497ee400

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPCGProxyForGPUData::AddToCrc(UPCGProxyForGPUData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// CanBeSerialized @ 1497f0d80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPCGProxyForGPUData::CanBeSerialized(UPCGProxyForGPUData *this)

{
  return false;
}

// GetCPUData @ 149811be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FReadbackResult * __thiscall
UPCGProxyForGPUData::GetCPUData
          (UPCGProxyForGPUData *this,FReadbackResult *__return_storage_ptr__,FPCGContext *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FReadbackResult *pFVar5;
  undefined1 auStackY_108 [32];
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_d8;
  TObjectPtr<UPCGData_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  FName local_68;
  undefined2 local_60;
  FWeakObjectPtr local_5c;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  GetGPUInfoMutable(this,&local_d8);
  if (local_d8.Object == (FPCGProxyForGPUDataCollection *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    __return_storage_ptr__->bComplete = true;
    (__return_storage_ptr__->TaggedData).Data.Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    (__return_storage_ptr__->TaggedData).Data.WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x18 = 0;
    (__return_storage_ptr__->TaggedData).Tags.Hash.InlineData[0] = '\0';
    (__return_storage_ptr__->TaggedData).Tags.Hash.InlineData[1] = '\0';
    (__return_storage_ptr__->TaggedData).Tags.Hash.InlineData[2] = '\0';
    (__return_storage_ptr__->TaggedData).Tags.Hash.InlineData[3] = '\0';
    (__return_storage_ptr__->TaggedData).Tags.Hash._padding_ = 0;
    *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.HashSize = 0;
    *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements = 0;
    *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x34 = 0;
    (__return_storage_ptr__->TaggedData).Tags.Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    (__return_storage_ptr__->TaggedData).Pin.ComparisonIndex = 0;
    (__return_storage_ptr__->TaggedData).Pin.Number = 0;
    (__return_storage_ptr__->TaggedData).bPinlessData = false;
    (__return_storage_ptr__->TaggedData).bIsUsedMultipleTimes = true;
    (__return_storage_ptr__->TaggedData).OriginatingNode.WeakPtr = (FWeakObjectPtr)0x0;
    (__return_storage_ptr__->TaggedData).OriginalIndex = -1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
  }
  else {
    local_c8.DebugPtr = (UPCGData *)0x0;
    local_c0 = 0;
    local_b8._0_8_ = (FScriptContainerElement *)0x0;
    local_b8._8_8_ = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_8c = 0x80;
    local_88 = 0xffffffff;
    local_84 = 0;
    local_78 = (ForElementType<FSetElementId>)0x0;
    local_70 = 0;
    local_68.ComparisonIndex.Value = 0;
    local_68.Number = 0;
    local_60 = 0x100;
    local_5c.ObjectIndex = 0;
    local_5c.ObjectSerialNumber = 0;
    local_54 = -1;
    if (local_d8.Object == (FPCGProxyForGPUDataCollection *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReadbackResult *)(*pcVar2)();
        return pFVar5;
      }
    }
    bVar4 = FPCGProxyForGPUDataCollection::GetCPUData
                      (local_d8.Object,param_1,this->DataIndexInCollection,
                       (FPCGTaggedData *)&local_c8.ObjectPtr);
    if (bVar4) {
      __return_storage_ptr__->bComplete = true;
      FPCGDataPtrWrapper::FPCGDataPtrWrapper
                (&(__return_storage_ptr__->TaggedData).Data,
                 (FPCGDataPtrWrapper *)&local_c8.ObjectPtr);
      pTVar1 = &(__return_storage_ptr__->TaggedData).Tags;
      *(undefined8 *)&pTVar1->Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x34 = 0;
      (__return_storage_ptr__->TaggedData).Tags.Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      (__return_storage_ptr__->TaggedData).Tags.HashSize = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
      Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                (pTVar1,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8);
      (__return_storage_ptr__->TaggedData).Pin = local_68;
      (__return_storage_ptr__->TaggedData).bPinlessData = local_60._0_1_;
      (__return_storage_ptr__->TaggedData).bIsUsedMultipleTimes = local_60._1_1_;
      (__return_storage_ptr__->TaggedData).OriginatingNode.WeakPtr = local_5c;
      (__return_storage_ptr__->TaggedData).OriginalIndex = local_54;
    }
    else {
      __return_storage_ptr__->bComplete = false;
      (__return_storage_ptr__->TaggedData).Data.Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      (__return_storage_ptr__->TaggedData).Data.WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x10 = 0;
      *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x18 = 0;
      (__return_storage_ptr__->TaggedData).Tags.Hash.InlineData[0] = '\0';
      (__return_storage_ptr__->TaggedData).Tags.Hash.InlineData[1] = '\0';
      (__return_storage_ptr__->TaggedData).Tags.Hash.InlineData[2] = '\0';
      (__return_storage_ptr__->TaggedData).Tags.Hash.InlineData[3] = '\0';
      (__return_storage_ptr__->TaggedData).Tags.Hash._padding_ = 0;
      *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.HashSize = 0;
      *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->TaggedData).Tags.Elements.field_0x34 = 0;
      (__return_storage_ptr__->TaggedData).Tags.Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      (__return_storage_ptr__->TaggedData).Pin.ComparisonIndex = 0;
      (__return_storage_ptr__->TaggedData).Pin.Number = 0;
      (__return_storage_ptr__->TaggedData).bPinlessData = false;
      (__return_storage_ptr__->TaggedData).bIsUsedMultipleTimes = true;
      (__return_storage_ptr__->TaggedData).OriginatingNode.WeakPtr = (FWeakObjectPtr)0x0;
      (__return_storage_ptr__->TaggedData).OriginalIndex = -1;
    }
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b8,0,local_b8._8_4_);
    iVar3 = SUB84(local_b8._8_8_,4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
    }
    local_90 = 0;
    local_84 = 0;
    local_88 = 0xffffffff;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_c8.ObjectPtr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetDataIndexInCollection @ 149812b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall UPCGProxyForGPUData::GetDataIndexInCollection(UPCGProxyForGPUData *this)

{
  return this->DataIndexInCollection;
}

// GetDataType @ 149812d20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGProxyForGPUData::GetDataType(UPCGProxyForGPUData *this)

{
  return ProxyForGPU;
}

// GetDataTypeId @ 149812de0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPCGDataTypeBaseId * __thiscall UPCGProxyForGPUData::GetDataTypeId(UPCGProxyForGPUData *this)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoProxyForGPU::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoProxyForGPU::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoProxyForGPU::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoProxyForGPU.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_PCG();
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoProxyForGPU.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoProxyForGPU,(UObject *)pUVar1
                             ,L"PCGDataTypeInfoProxyForGPU");
      }
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoProxyForGPU::AsId(void)'
                  ::__l2::Id,
                 Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoProxyForGPU.OuterSingleton);
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoProxyForGPU::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoProxyForGPU::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoProxyForGPU::AsId(void)'
          ::__l2::Id;
}

// GetDescription @ 1498134c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPCGProxyForGPUData::GetDescription(UPCGProxyForGPUData *this,FPCGDataDesc *param_1)

{
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FPCGProxyForGPUDataCollection *pFVar5;
  FPCGDataCollectionDesc *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPCGKernelAttributeDesc *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar13;
  FPCGDataDesc *pFVar14;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  TArrayView<FPCGDataDesc_const_,int> local_38;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_28;
  
  pTVar13 = GetGPUInfoMutable(this,&local_28);
  pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar13->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pFVar5 != (FPCGProxyForGPUDataCollection *)0x0) {
    pFVar6 = (pFVar5->Description).Object;
    pTVar7 = (pFVar5->Description).SharedReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar6 != (FPCGDataCollectionDesc *)0x0) {
      local_38.DataPtr = (FPCGDataDesc *)(pFVar6->DataDescs).AllocatorInstance.Data;
      iVar3 = (pFVar6->DataDescs).ArrayNum;
      if (iVar3 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
      }
      local_38.ArrayNum = iVar3;
      pFVar14 = TArrayView<FPCGDataDesc_const_,int>::operator[]
                          (&local_38,this->DataIndexInCollection);
      FPCGDataTypeIdentifier::operator=(&param_1->Type,&pFVar14->Type);
      uVar10 = *(undefined8 *)((longlong)&(pFVar14->ElementCount).field0_0x0 + 8);
      pTVar1 = &param_1->AttributeDescs;
      *(undefined8 *)&(param_1->ElementCount).field0_0x0 =
           *(undefined8 *)&(pFVar14->ElementCount).field0_0x0;
      *(undefined8 *)((longlong)&(param_1->ElementCount).field0_0x0 + 8) = uVar10;
      param_1->ElementDimension = pFVar14->ElementDimension;
      if (pTVar1 != &pFVar14->AttributeDescs) {
        DestructItems<FPCGKernelAttributeDesc,int>
                  ((FPCGKernelAttributeDesc *)(pTVar1->AllocatorInstance).Data,
                   (param_1->AttributeDescs).ArrayNum);
        iVar3 = (pFVar14->AttributeDescs).ArrayNum;
        piVar2 = &(param_1->AttributeDescs).ArrayMax;
        pFVar8 = (FPCGKernelAttributeDesc *)(pFVar14->AttributeDescs).AllocatorInstance.Data;
        (param_1->AttributeDescs).ArrayNum = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
          ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
                    ((pTVar1->AllocatorInstance).Data,pFVar8,iVar3);
        }
      }
      param_1->AllocatedPointProperties = pFVar14->AllocatedPointProperties;
      if (param_1 != pFVar14) {
        iVar3 = (pFVar14->TagStringKeys).ArrayNum;
        piVar2 = &(param_1->TagStringKeys).ArrayMax;
        _Src = (pFVar14->TagStringKeys).AllocatorInstance.SecondaryData;
        (param_1->TagStringKeys).ArrayNum = iVar3;
        if (_Src == (ForElementType<int>)0x0) {
          _Src = (ForElementType<int>)&pFVar14->TagStringKeys;
        }
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 4;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,iVar3,*piVar2,&(param_1->TagStringKeys).AllocatorInstance,iVar3,piVar2);
          _Dst = (param_1->TagStringKeys).AllocatorInstance.SecondaryData;
          if (iVar3 != 0) {
            if (_Dst == (ForElementType<int>)0x0) {
              _Dst = (ForElementType<int>)&param_1->TagStringKeys;
            }
            memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 2);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetElementCount @ 1498141a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TIntVector4<int> * __thiscall
UPCGProxyForGPUData::GetElementCount
          (UPCGProxyForGPUData *this,TIntVector4<int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPCGProxyForGPUDataCollection *pFVar3;
  FPCGDataCollectionDesc *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar9;
  TIntVector4<int> *pTVar10;
  FPCGDataDesc *pFVar11;
  TArrayView<FPCGDataDesc_const_,int> local_28;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_18;
  
  pTVar9 = GetGPUInfoMutable(this,&local_18);
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar9->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pFVar3 != (FPCGProxyForGPUDataCollection *)0x0) {
    pFVar4 = (pFVar3->Description).Object;
    pTVar5 = (pFVar3->Description).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 != (FPCGDataCollectionDesc *)0x0) {
      local_28.DataPtr = (FPCGDataDesc *)(pFVar4->DataDescs).AllocatorInstance.Data;
      iVar1 = (pFVar4->DataDescs).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TIntVector4<int> *)(*pcVar6)();
        return pTVar10;
      }
      local_28.ArrayNum = iVar1;
      pFVar11 = TArrayView<FPCGDataDesc_const_,int>::operator[]
                          (&local_28,this->DataIndexInCollection);
      uVar7 = *(undefined8 *)((longlong)&(pFVar11->ElementCount).field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(pFVar11->ElementCount).field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TIntVector4<int>_u_0_s_0)UE::Math::TIntVector4<int>::ZeroValue;
  return __return_storage_ptr__;
}

// GetGPUInfo @ 149814e80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> * __thiscall
UPCGProxyForGPUData::GetGPUInfo
          (UPCGProxyForGPUData *this,
          TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar2;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_18;
  
  pTVar2 = GetGPUInfoMutable(this,&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetGPUInfoMutable @ 149814ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FPCGProxyForGPUDataCollection,1> * __thiscall
UPCGProxyForGPUData::GetGPUInfoMutable
          (UPCGProxyForGPUData *this,
          TSharedPtr<FPCGProxyForGPUDataCollection,1> *__return_storage_ptr__)

{
  int iVar1;
  FPCGProxyForGPUDataCollection *pFVar2;
  FPCGDataCollectionDesc *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar8;
  UPCGProxyForGPUData *pUVar9;
  UPCGProxyForGPUData *local_res8;
  UPCGProxyForGPUData *local_res18;
  
  bVar7 = false;
  local_res8 = (UPCGProxyForGPUData *)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar2 = (this->DataCollectionOnGPU).Object;
  pUVar9 = local_res8;
  if (pFVar2 != (FPCGProxyForGPUDataCollection *)0x0) {
    pFVar3 = (pFVar2->Description).Object;
    pUVar9 = (UPCGProxyForGPUData *)(pFVar2->Description).SharedReferenceCount.ReferenceController;
    if (pUVar9 != (UPCGProxyForGPUData *)0x0) {
      LOCK();
      *(atomic<int> *)&pUVar9->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar9->_padding_ + 1);
      UNLOCK();
    }
    bVar7 = true;
    if (pFVar3 != (FPCGDataCollectionDesc *)0x0) {
      bVar6 = false;
      goto LAB_149814f1e;
    }
  }
  bVar6 = true;
LAB_149814f1e:
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar9);
  }
  if (bVar6) {
    local_res8 = this;
    `UPCGProxyForGPUData::GetGPUInfoMutable'::__l5::<lambda_1>::operator()(&local_res8);
    __return_storage_ptr__->Object = (FPCGProxyForGPUDataCollection *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (((this->DataCollectionOnGPU).Object == (FPCGProxyForGPUDataCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FPCGProxyForGPUDataCollection,1> *)(*pcVar5)();
    return pTVar8;
  }
  pFVar2 = (this->DataCollectionOnGPU).Object;
  pTVar4 = (pFVar2->Description).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar2->Description).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 == (FPCGDataCollectionDesc *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FPCGProxyForGPUDataCollection,1> *)(*pcVar5)();
    return pTVar8;
  }
  iVar1 = (pFVar3->DataDescs).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FPCGProxyForGPUDataCollection,1> *)(*pcVar5)();
    return pTVar8;
  }
  if ((this->DataIndexInCollection < 0) || (iVar1 <= this->DataIndexInCollection)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    local_res18 = this;
    `UPCGProxyForGPUData::GetGPUInfoMutable'::__l9::<lambda_2>::operator()(&local_res18);
    __return_storage_ptr__->Object = (FPCGProxyForGPUDataCollection *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    __return_storage_ptr__->Object = (this->DataCollectionOnGPU).Object;
    pTVar4 = (this->DataCollectionOnGPU).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// GetInputDataCollectionInfo @ 1498150b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> * __thiscall
UPCGProxyForGPUData::GetInputDataCollectionInfo
          (UPCGProxyForGPUData *this,
          TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->DataCollectionOnGPU).Object;
  pTVar1 = (this->DataCollectionOnGPU).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149817980

UClass * __cdecl UPCGProxyForGPUData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProxyForGPUData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProxyForGPUData",
               &Z_Registration_Info_UClass_UPCGProxyForGPUData.InnerSingleton,
               StaticRegisterNativesUPCGProxyForGPUData,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGProxyForGPUData>,
               InternalVTableHelperCtorCaller<UPCGProxyForGPUData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProxyForGPUData.InnerSingleton;
}

// GetUnderlyingDataType @ 14981c100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGProxyForGPUData::GetUnderlyingDataType(UPCGProxyForGPUData *this)

{
  EPCGDataType EVar1;
  FPCGDataTypeBaseId *this_00;
  undefined1 local_res8 [32];
  
  this_00 = (FPCGDataTypeBaseId *)(**(code **)(this->_padding_ + 0x2f0))(this,local_res8);
  EVar1 = FPCGDataTypeBaseId::AsLegacyType(this_00);
  return EVar1;
}

// GetUnderlyingDataTypeId @ 14981c130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPCGDataTypeBaseId __thiscall
UPCGProxyForGPUData::GetUnderlyingDataTypeId(UPCGProxyForGPUData *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPCGProxyForGPUDataCollection *pFVar3;
  FPCGDataCollectionDesc *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar8;
  FPCGDataTypeBaseId FVar9;
  FPCGDataDesc *this_00;
  TObjectPtr<UScriptStruct_const_> in_RDX;
  TArrayView<FPCGDataDesc_const_,int> local_28;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_18;
  
  pTVar8 = GetGPUInfoMutable(this,&local_18);
  pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar8->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pFVar3 != (FPCGProxyForGPUDataCollection *)0x0) {
    pFVar4 = (pFVar3->Description).Object;
    pTVar5 = (pFVar3->Description).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 != (FPCGDataCollectionDesc *)0x0) {
      local_28.DataPtr = (FPCGDataDesc *)(pFVar4->DataDescs).AllocatorInstance.Data;
      iVar1 = (pFVar4->DataDescs).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar9.Struct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>)(*pcVar6)();
        return (FPCGDataTypeBaseId)FVar9.Struct.field0_0x0;
      }
      local_28.ArrayNum = iVar1;
      this_00 = TArrayView<FPCGDataDesc_const_,int>::operator[]
                          (&local_28,this->DataIndexInCollection);
      FPCGDataTypeIdentifier::GetId(&this_00->Type);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (FPCGDataTypeBaseId)in_RDX.field0_0x0.DebugPtr;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FPCGDataTypeBaseId::FPCGDataTypeBaseId
            ((FPCGDataTypeBaseId *)in_RDX.field0_0x0,(UScriptStruct *)0x0);
  return (FPCGDataTypeBaseId)in_RDX.field0_0x0;
}

// HoldsTransientResources @ 14981db80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPCGProxyForGPUData::HoldsTransientResources(UPCGProxyForGPUData *this)

{
  return true;
}

// Initialize @ 14981e7b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPCGProxyForGPUData::Initialize
          (UPCGProxyForGPUData *this,TSharedPtr<FPCGProxyForGPUDataCollection,1> *param_1,
          int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FPCGProxyForGPUDataCollection *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->DataCollectionOnGPU).SharedReferenceCount.ReferenceController;
  (this->DataCollectionOnGPU).Object = pFVar2;
  (this->DataCollectionOnGPU).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->DataIndexInCollection = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsCacheable @ 14981fcc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPCGProxyForGPUData::IsCacheable(UPCGProxyForGPUData *this)

{
  return false;
}

// ReleaseTransientResources @ 14982a200

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPCGProxyForGPUData::ReleaseTransientResources(UPCGProxyForGPUData *this,wchar_t *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DataCollectionOnGPU != (TSharedPtr<FPCGProxyForGPUDataCollection,1> *)&local_18) {
    (this->DataCollectionOnGPU).Object = (FPCGProxyForGPUDataCollection *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DataCollectionOnGPU).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// StaticRegisterNativesUPCGProxyForGPUData @ 149847230

void __cdecl UPCGProxyForGPUData::StaticRegisterNativesUPCGProxyForGPUData(void)

{
  return;
}

// operator() @ 150545160

bool __thiscall `UPCGProxyForGPUData::GetGPUInfoMutable'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7461451060465368957>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7461451060465368957>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505451d5;
    }
  }
  bVar2 = false;
LAB_1505451d5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505457a0

bool __thiscall `UPCGProxyForGPUData::GetGPUInfoMutable'::__l9::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName FVar7;
  FName local_res10;
  FString local_28;
  
  bVar3 = false;
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7461451060465368952>);
  FVar7 = local_res10;
  if (bVar4) {
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x50) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    lVar1 = *(longlong *)(lVar1 + 0x50);
    FVar7 = *(FName *)(lVar1 + 0x28);
    lVar1 = *(longlong *)(lVar1 + 0x20);
    if (FVar7 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar7 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar7 + 8) + 1);
      UNLOCK();
    }
    if ((lVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if ((*(int *)(lVar1 + 8) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    local_res10 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7461451060465368952>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505458de;
    }
  }
  bVar4 = false;
LAB_1505458de:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar7);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

