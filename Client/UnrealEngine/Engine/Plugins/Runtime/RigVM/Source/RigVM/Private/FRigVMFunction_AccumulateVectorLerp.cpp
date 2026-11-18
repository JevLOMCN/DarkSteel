// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13f9d0

UScriptStruct * __cdecl FRigVMFunction_AccumulateVectorLerp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateVectorLerp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateVectorLerp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp,
                         (UObject *)pUVar1,L"RigVMFunction_AccumulateVectorLerp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateVectorLerp.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateVectorLerp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a13fa50

UScriptStruct * __thiscall
FRigVMFunction_AccumulateVectorLerp::GetExecuteContextStruct
          (FRigVMFunction_AccumulateVectorLerp *this)

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

// Initialize @ 14a13fd50

void __thiscall
FRigVMFunction_AccumulateVectorLerp::Initialize(FRigVMFunction_AccumulateVectorLerp *this)

{
  this->bIsInitialized = false;
  return;
}

// Execute @ 14a13fd70

void __thiscall
FRigVMFunction_AccumulateVectorLerp::Execute(FRigVMFunction_AccumulateVectorLerp *this)

{
  float fVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
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
  bVar2 = this->bIntegrateDeltaTime;
  fVar1 = this->Blend;
  if (this->bIsInitialized == false) {
    dVar8 = (this->InitialValue).field0_0x0._s_0.Y;
    (this->AccumulatedValue).field0_0x0._s_0.X = (this->InitialValue).field0_0x0._s_0.X;
    (this->AccumulatedValue).field0_0x0._s_0.Y = dVar8;
    (this->AccumulatedValue).field0_0x0._s_0.Z = (this->InitialValue).field0_0x0._s_0.Z;
    dVar8 = (this->AccumulatedValue).field0_0x0._s_0.Y;
    (this->Result).field0_0x0._s_0.X = (this->AccumulatedValue).field0_0x0._s_0.X;
    (this->Result).field0_0x0._s_0.Y = dVar8;
    (this->Result).field0_0x0._s_0.Z = (this->AccumulatedValue).field0_0x0._s_0.Z;
    this->bIsInitialized = true;
  }
  dVar8 = (double)fVar1;
  if (bVar2 != false) {
    dVar8 = dVar8 * 0.0;
  }
  dVar5 = (this->AccumulatedValue).field0_0x0._s_0.Y;
  dVar4 = (this->AccumulatedValue).field0_0x0._s_0.Z;
  dVar6 = (this->TargetValue).field0_0x0._s_0.Y;
  dVar7 = (this->TargetValue).field0_0x0._s_0.Z;
  if (__real_3ff0000000000000 <= dVar8) {
    dVar8 = __real_3ff0000000000000;
  }
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  (this->AccumulatedValue).field0_0x0._s_0.X =
       ((this->TargetValue).field0_0x0._s_0.X - (this->AccumulatedValue).field0_0x0._s_0.X) * dVar8
       + (this->AccumulatedValue).field0_0x0._s_0.X;
  dVar4 = (dVar7 - dVar4) * dVar8 + dVar4;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (dVar6 - dVar5) * dVar8 + dVar5;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->AccumulatedValue).field0_0x0 + 8) = auVar3;
  dVar8 = (this->AccumulatedValue).field0_0x0._s_0.Y;
  (this->Result).field0_0x0._s_0.X = (this->AccumulatedValue).field0_0x0._s_0.X;
  (this->Result).field0_0x0._s_0.Y = dVar8;
  (this->Result).field0_0x0._s_0.Z = (this->AccumulatedValue).field0_0x0._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19dc20

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
FRigVMFunction_AccumulateVectorLerp::Execute
          (FRigVMFunction_AccumulateVectorLerp *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->TargetValue,&this->InitialValue,this->Blend,this->bIntegrateDeltaTime
                ,&this->Result,&this->AccumulatedValue,&this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a1b57d0

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
FRigVMFunction_AccumulateVectorLerp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  TVector<double> *pTVar10;
  FRigVMSlice *pFVar11;
  TVector<double> *pTVar12;
  bool *pbVar13;
  FRigVMExecuteContext *pFVar14;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TVector<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar12 = (TVector<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar13 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar14,pTVar5,pTVar6,fVar1,bVar4,pTVar10,pTVar12,pbVar13);
  return;
}

// StaticExecute @ 14a1d9950

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
FRigVMFunction_AccumulateVectorLerp::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          float param_4,bool param_5,TVector<double> *param_6,TVector<double> *param_7,bool *param_8
          )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  
  if (*param_8 == false) {
    dVar7 = (param_3->field0_0x0)._s_0.Y;
    (param_7->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_7->field0_0x0)._s_0.Y = dVar7;
    (param_7->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    dVar7 = (param_7->field0_0x0)._s_0.Y;
    (param_6->field0_0x0)._s_0.X = (param_7->field0_0x0)._s_0.X;
    (param_6->field0_0x0)._s_0.Y = dVar7;
    (param_6->field0_0x0)._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    *param_8 = true;
  }
  dVar7 = (double)param_4;
  if (param_5) {
    dVar7 = dVar7 * param_1->DeltaTime;
  }
  if (__real_3ff0000000000000 <= dVar7) {
    dVar7 = __real_3ff0000000000000;
  }
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  dVar6 = ((param_2->field0_0x0)._s_0.Y - (param_7->field0_0x0)._s_0.Y) * dVar7 +
          (param_7->field0_0x0)._s_0.Y;
  dVar3 = ((param_2->field0_0x0)._s_0.X - (param_7->field0_0x0)._s_0.X) * dVar7 +
          (param_7->field0_0x0)._s_0.X;
  uVar4 = SUB84(dVar6,0);
  uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
  (param_7->field0_0x0)._s_0.Z =
       ((param_2->field0_0x0)._s_0.Z - (param_7->field0_0x0)._s_0.Z) * dVar7 +
       (param_7->field0_0x0)._s_0.Z;
  auVar1._8_4_ = uVar4;
  auVar1._0_8_ = dVar3;
  auVar1._12_4_ = uVar5;
  *(undefined1 (*) [16])&param_7->field0_0x0 = auVar1;
  auVar2._8_4_ = uVar4;
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = uVar5;
  *(undefined1 (*) [16])&param_6->field0_0x0 = auVar2;
  (param_6->field0_0x0)._s_0.Z = (param_7->field0_0x0)._s_0.Z;
  return;
}

