// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13f3a0

UScriptStruct * __cdecl FRigVMFunction_MathVectorSelectBool::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorSelectBool.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorSelectBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSelectBool,
                         (UObject *)pUVar1,L"RigVMFunction_MathVectorSelectBool");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSelectBool_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorSelectBool.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorSelectBool.OuterSingleton;
}

// GetExecuteContextStruct @ 14a13f470

UScriptStruct * __thiscall
FRigVMFunction_MathVectorSelectBool::GetExecuteContextStruct
          (FRigVMFunction_MathVectorSelectBool *this)

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

// Execute @ 14a13f710

void __thiscall
FRigVMFunction_MathVectorSelectBool::Execute(FRigVMFunction_MathVectorSelectBool *this)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  
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
  lVar3 = 0x28;
  if (this->Condition != false) {
    lVar3 = 0x10;
  }
  pdVar1 = (double *)((longlong)&this->_padding_ + lVar3);
  dVar2 = pdVar1[1];
  (this->Result).field0_0x0._s_0.X = *pdVar1;
  (this->Result).field0_0x0._s_0.Y = dVar2;
  (this->Result).field0_0x0._s_0.Z = *(double *)((longlong)&(this->IfTrue).field0_0x0 + lVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a13f890

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathVectorSelectBool::GetUpgradeInfo
          (FRigVMFunction_MathVectorSelectBool *this,FRigVMStructUpgradeInfo *__return_storage_ptr__
          )

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a1a32f0

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
FRigVMFunction_MathVectorSelectBool::Execute
          (FRigVMFunction_MathVectorSelectBool *this,FRigVMExecuteContext *param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  
  lVar3 = 0x28;
  if (this->Condition != false) {
    lVar3 = 0x10;
  }
  pdVar1 = (double *)((longlong)&this->_padding_ + lVar3);
  dVar2 = pdVar1[1];
  (this->Result).field0_0x0._s_0.X = *pdVar1;
  (this->Result).field0_0x0._s_0.Y = dVar2;
  (this->Result).field0_0x0._s_0.Z = *(double *)((longlong)&(this->IfTrue).field0_0x0 + lVar3);
  return;
}

// RigVMExecute @ 14a1d0d70

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
FRigVMFunction_MathVectorSelectBool::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uchar *puVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar8->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  uVar1 = *puVar6;
  if (iVar2 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar8[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  if (uVar1 != '\0') {
    puVar7 = puVar6;
  }
  uVar4 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)puVar9 = *(undefined8 *)puVar7;
  *(undefined8 *)(puVar9 + 8) = uVar4;
  *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
  return;
}

// StaticExecute @ 14a1e5f00

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
FRigVMFunction_MathVectorSelectBool::StaticExecute
          (FRigVMExecuteContext *param_1,bool param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  
  if (param_2) {
    param_4 = param_3;
  }
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  (param_5->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
  (param_5->field0_0x0)._s_0.Y = dVar1;
  (param_5->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  return;
}

