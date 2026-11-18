// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a143ed0

UScriptStruct * __cdecl FRigVMFunction_AccumulateVectorRange::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateVectorRange.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateVectorRange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange,
                         (UObject *)pUVar1,L"RigVMFunction_AccumulateVectorRange");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateVectorRange.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateVectorRange.OuterSingleton;
}

// GetExecuteContextStruct @ 14a143fa0

UScriptStruct * __thiscall
FRigVMFunction_AccumulateVectorRange::GetExecuteContextStruct
          (FRigVMFunction_AccumulateVectorRange *this)

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

// Initialize @ 14a144370

void __thiscall
FRigVMFunction_AccumulateVectorRange::Initialize(FRigVMFunction_AccumulateVectorRange *this)

{
  this->bIsInitialized = false;
  return;
}

// Execute @ 14a144380

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
FRigVMFunction_AccumulateVectorRange::Execute(FRigVMFunction_AccumulateVectorRange *this)

{
  FRigVMExecuteContext local_118;
  
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
  StaticExecute(&local_118,&this->Value,&this->Minimum,&this->Maximum,&this->AccumulatedMinimum,
                &this->AccumulatedMaximum,&this->bIsInitialized);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19dcc0

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
FRigVMFunction_AccumulateVectorRange::Execute
          (FRigVMFunction_AccumulateVectorRange *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Minimum,&this->Maximum,&this->AccumulatedMinimum,
                &this->AccumulatedMaximum,&this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a1b5c20

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
FRigVMFunction_AccumulateVectorRange::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigVMSlice *pFVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  bool *pbVar11;
  FRigVMExecuteContext *pFVar12;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar7->Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = (TVector<double> *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar9 = (TVector<double> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar10 = (TVector<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar11 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar12,pTVar6,pTVar2,pTVar3,pTVar9,pTVar10,pbVar11);
  return;
}

// StaticExecute @ 14a1d9af0

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
FRigVMFunction_AccumulateVectorRange::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,bool *param_7)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  
  if (*param_7 == false) {
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    (param_6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_6->field0_0x0)._s_0.Y = dVar4;
    (param_6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar4 = (param_6->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.X = (param_6->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar4;
    (param_4->field0_0x0)._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    dVar4 = (param_4->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar4;
    (param_5->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    dVar4 = (param_5->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (param_5->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar4;
    (param_3->field0_0x0)._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    *param_7 = true;
  }
  dVar4 = *(double *)&param_2->field0_0x0;
  uVar2 = SUB84(dVar4,0);
  uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar1 = *(double *)&param_5->field0_0x0;
  if (dVar1 <= dVar4) {
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  (param_5->field0_0x0)._s_0.X = (double)CONCAT44(uVar3,uVar2);
  (param_3->field0_0x0)._s_0.X = (double)CONCAT44(uVar3,uVar2);
  dVar4 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  uVar2 = SUB84(dVar4,0);
  uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar1 = *(double *)((longlong)&param_5->field0_0x0 + 8);
  if (dVar1 <= dVar4) {
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  (param_5->field0_0x0)._s_0.Y = (double)CONCAT44(uVar3,uVar2);
  (param_3->field0_0x0)._s_0.Y = (double)CONCAT44(uVar3,uVar2);
  dVar4 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar2 = SUB84(dVar4,0);
  uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar1 = *(double *)((longlong)&param_5->field0_0x0 + 0x10);
  if (dVar1 <= dVar4) {
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  (param_5->field0_0x0)._s_0.Z = (double)CONCAT44(uVar3,uVar2);
  (param_3->field0_0x0)._s_0.Z = (double)CONCAT44(uVar3,uVar2);
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_6->field0_0x0)._s_0.X;
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  (param_6->field0_0x0)._s_0.X = dVar4;
  (param_4->field0_0x0)._s_0.X = dVar4;
  dVar4 = *(double *)((longlong)&param_6->field0_0x0 + 8);
  uVar2 = SUB84(dVar4,0);
  uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar1 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (dVar4 <= dVar1) {
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  (param_6->field0_0x0)._s_0.Y = (double)CONCAT44(uVar3,uVar2);
  (param_4->field0_0x0)._s_0.Y = (double)CONCAT44(uVar3,uVar2);
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_6->field0_0x0)._s_0.Z;
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  (param_6->field0_0x0)._s_0.Z = dVar4;
  (param_4->field0_0x0)._s_0.Z = dVar4;
  return;
}

