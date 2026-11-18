// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4ee240

UScriptStruct * __cdecl FRigUnit_ResolveArrayConnector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ResolveArrayConnector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ResolveArrayConnector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ResolveArrayConnector,(UObject *)pUVar1,
                         L"RigUnit_ResolveArrayConnector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ResolveArrayConnector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ResolveArrayConnector.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ResolveArrayConnector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ee300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ResolveArrayConnector::GetExecuteContextStruct(FRigUnit_ResolveArrayConnector *this)

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

// Execute @ 14a4ee480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ResolveArrayConnector::Execute(FRigUnit_ResolveArrayConnector *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Connector,this->SkipSocket,
                &this->Result,&this->bIsConnected);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52bf60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ResolveArrayConnector::Execute
          (FRigUnit_ResolveArrayConnector *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Connector,this->SkipSocket,&this->Result,&this->bIsConnected);
  return;
}

// RigVMExecute @ 14a54f070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ResolveArrayConnector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  bool *pbVar9;
  FControlRigExecuteContext *pFVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  bVar4 = (bool)*puVar7;
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pbVar9 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar6,bVar4,pTVar2,pbVar9);
  return;
}

// StaticExecute @ 14a58bd60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ResolveArrayConnector::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_4,bool *param_5)

{
  int *piVar1;
  URigHierarchy *this;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FRigBaseElement *pFVar5;
  longlong lVar6;
  UScriptStruct *pUVar7;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  longlong local_res10;
  FRigElementKey local_a8;
  FRigElementKey local_98;
  FRigElementKey local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_48;
  
  local_98.Type = param_2->Type;
  local_98._1_3_ = *(undefined3 *)&param_2->field_0x1;
  local_98.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
  piVar1 = &param_4->ArrayMax;
  local_98.Name.Number = (param_2->Name).Number;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::CopyToEmpty<FRigElementKey,int>
            (param_4,&local_98,1,*piVar1);
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    iVar4 = URigHierarchy::GetIndex(this,param_2,false);
    pFVar5 = URigHierarchy::Get(this,iVar4);
    if (pFVar5 != (FRigBaseElement *)0x0) {
      lVar6 = (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
      pUVar7 = FRigConnectorElement::StaticStruct();
      if (pUVar7 != (UScriptStruct *)0x0) {
        iVar4 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((((bVar3) && (pFVar5[1].Key.Type == Bone)) && (pFVar5[1].Key.field_0x3 != '\0')) &&
           (lVar6 = *(longlong *)&param_1->field_0x8,
           FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName), lVar6 == local_res10)) {
          FLazyName::ToString(&FRigUnit_PostPrepareForExecution::EventName,&local_68);
          ::FName::ToString(&param_2->Name,&local_78);
          ::FString::PrintfImpl(&local_58,L"Connector \'%s\' is only valid during the %s event.");
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          *param_5 = false;
          if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    pTVar8 = URigHierarchy::GetResolvedTargets(this,&local_48,param_2);
    if (param_4 != pTVar8) {
      pFVar2 = (param_4->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_4->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_4->ArrayNum = pTVar8->ArrayNum;
      *piVar1 = pTVar8->ArrayMax;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (param_3) {
      iVar4 = param_4->ArrayNum;
      if (iVar4 != 0) {
        pFVar9 = (param_4->AllocatorInstance).Data;
        pFVar2 = pFVar9 + (longlong)iVar4 * 0xc;
        while( true ) {
          if (param_4->ArrayNum != iVar4) {
            `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar9 == pFVar2) break;
          if (*pFVar9 == (FScriptContainerElement)0x80) {
            local_88._0_8_ = *(undefined8 *)pFVar9;
            local_88.Name.Number = *(uint *)(pFVar9 + 8);
            URigHierarchy::GetFirstParent(this,&local_a8,&local_88);
            bVar3 = ::FName::IsWithinBounds(local_a8.Name.ComparisonIndex);
            if (((bVar3) &&
                (CONCAT44(local_a8.Name.Number,local_a8.Name.ComparisonIndex.Value) != 0)) &&
               (local_a8.Type != None)) {
              *(ulonglong *)pFVar9 = CONCAT44(local_a8.Name.ComparisonIndex.Value,local_a8._0_4_);
              *(uint *)(pFVar9 + 8) = local_a8.Name.Number;
            }
          }
          pFVar9 = pFVar9 + 0xc;
        }
      }
    }
  }
  *param_5 = false;
  if (param_4->ArrayNum == 1) {
    pFVar2 = (param_4->AllocatorInstance).Data;
    if ((*(FName *)(pFVar2 + 4) == param_2->Name) &&
       (*pFVar2 == (FScriptContainerElement)param_2->Type)) {
      param_4->ArrayNum = 0;
      if (-1 < param_4->ArrayMax) {
        return;
      }
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_4->AllocatorInstance,0,piVar1);
      return;
    }
  }
  else if (param_4->ArrayNum < 2) {
    return;
  }
  *param_5 = true;
  return;
}

