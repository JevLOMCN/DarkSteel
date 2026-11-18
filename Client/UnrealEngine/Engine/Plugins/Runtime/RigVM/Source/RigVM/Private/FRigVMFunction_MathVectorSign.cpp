// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a139010

UScriptStruct * __cdecl FRigVMFunction_MathVectorSign::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorSign.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorSign.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSign,(UObject *)pUVar1,
                         L"RigVMFunction_MathVectorSign");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSign_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorSign.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorSign.OuterSingleton;
}

// GetExecuteContextStruct @ 14a139090

UScriptStruct * __thiscall
FRigVMFunction_MathVectorSign::GetExecuteContextStruct(FRigVMFunction_MathVectorSign *this)

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

// Execute @ 14a139370

void __thiscall FRigVMFunction_MathVectorSign::Execute(FRigVMFunction_MathVectorSign *this)

{
  undefined4 uVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
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
  uVar2 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar3 = (undefined4)__real_bff0000000000000;
  uVar4 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar5 = uVar3;
  uVar6 = uVar4;
  if (0.0 < *(double *)&this->field_0x18 || *(double *)&this->field_0x18 == 0.0) {
    uVar5 = (int)__real_3ff0000000000000;
    uVar6 = uVar2;
  }
  if (0.0 < *(double *)&this->field_0x10 || *(double *)&this->field_0x10 == 0.0) {
    uVar3 = (int)__real_3ff0000000000000;
    uVar4 = uVar2;
  }
  uVar1 = __real_3ff0000000000000;
  if (*(double *)&this->field_0x8 <= 0.0 && *(double *)&this->field_0x8 != 0.0) {
    uVar1 = __real_bff0000000000000;
  }
  *(undefined8 *)&this->field_0x20 = uVar1;
  *(ulonglong *)&this->field_0x28 = CONCAT44(uVar4,uVar3);
  *(ulonglong *)&this->field_0x30 = CONCAT44(uVar6,uVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a3340

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
FRigVMFunction_MathVectorSign::Execute
          (FRigVMFunction_MathVectorSign *this,FRigVMExecuteContext *param_1)

{
  undefined4 uVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar3 = (undefined4)__real_bff0000000000000;
  uVar4 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar5 = uVar3;
  uVar6 = uVar4;
  if (0.0 < *(double *)&this->field_0x18 || *(double *)&this->field_0x18 == 0.0) {
    uVar5 = (int)__real_3ff0000000000000;
    uVar6 = uVar2;
  }
  if (0.0 < *(double *)&this->field_0x10 || *(double *)&this->field_0x10 == 0.0) {
    uVar3 = (int)__real_3ff0000000000000;
    uVar4 = uVar2;
  }
  uVar1 = __real_3ff0000000000000;
  if (*(double *)&this->field_0x8 <= 0.0 && *(double *)&this->field_0x8 != 0.0) {
    uVar1 = __real_bff0000000000000;
  }
  *(undefined8 *)&this->field_0x20 = uVar1;
  *(ulonglong *)&this->field_0x28 = CONCAT44(uVar4,uVar3);
  *(ulonglong *)&this->field_0x30 = CONCAT44(uVar6,uVar5);
  return;
}

// RigVMExecute @ 14a1d1080

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
FRigVMFunction_MathVectorSign::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  double *pdVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar1 = param_2->ArrayNum;
  if ((iVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar6 = (double *)pFVar2->Ptr;
  }
  else {
    pdVar6 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if ((iVar1 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar3 = param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar9 = (undefined4)__real_bff0000000000000;
  uVar10 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar11 = uVar9;
  uVar12 = uVar10;
  if (0.0 < pdVar6[2] || pdVar6[2] == 0.0) {
    uVar11 = (int)__real_3ff0000000000000;
    uVar12 = uVar8;
  }
  if (0.0 < pdVar6[1] || pdVar6[1] == 0.0) {
    uVar9 = (int)__real_3ff0000000000000;
    uVar10 = uVar8;
  }
  uVar7 = __real_3ff0000000000000;
  if (*pdVar6 <= 0.0 && *pdVar6 != 0.0) {
    uVar7 = __real_bff0000000000000;
  }
  *(undefined8 *)puVar3 = uVar7;
  *(ulonglong *)(puVar3 + 8) = CONCAT44(uVar10,uVar9);
  *(ulonglong *)(puVar3 + 0x10) = CONCAT44(uVar12,uVar11);
  return;
}

// StaticExecute @ 14a1e6030

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
FRigVMFunction_MathVectorSign::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double *pdVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pdVar1 = &(param_2->field0_0x0)._s_0.Z;
  uVar3 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar4 = (undefined4)__real_bff0000000000000;
  uVar5 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar6 = uVar4;
  uVar7 = uVar5;
  if (0.0 < *pdVar1 || *pdVar1 == 0.0) {
    uVar6 = (int)__real_3ff0000000000000;
    uVar7 = uVar3;
  }
  pdVar1 = &(param_2->field0_0x0)._s_0.Y;
  if (0.0 < *pdVar1 || *pdVar1 == 0.0) {
    uVar4 = (int)__real_3ff0000000000000;
    uVar5 = uVar3;
  }
  uVar2 = __real_3ff0000000000000;
  if ((param_2->field0_0x0)._s_0.X <= 0.0 && (param_2->field0_0x0)._s_0.X != 0.0) {
    uVar2 = __real_bff0000000000000;
  }
  *(undefined8 *)&param_3->field0_0x0 = uVar2;
  (param_3->field0_0x0)._s_0.Y = (double)CONCAT44(uVar5,uVar4);
  (param_3->field0_0x0)._s_0.Z = (double)CONCAT44(uVar7,uVar6);
  return;
}

