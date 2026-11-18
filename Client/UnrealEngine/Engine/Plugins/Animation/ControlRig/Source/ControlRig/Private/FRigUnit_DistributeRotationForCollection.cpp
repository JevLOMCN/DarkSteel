// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4e5c90

UScriptStruct * __cdecl FRigUnit_DistributeRotationForCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection,
                         (UObject *)pUVar1,L"RigUnit_DistributeRotationForCollection");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForCollection.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForCollection.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e5d50

UScriptStruct * __thiscall
FRigUnit_DistributeRotationForCollection::GetExecuteContextStruct
          (FRigUnit_DistributeRotationForCollection *this)

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

// Execute @ 14a4e6030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DistributeRotationForCollection::Execute(FRigUnit_DistributeRotationForCollection *this)

{
  float fVar1;
  ERigVMAnimEasingType EVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 auStackY_2c8 [32];
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_298;
  TArrayView<FRigElementKey_const_,int> local_288;
  undefined1 local_278 [592];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  if ((FRigVMNameCache *)local_278._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_278._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_298.DataPtr =
       (FRigUnit_DistributeRotation_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar3 = (this->Rotations).ArrayNum;
  if (iVar3 < 0) {
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
  local_288.DataPtr = (FRigElementKey *)(this->Items).Keys.AllocatorInstance.Data;
  fVar1 = this->Weight;
  EVar2 = this->RotationEaseType;
  iVar4 = (this->Items).Keys.ArrayNum;
  local_298.ArrayNum = iVar3;
  if (iVar4 < 0) {
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
  local_288.ArrayNum = iVar4;
  FRigUnit_DistributeRotationForItemArray::StaticExecute
            ((FControlRigExecuteContext *)local_278,&local_288,&local_298,EVar2,fVar1,
             &this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  return;
}

// GetUpgradeInfo @ 14a4e6240

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DistributeRotationForCollection::GetUpgradeInfo
          (FRigUnit_DistributeRotationForCollection *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UPackage *pUVar4;
  FRigVMRegistry_RWLock *pFVar5;
  int iVar6;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_b8;
  FRigVMStruct local_a8;
  undefined **local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  ERigVMAnimEasingType local_78;
  float local_74;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  
  local_a0 = &___7FRigVMExecutePin__6B_;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_a8 = (FRigVMStruct)&___7FRigUnit_DistributeRotationForItemArray__6B_;
  local_90 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_78 = 0;
  local_74 = 1.0;
  iVar6 = 0;
  if ((FRigElementKeyCollection *)&local_98 != &this->Items) {
    uVar1 = (this->Items).Keys.ArrayNum;
    pFVar3 = (this->Items).Keys.AllocatorInstance.Data;
    local_90 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1,0,&local_98,uVar1,(int *)((longlong)&local_90 + 4));
      memcpy(local_98.Data,pFVar3,(longlong)(int)uVar1 * 0xc);
      iVar6 = local_80._4_4_;
    }
  }
  if ((TArray<FRigUnit_DistributeRotation_Rotation,TSizedDefaultAllocator<32>_> *)&local_88 !=
      &this->Rotations) {
    iVar2 = (this->Rotations).ArrayNum;
    pFVar3 = (this->Rotations).AllocatorInstance.Data;
    local_80 = CONCAT44(local_80._4_4_,iVar2);
    if ((iVar2 == 0) && (iVar6 == 0)) {
      local_80 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar2,iVar6,&local_88,iVar2,(int *)((longlong)&local_80 + 4));
      if (iVar2 != 0) {
        memcpy(local_88.Data,pFVar3,(longlong)iVar2 * 0x30);
      }
    }
  }
  local_78 = this->RotationEaseType;
  local_74 = this->Weight;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection,
                         (UObject *)pUVar4,L"RigUnit_DistributeRotationForCollection");
    pFVar5 = FRigVMRegistry_RWLock::Get();
    local_b8.ArrayNum = 1;
    local_b8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar5,Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForCollection.
                      OuterSingleton,&local_b8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForCollection.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray,
                         (UObject *)pUVar4,L"RigUnit_DistributeRotationForItemArray");
    pFVar5 = FRigVMRegistry_RWLock::Get();
    local_b8.ArrayNum = 1;
    local_b8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar5,Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForItemArray.
                      OuterSingleton,&local_b8);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForItemArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_a8);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return __return_storage_ptr__;
}

// ~FRigUnit_DistributeRotationForCollection @ 14a518550

void __thiscall
FRigUnit_DistributeRotationForCollection::~FRigUnit_DistributeRotationForCollection
          (FRigUnit_DistributeRotationForCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorkData).ItemLocalTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).ItemRotationT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).ItemRotationB.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).ItemRotationA.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).CachedItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Rotations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Items).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a526f80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DistributeRotationForCollection::Execute
          (FRigUnit_DistributeRotationForCollection *this,FControlRigExecuteContext *param_1)

{
  float fVar1;
  ERigVMAnimEasingType EVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_38;
  TArrayView<FRigElementKey_const_,int> local_28 [2];
  
  local_38.DataPtr =
       (FRigUnit_DistributeRotation_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar3 = (this->Rotations).ArrayNum;
  if (iVar3 < 0) {
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
  local_28[0].DataPtr = (FRigElementKey *)(this->Items).Keys.AllocatorInstance.Data;
  fVar1 = this->Weight;
  EVar2 = this->RotationEaseType;
  iVar4 = (this->Items).Keys.ArrayNum;
  local_38.ArrayNum = iVar3;
  if (iVar4 < 0) {
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
  local_28[0].ArrayNum = iVar4;
  FRigUnit_DistributeRotationForItemArray::StaticExecute
            (param_1,local_28,&local_38,EVar2,fVar1,&this->WorkData);
  return;
}

// RigVMExecute @ 14a53d360

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DistributeRotationForCollection::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMAnimEasingType EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKeyCollection *pFVar6;
  uchar *puVar7;
  ERigVMAnimEasingType *pEVar8;
  FRigVMMemoryHandle *pFVar9;
  float *pfVar10;
  FRigVMSlice *pFVar11;
  FRigUnit_DistributeRotation_WorkData *pFVar12;
  FControlRigExecuteContext *pFVar13;
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_38 [2];
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKeyCollection *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar3 < 2) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar9[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar3 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar9[2].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  EVar2 = *pEVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FRigUnit_DistributeRotation_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  local_38[0].DataPtr = *(FRigUnit_DistributeRotation_Rotation **)puVar7;
  local_38[0].ArrayNum = *(int *)(puVar7 + 8);
  if (local_38[0].ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar6,local_38,EVar2,fVar1,pFVar12);
  return;
}

// StaticExecute @ 14a56c920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DistributeRotationForCollection::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,
          TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> *param_3,
          ERigVMAnimEasingType param_4,float param_5,FRigUnit_DistributeRotation_WorkData *param_6)

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
  FRigUnit_DistributeRotationForItemArray::StaticExecute
            (param_1,&local_18,param_3,param_4,param_5,param_6);
  return;
}

