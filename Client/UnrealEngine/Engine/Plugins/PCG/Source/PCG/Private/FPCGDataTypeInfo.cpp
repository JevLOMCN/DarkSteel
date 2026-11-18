// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// GetAssociatedLegacyType @ 14978abe0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall FPCGDataTypeInfo::GetAssociatedLegacyType(FPCGDataTypeInfo *this)

{
  return Any;
}

// IsCompatibleForSubtype @ 14978abf0

EPCGDataTypeCompatibilityResult __thiscall
FPCGDataTypeInfo::IsCompatibleForSubtype
          (FPCGDataTypeInfo *this,FPCGDataTypeIdentifier *param_1,FPCGDataTypeIdentifier *param_2,
          FText *param_3)

{
  return Compatible;
}

// ~FPCGDataTypeInfo @ 1497e2a40

void __thiscall FPCGDataTypeInfo::~FPCGDataTypeInfo(FPCGDataTypeInfo *this)

{
  return;
}

// StaticStruct @ 1498581e0

UScriptStruct * __cdecl FPCGDataTypeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar1,
                         L"PCGDataTypeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton;
}

// GetAssociatedClass @ 149858220

TSubclassOf<UPCGData> __thiscall FPCGDataTypeInfo::GetAssociatedClass(FPCGDataTypeInfo *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UPCGData_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// SupportsConversionFrom @ 149858260

bool __thiscall
FPCGDataTypeInfo::SupportsConversionFrom
          (FPCGDataTypeInfo *this,FPCGDataTypeIdentifier *param_1,FPCGDataTypeIdentifier *param_2,
          TSubclassOf<UPCGSettings> *param_3,FText *param_4)

{
  return false;
}

// SupportsConversionTo @ 1498582c0

bool __thiscall
FPCGDataTypeInfo::SupportsConversionTo
          (FPCGDataTypeInfo *this,FPCGDataTypeIdentifier *param_1,FPCGDataTypeIdentifier *param_2,
          TSubclassOf<UPCGSettings> *param_3,FText *param_4)

{
  return false;
}

// AddConversionNodesFrom @ 149858350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> * __thiscall
FPCGDataTypeInfo::AddConversionNodesFrom
          (FPCGDataTypeInfo *this,
          TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1,FPCGDataTypeIdentifier *param_2,UPCGGraph *param_3,
          UPCGPin *param_4,UPCGPin *param_5)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  char cVar4;
  UClass *pUVar5;
  UPCGNode *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_e8 [32];
  UObject *local_a8;
  TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> local_a0;
  UObject *local_90 [3];
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8 = (UObject *)0x0;
  cVar4 = (**(code **)((longlong)*this + 0x20))(this,param_1,param_2,&local_a8);
  pUVar3 = local_a8;
  if (((cVar4 != '\0') && (local_a8 != (UObject *)0x0)) &&
     (pUVar5 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)&pUVar3[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (local_a8 != (UObject *)0x0)) {
      local_78._0_8_ = 0;
      local_50 = (longlong *)0x0;
      local_90[0] = local_a8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_a8);
      }
      pUVar6 = FPCGSubgraphHelpers::SpawnNodeAndConnect
                         (param_3,param_4,param_5,(TSubclassOf<UPCGSettings>)local_90,
                          (TFunction<bool___cdecl(UPCGSettings_*)> *)local_78);
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_a0.AllocatorInstance,1,&local_a0.ArrayMax);
      *(UPCGNode **)local_a0.AllocatorInstance.Data = pUVar6;
      TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_>::
      TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_>(__return_storage_ptr__,&local_a0);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_78._0_8_ == 0) {
        return __return_storage_ptr__;
      }
      plVar7 = (longlong *)(local_78 + 0x10);
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum = 0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayMax = -1;
  return __return_storage_ptr__;
}

// AddConversionNodesTo @ 149858520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> * __thiscall
FPCGDataTypeInfo::AddConversionNodesTo
          (FPCGDataTypeInfo *this,
          TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1,FPCGDataTypeIdentifier *param_2,UPCGGraph *param_3,
          UPCGPin *param_4,UPCGPin *param_5)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  char cVar4;
  UClass *pUVar5;
  UPCGNode *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_e8 [32];
  UObject *local_a8;
  TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> local_a0;
  UObject *local_90 [3];
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8 = (UObject *)0x0;
  cVar4 = (**(code **)((longlong)*this + 0x28))(this,param_1,param_2,&local_a8);
  pUVar3 = local_a8;
  if (((cVar4 != '\0') && (local_a8 != (UObject *)0x0)) &&
     (pUVar5 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)&pUVar3[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (local_a8 != (UObject *)0x0)) {
      local_78._0_8_ = 0;
      local_50 = (longlong *)0x0;
      local_90[0] = local_a8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_a8);
      }
      pUVar6 = FPCGSubgraphHelpers::SpawnNodeAndConnect
                         (param_3,param_4,param_5,(TSubclassOf<UPCGSettings>)local_90,
                          (TFunction<bool___cdecl(UPCGSettings_*)> *)local_78);
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_a0.AllocatorInstance,1,&local_a0.ArrayMax);
      *(UPCGNode **)local_a0.AllocatorInstance.Data = pUVar6;
      TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_>::
      TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_>(__return_storage_ptr__,&local_a0);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_78._0_8_ == 0) {
        return __return_storage_ptr__;
      }
      plVar7 = (longlong *)(local_78 + 0x10);
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum = 0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayMax = -1;
  return __return_storage_ptr__;
}

// AsId @ 14989f280

FPCGDataTypeBaseId * __cdecl FPCGDataTypeInfo::AsId(void)

{
  UPackage *pUVar1;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar1,
                         L"PCGDataTypeInfo");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14989f2fe;
  }
  else {
LAB_14989f2fe:
    `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'::
    __l2::Id.Struct.field0_0x0 =
         (TObjectPtr<UScriptStruct_const_>)
         (TObjectPtr<UScriptStruct_const_>)
         Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton;
    if ((longlong *)
        *(undefined1 **)
         ((Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_ +
         (longlong)
         (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_ * 8) ==
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)
    goto LAB_14989f312;
  }
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'::
  __l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>_u_0)0x0;
LAB_14989f312:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
      ::__l2::Id.Struct.field0_0x0.DebugPtr != (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
               ::__l2::Id.Struct.field0_0x0);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
          ::__l2::Id;
}

// GetStaticAssociatedClass @ 1498c6ee0

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfo::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = Z_Construct_UClass_UPCGData_NoRegister();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

