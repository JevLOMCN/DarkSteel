// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a157df0

UScriptStruct * __cdecl FRigVMFunction_MathDoubleArrayAverage::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage,
                         (UObject *)pUVar1,L"RigVMFunction_MathDoubleArrayAverage");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage.OuterSingleton;
}

// GetExecuteContextStruct @ 14a157e70

UScriptStruct * __thiscall
FRigVMFunction_MathDoubleArrayAverage::GetExecuteContextStruct
          (FRigVMFunction_MathDoubleArrayAverage *this)

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

// Execute @ 14a158090

/* WARNING: Removing unreachable block (ram,0x00014a158218) */
/* WARNING: Removing unreachable block (ram,0x00014a158229) */

void __thiscall
FRigVMFunction_MathDoubleArrayAverage::Execute(FRigVMFunction_MathDoubleArrayAverage *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  iVar2 = (this->Array).ArrayNum;
  pFVar6 = (this->Array).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->Average = 0.0;
  if (iVar2 != 0) {
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    dVar4 = 0.0;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
      dVar4 = dVar4 + *(double *)pFVar6;
      this->Average = dVar4;
    }
    this->Average = dVar4 / (double)iVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19f3d0

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
FRigVMFunction_MathDoubleArrayAverage::Execute
          (FRigVMFunction_MathDoubleArrayAverage *this,FRigVMExecuteContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  iVar2 = (this->Array).ArrayNum;
  pFVar5 = (this->Array).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->Average = 0.0;
  if (iVar2 != 0) {
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    dVar6 = 0.0;
    for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
      dVar6 = dVar6 + *(double *)pFVar5;
      this->Average = dVar6;
    }
    this->Average = dVar6 / (double)iVar2;
  }
  return;
}

// RigVMExecute @ 14a1bd360

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
FRigVMFunction_MathDoubleArrayAverage::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double *pdVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  double *pdVar8;
  double dVar9;
  
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
    puVar7 = pFVar3->Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
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
  pdVar8 = *(double **)puVar7;
  iVar2 = *(int *)(puVar7 + 8);
  pdVar4 = (double *)param_2->DataPtr[1].Ptr;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  *pdVar4 = 0.0;
  if (iVar2 != 0) {
    pdVar1 = pdVar8 + iVar2;
    dVar9 = 0.0;
    for (; pdVar8 != pdVar1; pdVar8 = pdVar8 + 1) {
      dVar9 = dVar9 + *pdVar8;
      *pdVar4 = dVar9;
    }
    *pdVar4 = dVar9 / (double)iVar2;
  }
  return;
}

// StaticExecute @ 14a1dd400

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
FRigVMFunction_MathDoubleArrayAverage::StaticExecute
          (FRigVMExecuteContext *param_1,TArrayView<double_const_,int> *param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  
  *param_3 = 0.0;
  if (param_2->ArrayNum != 0) {
    pdVar2 = param_2->DataPtr;
    dVar3 = 0.0;
    pdVar1 = pdVar2 + param_2->ArrayNum;
    for (; pdVar2 != pdVar1; pdVar2 = pdVar2 + 1) {
      dVar3 = dVar3 + *pdVar2;
      *param_3 = dVar3;
    }
    *param_3 = dVar3 / (double)param_2->ArrayNum;
  }
  return;
}

