// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a17d440

UScriptStruct * __cdecl FRigVMFunction_MathColorMake::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMake.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMake.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake,(UObject *)pUVar1,
                         L"RigVMFunction_MathColorMake");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMake.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMake.OuterSingleton;
}

// GetExecuteContextStruct @ 14a17d4c0

UScriptStruct * __thiscall
FRigVMFunction_MathColorMake::GetExecuteContextStruct(FRigVMFunction_MathColorMake *this)

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

// Execute @ 14a17db10

void __thiscall FRigVMFunction_MathColorMake::Execute(FRigVMFunction_MathColorMake *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
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
  fVar1 = this->G;
  fVar2 = this->B;
  fVar3 = this->A;
  (this->Result).field0_0x0._s_0.R = this->R;
  (this->Result).field0_0x0._s_0.G = fVar1;
  (this->Result).field0_0x0._s_0.B = fVar2;
  (this->Result).field0_0x0._s_0.A = fVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a17dd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathColorMake::GetUpgradeInfo
          (FRigVMFunction_MathColorMake *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *this_00;
  undefined1 auStack_c8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  FName local_70;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  ::FName::FName((FName *)(local_88 + 0x10),L"Result");
  ::FName::FName((FName *)(local_88 + 0x18),L"Value");
  local_88._0_8_ = local_88 + 0x10;
  local_88._8_8_ = local_88 + 0x18;
  local_98._0_8_ = local_88;
  local_98._8_8_ = local_88 + 0x10;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
            ((TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *)
             local_68,(initializer_list<TPairInitializer<FName_const_&,FName_const_&>_> *)local_98);
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_Constant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_Constant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_Constant,(UObject *)pUVar2,
                         L"RigVMDispatch_Constant");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FRigVMDispatch_Constant.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMake.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMake.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake,(UObject *)pUVar2,
                         L"RigVMFunction_MathColorMake");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_98._8_4_ = 1;
    local_98._0_8_ = Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMake.OuterSingleton
               ,(TArrayView<FRigVMCompiledInFunction_const_,int> *)local_98);
  }
  FRigVMStructUpgradeInfo::MakeFromStructToFactory
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMake.OuterSingleton,pUVar1,
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
  ::FString::FString((FString *)local_88,L"Value.R");
  ::FString::FString((FString *)local_98,L"R");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_98,(FString *)local_88,true,true);
  if ((FRigVMCompiledInFunction *)local_98._0_8_ != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  ::FString::FString((FString *)local_88,L"Value.G");
  ::FString::FString((FString *)local_98,L"G");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_98,(FString *)local_88,true,true);
  if ((FRigVMCompiledInFunction *)local_98._0_8_ != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  ::FString::FString((FString *)local_88,L"Value.B");
  ::FString::FString((FString *)local_98,L"B");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_98,(FString *)local_88,true,true);
  if ((FRigVMCompiledInFunction *)local_98._0_8_ != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  ::FString::FString((FString *)local_88,L"Value.A");
  ::FString::FString((FString *)local_98,L"A");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_98,(FString *)local_88,true,true);
  if ((FRigVMCompiledInFunction *)local_98._0_8_ != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a19f230

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
FRigVMFunction_MathColorMake::Execute
          (FRigVMFunction_MathColorMake *this,FRigVMExecuteContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = this->G;
  fVar2 = this->B;
  fVar3 = this->A;
  (this->Result).field0_0x0._s_0.R = this->R;
  (this->Result).field0_0x0._s_0.G = fVar1;
  (this->Result).field0_0x0._s_0.B = fVar2;
  (this->Result).field0_0x0._s_0.A = fVar3;
  return;
}

// RigVMExecute @ 14a1bc910

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
FRigVMFunction_MathColorMake::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uchar *puVar8;
  FRigVMMemoryHandle *pFVar9;
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar9->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  uVar1 = *(undefined4 *)puVar8;
  if (iVar5 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar9[1].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  uVar2 = *(undefined4 *)puVar8;
  if (iVar5 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar9[2].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  uVar3 = *(undefined4 *)puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  uVar4 = *(undefined4 *)puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  *(undefined4 *)puVar8 = uVar1;
  *(undefined4 *)(puVar8 + 4) = uVar2;
  *(undefined4 *)(puVar8 + 8) = uVar3;
  *(undefined4 *)(puVar8 + 0xc) = uVar4;
  return;
}

// StaticExecute @ 14a1dd0b0

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
FRigVMFunction_MathColorMake::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,float param_3,float param_4,float param_5,
          FLinearColor *param_6)

{
  (param_6->field0_0x0)._s_0.R = param_2;
  (param_6->field0_0x0)._s_0.G = param_3;
  (param_6->field0_0x0)._s_0.B = param_4;
  (param_6->field0_0x0)._s_0.A = param_5;
  return;
}

