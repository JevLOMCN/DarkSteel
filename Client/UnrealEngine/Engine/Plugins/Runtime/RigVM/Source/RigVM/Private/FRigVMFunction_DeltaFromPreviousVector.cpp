// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a12f1d0

UScriptStruct * __cdecl FRigVMFunction_DeltaFromPreviousVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector,
                         (UObject *)pUVar1,L"RigVMFunction_DeltaFromPreviousVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a12f250

UScriptStruct * __thiscall
FRigVMFunction_DeltaFromPreviousVector::GetExecuteContextStruct
          (FRigVMFunction_DeltaFromPreviousVector *this)

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

// Execute @ 14a12f530

void __thiscall
FRigVMFunction_DeltaFromPreviousVector::Execute(FRigVMFunction_DeltaFromPreviousVector *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
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
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->bIsInitialized == false) {
    (this->Delta).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Delta).field0_0x0._s_0.Y = (double)uVar5;
    (this->Delta).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = (this->Value).field0_0x0._s_0.Y;
    (this->Cache).field0_0x0._s_0.X = (this->Value).field0_0x0._s_0.X;
    (this->Cache).field0_0x0._s_0.Y = dVar2;
    (this->Cache).field0_0x0._s_0.Z = (this->Value).field0_0x0._s_0.Z;
    this->bIsInitialized = true;
  }
  dVar2 = (this->Cache).field0_0x0._s_0.Y;
  (this->PreviousValue).field0_0x0._s_0.X = (this->Cache).field0_0x0._s_0.X;
  (this->PreviousValue).field0_0x0._s_0.Y = dVar2;
  (this->PreviousValue).field0_0x0._s_0.Z = (this->Cache).field0_0x0._s_0.Z;
  dVar3 = (this->Cache).field0_0x0._s_0.Y;
  dVar4 = (this->Value).field0_0x0._s_0.Y;
  dVar2 = (this->Cache).field0_0x0._s_0.Z - (this->Value).field0_0x0._s_0.Z;
  (this->Delta).field0_0x0._s_0.X =
       (this->Cache).field0_0x0._s_0.X - (this->Value).field0_0x0._s_0.X;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar3 - dVar4;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Delta).field0_0x0 + 8) = auVar1;
  if (__real_3e45798ee0000000 < 0.0) {
    dVar2 = (this->Value).field0_0x0._s_0.Y;
    (this->Cache).field0_0x0._s_0.X = (this->Value).field0_0x0._s_0.X;
    (this->Cache).field0_0x0._s_0.Y = dVar2;
    (this->Cache).field0_0x0._s_0.Z = (this->Value).field0_0x0._s_0.Z;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19e8b0

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
FRigVMFunction_DeltaFromPreviousVector::Execute
          (FRigVMFunction_DeltaFromPreviousVector *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Delta,&this->PreviousValue,&this->Cache,
                &this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a1b90f0

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
FRigVMFunction_DeltaFromPreviousVector::RigVMExecute
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
  bool *pbVar10;
  FRigVMExecuteContext *pFVar11;
  
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
  pbVar10 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,pTVar6,pTVar2,pTVar3,pTVar9,pbVar10);
  return;
}

// StaticExecute @ 14a1db410

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
FRigVMFunction_DeltaFromPreviousVector::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,bool *param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (*param_6 == false) {
    (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = (double)uVar5;
    (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar1;
    (param_5->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar1 = (param_5->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.X = (param_5->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar1;
    (param_4->field0_0x0)._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    *param_6 = true;
  }
  dVar1 = (param_5->field0_0x0)._s_0.Y;
  (param_4->field0_0x0)._s_0.X = (param_5->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar1;
  (param_4->field0_0x0)._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  dVar1 = (param_5->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_5->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (param_5->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&param_3->field0_0x0 = auVar3;
  (param_3->field0_0x0)._s_0.Z = dVar1 - dVar2;
  uVar6 = SUB84(param_1->DeltaTime,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)param_1->DeltaTime >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar7,uVar6) &&
      (double)CONCAT44(uVar7,uVar6) != __real_3e45798ee0000000) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar1;
    (param_5->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  return;
}

