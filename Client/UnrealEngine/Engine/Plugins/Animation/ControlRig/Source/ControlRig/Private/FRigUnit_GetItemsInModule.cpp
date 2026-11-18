// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f9580

UScriptStruct * __cdecl FRigUnit_GetItemsInModule::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInModule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInModule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemsInModule,(UObject *)pUVar1,
                         L"RigUnit_GetItemsInModule");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetItemsInModule_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInModule.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInModule.OuterSingleton;
}

// operator() @ 14a51ca80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FRigUnit_GetItemsInModule::StaticExecute'::__l13::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  FRigElementKey local_res8 [2];
  FRigElementKey local_28;
  FRigElementKey local_18;
  
  *param_2 = true;
  local_28.Type = (param_1->Key).Type;
  local_28._1_3_ = *(undefined3 *)&(param_1->Key).field_0x1;
  local_28.Name.ComparisonIndex.Value = (param_1->Key).Name.ComparisonIndex.Value;
  local_28.Name.Number = (param_1->Key).Name.Number;
  if ((*(ERigElementType *)((longlong)this + 0x18) & local_28.Type) == local_28.Type) {
    local_18._0_8_ = local_28._0_8_;
    local_18.Name.Number = local_28.Name.Number;
    URigHierarchy::GetModuleFName(*(URigHierarchy **)this,local_res8);
    if (((CONCAT44(local_res8[0].Name.ComparisonIndex.Value,local_res8[0]._0_4_) != 0) &&
        (local_res8[0]._0_4_ == *(int *)((longlong)this + 8))) &&
       (local_res8[0].Name.ComparisonIndex.Value == *(uint *)((longlong)this + 0xc))) {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                (*(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10),
                 &local_28);
    }
  }
  return;
}

// Execute @ 14a5284a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetItemsInModule::Execute
          (FRigUnit_GetItemsInModule *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->TypeToSearch,&this->Items);
  return;
}

// Execute @ 14a5284c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetItemsInModule::Execute(FRigUnit_GetItemsInModule *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
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
  StaticExecute((FControlRigExecuteContext *)local_268,this->TypeToSearch,&this->Items);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530c20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetItemsInModule::GetExecuteContextStruct(FRigUnit_GetItemsInModule *this)

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

// RigVMExecute @ 14a5427b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetItemsInModule::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigElementType EVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  ERigElementType *pEVar7;
  FControlRigExecuteContext *pFVar8;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar3->Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar7;
  if (iVar2 < 2) {
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
  pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[1].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,EVar1,pTVar4);
  return;
}

// StaticExecute @ 14a5777a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_GetItemsInModule::StaticExecute
          (FControlRigExecuteContext *param_1,ERigElementType param_2,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  URigHierarchy *this;
  FName FVar2;
  ForAnyElementType _Src;
  uint uVar3;
  UScriptStruct *pUVar4;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_res8 [2];
  ERigElementType local_res10;
  FName local_res20;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_b0;
  FString local_a0;
  URigHierarchy *local_90;
  FName FStack_88;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *local_80;
  ERigElementType EStack_78;
  undefined7 uStack_77;
  code *local_68 [5];
  undefined8 *local_40;
  
  this = param_1->Hierarchy;
  local_res10 = param_2;
  if (this == (URigHierarchy *)0x0) {
    param_3->ArrayNum = 0;
    if (-1 < param_3->ArrayMax) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    return;
  }
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  if ((param_1->RigModulePrefix).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->RigModulePrefix).Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_a0,pwVar7);
  if (1 < local_a0.Data.ArrayNum) {
    iVar9 = local_a0.Data.ArrayNum + -1;
    if (local_a0.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (iVar9 + -1 < iVar9) {
      iVar9 = iVar9 + -1;
    }
    iVar6 = 0;
    if (0 < iVar9) {
      iVar6 = iVar9;
    }
    ::FString::RemoveAt(&local_a0,iVar6,1,Default);
    if (1 < local_a0.Data.ArrayNum) {
      ::FName::FName(&local_res20,(wchar_t *)local_a0.Data.AllocatorInstance.Data);
      pUVar4 = StaticStruct();
      FVar2 = local_res20;
      uVar3 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar3 = uVar3 >> 0x10 ^ uVar3;
      iVar9 = uVar3 - param_2;
      uVar3 = iVar9 * 0x100 ^ 0x9e3779b9 - uVar3;
      uVar11 = (param_2 - uVar3) - iVar9 ^ uVar3 >> 0xd;
      uVar10 = (iVar9 - uVar11) - uVar3 ^ uVar11 >> 0xc;
      uVar3 = (uVar3 - uVar10) - uVar11 ^ uVar10 << 0x10;
      uVar12 = (uVar11 - uVar10) - uVar3 ^ uVar3 >> 5;
      uVar11 = (uVar10 - uVar12) - uVar3 ^ uVar12 >> 3;
      uVar10 = (uVar3 - uVar11) - uVar12 ^ uVar11 << 10;
      uVar3 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
      uVar3 = uVar3 + FVar2.Number;
      uVar11 = ((uVar12 - uVar10) - uVar11 ^ uVar10 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
      uVar10 = (-0x61c88647 - uVar3) - uVar11 ^ uVar11 << 8;
      uVar3 = (uVar3 - uVar10) - uVar11 ^ uVar10 >> 0xd;
      uVar11 = (uVar11 - uVar3) - uVar10 ^ uVar3 >> 0xc;
      uVar10 = (uVar10 - uVar11) - uVar3 ^ uVar11 << 0x10;
      uVar3 = (uVar3 - uVar10) - uVar11 ^ uVar10 >> 5;
      uVar11 = (uVar11 - uVar3) - uVar10 ^ uVar3 >> 3;
      uVar10 = (uVar10 - uVar11) - uVar3 ^ uVar11 << 10;
      local_res8[0] = (uVar3 - uVar10) - uVar11 ^ uVar10 >> 0xf;
      pTVar5 = &URigHierarchy::FindCachedCollection(this,local_res8[0])->Keys;
      if (pTVar5 == (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
        FStack_88 = local_res20;
        local_80 = &local_b0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        EStack_78 = local_res10;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_68[0] = (code *)0x0;
        local_90 = this;
        local_40 = FMemory::Malloc(0x28,8);
        *local_40 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FRigUnit_GetItemsInModule::StaticExecute'::`13'::<lambda_1>,0,1>
                     ::_vftable_;
        local_40[1] = local_90;
        *(FName *)(local_40 + 2) = FStack_88;
        local_40[3] = local_80;
        local_40[4] = CONCAT71(uStack_77,EStack_78);
        if (local_40 + 1 != (undefined8 *)0x0) {
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FRigUnit_GetItemsInModule::StaticExecute'::__l13::<lambda_1>,void,FRigBaseElement_*,bool_&>
                        ::Call;
        }
        URigHierarchy::Traverse
                  (this,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_68,true);
        TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
        ::Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&>
                  ((TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
                    *)&this->KeyCollectionCache,local_res8,(FRigElementKeyCollection *)&local_b0);
        _Src.Data = local_b0.AllocatorInstance.Data;
        if (param_3 != &local_b0) {
          iVar9 = local_b0.ArrayNum;
          lVar8 = (longlong)local_b0.ArrayNum;
          piVar1 = &param_3->ArrayMax;
          param_3->ArrayNum = local_b0.ArrayNum;
          if ((local_b0.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,local_b0.ArrayNum,*piVar1,&param_3->AllocatorInstance,local_b0.ArrayNum
                       ,piVar1);
            if (iVar9 != 0) {
              memcpy((param_3->AllocatorInstance).Data,_Src.Data,lVar8 * 0xc);
            }
          }
        }
        if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.AllocatorInstance.Data);
        }
      }
      else {
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar5);
      }
      goto LAB_14a577b44;
    }
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
LAB_14a577b44:
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return;
}

