// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14985a470

UClass * __cdecl UPCGStaticMeshResourceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshResourceData",
               &Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshResourceData,0x70,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGStaticMeshResourceData>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshResourceData>,local_res8,
               UPCGResourceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton;
}

// UPCGStaticMeshResourceData @ 14988f310

UPCGStaticMeshResourceData * __thiscall
UPCGStaticMeshResourceData::UPCGStaticMeshResourceData
          (UPCGStaticMeshResourceData *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGStaticMeshResourceData__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->StaticMesh).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// UPCGStaticMeshResourceData @ 14988f380

UPCGStaticMeshResourceData * __thiscall
UPCGStaticMeshResourceData::UPCGStaticMeshResourceData
          (UPCGStaticMeshResourceData *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGStaticMeshResourceData__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->StaticMesh).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UPCGStaticMeshResourceData @ 149891b60

void __thiscall
UPCGStaticMeshResourceData::~UPCGStaticMeshResourceData(UPCGStaticMeshResourceData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGStaticMeshResourceData__6B_;
  pvVar1 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGResourceData__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// GetDataType @ 1498b8480

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGStaticMeshResourceData::GetDataType(UPCGStaticMeshResourceData *this)

{
  return Resource;
}

// GetDataTypeId @ 1498b8f60

FPCGDataTypeBaseId * __thiscall
UPCGStaticMeshResourceData::GetDataTypeId(UPCGStaticMeshResourceData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoStaticMeshResource::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoStaticMeshResource::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoStaticMeshResource::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoStaticMeshResource::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoStaticMeshResource::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource,
                         (UObject *)pUVar3,L"PCGDataTypeInfoStaticMeshResource");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b8fe3;
  }
  else {
LAB_1498b8fe3:
    TVar4.DebugPtr =
         Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b903a;
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
    if (bVar2) goto LAB_1498b903c;
  }
LAB_1498b903a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b903c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoStaticMeshResource::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoStaticMeshResource::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoStaticMeshResource::AsId(void)'
          ::__l2::Id;
}

// GetPrivateStaticClass @ 1498bd0d0

UClass * __cdecl UPCGStaticMeshResourceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshResourceData",
               &Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshResourceData,0x70,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGStaticMeshResourceData>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshResourceData>,local_res8,
               UPCGResourceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshResourceData.InnerSingleton;
}

// GetResourcePath @ 1498c5340

FSoftObjectPath * __thiscall
UPCGStaticMeshResourceData::GetResourcePath
          (UPCGStaticMeshResourceData *this,FSoftObjectPath *__return_storage_ptr__)

{
  FSoftObjectPath::FSoftObjectPath
            (__return_storage_ptr__,(FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8);
  return __return_storage_ptr__;
}

// Initialize @ 1498cd8c0

void __thiscall
UPCGStaticMeshResourceData::Initialize
          (UPCGStaticMeshResourceData *this,TSoftObjectPtr<UStaticMesh> *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// StaticRegisterNativesUPCGStaticMeshResourceData @ 1498f6b00

void __cdecl UPCGStaticMeshResourceData::StaticRegisterNativesUPCGStaticMeshResourceData(void)

{
  return;
}

