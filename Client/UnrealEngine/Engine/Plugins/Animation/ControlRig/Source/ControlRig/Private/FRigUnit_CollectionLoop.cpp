// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// StaticStruct @ 14a4d0ae0

UScriptStruct * __cdecl FRigUnit_CollectionLoop::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionLoop.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionLoop.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionLoop,(UObject *)pUVar1,
                         L"RigUnit_CollectionLoop");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionLoop.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionLoop.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4d0b60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_CollectionLoop::GetExecuteContextStruct(FRigUnit_CollectionLoop *this)

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

// GetControlFlowBlocks_Impl @ 14a4d1a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl(FRigUnit_CollectionLoop *this)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
      FLazyName::Resolve(&FRigVMStruct::ForLoopCompletedPinName);
      _Blocks = (undefined8 *)0x0;
      _DAT_1552b3930 = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,2,0,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
                          ::__l2::Blocks,2,(int *)&DAT_1552b3934);
      puVar1 = _Blocks;
      *_Blocks = local_18;
      puVar1[1] = uStack_10;
      atexit(`FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl'::__l2::
             _dynamic_atexit_destructor_for__Blocks__);
      _Init_thread_footer(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<FName,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
              ::__l2::Blocks;
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_CollectionLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
          ::__l2::Blocks;
}

// IsControlFlowBlockSliced @ 14a4d1b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_CollectionLoop::IsControlFlowBlockSliced(FRigUnit_CollectionLoop *this,FName *param_1)

{
  FName local_res10;
  
  FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
  return *param_1 == local_res10;
}

// GetNumSlices @ 14a4d1b70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigUnit_CollectionLoop::GetNumSlices(FRigUnit_CollectionLoop *this)

{
  return this->Count;
}

// Execute @ 14a4d1b80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionLoop::Execute(FRigUnit_CollectionLoop *this)

{
  (**(code **)(*(longlong *)&this->Completed + 8))(&this->Completed);
  StaticExecute(&this->Completed,&this->BlockToRun,&this->Collection,&this->Item,&this->Index,
                &this->Count,&this->Ratio);
  return;
}

// GetUpgradeInfo @ 14a4d1f60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_CollectionLoop::GetUpgradeInfo
          (FRigUnit_CollectionLoop *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_CollectionLoop @ 14a50d4d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_CollectionLoop * __thiscall
FRigUnit_CollectionLoop::FRigUnit_CollectionLoop(FRigUnit_CollectionLoop *this)

{
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->BlockToRun).ComparisonIndex = 0;
  (this->BlockToRun).Number = 0;
  this->_padding_ = (longlong)&___7FRigUnit_CollectionLoop__6B_;
  (this->Collection).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Collection).Keys.ArrayNum = 0;
  (this->Collection).Keys.ArrayMax = 0;
  (this->Item).Type = None;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  FControlRigExecuteContext::FControlRigExecuteContext(&this->Completed);
  this->Index = 0;
  this->Count = 0;
  (this->BlockToRun).ComparisonIndex = 0;
  (this->BlockToRun).Number = 0;
  this->Ratio = 0.0;
  return this;
}

// Execute @ 14a525890

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionLoop::Execute(FRigUnit_CollectionLoop *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->BlockToRun,&this->Collection,&this->Item,&this->Index,&this->Count,
                &this->Ratio);
  return;
}

// RigVMExecute @ 14a538680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionLoop::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigElementKey *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FRigElementKeyCollection *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  int *piVar8;
  int *piVar9;
  float *pfVar10;
  FControlRigExecuteContext *pFVar11;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKeyCollection *)pFVar7[1].Ptr;
  }
  else {
    pFVar6 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
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
  pFVar2 = (FRigElementKey *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  piVar8 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  piVar9 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar5,pFVar6,pFVar2,piVar8,piVar9,pfVar10);
  return;
}

// StaticExecute @ 14a5691d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionLoop::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FRigElementKeyCollection *param_3,
          FRigElementKey *param_4,int *param_5,int *param_6,float *param_7)

{
  int iVar1;
  ulonglong uVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  FRigElementKey *pFVar5;
  float fVar6;
  uint local_18;
  
  if (*param_2 == (FName)0x0) {
    *param_6 = (param_3->Keys).ArrayNum;
    *param_5 = 0;
    FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
    *param_2 = (FName)param_5;
  }
  else {
    FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
    if (*param_2 == (FName)param_5) {
      *param_5 = *param_5 + 1;
    }
  }
  iVar1 = *param_5;
  if ((iVar1 < 0) || ((param_3->Keys).ArrayNum <= iVar1)) {
    local_18 = local_18 & 0xffffff00;
    uVar2 = (ulonglong)local_18;
    param_4->Type = (char)uVar2;
    *(int3 *)&param_4->field_0x1 = (int3)(uVar2 >> 8);
    (param_4->Name).ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
    (param_4->Name).Number = 0;
    FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
    *param_2 = (FName)param_5;
  }
  else {
    pFVar5 = FRigElementKeyCollection::operator[](param_3,iVar1);
    uVar3 = *(undefined3 *)&pFVar5->field_0x1;
    FVar4.Value = (pFVar5->Name).ComparisonIndex.Value;
    param_4->Type = pFVar5->Type;
    *(undefined3 *)&param_4->field_0x1 = uVar3;
    (param_4->Name).ComparisonIndex = (FNameEntryId)FVar4.Value;
    (param_4->Name).Number = (pFVar5->Name).Number;
  }
  fVar6 = FRigVMStruct::GetRatioFromIndex(*param_5,*param_6);
  *param_7 = fVar6;
  return;
}

