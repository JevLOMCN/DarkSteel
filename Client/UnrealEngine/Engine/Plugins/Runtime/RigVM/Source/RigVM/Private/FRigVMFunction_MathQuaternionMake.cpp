// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a177fe0

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionMake::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMake.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMake.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionMake");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMake.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMake.OuterSingleton;
}

// GetExecuteContextStruct @ 14a178060

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionMake::GetExecuteContextStruct(FRigVMFunction_MathQuaternionMake *this)

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

// Execute @ 14a178160

void __thiscall FRigVMFunction_MathQuaternionMake::Execute(FRigVMFunction_MathQuaternionMake *this)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  fVar1 = this->W;
  (this->Result).X = (double)this->X;
  uVar2 = this->Y;
  uVar3 = this->Z;
  (this->Result).Y = (double)(float)uVar2;
  (this->Result).Z = (double)(float)uVar3;
  (this->Result).W = (double)fVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a0ed0

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
FRigVMFunction_MathQuaternionMake::Execute
          (FRigVMFunction_MathQuaternionMake *this,FRigVMExecuteContext *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = this->W;
  (this->Result).X = (double)this->X;
  uVar2 = this->Y;
  uVar3 = this->Z;
  (this->Result).Y = (double)(float)uVar2;
  (this->Result).Z = (double)(float)uVar3;
  (this->Result).W = (double)fVar1;
  return;
}

// RigVMExecute @ 14a1c7960

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
FRigVMFunction_MathQuaternionMake::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  double *pdVar10;
  
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
    pfVar8 = (float *)pFVar9->Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  fVar1 = *pfVar8;
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
    pfVar8 = (float *)pFVar9[1].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  fVar2 = *pfVar8;
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
    pfVar8 = (float *)pFVar9[2].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  fVar3 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar4 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pdVar10 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  *pdVar10 = (double)fVar1;
  pdVar10[1] = (double)fVar2;
  pdVar10[2] = (double)fVar3;
  pdVar10[3] = (double)fVar4;
  return;
}

// StaticExecute @ 14a1df3f0

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
FRigVMFunction_MathQuaternionMake::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,float param_3,float param_4,float param_5,
          TQuat<double> *param_6)

{
  param_6->X = (double)param_2;
  param_6->Y = (double)param_3;
  param_6->Z = (double)param_4;
  param_6->W = (double)param_5;
  return;
}

