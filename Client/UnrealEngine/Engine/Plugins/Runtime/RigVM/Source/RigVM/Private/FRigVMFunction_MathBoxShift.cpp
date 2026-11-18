// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a159c50

UScriptStruct * __cdecl FRigVMFunction_MathBoxShift::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxShift.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxShift.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift,(UObject *)pUVar1,
                         L"RigVMFunction_MathBoxShift");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxShift.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxShift.OuterSingleton;
}

// GetExecuteContextStruct @ 14a159d50

UScriptStruct * __thiscall
FRigVMFunction_MathBoxShift::GetExecuteContextStruct(FRigVMFunction_MathBoxShift *this)

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

// Execute @ 14a159f40

void __thiscall FRigVMFunction_MathBoxShift::Execute(FRigVMFunction_MathBoxShift *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined4 uStack_17;
  undefined2 uStack_13;
  undefined1 uStack_11;
  
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
  bVar10 = (this->Box).IsValid != '\0';
  if (bVar10) {
    dVar1 = (this->Amount).field0_0x0._s_0.Y;
    dVar2 = (this->Amount).field0_0x0._s_0.X;
    dVar3 = (this->Amount).field0_0x0._s_0.Z;
    dVar7 = dVar1 + (this->Box).Min.field0_0x0._s_0.Y;
    dVar11 = dVar2 + (this->Box).Max.field0_0x0._s_0.X;
    dVar4 = (this->Box).Max.field0_0x0._s_0.Y;
    dVar5 = (this->Box).Min.field0_0x0._s_0.Z;
    dVar12 = dVar3 + (this->Box).Max.field0_0x0._s_0.Z;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = dVar2 + (this->Box).Min.field0_0x0._s_0.X;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])&(this->Result).Min.field0_0x0 = auVar6;
    auVar8._8_4_ = SUB84(dVar11,0);
    auVar8._0_8_ = dVar3 + dVar5;
    auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Result).Min.field0_0x0 + 0x10) = auVar8;
    auVar9._8_4_ = SUB84(dVar12,0);
    auVar9._0_8_ = dVar1 + dVar4;
    auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Result).Max.field0_0x0 + 8) = auVar9;
  }
  else {
    uStack_17 = 0;
    (this->Result).Min.field0_0x0._s_0.X = 0.0;
    (this->Result).Min.field0_0x0._s_0.Y = 0.0;
    uStack_13 = 0;
    uStack_11 = 0;
    (this->Result).Min.field0_0x0._s_0.Z = 0.0;
    (this->Result).Max.field0_0x0._s_0.X = 0.0;
    (this->Result).Max.field0_0x0._s_0.Y = 0.0;
    (this->Result).Max.field0_0x0._s_0.Z = 0.0;
  }
  (this->Result).IsValid = bVar10;
  (this->Result).Pad[0] = (char)uStack_17;
  (this->Result).Pad[1] = (char)((uint)uStack_17 >> 8);
  (this->Result).Pad[2] = (char)((uint)uStack_17 >> 0x10);
  (this->Result).Pad[3] = (char)((uint)uStack_17 >> 0x18);
  (this->Result).Pad[4] = (char)uStack_13;
  (this->Result).Pad[5] = (char)((ushort)uStack_13 >> 8);
  (this->Result).Pad[6] = uStack_11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19f0c0

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
FRigVMFunction_MathBoxShift::Execute
          (FRigVMFunction_MathBoxShift *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Box,&this->Amount,&this->Result);
  return;
}

// RigVMExecute @ 14a1bc110

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
FRigVMFunction_MathBoxShift::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TBox<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TBox<double> *pTVar6;
  TVector<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TBox<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TBox<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
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
  pTVar3 = (TBox<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a1dce00

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
FRigVMFunction_MathBoxShift::StaticExecute
          (FRigVMExecuteContext *param_1,TBox<double> *param_2,TVector<double> *param_3,
          TBox<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined4 uStack_17;
  undefined2 uStack_13;
  undefined1 uStack_11;
  
  if (param_2->IsValid == '\0') {
    (param_4->Min).field0_0x0._s_0.X = 0.0;
    (param_4->Min).field0_0x0._s_0.Y = 0.0;
    (param_4->Min).field0_0x0._s_0.Z = 0.0;
    (param_4->Max).field0_0x0._s_0.X = 0.0;
    (param_4->Max).field0_0x0._s_0.Y = 0.0;
    (param_4->Max).field0_0x0._s_0.Z = 0.0;
    param_4->IsValid = '\0';
    param_4->Pad[0] = '\0';
    param_4->Pad[1] = '\0';
    param_4->Pad[2] = '\0';
    param_4->Pad[3] = '\0';
    param_4->Pad[4] = '\0';
    param_4->Pad[5] = '\0';
    param_4->Pad[6] = '\0';
    return;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  dVar7 = dVar1 + (param_2->Min).field0_0x0._s_0.Y;
  dVar10 = dVar2 + (param_2->Max).field0_0x0._s_0.X;
  dVar4 = (param_2->Max).field0_0x0._s_0.Y;
  dVar5 = (param_2->Min).field0_0x0._s_0.Z;
  dVar11 = dVar3 + (param_2->Max).field0_0x0._s_0.Z;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar2 + (param_2->Min).field0_0x0._s_0.X;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&(param_4->Min).field0_0x0 = auVar6;
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = dVar3 + dVar5;
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_4->Min).field0_0x0 + 0x10) = auVar8;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar1 + dVar4;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_4->Max).field0_0x0 + 8) = auVar9;
  param_4->IsValid = 1;
  param_4->Pad[0] = (char)uStack_17;
  param_4->Pad[1] = (char)((uint)uStack_17 >> 8);
  param_4->Pad[2] = (char)((uint)uStack_17 >> 0x10);
  param_4->Pad[3] = (char)((uint)uStack_17 >> 0x18);
  param_4->Pad[4] = (char)uStack_13;
  param_4->Pad[5] = (char)((ushort)uStack_13 >> 8);
  param_4->Pad[6] = uStack_11;
  return;
}

