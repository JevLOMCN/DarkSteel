// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4a8e60

UScriptStruct * __cdecl FRigUnit_ItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ItemArray.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemArray,(UObject *)pUVar1,
                         L"RigUnit_ItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ItemArray.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ItemArray.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a8f00

UScriptStruct * __thiscall FRigUnit_ItemArray::GetExecuteContextStruct(FRigUnit_ItemArray *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a4a8fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ItemArray::Execute(FRigUnit_ItemArray *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4a91b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ItemArray::GetUpgradeInfo
          (FRigUnit_ItemArray *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *this_00;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  FName local_88;
  FName local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  ::FName::FName(&local_88,L"Items");
  ::FName::FName(&local_80,L"Value");
  local_78._0_8_ = &local_88;
  local_78._8_8_ = &local_80;
  local_98._0_8_ = local_78;
  local_98._8_8_ = local_68;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
            ((TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *)
             local_68,(initializer_list<TPairInitializer<FName_const_&,FName_const_&>_> *)local_98);
  pUVar1 = FRigVMDispatch_Constant::StaticStruct();
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ItemArray.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemArray,(UObject *)pUVar2,
                         L"RigUnit_ItemArray");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_98._8_4_ = 1;
    local_98._0_8_ = Z_Construct_UScriptStruct_FRigUnit_ItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_ItemArray.OuterSingleton,
               (TArrayView<FRigVMCompiledInFunction_const_,int> *)local_98);
  }
  FRigVMStructUpgradeInfo::MakeFromStructToFactory
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FRigUnit_ItemArray.OuterSingleton,pUVar1,
             (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *)
             local_68);
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return __return_storage_ptr__;
}

// Execute @ 14a52a6d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ItemArray::Execute(FRigUnit_ItemArray *this,FControlRigExecuteContext *param_1)

{
  return;
}

// RigVMExecute @ 14a549c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  return;
}

// StaticExecute @ 14a582ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

