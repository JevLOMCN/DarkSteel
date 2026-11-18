// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4c0d00

UScriptStruct * __cdecl FRigUnit_CollectionGetAll::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll,(UObject *)pUVar1,
                         L"RigUnit_CollectionGetAll");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c0d80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_CollectionGetAll::GetExecuteContextStruct(FRigUnit_CollectionGetAll *this)

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

// Execute @ 14a4c0f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionGetAll::Execute(FRigUnit_CollectionGetAll *this)

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

// Execute @ 14a525520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionGetAll::Execute
          (FRigUnit_CollectionGetAll *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->TypeToSearch,&this->Items);
  return;
}

// RigVMExecute @ 14a537e20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionGetAll::RigVMExecute
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

// StaticExecute @ 14a568480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionGetAll::StaticExecute
          (FControlRigExecuteContext *param_1,ERigElementType param_2,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  URigHierarchy *this;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *this_00;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint local_res8 [2];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_88;
  FRigVMCompiledInFunction *local_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_68;
  code *local_58 [2];
  undefined **local_48;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *local_40;
  ERigElementType local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  undefined8 local_30;
  
  if (param_1->Hierarchy == (URigHierarchy *)0x0) {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
      return;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll,(UObject *)pUVar2,
                           L"RigUnit_CollectionGetAll");
      this_00 = FRigVMRegistry_RWLock::Get();
      local_78 = Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::RigVMFunctions;
      uStack_70 = 1;
      local_68._12_1_ = uStack_6c;
      local_68.ArrayNum = 1;
      local_68._13_2_ = uStack_6b;
      local_68._15_1_ = uStack_69;
      local_68.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::RigVMFunctions
      ;
      FRigVMRegistry_RWLock::RegisterCompiledInStruct
                (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton,
                 &local_68);
    }
    this = param_1->Hierarchy;
    uVar4 = ((uint)((ulonglong)
                    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton >>
                   0x14) & 0xffff ^
            (uint)((ulonglong)
                   Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetAll.OuterSingleton >> 4))
            * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    iVar6 = (uVar4 ^ uVar4 >> 0x10) + this->TopologyVersion * 0x11;
    iVar5 = iVar6 + (uint)param_2 * -8;
    uVar9 = iVar5 * 0x100 ^ 0x9e3779b9U - iVar6;
    uVar7 = ((uint)param_2 * 8 - uVar9) - iVar5 ^ uVar9 >> 0xd;
    uVar4 = (iVar5 - uVar7) - uVar9 ^ uVar7 >> 0xc;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar4) - uVar9 ^ uVar9 >> 5;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 >> 3;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xf;
    pTVar3 = &URigHierarchy::FindCachedCollection(this,uVar4)->Keys;
    if (pTVar3 == (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
      local_30 = 0;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FRigUnit_CollectionGetAll::StaticExecute'::`10'::<lambda_1>,0,0>
                  ::_vftable_;
      local_40 = &local_88;
      local_37._3_1_ = uStack_6c;
      local_37._0_3_ = uStack_70._1_3_;
      local_33 = uStack_6b;
      local_31 = uStack_69;
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRigUnit_CollectionGetAll::StaticExecute'::__l10::<lambda_1>,void,FRigBaseElement_*,bool_&>
                    ::Call;
      local_38 = param_2;
      URigHierarchy::Traverse
                (this,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_58,true);
      local_res8[0] = uVar4;
      TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
      ::Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&>
                ((TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
                  *)&param_1->Hierarchy->KeyCollectionCache,local_res8,
                 (FRigElementKeyCollection *)&local_88);
    }
    else {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(&local_88,pTVar3);
    }
    _Src.Data = local_88.AllocatorInstance.Data;
    if (param_3 != &local_88) {
      iVar5 = local_88.ArrayNum;
      lVar8 = (longlong)local_88.ArrayNum;
      piVar1 = &param_3->ArrayMax;
      param_3->ArrayNum = local_88.ArrayNum;
      if ((local_88.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_88.ArrayNum,*piVar1,&param_3->AllocatorInstance,local_88.ArrayNum,
                   piVar1);
        if (iVar5 != 0) {
          memcpy((param_3->AllocatorInstance).Data,_Src.Data,lVar8 * 0xc);
        }
      }
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  return;
}

