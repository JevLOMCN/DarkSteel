// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13e590

UScriptStruct * __cdecl FRigVMFunction_KalmanFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat,(UObject *)pUVar1,
                         L"RigVMFunction_KalmanFloat");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanFloat.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanFloat.OuterSingleton;
}

// GetExecuteContextStruct @ 14a13e610

UScriptStruct * __thiscall
FRigVMFunction_KalmanFloat::GetExecuteContextStruct(FRigVMFunction_KalmanFloat *this)

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

// Initialize @ 14a13eaf0

void __thiscall FRigVMFunction_KalmanFloat::Initialize(FRigVMFunction_KalmanFloat *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  return;
}

// Execute @ 14a13eb30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_KalmanFloat::Execute(FRigVMFunction_KalmanFloat *this)

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
  StaticExecute(&local_118,this->Value,this->BufferSize,&this->Result,&this->Buffer,
                &this->LastInsertIndex);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19ea80

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
FRigVMFunction_KalmanFloat::Execute(FRigVMFunction_KalmanFloat *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,this->Value,this->BufferSize,&this->Result,&this->Buffer,
                &this->LastInsertIndex);
  return;
}

// RigVMExecute @ 14a1b9cd0

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
FRigVMFunction_KalmanFloat::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  int *piVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar10;
  FRigVMExecuteContext *pFVar11;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
    pfVar6 = (float *)pFVar8->Ptr;
  }
  else {
    pfVar6 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  fVar1 = *pfVar6;
  if (iVar2 < 2) {
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
  iVar3 = *piVar7;
  if (iVar2 < 3) {
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
  pfVar6 = (float *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar10 = (TArray<float,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar7 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,fVar1,iVar3,pfVar6,pTVar10,piVar7);
  return;
}

// StaticExecute @ 14a1db930

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
FRigVMFunction_KalmanFloat::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,int param_3,float *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,int *param_6)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int *piVar11;
  undefined1 local_res18 [8];
  undefined1 local_48 [32];
  
  if (param_3 < 1) {
    *param_4 = param_2;
    return;
  }
  if (param_5->ArrayNum != param_3) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_5,param_3,Default);
    pFVar9 = (param_5->AllocatorInstance).Data;
    iVar7 = param_5->ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar7 * 4;
    while( true ) {
      if (param_5->ArrayNum != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar9 == pFVar1) break;
      *(undefined4 *)pFVar9 = 0x7f7fffff;
      pFVar9 = pFVar9 + 4;
      *param_6 = -1;
    }
  }
  piVar11 = &param_5->ArrayNum;
  iVar7 = *param_6;
  if (iVar7 == param_5->ArrayNum + -1) {
    iVar7 = -1;
  }
  iVar10 = 0;
  uVar8 = iVar7 + 1;
  *param_6 = uVar8;
  uVar6 = 0;
  if ((int)uVar8 < *piVar11) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(float *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = param_2;
  fVar4 = __real_7f7fffff;
  *param_4 = 0.0;
  pFVar9 = (param_5->AllocatorInstance).Data;
  iVar7 = *piVar11;
  pFVar1 = pFVar9 + (longlong)iVar7 * 4;
  while( true ) {
    if (*piVar11 != iVar7) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_48);
    }
    if ((pFVar9 == pFVar1) || (fVar2 = *(float *)pFVar9, fVar2 == fVar4)) break;
    iVar10 = iVar10 + 1;
    pFVar9 = pFVar9 + 4;
    *param_4 = fVar2 + *param_4;
  }
  if (0 < iVar10) {
    *param_4 = *param_4 / (float)iVar10;
  }
  return;
}

