// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4dad70

UScriptStruct * __cdecl FRigUnit_SetTransformArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray,(UObject *)pUVar1,
                         L"RigUnit_SetTransformArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformArray.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformArray.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4dadf0

UScriptStruct * __thiscall
FRigUnit_SetTransformArray::GetExecuteContextStruct(FRigUnit_SetTransformArray *this)

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

// Execute @ 14a4daf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetTransformArray::Execute(FRigUnit_SetTransformArray *this)

{
  float fVar1;
  bool bVar2;
  ERigVMTransformSpace EVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStackY_2e8 [32];
  TArrayView<UE::Math::TTransform<double>_const_,int> local_2a8;
  TArrayView<FRigElementKey_const_,int> local_298;
  undefined1 local_288 [592];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  if ((FRigVMNameCache *)local_288._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_288._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_2a8.DataPtr = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  iVar4 = (this->Transforms).ArrayNum;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_298.DataPtr = (FRigElementKey *)(this->Items).Keys.AllocatorInstance.Data;
  bVar7 = this->bPropagateToChildren;
  fVar1 = this->Weight;
  bVar2 = this->bInitial;
  EVar3 = this->Space;
  iVar5 = (this->Items).Keys.ArrayNum;
  local_2a8.ArrayNum = iVar4;
  if (iVar5 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_298.ArrayNum = iVar5;
  FRigUnit_SetTransformItemArray::StaticExecute
            ((FControlRigExecuteContext *)local_288,&local_298,EVar3,bVar2,&local_2a8,fVar1,bVar7,
             &this->CachedIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  return;
}

// GetUpgradeInfo @ 14a4db230

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SetTransformArray::GetUpgradeInfo
          (FRigUnit_SetTransformArray *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UPackage *pUVar4;
  FRigVMRegistry_RWLock *pFVar5;
  int iVar6;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_78;
  FRigVMStruct local_68;
  undefined **local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined2 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  float local_30;
  undefined1 local_2c;
  void *local_28;
  undefined8 local_20;
  
  local_60 = &___7FRigVMExecutePin__6B_;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_68 = (FRigVMStruct)&___7FRigUnit_SetTransformItemArray__6B_;
  local_50 = 0;
  local_48 = 1;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_30 = 1.0;
  local_2c = 1;
  local_28 = (void *)0x0;
  local_20 = 0;
  iVar6 = 0;
  if ((FRigElementKeyCollection *)&local_58 != &this->Items) {
    uVar1 = (this->Items).Keys.ArrayNum;
    pFVar3 = (this->Items).Keys.AllocatorInstance.Data;
    local_50 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1,0,&local_58,uVar1,(int *)((longlong)&local_50 + 4));
      memcpy(local_58.Data,pFVar3,(longlong)(int)uVar1 * 0xc);
      iVar6 = local_38._4_4_;
    }
  }
  local_48._0_1_ = this->Space;
  local_48._1_1_ = this->bInitial;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)&local_40 !=
      &this->Transforms) {
    iVar2 = (this->Transforms).ArrayNum;
    pFVar3 = (this->Transforms).AllocatorInstance.Data;
    local_38 = CONCAT44(local_38._4_4_,iVar2);
    if ((iVar2 == 0) && (iVar6 == 0)) {
      local_38 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar2,iVar6,&local_40,iVar2,(int *)((longlong)&local_38 + 4));
      if (iVar2 != 0) {
        memcpy(local_40.Data,pFVar3,(longlong)iVar2 * 0x60);
      }
    }
  }
  local_2c = this->bPropagateToChildren;
  local_30 = this->Weight;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray,(UObject *)pUVar4,
                         L"RigUnit_SetTransformArray");
    pFVar5 = FRigVMRegistry_RWLock::Get();
    local_78.ArrayNum = 1;
    local_78.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar5,Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformArray.OuterSingleton,
               &local_78);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformArray.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray,(UObject *)pUVar4,
                         L"RigUnit_SetTransformItemArray");
    pFVar5 = FRigVMRegistry_RWLock::Get();
    local_78.ArrayNum = 1;
    local_78.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar5,Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformItemArray.
                      OuterSingleton,&local_78);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetTransformItemArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_68);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52d890

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetTransformArray::Execute
          (FRigUnit_SetTransformArray *this,FControlRigExecuteContext *param_1)

{
  float fVar1;
  bool bVar2;
  ERigVMTransformSpace EVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_48;
  TArrayView<FRigElementKey_const_,int> local_38 [2];
  
  local_48.DataPtr = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  iVar4 = (this->Transforms).ArrayNum;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_38[0].DataPtr = (FRigElementKey *)(this->Items).Keys.AllocatorInstance.Data;
  bVar7 = this->bPropagateToChildren;
  fVar1 = this->Weight;
  bVar2 = this->bInitial;
  EVar3 = this->Space;
  iVar5 = (this->Items).Keys.ArrayNum;
  local_48.ArrayNum = iVar4;
  if (iVar5 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_38[0].ArrayNum = iVar5;
  FRigUnit_SetTransformItemArray::StaticExecute
            (param_1,local_38,EVar3,bVar2,&local_48,fVar1,bVar7,&this->CachedIndex);
  return;
}

// RigVMExecute @ 14a555630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetTransformArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMTransformSpace EVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FRigElementKeyCollection *pFVar8;
  ERigVMTransformSpace *pEVar9;
  uchar *puVar10;
  FRigVMMemoryHandle *pFVar11;
  float *pfVar12;
  uchar *puVar13;
  FRigVMSlice *pFVar14;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar15;
  FControlRigExecuteContext *pFVar16;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_48 [2];
  
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FRigElementKeyCollection *)pFVar11->Ptr;
  }
  else {
    pFVar8 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
  }
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar11[1].Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  EVar2 = *pEVar9;
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar10 = pFVar11[2].Ptr;
  }
  else {
    puVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  bVar6 = (bool)*puVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  bVar3 = (bool)*puVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar15 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar11,false,pFVar14->Offset + pFVar14->Index);
  local_48[0].DataPtr = *(TTransform<double> **)puVar10;
  local_48[0].ArrayNum = *(int *)(puVar10 + 8);
  if (local_48[0].ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pFVar8,EVar2,bVar6,local_48,fVar1,bVar3,pTVar15);
  return;
}

// StaticExecute @ 14a594db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetTransformArray::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,
          ERigVMTransformSpace param_3,bool param_4,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_5,float param_6,bool param_7,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_8)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(param_2->Keys).AllocatorInstance.Data;
  iVar1 = (param_2->Keys).ArrayNum;
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
  FRigUnit_SetTransformItemArray::StaticExecute
            (param_1,&local_18,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

