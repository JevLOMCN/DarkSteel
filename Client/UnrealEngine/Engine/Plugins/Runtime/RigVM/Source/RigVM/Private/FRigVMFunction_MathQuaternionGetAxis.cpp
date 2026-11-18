// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a11b740

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionGetAxis::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionGetAxis");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis.OuterSingleton;
}

// GetExecuteContextStruct @ 14a11b7c0

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionGetAxis::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionGetAxis *this)

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

// Execute @ 14a11bb00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRigVMFunction_MathQuaternionGetAxis::Execute(FRigVMFunction_MathQuaternionGetAxis *this)

{
  uchar uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  uVar1 = (this->Axis).Value;
  dVar2 = ___xmm_00000000000000003ff0000000000000;
  dVar4 = _UNK_150689518;
  if (((uVar1 == '\x01') ||
      (dVar2 = ___xmm_3ff00000000000000000000000000000, dVar4 = _UNK_15061cbc8, uVar1 == '\x02')) ||
     (dVar2 = ___xmm_00000000000000003ff0000000000000, dVar4 = _UNK_150689518, uVar1 != '\x03')) {
    local_28._s_0.Z = 0.0;
    local_28._s_0.X = dVar2;
    local_28._s_0.Y = dVar4;
    UE::Math::TQuat<double>::RotateVector
              (&this->Quaternion,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0
              );
    uVar6 = local_48._s_0.Z;
    uVar3 = local_48._s_0.X;
    uVar5 = local_48._s_0.Y;
  }
  else {
    local_48._s_0.Z = __real_3ff0000000000000;
    local_48._s_0.X = 0.0;
    local_48._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&this->Quaternion,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0
              );
    uVar6 = local_28._s_0.Z;
    uVar3 = local_28._s_0.X;
    uVar5 = local_28._s_0.Y;
  }
  (this->Result).field0_0x0._s_0.X = (double)uVar3;
  (this->Result).field0_0x0._s_0.Y = (double)uVar5;
  (this->Result).field0_0x0._s_0.Z = (double)uVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a0e80

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
FRigVMFunction_MathQuaternionGetAxis::Execute
          (FRigVMFunction_MathQuaternionGetAxis *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Quaternion,&this->Axis,&this->Result);
  return;
}

// RigVMExecute @ 14a1c7700

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
FRigVMFunction_MathQuaternionGetAxis::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TQuat<double> *pTVar6;
  TEnumAsByte<EAxis::Type> *pTVar7;
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
    pTVar6 = (TQuat<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TQuat<double> *)
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
    pTVar7 = (TEnumAsByte<EAxis::Type> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TEnumAsByte<EAxis::Type> *)
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
  pTVar3 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a1df300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FRigVMFunction_MathQuaternionGetAxis::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TEnumAsByte<EAxis::Type> *param_3,
          TVector<double> *param_4)

{
  uchar uVar1;
  double dVar2;
  double dVar3;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  uVar1 = param_3->Value;
  dVar2 = ___xmm_00000000000000003ff0000000000000;
  dVar3 = _UNK_150689518;
  if (((uVar1 != '\x01') &&
      (dVar2 = ___xmm_3ff00000000000000000000000000000, dVar3 = _UNK_15061cbc8, uVar1 != '\x02')) &&
     (dVar2 = ___xmm_00000000000000003ff0000000000000, dVar3 = _UNK_150689518, uVar1 == '\x03')) {
    local_48._s_0.Z = __real_3ff0000000000000;
    local_48._s_0.X = 0.0;
    local_48._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_2,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0);
    (param_4->field0_0x0)._s_0.X = local_28._s_0.X;
    (param_4->field0_0x0)._s_0.Y = local_28._s_0.Y;
    (param_4->field0_0x0)._s_0.Z = local_28._s_0.Z;
    return;
  }
  local_28._s_0.Z = 0.0;
  local_28._s_0.X = dVar2;
  local_28._s_0.Y = dVar3;
  UE::Math::TQuat<double>::RotateVector
            (param_2,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0);
  (param_4->field0_0x0)._s_0.X = local_48._s_0.X;
  (param_4->field0_0x0)._s_0.Y = local_48._s_0.Y;
  (param_4->field0_0x0)._s_0.Z = local_48._s_0.Z;
  return;
}

