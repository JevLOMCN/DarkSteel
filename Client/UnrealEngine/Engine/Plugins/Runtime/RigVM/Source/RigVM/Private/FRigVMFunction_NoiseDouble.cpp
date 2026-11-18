// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a15c320

UScriptStruct * __cdecl FRigVMFunction_NoiseDouble::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_NoiseDouble.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_NoiseDouble.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble,(UObject *)pUVar1,
                         L"RigVMFunction_NoiseDouble");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_NoiseDouble.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_NoiseDouble.OuterSingleton;
}

// GetExecuteContextStruct @ 14a15c400

UScriptStruct * __thiscall
FRigVMFunction_NoiseDouble::GetExecuteContextStruct(FRigVMFunction_NoiseDouble *this)

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

// Execute @ 14a15cc20

void __thiscall FRigVMFunction_NoiseDouble::Execute(FRigVMFunction_NoiseDouble *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
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
  dVar1 = this->Maximum;
  dVar2 = this->Minimum;
  dVar3 = this->Speed;
  fVar4 = FMath::PerlinNoise1D((float)(this->Frequency * this->Value + this->Time));
  this->Result = ((double)fVar4 + __real_3fe0000000000000) * (dVar1 - dVar2) + dVar2;
  this->Time = dVar3 * 0.0 + this->Time;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a3480

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
FRigVMFunction_NoiseDouble::Execute(FRigVMFunction_NoiseDouble *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
  dVar1 = this->Maximum;
  dVar2 = this->Minimum;
  dVar3 = this->Speed;
  fVar4 = FMath::PerlinNoise1D((float)(this->Frequency * this->Value + this->Time));
  this->Result = ((double)fVar4 + __real_3fe0000000000000) * (dVar1 - dVar2) + dVar2;
  this->Time = dVar3 * param_1->DeltaTime + this->Time;
  return;
}

// RigVMExecute @ 14a1d18e0

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
FRigVMFunction_NoiseDouble::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  double *pdVar9;
  FRigVMMemoryHandle *pFVar10;
  FRigVMSlice *pFVar11;
  double *pdVar12;
  FRigVMExecuteContext *pFVar13;
  
  iVar6 = param_2->ArrayNum;
  if (iVar6 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar9 = (double *)pFVar10->Ptr;
  }
  else {
    pdVar9 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  dVar1 = *pdVar9;
  if (iVar6 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar9 = (double *)pFVar10[1].Ptr;
  }
  else {
    pdVar9 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  dVar2 = *pdVar9;
  if (iVar6 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar9 = (double *)pFVar10[2].Ptr;
  }
  else {
    pdVar9 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  dVar3 = *pdVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pdVar9 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  dVar4 = *pdVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pdVar9 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  dVar5 = *pdVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pdVar9 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pdVar12 = (double *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar11->Offset + pFVar11->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar13,dVar1,dVar2,dVar3,dVar4,dVar5,pdVar9,pdVar12);
  return;
}

// StaticExecute @ 14a1e63c0

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
FRigVMFunction_NoiseDouble::StaticExecute
          (FRigVMExecuteContext *param_1,double param_2,double param_3,double param_4,double param_5
          ,double param_6,double *param_7,double *param_8)

{
  float fVar1;
  
  fVar1 = FMath::PerlinNoise1D((float)(param_2 * param_4 + *param_8));
  *param_7 = ((double)fVar1 + __real_3fe0000000000000) * (param_6 - param_5) + param_5;
  *param_8 = param_3 * param_1->DeltaTime + *param_8;
  return;
}

