// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4e5430

UScriptStruct * __cdecl FRigUnit_HierarchyGetPoseItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray,
                         (UObject *)pUVar1,L"RigUnit_HierarchyGetPoseItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray.OuterSingleton;
}

// FRigUnit_HierarchyGetPoseItemArray @ 14a511ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_HierarchyGetPoseItemArray * __thiscall
FRigUnit_HierarchyGetPoseItemArray::FRigUnit_HierarchyGetPoseItemArray
          (FRigUnit_HierarchyGetPoseItemArray *this)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStackY_c8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  (this->Pose).HierarchyTopologyVersion = -1;
  (this->Pose).PoseHash = -1;
  (this->ItemsToGet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->Pose;
  pTVar2 = &(this->Pose).KeyToIndex;
  (this->ItemsToGet).ArrayNum = 0;
  (this->ItemsToGet).ArrayMax = 0;
  *(undefined8 *)pTVar2 = 0;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyGetPoseItemArray__6B_;
  local_88._0_4_ = -1;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  (pFVar1->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = 0;
  (this->Pose).Elements.ArrayNum = 0;
  (this->Pose).Elements.ArrayMax = 0;
  (this->Pose).CachedPoseHash = -1;
  local_88._4_4_ = -1;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  this->Initial = false;
  this->ElementType = All;
  local_38 = (void *)0x0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88 = 0xffffffffffffffff;
  local_80 = -1;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_30 = 0;
  iVar7 = local_88._4_4_;
  iVar6 = (int)local_88;
  if (pFVar1 != (FRigPose *)&local_98) {
    pFVar3 = (pFVar1->Elements).AllocatorInstance.Data;
    local_90._4_4_ = (int)local_90;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Elements).AllocatorInstance.Data = local_98.Data;
    (this->Pose).Elements.ArrayNum = (int)local_90;
    (this->Pose).Elements.ArrayMax = local_90._4_4_;
    iVar7 = local_88._4_4_;
    iVar6 = (int)local_88;
  }
  local_90 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  (this->Pose).HierarchyTopologyVersion = iVar6;
  (this->Pose).PoseHash = iVar7;
  (this->Pose).CachedPoseHash = local_80;
  if (pTVar2 != (TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                 *)&local_78) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(FScriptContainerElement **)pTVar2 = local_78.Data;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x8 = (undefined4)local_70;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0xc = local_70._4_4_;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    if ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pose).KeyToIndex.field_0x10 != &local_68) {
      if (local_68.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        (this->Pose).KeyToIndex.field_0x10 = local_68.AllocatorInstance.InlineData[0];
        (this->Pose).KeyToIndex.field_0x11 = local_68.AllocatorInstance.InlineData[1];
        (this->Pose).KeyToIndex.field_0x12 = local_68.AllocatorInstance.InlineData[2];
        (this->Pose).KeyToIndex.field_0x13 = local_68.AllocatorInstance.InlineData[3];
        (this->Pose).KeyToIndex.field_0x14 = local_68.AllocatorInstance.InlineData[4];
        (this->Pose).KeyToIndex.field_0x15 = local_68.AllocatorInstance.InlineData[5];
        (this->Pose).KeyToIndex.field_0x16 = local_68.AllocatorInstance.InlineData[6];
        (this->Pose).KeyToIndex.field_0x17 = local_68.AllocatorInstance.InlineData[7];
        (this->Pose).KeyToIndex.field_0x18 = local_68.AllocatorInstance.InlineData[8];
        (this->Pose).KeyToIndex.field_0x19 = local_68.AllocatorInstance.InlineData[9];
        (this->Pose).KeyToIndex.field_0x1a = local_68.AllocatorInstance.InlineData[10];
        (this->Pose).KeyToIndex.field_0x1b = local_68.AllocatorInstance.InlineData[0xb];
        (this->Pose).KeyToIndex.field_0x1c = local_68.AllocatorInstance.InlineData[0xc];
        (this->Pose).KeyToIndex.field_0x1d = local_68.AllocatorInstance.InlineData[0xd];
        (this->Pose).KeyToIndex.field_0x1e = local_68.AllocatorInstance.InlineData[0xe];
        (this->Pose).KeyToIndex.field_0x1f = local_68.AllocatorInstance.InlineData[0xf];
      }
      pvVar4 = *(void **)&(this->Pose).KeyToIndex.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(ForElementType<unsigned_int> *)&(this->Pose).KeyToIndex.field_0x20 =
           local_68.AllocatorInstance.SecondaryData;
      *(int *)&(this->Pose).KeyToIndex.field_0x28 = local_68.NumBits;
      *(int *)&(this->Pose).KeyToIndex.field_0x2c = local_68.MaxBits;
      local_68.NumBits = 0;
      local_68.MaxBits = 0;
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    }
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = local_48;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = local_44;
    local_44 = 0;
    local_48 = 0xffffffff;
    if (local_38 == (void *)0x0) {
      *(undefined4 *)&(this->Pose).KeyToIndex.field_0x38 = local_40;
    }
    pvVar4 = *(void **)&(this->Pose).KeyToIndex.field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(void **)&(this->Pose).KeyToIndex.field_0x40 = local_38;
    local_38 = (void *)0x0;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = local_30;
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar5 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  iVar7 = local_68.MaxBits;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68._24_8_ = (ulonglong)(uint)local_68.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return this;
}

// ~FRigUnit_HierarchyGetPoseItemArray @ 14a518960

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetPoseItemArray::~FRigUnit_HierarchyGetPoseItemArray
          (FRigUnit_HierarchyGetPoseItemArray *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Pose).KeyToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Pose).KeyToIndex);
  pFVar2 = (this->Pose).Elements.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ItemsToGet).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a529ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetPoseItemArray::Execute
          (FRigUnit_HierarchyGetPoseItemArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRigPose *pFVar4;
  undefined1 auStackY_c8 [32];
  TArrayView<FRigElementKey_const_,int> local_98;
  undefined1 local_88 [96];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98.DataPtr = (FRigElementKey *)(this->ItemsToGet).AllocatorInstance.Data;
  iVar1 = (this->ItemsToGet).ArrayNum;
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
  local_98.ArrayNum = iVar1;
  pFVar4 = URigHierarchy::GetPose
                     (param_1->Hierarchy,(FRigPose *)local_88,this->Initial,this->ElementType,
                      &local_98,true);
  FRigPose::operator=(&this->Pose,pFVar4);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_88 + 0x20));
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// Execute @ 14a529ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetPoseItemArray::Execute(FRigUnit_HierarchyGetPoseItemArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRigPose *pFVar4;
  undefined1 auStackY_318 [32];
  TArrayView<FRigElementKey_const_,int> local_2e8;
  undefined1 local_2d8 [96];
  void *local_278;
  undefined4 local_270;
  undefined1 local_268 [456];
  URigHierarchy *local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_318;
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
  local_2e8.DataPtr = (FRigElementKey *)(this->ItemsToGet).AllocatorInstance.Data;
  iVar1 = (this->ItemsToGet).ArrayNum;
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
  local_2e8.ArrayNum = iVar1;
  pFVar4 = URigHierarchy::GetPose
                     (local_a0,(FRigPose *)local_2d8,this->Initial,this->ElementType,&local_2e8,true
                     );
  FRigPose::operator=(&this->Pose,pFVar4);
  local_270 = 0;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_2d8 + 0x20));
  if ((FScriptContainerElement *)local_2d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2d8._0_8_);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530e20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetPoseItemArray::GetExecuteContextStruct
          (FRigUnit_HierarchyGetPoseItemArray *this)

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

// RigVMExecute @ 14a548630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetPoseItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigElementType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  ERigElementType *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigPose *pFVar9;
  FControlRigExecuteContext *pFVar10;
  TArrayView<FRigElementKey_const_,int> local_28;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
    puVar6 = pFVar8->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  bVar4 = (bool)*puVar6;
  if (iVar2 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar8[1].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  EVar1 = *pEVar7;
  if (iVar2 < 3) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar8[2].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = (FRigPose *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  local_28.DataPtr = *(FRigElementKey **)puVar6;
  local_28.ArrayNum = *(int *)(puVar6 + 8);
  if (local_28.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,bVar4,EVar1,&local_28,pFVar9);
  return;
}

// StaticExecute @ 14a581220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetPoseItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,bool param_2,ERigElementType param_3,
          TArrayView<FRigElementKey_const_,int> *param_4,FRigPose *param_5)

{
  FRigPose *pFVar1;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [96];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar1 = URigHierarchy::GetPose
                     (param_1->Hierarchy,(FRigPose *)local_88,param_2,param_3,param_4,true);
  FRigPose::operator=(param_5,pFVar1);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_88 + 0x20));
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

