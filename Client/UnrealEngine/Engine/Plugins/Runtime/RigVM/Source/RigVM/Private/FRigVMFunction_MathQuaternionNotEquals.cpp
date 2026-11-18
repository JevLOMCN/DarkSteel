// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1181a0

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionNotEquals::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionNotEquals");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals.OuterSingleton;
}

// GetExecuteContextStruct @ 14a118220

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionNotEquals::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionNotEquals *this)

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

// Execute @ 14a118430

void __thiscall
FRigVMFunction_MathQuaternionNotEquals::Execute(FRigVMFunction_MathQuaternionNotEquals *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  longlong extraout_RAX;
  longlong extraout_RAX_00;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = 0x9d4c;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar4 + 0x9d4c) <
      `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      _thread_safe_static_guard_0__) {
    uVar5 = 0x552a063c;
    _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    lVar4 = extraout_RAX;
    if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__ == -1) {
      atexit(`FRigVMExecuteContext::Initialize'::__l5::
             _dynamic_atexit_destructor_for__StaticNameCache__);
      uVar5 = 0x552a063c;
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      lVar4 = extraout_RAX_00;
    }
  }
  lVar7 = -(ulonglong)((this->A).W != (this->B).W);
  lVar8 = -(ulonglong)((this->A).Y != (this->B).Y);
  auVar1._8_4_ = (int)lVar7;
  auVar1._0_8_ = -(ulonglong)((this->A).Z != (this->B).Z);
  auVar1._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
  uVar6 = movmskpd(uVar5,auVar1);
  auVar2._8_4_ = (int)lVar8;
  auVar2._0_8_ = -(ulonglong)((this->A).X != (this->B).X);
  auVar2._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
  iVar3 = movmskpd((int)lVar4,auVar2);
  this->Result = (uVar6 & 0x3fffffff) != 0 || iVar3 != 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a118610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathQuaternionNotEquals::GetUpgradeInfo
          (FRigVMFunction_MathQuaternionNotEquals *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FRigVMRegistry_RWLock *this_00;
  undefined1 auStackY_a8 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_78;
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals,(UObject *)pUVar3,
                         L"RigVMDispatch_CoreNotEquals");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals,
                         (UObject *)pUVar3,L"RigVMFunction_MathQuaternionNotEquals");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_78.ArrayNum = 1;
    local_78.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals.
                       OuterSingleton,&local_78);
  }
  FRigVMStructUpgradeInfo::MakeFromStructToFactory
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals.OuterSingleton
             ,pUVar2,(TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                      *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a1a13a0

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
FRigVMFunction_MathQuaternionNotEquals::Execute
          (FRigVMFunction_MathQuaternionNotEquals *this,FRigVMExecuteContext *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = -(ulonglong)((this->A).W != (this->B).W);
  lVar6 = -(ulonglong)((this->A).Y != (this->B).Y);
  auVar2._8_4_ = (int)lVar6;
  auVar2._0_8_ = -(ulonglong)((this->A).X != (this->B).X);
  auVar2._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)((this->A).Z != (this->B).Z);
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)param_1,auVar1);
  this->Result = (uVar4 & 0x3fffffff) != 0 || iVar3 != 0;
  return;
}

// RigVMExecute @ 14a1c8230

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
FRigVMFunction_MathQuaternionNotEquals::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMMemoryHandle *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  FRigVMExecuteContext *pFVar10;
  uint uVar11;
  
  iVar7 = param_2->ArrayNum;
  if (iVar7 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr;
  if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar8 = (double *)pFVar1->Ptr;
  }
  else {
    pdVar8 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property)
    ;
  }
  if (iVar7 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr;
  if (pFVar1[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar9 = (double *)pFVar1[1].Ptr;
  }
  else {
    pdVar9 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar1[1].PropertyPath,pFVar1[1].Ptr,pFVar1[1].Property);
  }
  if (iVar7 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar2 = param_2->DataPtr[2].Ptr;
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  auVar5._8_4_ = (int)-(ulonglong)(pdVar8[1] != pdVar9[1]);
  auVar5._0_8_ = -(ulonglong)(*pdVar8 != *pdVar9);
  auVar5._12_4_ = (int)(-(ulonglong)(pdVar8[1] != pdVar9[1]) >> 0x20);
  iVar7 = movmskpd((int)pFVar10,auVar5);
  auVar4._8_4_ = (int)-(ulonglong)(pdVar9[3] != pdVar8[3]);
  auVar4._0_8_ = -(ulonglong)(pdVar9[2] != pdVar8[2]);
  auVar4._12_4_ = (int)(-(ulonglong)(pdVar9[3] != pdVar8[3]) >> 0x20);
  uVar11 = movmskpd((int)param_1,auVar4);
  *puVar2 = (uVar11 & 0x3fffffff) != 0 || iVar7 != 0;
  return;
}

// StaticExecute @ 14a1df950

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
FRigVMFunction_MathQuaternionNotEquals::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3,bool *param_4
          )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = -(ulonglong)(param_2->W != param_3->W);
  lVar6 = -(ulonglong)(param_2->Y != param_3->Y);
  auVar2._8_4_ = (int)lVar6;
  auVar2._0_8_ = -(ulonglong)(param_2->X != param_3->X);
  auVar2._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)(param_2->Z != param_3->Z);
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)param_1,auVar1);
  *param_4 = (uVar4 & 0x3fffffff) != 0 || iVar3 != 0;
  return;
}

