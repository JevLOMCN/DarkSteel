// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4833c0

UScriptStruct * __cdecl FRigUnit_GetControlVector2D::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVector2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVector2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D,(UObject *)pUVar1,
                         L"RigUnit_GetControlVector2D");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVector2D.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVector2D.OuterSingleton;
}

// GetExecuteContextStruct @ 14a483440

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlVector2D::GetExecuteContextStruct(FRigUnit_GetControlVector2D *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a4851e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlVector2D::Execute(FRigUnit_GetControlVector2D *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,&this->Vector,&this->Minimum,
                &this->Maximum,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a528090

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlVector2D::Execute
          (FRigUnit_GetControlVector2D *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,&this->Vector,&this->Minimum,&this->Maximum,
                &this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a541460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlVector2D::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TVector2<double> *pTVar2;
  TVector2<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  TVector2<double> *pTVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FControlRigExecuteContext *pFVar11;
  
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
    pFVar6 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
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
  pTVar2 = (TVector2<double> *)param_2->DataPtr[1].Ptr;
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
  pTVar3 = (TVector2<double> *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TVector2<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar6,pTVar2,pTVar3,pTVar8,pFVar10);
  return;
}

// StaticExecute @ 14a576d00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlVector2D::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,FCachedRigElement *param_6)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float local_148;
  FNameEntryId FStack_144;
  uint uStack_140;
  undefined8 local_138;
  undefined8 local_128 [16];
  FRigControlValue local_a4;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_148 = (float)CONCAT31(local_148._1_3_,Control);
    FStack_144 = (*param_2).ComparisonIndex;
    uStack_140 = (*param_2).Number;
    bVar1 = FCachedRigElement::UpdateCache(param_6,(FRigElementKey *)&local_148,this);
    if (bVar1) {
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffff;
      uVar2 = uVar3;
      if (param_6->Index != 0xffff) {
        uVar2 = (uint)param_6->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,&local_a4,uVar2,Current);
      if (param_6->Index != 0xffff) {
        uVar3 = (uint)param_6->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,(FRigControlValue *)local_128,uVar3,Minimum);
      local_138 = local_128[0];
      if (param_6->Index != 0xffff) {
        uVar4 = (uint)param_6->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,(FRigControlValue *)local_128,uVar4,Maximum);
      local_148 = (float)local_128[0];
      FStack_144.Value = (uint)((ulonglong)local_128[0] >> 0x20);
      (param_3->field0_0x0)._s_0.X = (double)local_a4.FloatStorage.Float00;
      (param_3->field0_0x0)._s_0.Y = (double)local_a4.FloatStorage.Float01;
      (param_4->field0_0x0)._s_0.X = (double)(float)local_138;
      (param_4->field0_0x0)._s_0.Y = (double)local_138._4_4_;
      (param_5->field0_0x0)._s_0.X = (double)local_148;
      (param_5->field0_0x0)._s_0.Y = (double)(float)FStack_144.Value;
    }
  }
  return;
}

