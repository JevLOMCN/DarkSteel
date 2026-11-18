// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a15a660

UScriptStruct * __cdecl FRigVMFunction_MathBoxMoveTo::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxMoveTo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxMoveTo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo,(UObject *)pUVar1,
                         L"RigVMFunction_MathBoxMoveTo");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxMoveTo.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxMoveTo.OuterSingleton;
}

// GetExecuteContextStruct @ 14a15a6f0

UScriptStruct * __thiscall
FRigVMFunction_MathBoxMoveTo::GetExecuteContextStruct(FRigVMFunction_MathBoxMoveTo *this)

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

// Execute @ 14a15a870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_MathBoxMoveTo::Execute(FRigVMFunction_MathBoxMoveTo *this)

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
  StaticExecute(&local_118,&this->Box,&this->Center,&this->Result);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19f0a0

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
FRigVMFunction_MathBoxMoveTo::Execute
          (FRigVMFunction_MathBoxMoveTo *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Box,&this->Center,&this->Result);
  return;
}

// RigVMExecute @ 14a1bbfb0

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
FRigVMFunction_MathBoxMoveTo::RigVMExecute
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

// StaticExecute @ 14a1dcce0

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
FRigVMFunction_MathBoxMoveTo::StaticExecute
          (FRigVMExecuteContext *param_1,TBox<double> *param_2,TVector<double> *param_3,
          TBox<double> *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uStack_47;
  undefined2 uStack_43;
  undefined1 uStack_41;
  
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
  dVar10 = (param_3->field0_0x0)._s_0.X -
           ((param_2->Max).field0_0x0._s_0.X + (param_2->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar6 = (param_3->field0_0x0)._s_0.Z -
          ((param_2->Max).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  dVar7 = dVar6 + (param_2->Max).field0_0x0._s_0.Z;
  dVar1 = (param_2->Min).field0_0x0._s_0.Z;
  dVar9 = (param_3->field0_0x0)._s_0.Y -
          ((param_2->Max).field0_0x0._s_0.Y + (param_2->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar11 = dVar10 + (param_2->Max).field0_0x0._s_0.X;
  dVar2 = (param_2->Max).field0_0x0._s_0.Y;
  dVar4 = dVar9 + (param_2->Min).field0_0x0._s_0.Y;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar10 + (param_2->Min).field0_0x0._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&(param_4->Min).field0_0x0 = auVar3;
  auVar5._8_4_ = SUB84(dVar11,0);
  auVar5._0_8_ = dVar6 + dVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_4->Min).field0_0x0 + 0x10) = auVar5;
  auVar8._8_4_ = SUB84(dVar7,0);
  auVar8._0_8_ = dVar9 + dVar2;
  auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_4->Max).field0_0x0 + 8) = auVar8;
  param_4->IsValid = 1;
  param_4->Pad[0] = (char)uStack_47;
  param_4->Pad[1] = (char)((uint)uStack_47 >> 8);
  param_4->Pad[2] = (char)((uint)uStack_47 >> 0x10);
  param_4->Pad[3] = (char)((uint)uStack_47 >> 0x18);
  param_4->Pad[4] = (char)uStack_43;
  param_4->Pad[5] = (char)((ushort)uStack_43 >> 8);
  param_4->Pad[6] = uStack_41;
  return;
}

