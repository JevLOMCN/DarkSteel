// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a158eb0

UScriptStruct * __cdecl FRigVMFunction_MathBoxGetSize::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxGetSize.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxGetSize.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize,(UObject *)pUVar1,
                         L"RigVMFunction_MathBoxGetSize");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxGetSize.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxGetSize.OuterSingleton;
}

// GetExecuteContextStruct @ 14a158fd0

UScriptStruct * __thiscall
FRigVMFunction_MathBoxGetSize::GetExecuteContextStruct(FRigVMFunction_MathBoxGetSize *this)

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

// Execute @ 14a159330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FRigVMFunction_MathBoxGetSize::Execute(FRigVMFunction_MathBoxGetSize *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  
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
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((this->Box).IsValid != '\0') {
    dVar4 = (this->Box).Min.field0_0x0._s_0.Y;
    dVar5 = (this->Box).Max.field0_0x0._s_0.Y;
    dVar2 = (this->Box).Max.field0_0x0._s_0.Z - (this->Box).Min.field0_0x0._s_0.Z;
    (this->Size).field0_0x0._s_0.X =
         (this->Box).Max.field0_0x0._s_0.X - (this->Box).Min.field0_0x0._s_0.X;
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar5 - dVar4;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Size).field0_0x0 + 8) = auVar1;
    dVar4 = (this->Box).Max.field0_0x0._s_0.Y;
    dVar2 = (this->Box).Max.field0_0x0._s_0.Z;
    dVar5 = (this->Box).Min.field0_0x0._s_0.Y;
    dVar6 = (this->Box).Min.field0_0x0._s_0.Z;
    (this->Extent).field0_0x0._s_0.X =
         ((this->Box).Max.field0_0x0._s_0.X - (this->Box).Min.field0_0x0._s_0.X) *
         __real_3fe0000000000000;
    dVar2 = (dVar2 - dVar6) * _UNK_150689678;
    auVar3._8_4_ = SUB84(dVar2,0);
    auVar3._0_8_ = (dVar4 - dVar5) * ___xmm_3fe00000000000003fe0000000000000;
    auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Extent).field0_0x0 + 8) = auVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  (this->Extent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Extent).field0_0x0._s_0.Y = (double)uVar7;
  (this->Extent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = (this->Extent).field0_0x0._s_0.Y;
  (this->Size).field0_0x0._s_0.X = (this->Extent).field0_0x0._s_0.X;
  (this->Size).field0_0x0._s_0.Y = dVar2;
  (this->Size).field0_0x0._s_0.Z = (this->Extent).field0_0x0._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19efb0

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
FRigVMFunction_MathBoxGetSize::Execute
          (FRigVMFunction_MathBoxGetSize *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Box,&this->Size,&this->Extent);
  return;
}

// RigVMExecute @ 14a1bbb00

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
FRigVMFunction_MathBoxGetSize::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TBox<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TBox<double> *)pFVar2->Ptr;
  }
  else {
    pTVar7 = (TBox<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = (TVector<double> *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar4 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar7,pTVar3,pTVar4);
  return;
}

// StaticExecute @ 14a1dcb60

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
FRigVMFunction_MathBoxGetSize::StaticExecute
          (FRigVMExecuteContext *param_1,TBox<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_2->IsValid != '\0') {
    dVar4 = (param_2->Max).field0_0x0._s_0.Y;
    dVar5 = (param_2->Min).field0_0x0._s_0.Y;
    dVar1 = (param_2->Max).field0_0x0._s_0.Z;
    dVar2 = (param_2->Min).field0_0x0._s_0.Z;
    (param_3->field0_0x0)._s_0.X =
         (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar4 - dVar5;
    (param_3->field0_0x0)._s_0.Z = dVar1 - dVar2;
    dVar5 = ((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
            __real_3fe0000000000000;
    dVar4 = ((param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z) *
            __real_3fe0000000000000;
    (param_4->field0_0x0)._s_0.X =
         ((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
         __real_3fe0000000000000;
    (param_4->field0_0x0)._s_0.Y = dVar5;
    (param_4->field0_0x0)._s_0.Z = dVar4;
    return;
  }
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar3;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar4 = (param_4->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar4;
  (param_3->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  return;
}

