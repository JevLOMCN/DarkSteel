// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a46fce0

UScriptStruct * __cdecl FRigUnit_SendEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SendEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SendEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SendEvent,(UObject *)pUVar1,
                         L"RigUnit_SendEvent");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SendEvent.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SendEvent.OuterSingleton;
}

// GetExecuteContextStruct @ 14a46fd70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_SendEvent::GetExecuteContextStruct(FRigUnit_SendEvent *this)

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

// Execute @ 14a46ff40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SendEvent::Execute(FRigUnit_SendEvent *this)

{
  undefined1 auStack_2b8 [32];
  FRigEventContext local_298;
  undefined1 local_268 [40];
  double local_240;
  FRigVMNameCache *local_218;
  uchar local_100;
  URigHierarchy *local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if (local_218 == (FRigVMNameCache *)0x0) {
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
    local_218 = &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5
                 ::StaticNameCache;
  }
  if ((this->bEnable != false) &&
     (((this->bOnlyDuringInteraction == false || (local_100 != '\0')) &&
      (local_a0 != (URigHierarchy *)0x0)))) {
    local_298.Key.Type = (this->Item).Type;
    local_298.Key._1_3_ = *(undefined3 *)&(this->Item).field_0x1;
    local_298.Key.Name.ComparisonIndex.Value = (this->Item).Name.ComparisonIndex.Value;
    local_298.Key.Name.Number = (this->Item).Name.Number;
    local_298.Payload = (void *)0x0;
    local_298.SourceEventName.ComparisonIndex.Value = local_268._8_4_;
    local_298.SourceEventName.Number = local_268._12_4_;
    local_298.LocalTime = (float)((double)this->OffsetInSeconds + local_240);
    local_298.Event = this->Event;
    URigHierarchy::SendEvent(local_a0,&local_298,false);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52c500

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SendEvent::Execute(FRigUnit_SendEvent *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->Event,&this->Item,this->OffsetInSeconds,this->bEnable,
                this->bOnlyDuringInteraction);
  return;
}

// RigVMExecute @ 14a54fd20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SendEvent::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigEvent EVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  ERigEvent *pEVar7;
  FRigElementKey *pFVar8;
  float *pfVar9;
  FRigVMMemoryHandle *pFVar10;
  uchar *puVar11;
  FControlRigExecuteContext *pFVar12;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar10->Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  EVar2 = *pEVar7;
  if (iVar4 < 2) {
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FRigElementKey *)pFVar10[1].Ptr;
  }
  else {
    pFVar8 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  if (iVar4 < 3) {
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[2].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  fVar1 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar6 = (bool)*puVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar3 = (bool)*puVar11;
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,EVar2,pFVar8,fVar1,bVar6,bVar3);
  return;
}

// StaticExecute @ 14a58fd80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SendEvent::StaticExecute
          (FControlRigExecuteContext *param_1,ERigEvent param_2,FRigElementKey *param_3,
          float param_4,bool param_5,bool param_6)

{
  FRigEventContext local_38;
  
  if ((param_5) &&
     (((!param_6 || ((param_1->UnitContext).InteractionType != '\0')) &&
      (param_1->Hierarchy != (URigHierarchy *)0x0)))) {
    local_38.Key.Type = param_3->Type;
    local_38.Key._1_3_ = *(undefined3 *)&param_3->field_0x1;
    local_38.Key.Name.ComparisonIndex.Value = (param_3->Name).ComparisonIndex.Value;
    local_38.Key.Name.Number = (param_3->Name).Number;
    local_38.SourceEventName.ComparisonIndex.Value = *(uint *)&param_1->field_0x8;
    local_38.SourceEventName.Number = *(uint *)&param_1->field_0xc;
    local_38.Payload = (void *)0x0;
    local_38.LocalTime = (float)((double)param_4 + *(double *)&param_1->field_0x28);
    local_38.Event = param_2;
    URigHierarchy::SendEvent(param_1->Hierarchy,&local_38,false);
  }
  return;
}

