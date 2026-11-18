// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a143d90

UScriptStruct * __cdecl FRigVMFunction_MathDoubleSign::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleSign.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleSign.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSign,(UObject *)pUVar1,
                         L"RigVMFunction_MathDoubleSign");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSign_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleSign.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleSign.OuterSingleton;
}

// GetExecuteContextStruct @ 14a143e20

UScriptStruct * __thiscall
FRigVMFunction_MathDoubleSign::GetExecuteContextStruct(FRigVMFunction_MathDoubleSign *this)

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

// Execute @ 14a144010

void __thiscall FRigVMFunction_MathDoubleSign::Execute(FRigVMFunction_MathDoubleSign *this)

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
  if (*(double *)&this->field_0x8 <= 0.0 && *(double *)&this->field_0x8 != 0.0) {
    *(undefined8 *)&this->field_0x10 = __real_bff0000000000000;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  *(undefined8 *)&this->field_0x10 = __real_3ff0000000000000;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19fae0

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
FRigVMFunction_MathDoubleSign::Execute
          (FRigVMFunction_MathDoubleSign *this,FRigVMExecuteContext *param_1)

{
  if (*(double *)&this->field_0x8 <= 0.0 && *(double *)&this->field_0x8 != 0.0) {
    *(undefined8 *)&this->field_0x10 = __real_bff0000000000000;
    return;
  }
  *(undefined8 *)&this->field_0x10 = __real_3ff0000000000000;
  return;
}

// RigVMExecute @ 14a1c0150

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
FRigVMFunction_MathDoubleSign::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double dVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  double *pdVar7;
  undefined8 uVar8;
  
  iVar2 = param_2->ArrayNum;
  if ((iVar2 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar7 = (double *)pFVar3->Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  dVar1 = *pdVar7;
  if ((iVar2 < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar4 = param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar8 = __real_3ff0000000000000;
  if (dVar1 < 0.0) {
    uVar8 = __real_bff0000000000000;
  }
  *(undefined8 *)puVar4 = uVar8;
  return;
}

// StaticExecute @ 14a1ddb70

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
FRigVMFunction_MathDoubleSign::StaticExecute
          (FRigVMExecuteContext *param_1,double param_2,double *param_3)

{
  if (param_2 < 0.0) {
    *param_3 = __real_bff0000000000000;
    return;
  }
  *param_3 = __real_3ff0000000000000;
  return;
}

