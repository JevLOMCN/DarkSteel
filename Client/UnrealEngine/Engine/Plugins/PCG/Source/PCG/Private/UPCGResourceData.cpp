// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149859090

UClass * __cdecl UPCGResourceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGResourceData",
               &Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton,
               StaticRegisterNativesUPCGResourceData,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGResourceData>,
               InternalVTableHelperCtorCaller<UPCGResourceData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton;
}

// UPCGResourceData @ 14988ed00

UPCGResourceData * __thiscall
UPCGResourceData::UPCGResourceData(UPCGResourceData *this,FVTableHelper *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  *(undefined ***)this = &___7UPCGResourceData__6B_;
  return this;
}

// UPCGResourceData @ 14988ed30

UPCGResourceData * __thiscall
UPCGResourceData::UPCGResourceData(UPCGResourceData *this,FObjectInitializer *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  *(undefined ***)this = &___7UPCGResourceData__6B_;
  return this;
}

// ~UPCGResourceData @ 149891940

void __thiscall UPCGResourceData::~UPCGResourceData(UPCGResourceData *this)

{
  *(undefined ***)this = &___7UPCGResourceData__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// GetDataType @ 1498b8440

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGResourceData::GetDataType(UPCGResourceData *this)

{
  return Resource;
}

// GetDataTypeId @ 1498b8d10

FPCGDataTypeBaseId * __thiscall UPCGResourceData::GetDataTypeId(UPCGResourceData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoResource::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoResource::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoResource::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoResource::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoResource::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoResource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoResource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoResource,(UObject *)pUVar3,
                         L"PCGDataTypeInfoResource");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoResource.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b8d93;
  }
  else {
LAB_1498b8d93:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoResource.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b8dea;
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
    if (bVar2) goto LAB_1498b8dec;
  }
LAB_1498b8dea:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b8dec:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoResource::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoResource::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoResource::AsId(void)'
          ::__l2::Id;
}

// GetPrivateStaticClass @ 1498bcc50

UClass * __cdecl UPCGResourceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGResourceData",
               &Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton,
               StaticRegisterNativesUPCGResourceData,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGResourceData>,
               InternalVTableHelperCtorCaller<UPCGResourceData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGResourceData.InnerSingleton;
}

// GetResourcePath @ 1498c52f0

FSoftObjectPath * __thiscall
UPCGResourceData::GetResourcePath(UPCGResourceData *this,FSoftObjectPath *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGResourceData.h"
             ,0x24,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// RequestResourceLoad @ 1498d6ce0

TSharedPtr<FStreamableHandle,1> * __thiscall
UPCGResourceData::RequestResourceLoad
          (UPCGResourceData *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          bool param_1)

{
  UAssetManager *pUVar1;
  FName *pFVar2;
  FSoftObjectPath *pFVar3;
  undefined8 local_res20;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FSourceLocation local_78;
  FSoftObjectPath local_58;
  undefined1 local_38 [16];
  void *local_28;
  
  if (param_1) {
    pUVar1 = UAssetManager::Get();
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_res20 = 0;
    pFVar3 = (FSoftObjectPath *)(**(code **)(*(longlong *)this + 0x380))(this,local_38);
    local_78.Impl._Line = 0x14;
    local_78.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGResourceData.cpp"
    ;
    local_78.Impl._Column = 0x30;
    local_78.Impl._Function =
         "class TSharedPtr<struct FStreamableHandle,1> __cdecl UPCGResourceData::RequestResourceLoad(bool) const"
    ;
    FStreamableManager::RequestAsyncLoad<FSoftObjectPath,std::nullptr_t,void>
              (&pUVar1->StreamableManager,__return_storage_ptr__,pFVar3,(void **)&local_res20,0,
               false,false,&local_88,&local_78);
  }
  else {
    pUVar1 = UAssetManager::Get();
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    pFVar2 = (FName *)(**(code **)(*(longlong *)this + 0x380))(this,local_38);
    local_78.Impl._Line = 0x10;
    local_78.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGResourceData.cpp"
    ;
    local_78.Impl._Column = 0x30;
    local_78.Impl._Function =
         "class TSharedPtr<struct FStreamableHandle,1> __cdecl UPCGResourceData::RequestResourceLoad(bool) const"
    ;
    local_58.SubPathString.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(pFVar2 + 2);
    local_58.AssetPath.PackageName = *pFVar2;
    local_58.AssetPath.AssetName = pFVar2[1];
    pFVar2[2].ComparisonIndex = 0;
    pFVar2[2].Number = 0;
    local_58.SubPathString.Data.ArrayNum = pFVar2[3].ComparisonIndex.Value;
    local_58.SubPathString.Data.ArrayMax = pFVar2[3].Number;
    pFVar2[3].ComparisonIndex = 0;
    pFVar2[3].Number = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_98.AllocatorInstance.Data,&local_58,1)
    ;
    FStreamableManager::RequestSyncLoadInternal
              (&pUVar1->StreamableManager,__return_storage_ptr__,&local_98,false,&local_88,&local_78
              );
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if ((FSoftObjectPath *)local_98.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if ((FName)local_58.SubPathString.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGResourceData @ 1498f6a40

void __cdecl UPCGResourceData::StaticRegisterNativesUPCGResourceData(void)

{
  return;
}

