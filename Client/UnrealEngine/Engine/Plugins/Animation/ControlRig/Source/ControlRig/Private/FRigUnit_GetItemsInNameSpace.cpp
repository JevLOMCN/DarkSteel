// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f4600

UScriptStruct * __cdecl FRigUnit_GetItemsInNameSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInNameSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInNameSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace,(UObject *)pUVar1,
                         L"RigUnit_GetItemsInNameSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInNameSpace.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInNameSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f4680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetItemsInNameSpace::GetExecuteContextStruct(FRigUnit_GetItemsInNameSpace *this)

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

// Execute @ 14a4f4be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetItemsInNameSpace::Execute(FRigUnit_GetItemsInNameSpace *this)

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
  FRigUnit_GetItemsInModule::StaticExecute
            ((FControlRigExecuteContext *)local_268,this->TypeToSearch,&this->Items);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4f4cb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_GetItemsInNameSpace::GetUpgradeInfo
          (FRigUnit_GetItemsInNameSpace *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_38;
  FRigVMStruct local_28;
  ERigElementType local_20;
  void *local_18;
  undefined8 local_10;
  
  local_28 = (FRigVMStruct)&___7FRigUnit_GetItemsInModule__6B_;
  local_20 = this->TypeToSearch;
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInNameSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInNameSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace,(UObject *)pUVar1,
                         L"RigUnit_GetItemsInNameSpace");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_38.ArrayNum = 1;
    local_38.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInNameSpace.OuterSingleton
               ,&local_38);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetItemsInNameSpace.OuterSingleton;
  pUVar2 = FRigUnit_GetItemsInModule::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_28);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a528590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetItemsInNameSpace::Execute
          (FRigUnit_GetItemsInNameSpace *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_GetItemsInModule::StaticExecute(param_1,this->TypeToSearch,&this->Items);
  return;
}

// RigVMExecute @ 14a5428a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetItemsInNameSpace::RigVMExecute
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
  FRigUnit_GetItemsInModule::StaticExecute(pFVar8,EVar1,pTVar4);
  return;
}

// StaticExecute @ 14a577b70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_GetItemsInNameSpace::StaticExecute
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
  uint auStackX_8 [2];
  ERigElementType EStackX_10;
  FName FStackX_20;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> TStack_b0;
  FString FStack_a0;
  URigHierarchy *pUStack_90;
  FName FStack_88;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTStack_80;
  ERigElementType EStack_78;
  undefined7 uStack_77;
  code *apcStack_68 [5];
  undefined8 *puStack_40;
  
  this = param_1->Hierarchy;
  EStackX_10 = param_2;
  if (this == (URigHierarchy *)0x0) {
    param_3->ArrayNum = 0;
    if (-1 < param_3->ArrayMax) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    return;
  }
  FStack_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a0.Data.ArrayNum = 0;
  FStack_a0.Data.ArrayMax = 0;
  if ((param_1->RigModulePrefix).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->RigModulePrefix).Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&FStack_a0,pwVar7);
  if (1 < FStack_a0.Data.ArrayNum) {
    iVar9 = FStack_a0.Data.ArrayNum + -1;
    if (FStack_a0.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (iVar9 + -1 < iVar9) {
      iVar9 = iVar9 + -1;
    }
    iVar6 = 0;
    if (0 < iVar9) {
      iVar6 = iVar9;
    }
    ::FString::RemoveAt(&FStack_a0,iVar6,1,Default);
    if (1 < FStack_a0.Data.ArrayNum) {
      ::FName::FName(&FStackX_20,(wchar_t *)FStack_a0.Data.AllocatorInstance.Data);
      pUVar4 = FRigUnit_GetItemsInModule::StaticStruct();
      FVar2 = FStackX_20;
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
      uVar3 = ::GetTypeHash(FStackX_20.ComparisonIndex.Value);
      uVar3 = uVar3 + FVar2.Number;
      uVar11 = ((uVar12 - uVar10) - uVar11 ^ uVar10 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
      uVar10 = (-0x61c88647 - uVar3) - uVar11 ^ uVar11 << 8;
      uVar3 = (uVar3 - uVar10) - uVar11 ^ uVar10 >> 0xd;
      uVar11 = (uVar11 - uVar3) - uVar10 ^ uVar3 >> 0xc;
      uVar10 = (uVar10 - uVar11) - uVar3 ^ uVar11 << 0x10;
      uVar3 = (uVar3 - uVar10) - uVar11 ^ uVar10 >> 5;
      uVar11 = (uVar11 - uVar3) - uVar10 ^ uVar3 >> 3;
      uVar10 = (uVar10 - uVar11) - uVar3 ^ uVar11 << 10;
      auStackX_8[0] = (uVar3 - uVar10) - uVar11 ^ uVar10 >> 0xf;
      pTVar5 = &URigHierarchy::FindCachedCollection(this,auStackX_8[0])->Keys;
      if (pTVar5 == (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
        FStack_88 = FStackX_20;
        pTStack_80 = &TStack_b0;
        TStack_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        EStack_78 = EStackX_10;
        TStack_b0.ArrayNum = 0;
        TStack_b0.ArrayMax = 0;
        apcStack_68[0] = (code *)0x0;
        pUStack_90 = this;
        puStack_40 = FMemory::Malloc(0x28,8);
        *puStack_40 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRigUnit_GetItemsInModule::StaticExecute'::`13'::<lambda_1>,0,1>
                       ::_vftable_;
        puStack_40[1] = pUStack_90;
        *(FName *)(puStack_40 + 2) = FStack_88;
        puStack_40[3] = pTStack_80;
        puStack_40[4] = CONCAT71(uStack_77,EStack_78);
        if (puStack_40 + 1 != (undefined8 *)0x0) {
          apcStack_68[0] =
               UE::Core::Private::Function::
               TFunctionRefCaller<`FRigUnit_GetItemsInModule::StaticExecute'::__l13::<lambda_1>,void,FRigBaseElement_*,bool_&>
               ::Call;
        }
        URigHierarchy::Traverse
                  (this,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)apcStack_68,true);
        TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
        ::Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&>
                  ((TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
                    *)&this->KeyCollectionCache,auStackX_8,(FRigElementKeyCollection *)&TStack_b0);
        _Src.Data = TStack_b0.AllocatorInstance.Data;
        if (param_3 != &TStack_b0) {
          iVar9 = TStack_b0.ArrayNum;
          lVar8 = (longlong)TStack_b0.ArrayNum;
          piVar1 = &param_3->ArrayMax;
          param_3->ArrayNum = TStack_b0.ArrayNum;
          if ((TStack_b0.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,TStack_b0.ArrayNum,*piVar1,&param_3->AllocatorInstance,
                       TStack_b0.ArrayNum,piVar1);
            if (iVar9 != 0) {
              memcpy((param_3->AllocatorInstance).Data,_Src.Data,lVar8 * 0xc);
            }
          }
        }
        if (TStack_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_b0.AllocatorInstance.Data);
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
  if (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
  }
  return;
}

