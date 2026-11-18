// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f5760

UScriptStruct * __cdecl FRigUnit_FindItemsWithMetadataTagArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray,
                         (UObject *)pUVar1,L"RigUnit_FindItemsWithMetadataTagArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f57e0

UScriptStruct * __thiscall
FRigUnit_FindItemsWithMetadataTagArray::GetExecuteContextStruct
          (FRigUnit_FindItemsWithMetadataTagArray *this)

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

// Execute @ 14a4f5b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FindItemsWithMetadataTagArray::Execute(FRigUnit_FindItemsWithMetadataTagArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FName_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
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
  local_278.DataPtr = (FName *)(this->Tags).AllocatorInstance.Data;
  iVar1 = (this->Tags).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,this->NameSpace,&this->Items);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// operator() @ 14a51b4d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  FRigBaseMetadata *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  FName local_res18 [2];
  
  FLazyName::Resolve(&URigHierarchy::TagMetadataName);
  pFVar4 = FRigBaseElement::GetMetadata(param_1,local_res18,NameArray);
  if ((pFVar4 != (FRigBaseMetadata *)0x0) && (pFVar4->Type == NameArray)) {
    plVar6 = *(longlong **)((longlong)this + 8);
    plVar1 = plVar6 + *(int *)((longlong)this + 0x10);
    if (plVar6 != plVar1) {
      plVar3 = (longlong *)pFVar4[1]._padding_;
      uVar2 = pFVar4[1].Name.ComparisonIndex.Value;
      if (plVar3 == plVar3 + (int)uVar2) goto LAB_14a51b583;
      do {
        plVar5 = plVar3;
        while (*plVar5 != *plVar6) {
          plVar5 = plVar5 + 1;
          if (plVar5 == plVar3 + (int)uVar2) {
            *param_2 = true;
            return;
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (*(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> **)this,&param_1->Key);
  }
LAB_14a51b583:
  *param_2 = true;
  return;
}

// Execute @ 14a527940

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FindItemsWithMetadataTagArray::Execute
          (FRigUnit_FindItemsWithMetadataTagArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FName_const_,int> local_18;
  
  local_18.DataPtr = (FName *)(this->Tags).AllocatorInstance.Data;
  iVar1 = (this->Tags).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&local_18,this->NameSpace,&this->Items);
  return;
}

// RigVMExecute @ 14a53f160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FindItemsWithMetadataTagArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  ERigMetaDataNameSpace *pEVar8;
  FControlRigExecuteContext *pFVar9;
  TArrayView<FName_const_,int> local_28;
  
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
    puVar7 = pFVar3->Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar3[1].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  EVar1 = *pEVar8;
  if (iVar2 < 3) {
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
  iVar2 = *(int *)(puVar7 + 8);
  pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[2].Ptr;
  local_28.DataPtr = *(FName **)puVar7;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28.ArrayNum = iVar2;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,&local_28,EVar1,pTVar4);
  return;
}

// StaticExecute @ 14a571660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FindItemsWithMetadataTagArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FName_const_,int> *param_2,
          ERigMetaDataNameSpace param_3,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_4)

{
  FName *pFVar1;
  uint uVar2;
  URigHierarchy *this;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int aiStack_a4 [3];
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  code *local_68 [5];
  undefined8 *local_40;
  
  this = param_1->Hierarchy;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if (this != (URigHierarchy *)0x0) {
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    aiStack_a4[0] = 0;
    uStack_7c = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iVar6 = param_2->ArrayNum;
    uStack_80 = *(undefined4 *)&param_2->DataPtr;
    uVar7 = *(undefined4 *)&param_2->field_0xc;
    if ((param_3 != None) && (1 < (param_1->RigModulePrefix).Data.ArrayNum)) {
      uVar2 = param_2->ArrayNum;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar2,&local_b0,0,aiStack_a4);
      }
      pFVar5 = param_2->DataPtr;
      pFVar1 = pFVar5 + param_2->ArrayNum;
      iVar6 = local_a8;
      for (; local_a8 = iVar6, pFVar5 != pFVar1; pFVar5 = pFVar5 + 1) {
        FControlRigExecuteContext::AdaptMetadataName
                  (param_1,(ERigMetaDataNameSpace)&local_b8,(FName *)(ulonglong)param_3);
        if (((local_b0.Data <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < local_b0.Data + (longlong)aiStack_a4[0] * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_a8 == aiStack_a4[0]) {
          local_a8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_b0,aiStack_a4);
        }
        iVar6 = local_a8 + 1;
        *(undefined8 *)(local_b0.Data + (longlong)local_a8 * 8) = local_b8;
      }
      local_98 = local_b0.Data;
      if ((iVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack_80 = (undefined4)local_98;
      uStack_7c = local_98._4_4_;
      uVar7 = uStack_8c;
      iStack_90 = iVar6;
    }
    local_68[0] = (code *)0x0;
    local_88 = param_4;
    iStack_78 = iVar6;
    uStack_74 = uVar7;
    local_40 = FMemory::Malloc(0x20,8);
    *local_40 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_40[1] = local_88;
    local_40[2] = CONCAT44(uStack_7c,uStack_80);
    local_40[3] = CONCAT44(uVar7,iVar6);
    if (local_40 + 1 != (undefined8 *)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                    ::Call;
    }
    URigHierarchy::Traverse(this,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_68,true)
    ;
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
  }
  return;
}

