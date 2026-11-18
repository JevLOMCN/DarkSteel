// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13f2d0

UScriptStruct * __cdecl FRigVMFunction_KalmanVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector,(UObject *)pUVar1,
                         L"RigVMFunction_KalmanVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanVector.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a13f390

UScriptStruct * __thiscall
FRigVMFunction_KalmanVector::GetExecuteContextStruct(FRigVMFunction_KalmanVector *this)

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

// Initialize @ 14a13f7b0

void __thiscall FRigVMFunction_KalmanVector::Initialize(FRigVMFunction_KalmanVector *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  return;
}

// Execute @ 14a13f7f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_KalmanVector::Execute(FRigVMFunction_KalmanVector *this)

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
  StaticExecute(&local_118,&this->Value,this->BufferSize,&this->Result,&this->Buffer,
                &this->LastInsertIndex);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19eb10

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
FRigVMFunction_KalmanVector::Execute
          (FRigVMFunction_KalmanVector *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->BufferSize,&this->Result,&this->Buffer,
                &this->LastInsertIndex);
  return;
}

// RigVMExecute @ 14a1ba070

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
FRigVMFunction_KalmanVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  int *piVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar10;
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar8->Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar7 = (int *)pFVar8[1].Ptr;
  }
  else {
    piVar7 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  iVar2 = *piVar7;
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
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar10 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar7 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,pTVar6,iVar2,pTVar3,pTVar10,piVar7);
  return;
}

// StaticExecute @ 14a1dc2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigVMFunction_KalmanVector::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,int param_3,
          TVector<double> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,int *param_6)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  int iVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  undefined1 local_res18 [8];
  undefined1 local_58 [48];
  
  if (param_3 < 1) {
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar5;
    (param_4->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    return;
  }
  if (param_5->ArrayNum != param_3) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_5,param_3,Default);
    iVar13 = param_5->ArrayNum;
    pFVar14 = (param_5->AllocatorInstance).Data;
    pFVar4 = pFVar14 + (longlong)iVar13 * 0x18;
    while( true ) {
      if (param_5->ArrayNum != iVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar14 == pFVar4) break;
      *(undefined8 *)pFVar14 = 0x47efffffe0000000;
      pFVar14 = pFVar14 + 0x18;
      *param_6 = -1;
    }
  }
  piVar2 = &param_5->ArrayNum;
  iVar13 = *param_6;
  if (iVar13 == *piVar2 + -1) {
    *param_6 = -1;
    iVar13 = -1;
  }
  dVar15 = (param_2->field0_0x0)._s_0.X;
  dVar9 = (param_2->field0_0x0)._s_0.Y;
  uVar1 = iVar13 + 1;
  iVar13 = 0;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  *param_6 = uVar1;
  uVar12 = 0;
  if ((int)uVar1 < *piVar2) {
    uVar12 = ~uVar1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar14 = (param_5->AllocatorInstance).Data;
  pFVar4 = pFVar14 + (longlong)(int)uVar1 * 0x18;
  *(double *)pFVar4 = dVar15;
  *(double *)(pFVar4 + 8) = dVar9;
  dVar15 = __real_47efffffe0000000;
  *(double *)(pFVar14 + (longlong)(int)uVar1 * 0x18 + 0x10) = dVar5;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar10;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  iVar6 = *piVar2;
  pFVar14 = (param_5->AllocatorInstance).Data;
  pFVar4 = pFVar14 + (longlong)iVar6 * 0x18;
  while( true ) {
    if (*piVar2 != iVar6) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_58);
    }
    if ((pFVar14 == pFVar4) || (*(double *)pFVar14 == dVar15)) break;
    iVar13 = iVar13 + 1;
    (param_4->field0_0x0)._s_0.X = *(double *)pFVar14 + (param_4->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = *(double *)(pFVar14 + 8) + (param_4->field0_0x0)._s_0.Y;
    pFVar3 = pFVar14 + 0x10;
    pFVar14 = pFVar14 + 0x18;
    (param_4->field0_0x0)._s_0.Z = *(double *)pFVar3 + (param_4->field0_0x0)._s_0.Z;
  }
  if (0 < iVar13) {
    dVar15 = __real_3ff0000000000000 / (double)iVar13;
    dVar5 = dVar15 * (param_4->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.Z = dVar15 * (param_4->field0_0x0)._s_0.Z;
    auVar8._8_4_ = SUB84(dVar5,0);
    auVar8._0_8_ = dVar15 * (param_4->field0_0x0)._s_0.X;
    auVar8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])&param_4->field0_0x0 = auVar8;
  }
  return;
}

