// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a14fcd0

UScriptStruct * __cdecl FRigVMFunction_MathDoubleAsin::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleAsin.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleAsin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAsin,(UObject *)pUVar1,
                         L"RigVMFunction_MathDoubleAsin");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAsin_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleAsin.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleAsin.OuterSingleton;
}

// GetExecuteContextStruct @ 14a14fd90

UScriptStruct * __thiscall
FRigVMFunction_MathDoubleAsin::GetExecuteContextStruct(FRigVMFunction_MathDoubleAsin *this)

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

// Execute @ 14a14ff80

void __thiscall FRigVMFunction_MathDoubleAsin::Execute(FRigVMFunction_MathDoubleAsin *this)

{
  double dVar1;
  
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
  dVar1 = *(double *)&this->field_0x8;
  if ((__real_bff0000000000000 <= dVar1) && (dVar1 <= __real_3ff0000000000000)) {
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
    dVar1 = asin(dVar1);
    *(double *)&this->field_0x10 = dVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19f510

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
FRigVMFunction_MathDoubleAsin::Execute
          (FRigVMFunction_MathDoubleAsin *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&this->field_0x8;
  if ((__real_bff0000000000000 <= dVar1) && (dVar1 <= __real_3ff0000000000000)) {
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
    dVar1 = asin(dVar1);
    *(double *)&this->field_0x10 = dVar1;
    return;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// RigVMExecute @ 14a1bd620

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
FRigVMFunction_MathDoubleAsin::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  double *pdVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar5 = (double *)pFVar2->Ptr;
  }
  else {
    pdVar5 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  dVar6 = *pdVar5;
  uVar7 = SUB84(dVar6,0);
  uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar5 = (double *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  if ((dVar6 < __real_bff0000000000000) || (__real_3ff0000000000000 < dVar6)) {
    dVar6 = 0.0;
  }
  else {
    if (__real_3ff0000000000000 <= dVar6) {
      uVar7 = SUB84(__real_3ff0000000000000,0);
      uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    dVar6 = asin((double)CONCAT44(uVar8,uVar7));
  }
  *pdVar5 = dVar6;
  return;
}

// StaticExecute @ 14a1dd490

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
FRigVMFunction_MathDoubleAsin::StaticExecute
          (FRigVMExecuteContext *param_1,double param_2,double *param_3)

{
  double dVar1;
  
  if ((__real_bff0000000000000 <= param_2) && (param_2 <= __real_3ff0000000000000)) {
    if (__real_3ff0000000000000 <= param_2) {
      param_2 = __real_3ff0000000000000;
    }
    dVar1 = asin(param_2);
    *param_3 = dVar1;
    return;
  }
  *param_3 = 0.0;
  return;
}

