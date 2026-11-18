// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a4d80e0

UScriptStruct * __cdecl FRigUnit_DistributeRotation::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation,(UObject *)pUVar1,
                         L"RigUnit_DistributeRotation");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotation.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotation.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4d8160

UScriptStruct * __thiscall
FRigUnit_DistributeRotation::GetExecuteContextStruct(FRigUnit_DistributeRotation *this)

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

// Execute @ 14a4d8510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_DistributeRotation::Execute(FRigUnit_DistributeRotation *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
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
  local_278.DataPtr =
       (FRigUnit_DistributeRotation_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar1 = (this->Rotations).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->StartBone,&this->EndBone,&local_278,
                this->RotationEaseType,this->Weight,this->bPropagateToChildren,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4e07e0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DistributeRotation::GetUpgradeInfo
          (FRigUnit_DistributeRotation *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ~FRigUnit_DistributeRotation @ 14a5184d0

void __thiscall
FRigUnit_DistributeRotation::~FRigUnit_DistributeRotation(FRigUnit_DistributeRotation *this)

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
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// operator= @ 14a51a290

FRigUnit_DistributeRotation * __thiscall
FRigUnit_DistributeRotation::operator=
          (FRigUnit_DistributeRotation *this,FRigUnit_DistributeRotation *param_1)

{
  TArray<FRigUnit_DistributeRotation_Rotation,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigUnit_DistributeRotation_Rotation,TSizedDefaultAllocator<32>_> *pTVar2;
  FRigUnit_DistributeRotation_WorkData *pFVar3;
  FRigUnit_DistributeRotation_WorkData *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  
  pTVar1 = &param_1->Rotations;
  this->StartBone = param_1->StartBone;
  pTVar2 = &this->Rotations;
  this->EndBone = param_1->EndBone;
  if (pTVar2 != pTVar1) {
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Rotations).ArrayNum = (param_1->Rotations).ArrayNum;
    (this->Rotations).ArrayMax = (param_1->Rotations).ArrayMax;
    (param_1->Rotations).ArrayNum = 0;
    (param_1->Rotations).ArrayMax = 0;
  }
  pFVar3 = &param_1->WorkData;
  this->RotationEaseType = param_1->RotationEaseType;
  this->Weight = param_1->Weight;
  pFVar4 = &this->WorkData;
  this->bPropagateToChildren = param_1->bPropagateToChildren;
  if (pFVar4 != pFVar3) {
    pFVar9 = (pFVar4->CachedItems).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar4->CachedItems).AllocatorInstance.Data = (pFVar3->CachedItems).AllocatorInstance.Data;
    (pFVar3->CachedItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WorkData).CachedItems.ArrayNum = (param_1->WorkData).CachedItems.ArrayNum;
    (this->WorkData).CachedItems.ArrayMax = (param_1->WorkData).CachedItems.ArrayMax;
    (param_1->WorkData).CachedItems.ArrayNum = 0;
    (param_1->WorkData).CachedItems.ArrayMax = 0;
  }
  pTVar5 = &(param_1->WorkData).ItemRotationA;
  pTVar6 = &(this->WorkData).ItemRotationA;
  if (pTVar6 != pTVar5) {
    pFVar9 = (pTVar6->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorkData).ItemRotationA.ArrayNum = (param_1->WorkData).ItemRotationA.ArrayNum;
    (this->WorkData).ItemRotationA.ArrayMax = (param_1->WorkData).ItemRotationA.ArrayMax;
    (param_1->WorkData).ItemRotationA.ArrayNum = 0;
    (param_1->WorkData).ItemRotationA.ArrayMax = 0;
  }
  pTVar5 = &(param_1->WorkData).ItemRotationB;
  pTVar6 = &(this->WorkData).ItemRotationB;
  if (pTVar6 != pTVar5) {
    pFVar9 = (pTVar6->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorkData).ItemRotationB.ArrayNum = (param_1->WorkData).ItemRotationB.ArrayNum;
    (this->WorkData).ItemRotationB.ArrayMax = (param_1->WorkData).ItemRotationB.ArrayMax;
    (param_1->WorkData).ItemRotationB.ArrayNum = 0;
    (param_1->WorkData).ItemRotationB.ArrayMax = 0;
  }
  pTVar7 = &(param_1->WorkData).ItemRotationT;
  pTVar8 = &(this->WorkData).ItemRotationT;
  if (pTVar8 != pTVar7) {
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorkData).ItemRotationT.ArrayNum = (param_1->WorkData).ItemRotationT.ArrayNum;
    (this->WorkData).ItemRotationT.ArrayMax = (param_1->WorkData).ItemRotationT.ArrayMax;
    (param_1->WorkData).ItemRotationT.ArrayNum = 0;
    (param_1->WorkData).ItemRotationT.ArrayMax = 0;
  }
  pTVar10 = &(param_1->WorkData).ItemLocalTransforms;
  pTVar11 = &(this->WorkData).ItemLocalTransforms;
  if (pTVar11 != pTVar10) {
    pFVar9 = (pTVar11->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar11->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorkData).ItemLocalTransforms.ArrayNum = (param_1->WorkData).ItemLocalTransforms.ArrayNum
    ;
    (this->WorkData).ItemLocalTransforms.ArrayMax = (param_1->WorkData).ItemLocalTransforms.ArrayMax
    ;
    (param_1->WorkData).ItemLocalTransforms.ArrayNum = 0;
    (param_1->WorkData).ItemLocalTransforms.ArrayMax = 0;
  }
  return this;
}

// Execute @ 14a526ee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DistributeRotation::Execute
          (FRigUnit_DistributeRotation *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_18;
  
  local_18.DataPtr =
       (FRigUnit_DistributeRotation_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar1 = (this->Rotations).ArrayNum;
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
  StaticExecute(param_1,&this->StartBone,&this->EndBone,&local_18,this->RotationEaseType,
                this->Weight,this->bPropagateToChildren,&this->WorkData);
  return;
}

// RigVMExecute @ 14a53d0f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DistributeRotation::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMAnimEasingType EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FName *pFVar8;
  uchar *puVar9;
  FRigVMMemoryHandle *pFVar10;
  ERigVMAnimEasingType *pEVar11;
  float *pfVar12;
  uchar *puVar13;
  FRigVMSlice *pFVar14;
  FRigUnit_DistributeRotation_WorkData *pFVar15;
  FControlRigExecuteContext *pFVar16;
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_48 [2];
  
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar10->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar10[1].Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar10[2].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  EVar2 = *pEVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar1 = *pfVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar5 = (bool)*puVar13;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar15 = (FRigUnit_DistributeRotation_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar14->Offset + pFVar14->Index);
  local_48[0].DataPtr = *(FRigUnit_DistributeRotation_Rotation **)puVar9;
  local_48[0].ArrayNum = *(int *)(puVar9 + 8);
  if (local_48[0].ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pFVar7,pFVar8,local_48,EVar2,fVar1,bVar5,pFVar15);
  return;
}

// StaticExecute @ 14a56c540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DistributeRotation::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,
          TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> *param_4,
          ERigVMAnimEasingType param_5,float param_6,bool param_7,
          FRigUnit_DistributeRotation_WorkData *param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  URigHierarchy *this;
  code *pcVar5;
  FName *pFVar6;
  FRigUnit_DistributeRotation_WorkData *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FRigElementKey *pFVar11;
  ForAnyElementType FVar12;
  FRigElementKey *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FRigElementKey local_88;
  FRigElementKey local_7c;
  FRigElementKey local_70;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  TArrayView<FRigElementKey_const_,int> local_40;
  
  pFVar7 = param_8;
  iVar9 = (param_8->CachedItems).ArrayNum;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_54 = 0;
  if (iVar9 == 0) {
    this = param_1->Hierarchy;
    if (this == (URigHierarchy *)0x0) goto LAB_14a56c8c2;
    local_88.Name = *param_3;
    local_88.Type = Bone;
    iVar9 = URigHierarchy::GetIndex(this,&local_88,true);
    if (iVar9 != -1) {
      local_7c.Name = *param_2;
      local_7c.Type = Bone;
      iVar10 = URigHierarchy::GetIndex(this,&local_7c,true);
      if (iVar10 == iVar9) goto LAB_14a56c8c2;
      do {
        pFVar11 = URigHierarchy::GetKey(this,&local_70,iVar9);
        if (((local_60.Data <= pFVar11) &&
            (pFVar11 < (FRigElementKey *)(local_60.Data + (longlong)local_54 * 0xc))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_58 == local_54) {
          local_58 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_60,&local_54);
        }
        iVar1 = local_58 + 1;
        *(undefined8 *)(local_60.Data + (longlong)local_58 * 0xc) = *(undefined8 *)pFVar11;
        *(uint *)(local_60.Data + (longlong)local_58 * 0xc + 8) = (pFVar11->Name).Number;
        local_58 = iVar1;
      } while ((iVar9 != iVar10) && (iVar9 = URigHierarchy::GetFirstParent(this,iVar9), iVar9 != -1)
              );
    }
    lVar15 = (longlong)(local_58 / 2);
    if (0 < local_58 / 2) {
      FVar12.Data = local_60.Data;
      pFVar14 = local_60.Data + (longlong)(local_58 + -1) * 0xc;
      do {
        uVar2 = *(undefined8 *)pFVar14;
        uVar3 = *(undefined8 *)FVar12.Data;
        uVar4 = (((FRigElementKey *)FVar12.Data)->Name).Number;
        ((FRigElementKey *)FVar12.Data)->Type = (char)uVar2;
        *(int3 *)&((FRigElementKey *)FVar12.Data)->field_0x1 = (int3)((ulonglong)uVar2 >> 8);
        (((FRigElementKey *)FVar12.Data)->Name).ComparisonIndex =
             (FNameEntryId)(int)((ulonglong)uVar2 >> 0x20);
        (((FRigElementKey *)FVar12.Data)->Name).Number = *(uint *)(pFVar14 + 8);
        *(undefined8 *)pFVar14 = uVar3;
        *(uint *)(pFVar14 + 8) = uVar4;
        lVar15 = lVar15 + -1;
        FVar12.Data = (FScriptContainerElement *)((longlong)FVar12.Data + 0xc);
        pFVar14 = pFVar14 + -0xc;
      } while (lVar15 != 0);
    }
  }
  else {
    pFVar11 = (FRigElementKey *)(param_8->CachedItems).AllocatorInstance.Data;
    pFVar13 = (FRigElementKey *)((longlong)pFVar11 + (longlong)iVar9 * 0x20);
    while( true ) {
      if ((pFVar7->CachedItems).ArrayNum != iVar9) {
        param_8._0_1_ = 0;
        `TCheckedPointerIterator<FCachedRigElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&param_8);
      }
      if (pFVar11 == pFVar13) break;
      if (((local_60.Data <= pFVar11) &&
          (pFVar11 < (FRigElementKey *)(local_60.Data + (longlong)local_54 * 0xc))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_58 == local_54) {
        local_58 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_60,&local_54);
      }
      *(undefined8 *)(local_60.Data + (longlong)local_58 * 0xc) = *(undefined8 *)pFVar11;
      pFVar6 = &pFVar11->Name;
      pFVar11 = (FRigElementKey *)&pFVar11[2].Name.Number;
      *(uint *)(local_60.Data + (longlong)local_58 * 0xc + 8) = pFVar6->Number;
      local_58 = local_58 + 1;
    }
  }
  iVar9 = local_58;
  FVar12.Data = local_60.Data;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = local_58;
  if (local_58 == 0) {
    local_44 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_58,0,&local_50,local_58,&local_44);
    memcpy(local_50.Data,FVar12.Data,(longlong)iVar9 * 0xc);
  }
  iVar9 = local_48;
  local_40.DataPtr = (FRigElementKey *)local_50.Data;
  if ((local_48 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_40.ArrayNum = iVar9;
  FRigUnit_DistributeRotationForItemArray::StaticExecute
            (param_1,&local_40,param_4,param_5,param_6,pFVar7);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
LAB_14a56c8c2:
  if ((FRigElementKey *)local_60.Data != (FRigElementKey *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

