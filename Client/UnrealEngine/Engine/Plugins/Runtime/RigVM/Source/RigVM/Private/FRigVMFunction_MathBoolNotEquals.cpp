// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a16e1a0

UScriptStruct * __cdecl FRigVMFunction_MathBoolNotEquals::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolNotEquals.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolNotEquals.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals,
                         (UObject *)pUVar1,L"RigVMFunction_MathBoolNotEquals");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolNotEquals.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolNotEquals.OuterSingleton;
}

// GetExecuteContextStruct @ 14a16e220

UScriptStruct * __thiscall
FRigVMFunction_MathBoolNotEquals::GetExecuteContextStruct(FRigVMFunction_MathBoolNotEquals *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a16e2b0

void __thiscall FRigVMFunction_MathBoolNotEquals::Execute(FRigVMFunction_MathBoolNotEquals *this)

{
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
  this->Result = this->A != this->B;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a16e3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathBoolNotEquals::GetUpgradeInfo
          (FRigVMFunction_MathBoolNotEquals *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FRigVMRegistry_RWLock *this_00;
  undefined1 auStackY_a8 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_78;
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals,(UObject *)pUVar3,
                         L"RigVMDispatch_CoreNotEquals");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolNotEquals.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolNotEquals.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals,
                         (UObject *)pUVar3,L"RigVMFunction_MathBoolNotEquals");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_78.ArrayNum = 1;
    local_78.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolNotEquals.
                       OuterSingleton,&local_78);
  }
  FRigVMStructUpgradeInfo::MakeFromStructToFactory
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolNotEquals.OuterSingleton,
             pUVar2,(TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a19ed00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_MathBoolNotEquals::Execute
          (FRigVMFunction_MathBoolNotEquals *this,FRigVMExecuteContext *param_1)

{
  this->Result = this->A != this->B;
  return;
}

// RigVMExecute @ 14a1bac00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathBoolNotEquals::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  FRigVMMemoryHandle *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar4->Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal(pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property)
    ;
  }
  uVar1 = *puVar7;
  if (iVar3 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar4[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar4[1].PropertyPath,pFVar4[1].Ptr,pFVar4[1].Property);
  }
  uVar2 = *puVar7;
  if (iVar3 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar7 = param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  *puVar7 = uVar1 != uVar2;
  return;
}

// StaticExecute @ 14a1dc630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathBoolNotEquals::StaticExecute
          (FRigVMExecuteContext *param_1,bool param_2,bool param_3,bool *param_4)

{
  *param_4 = param_2 != param_3;
  return;
}

