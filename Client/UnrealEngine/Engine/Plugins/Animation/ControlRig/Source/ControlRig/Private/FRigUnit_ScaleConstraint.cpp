// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a4c5070

UScriptStruct * __cdecl FRigUnit_ScaleConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint,(UObject *)pUVar1,
                         L"RigUnit_ScaleConstraint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraint.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraint.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c51d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ScaleConstraint::GetExecuteContextStruct(FRigUnit_ScaleConstraint *this)

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

// Execute @ 14a4c5510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ScaleConstraint::Execute(FRigUnit_ScaleConstraint *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2a8 [32];
  TArrayView<FConstraintParent_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  local_278.DataPtr = (FConstraintParent *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Child,this->bMaintainOffset,
                &this->Filter,&local_278,this->Weight);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4c56a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ScaleConstraint::GetUpgradeInfo
          (FRigUnit_ScaleConstraint *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *pFVar3;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_98;
  FRigUnit_ScaleConstraintLocalSpaceOffset local_88;
  
  FRigUnit_ScaleConstraintLocalSpaceOffset::FRigUnit_ScaleConstraintLocalSpaceOffset(&local_88);
  local_88.Child.Name.Number = (this->Child).Name.Number;
  local_88.Child.Type = (this->Child).Type;
  local_88.Child._1_3_ = *(undefined3 *)&(this->Child).field_0x1;
  local_88.Child.Name.ComparisonIndex.Value = (this->Child).Name.ComparisonIndex.Value;
  local_88.bMaintainOffset = this->bMaintainOffset;
  local_88.Filter.bX = (this->Filter).bX;
  local_88.Filter.bY = (this->Filter).bY;
  local_88.Filter.bZ = (this->Filter).bZ;
  if (&local_88.Parents != &this->Parents) {
    _Src = (this->Parents).AllocatorInstance.Data;
    iVar1 = (this->Parents).ArrayNum;
    local_88.Parents.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_88.Parents.ArrayMax == 0)) {
      local_88.Parents.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar1,local_88.Parents.ArrayMax,&local_88.Parents.AllocatorInstance,iVar1,
                 &local_88.Parents.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_88.Parents.AllocatorInstance.Data,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  local_88.Weight = this->Weight;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint,(UObject *)pUVar2,
                         L"RigUnit_ScaleConstraint");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_98.ArrayNum = 1;
    local_98.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraint.OuterSingleton,
               &local_98);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraint.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset,
                         (UObject *)pUVar2,L"RigUnit_ScaleConstraintLocalSpaceOffset");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_98.ArrayNum = 1;
    local_98.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset.
                      OuterSingleton,&local_98);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_88);
  if (local_88.ParentCaches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ParentCaches.AllocatorInstance.Data);
  }
  if (local_88.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Parents.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_ScaleConstraint @ 14a515520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_ScaleConstraint * __thiscall
FRigUnit_ScaleConstraint::FRigUnit_ScaleConstraint(FRigUnit_ScaleConstraint *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  piVar1 = &(this->Parents).ArrayMax;
  this->_padding_ = (longlong)&___7FRigUnit_ScaleConstraint__6B_;
  (this->Child).Type = Bone;
  (this->Child).Name.ComparisonIndex = 0;
  (this->Child).Name.Number = 0;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  *piVar1 = 0;
  this->bMaintainOffset = true;
  (this->Filter).bX = true;
  (this->Filter).bY = true;
  (this->Filter).bZ = true;
  this->Weight = 1.0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x410,&(this->Parents).AllocatorInstance,piVar1);
  (this->Parents).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Parents).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(ulonglong *)pFVar2 = (ulonglong)local_18;
  *(ulonglong *)(pFVar2 + 8) = 0x3f80000000000000;
  return this;
}

// operator() @ 14a51b5a0

TVector<double> * __thiscall
`FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  
  uVar5 = __real_bf1a36e2e0000000;
  dVar10 = __real_3f1a36e2e0000000;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  uVar7 = SUB84(dVar10,0);
  uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar4,SUB84(dVar1,0) & uVar3) < dVar10) {
    uVar6 = uVar7;
    uVar8 = uVar9;
    if ((dVar1 <= 0.0) && (uVar6 = (int)uVar5, uVar8 = uVar11, 0.0 <= dVar1)) {
      uVar6 = 0;
      uVar8 = 0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar8,uVar6);
  }
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar4,SUB84(dVar1,0) & uVar3) < dVar10) {
    if ((dVar1 <= 0.0) && (uVar7 = (int)uVar5, uVar9 = uVar11, 0.0 <= dVar1)) {
      uVar7 = 0;
      uVar9 = 0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar9,uVar7);
  }
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar4,SUB84(dVar1,0) & uVar3) < dVar10) {
    if (dVar1 <= 0.0) {
      if (dVar1 < 0.0) {
        *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar5;
        return __return_storage_ptr__;
      }
      dVar10 = 0.0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52c270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ScaleConstraint::Execute(FRigUnit_ScaleConstraint *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FConstraintParent_const_,int> local_18;
  
  local_18.DataPtr = (FConstraintParent *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
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
  StaticExecute(param_1,&this->Child,this->bMaintainOffset,&this->Filter,&local_18,this->Weight);
  return;
}

// RigVMExecute @ 14a54f880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ScaleConstraint::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FFilterOptionPerAxis *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  float *pfVar10;
  FControlRigExecuteContext *pFVar11;
  TArrayView<FConstraintParent_const_,int> local_38 [2];
  
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar2 < 2) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar9[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  bVar4 = (bool)*puVar7;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FFilterOptionPerAxis *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FFilterOptionPerAxis *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  local_38[0].DataPtr = *(FConstraintParent **)puVar7;
  local_38[0].ArrayNum = *(int *)(puVar7 + 8);
  fVar1 = *pfVar10;
  if (local_38[0].ArrayNum < 0) {
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
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar6,bVar4,pFVar8,local_38,fVar1);
  return;
}

// StaticExecute @ 14a58e5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ScaleConstraint::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FFilterOptionPerAxis *param_4,TArrayView<FConstraintParent_const_,int> *param_5,
          float param_6)

{
  FControlRigExecuteContext *this;
  __m128d *p_Var1;
  URigHierarchy *this_00;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  ulonglong uVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  code *pcVar15;
  __m128d _Var16;
  __m128d _Var17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool bVar26;
  int iVar27;
  void *this_01;
  undefined8 uVar28;
  FRigControlElement *pFVar29;
  TTransform<double> *pTVar30;
  longlong *plVar31;
  FName *pFVar32;
  FConstraintParent *pFVar33;
  FConstraintParent *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auStackY_718 [32];
  FRigElementKey local_6c8;
  float local_6b8;
  TVector<double>_u_0 local_6b0;
  double local_698;
  uint local_690;
  double local_688;
  FRigElementKey *local_680;
  FFilterOptionPerAxis *local_678;
  FRigElementKey local_668;
  TVector<double>_u_0 local_658;
  double local_630;
  double local_628;
  double dStack_620;
  double local_618;
  code *local_608;
  longlong local_5f8 [3];
  longlong *local_5e0;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  TTransform<double> local_4b8;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  FControlRigExecuteContext local_338;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_718;
  local_6b8 = param_6;
  local_680 = param_2;
  local_678 = param_4;
  FControlRigExecuteContext::FControlRigExecuteContext(&local_338,param_1);
  local_608 = (code *)0x0;
  local_5e0 = FMemory::Malloc(0x260,0x10);
  this = (FControlRigExecuteContext *)(local_5e0 + 2);
  *local_5e0 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigUnit_ScaleConstraint::StaticExecute'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  FControlRigExecuteContext::FControlRigExecuteContext(this,&local_338);
  if (this != (FControlRigExecuteContext *)0x0) {
    local_608 = UE::Core::Private::Function::
                TFunctionRefCaller<`FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                ::Call;
  }
  FControlRigExecuteContext::~FControlRigExecuteContext(&local_338);
  if ((((__real_38d1b717 <= param_6) &&
       (this_00 = param_1->Hierarchy, this_00 != (URigHierarchy *)0x0)) &&
      (bVar26 = ::FName::IsWithinBounds((FNameEntryId)(param_2->Name).ComparisonIndex.Value), bVar26
      )) && ((param_2->Name != (FName)0x0 && (param_2->Type != None)))) {
    local_698 = *(double *)param_2;
    local_690 = (param_2->Name).Number;
    iVar27 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&local_698,true);
    URigHierarchy::GetGlobalTransformByIndex(this_00,&local_3f8,iVar27,true);
    dVar8 = __real_3f1a36e2e0000000;
    pFVar33 = param_5->DataPtr;
    dVar45 = 0.0;
    pFVar34 = pFVar33 + param_5->ArrayNum;
    if (pFVar33 != pFVar34) {
      pFVar32 = &(pFVar33->Item).Name;
      do {
        dVar49 = (double)(float)pFVar32[1].ComparisonIndex.Value;
        if (dVar49 <= 0.0) {
          dVar49 = 0.0;
        }
        if (((dVar8 <= dVar49) &&
            (bVar26 = ::FName::IsWithinBounds((FNameEntryId)(pFVar32->ComparisonIndex).Value),
            bVar26)) && ((*pFVar32 != (FName)0x0 && ((pFVar33->Item).Type != None)))) {
          dVar45 = dVar45 + dVar49;
        }
        pFVar33 = pFVar33 + 1;
        pFVar32 = pFVar32 + 2;
      } while (pFVar33 != pFVar34);
      if (dVar8 < dVar45) {
        pFVar33 = param_5->DataPtr;
        dVar45 = __real_3ff0000000000000 / dVar45;
        pFVar34 = pFVar33 + param_5->ArrayNum;
        local_688 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_698 = dVar45;
        if (pFVar33 != pFVar34) {
          pFVar32 = &(pFVar33->Item).Name;
          do {
            dVar49 = (double)(float)pFVar32[1].ComparisonIndex.Value;
            if (dVar49 <= 0.0) {
              dVar49 = 0.0;
            }
            if ((((dVar8 <= dVar49) &&
                 (bVar26 = ::FName::IsWithinBounds((FNameEntryId)(pFVar32->ComparisonIndex).Value),
                 uVar28 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,
                 uVar46 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,
                 uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X, bVar26)) &&
                (*pFVar32 != (FName)0x0)) && ((pFVar33->Item).Type != None)) {
              local_668.Type = (pFVar33->Item).Type;
              local_668._1_3_ = *(undefined3 *)&(pFVar33->Item).field_0x1;
              local_668.Name.ComparisonIndex.Value = (pFVar33->Item).Name.ComparisonIndex.Value;
              local_668.Name.Number = (pFVar33->Item).Name.Number;
              dVar49 = dVar49 * dVar45;
              iVar27 = URigHierarchy::GetIndex(this_00,&local_668,true);
              URigHierarchy::GetGlobalTransformByIndex(this_00,&local_458,iVar27,false);
              if (param_3) {
                local_6c8.Type = (pFVar33->Item).Type;
                local_6c8._1_3_ = *(undefined3 *)&(pFVar33->Item).field_0x1;
                local_6c8.Name.ComparisonIndex.Value = (pFVar33->Item).Name.ComparisonIndex.Value;
                local_6c8.Name.Number = (pFVar33->Item).Name.Number;
                iVar27 = URigHierarchy::GetIndex(this_00,&local_6c8,true);
                URigHierarchy::GetGlobalTransformByIndex(this_00,&local_4b8,iVar27,true);
                dVar2 = local_3f8.Scale3D.XY.m128d_f64[1];
                dVar45 = local_3f8.Scale3D.XY.m128d_f64[0];
                local_6b0._s_0.Z =
                     (double)CONCAT44(local_4b8.Scale3D.ZW.m128d_f64[0]._4_4_,
                                      local_4b8.Scale3D.ZW.m128d_f64[0]._0_4_);
                local_6b0._s_0.X = local_4b8.Scale3D.XY.m128d_f64[0];
                local_6b0._s_0.Y = local_4b8.Scale3D.XY.m128d_f64[1];
                local_630 = local_3f8.Scale3D.ZW.m128d_f64[0];
                UE::Core::Private::Function::CheckCallable(local_608);
                pcVar15 = local_608;
                plVar31 = local_5f8;
                if (local_5e0 != (longlong *)0x0) {
                  plVar31 = local_5e0;
                }
                this_01 = (void *)(**(code **)(*plVar31 + 8))();
                if (pcVar15 ==
                    UE::Core::Private::Function::
                    TFunctionRefCaller<`FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                    ::Call) {
                  `FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>::operator()
                            (this_01,(TVector<double> *)&local_658._s_0,
                             (TVector<double> *)&local_6b0._s_0);
                }
                else {
                  (*pcVar15)(&local_658,this_01);
                }
                uVar5 = dVar45 / local_658._s_0.X;
                uVar28 = local_630 / local_658._s_0.Z;
                uVar46 = dVar2 / local_658._s_0.Y;
              }
              dVar11 = local_458.Scale3D.ZW.m128d_f64[0];
              dVar2 = local_458.Scale3D.XY.m128d_f64[1];
              dVar45 = pow(local_458.Scale3D.XY.m128d_f64[0] * (double)uVar5,dVar49);
              uVar7 = (double)uVar7 * dVar45;
              dVar45 = pow(dVar2 * (double)uVar46,dVar49);
              local_630 = dVar11;
              uVar6 = (double)uVar6 * dVar45;
              dVar45 = pow(dVar11 * (double)uVar28,dVar49);
              uVar4 = local_688 * dVar45;
              dVar45 = local_698;
              local_688 = (double)uVar4;
            }
            pFVar33 = pFVar33 + 1;
            pFVar32 = pFVar32 + 2;
            param_4 = local_678;
            param_2 = local_680;
          } while (pFVar33 != pFVar34);
        }
        local_6c8.Type = param_2->Type;
        local_6c8._1_3_ = *(undefined3 *)&param_2->field_0x1;
        local_6c8.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
        local_6c8.Name.Number = (param_2->Name).Number;
        iVar27 = URigHierarchy::GetIndex(this_00,&local_6c8,true);
        URigHierarchy::GetParentTransformByIndex(this_00,&local_398,iVar27,false);
        local_628 = local_398.Scale3D.XY.m128d_f64[0];
        dStack_620 = local_398.Scale3D.XY.m128d_f64[1];
        local_618 = local_398.Scale3D.ZW.m128d_f64[0];
        UE::Core::Private::Function::CheckCallable(local_608);
        pcVar15 = local_608;
        plVar31 = local_5f8;
        if (local_5e0 != (longlong *)0x0) {
          plVar31 = local_5e0;
        }
        uVar28 = (**(code **)(*plVar31 + 8))();
        (*pcVar15)(&local_6b0,uVar28,&local_628);
        local_6c8.Type = param_2->Type;
        local_6c8._1_3_ = *(undefined3 *)&param_2->field_0x1;
        local_6c8.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
        local_6c8.Name.Number = (param_2->Name).Number;
        dVar8 = (double)uVar7 / local_6b0._s_0.X;
        dVar45 = (double)uVar6 / local_6b0._s_0.Y;
        iVar27 = URigHierarchy::GetIndex(this_00,&local_6c8,true);
        URigHierarchy::GetLocalTransformByIndex(this_00,&local_518,iVar27,false);
        local_578.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_578.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_578.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_578.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_578.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_578.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        if (param_2->Type == Control) {
          iVar27 = URigHierarchy::GetIndex(this_00,param_2,true);
          pFVar29 = URigHierarchy::Get<FRigControlElement>(this_00,iVar27);
          if (pFVar29 != (FRigControlElement *)0x0) {
            pTVar30 = URigHierarchy::GetControlOffsetTransform
                                (this_00,&local_458,pFVar29,CurrentLocal);
            local_578.Rotation.XY.m128d_f64 = *&(pTVar30->Rotation).XY.m128d_f64;
            local_578.Rotation.ZW.m128d_f64 = *&(pTVar30->Rotation).ZW.m128d_f64;
            local_578.Translation.XY.m128d_f64 = *&(pTVar30->Translation).XY.m128d_f64;
            local_578.Translation.ZW.m128d_f64 = *&(pTVar30->Translation).ZW.m128d_f64;
            local_578.Scale3D.XY.m128d_f64 = *&(pTVar30->Scale3D).XY.m128d_f64;
            local_578.Scale3D.ZW.m128d_f64 = *&(pTVar30->Scale3D).ZW.m128d_f64;
            UE::Math::TTransform<double>::Multiply(&local_518,&local_518,&local_578);
          }
        }
        local_630 = local_518.Scale3D.ZW.m128d_f64[0];
        if (param_4->bX == false) {
          dVar8 = local_518.Scale3D.XY.m128d_f64[0];
        }
        if (param_4->bY == false) {
          dVar45 = local_518.Scale3D.XY.m128d_f64[1];
        }
        local_6b0._s_0.Z = (double)uVar4 / local_6b0._s_0.Z;
        if (param_4->bZ == false) {
          local_6b0._s_0.Z = local_518.Scale3D.ZW.m128d_f64[0];
        }
        uVar39 = SUB84(local_6b0._s_0.Z,0);
        uVar40 = (undefined4)((ulonglong)local_6b0._16_8_ >> 0x20);
        uVar41 = 0;
        uVar42 = 0;
        local_5d8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar45,0);
        local_5d8.Scale3D.XY.m128d_f64[0] = dVar8;
        local_5d8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_458.Scale3D.XY.m128d_f64[0] = local_518.Scale3D.XY.m128d_f64[0];
        local_458.Scale3D.XY.m128d_f64[1] = local_518.Scale3D.XY.m128d_f64[1];
        local_458.Scale3D.ZW.m128d_f64[0] = local_518.Scale3D.ZW.m128d_f64[0];
        local_458.Scale3D.ZW.m128d_f64[1] = local_518.Scale3D.ZW.m128d_f64[1];
        local_5d8.Rotation.XY.m128d_f64[0] = local_518.Rotation.XY.m128d_f64[0];
        local_5d8.Rotation.XY.m128d_f64[1] = local_518.Rotation.XY.m128d_f64[1];
        local_5d8.Rotation.ZW.m128d_f64[0] = local_518.Rotation.ZW.m128d_f64[0];
        local_5d8.Rotation.ZW.m128d_f64[1] = local_518.Rotation.ZW.m128d_f64[1];
        local_5d8.Translation.XY.m128d_f64[0]._0_4_ = local_518.Translation.XY.m128d_f64[0]._0_4_;
        local_5d8.Translation.XY.m128d_f64[0]._4_4_ = local_518.Translation.XY.m128d_f64[0]._4_4_;
        local_5d8.Translation.XY.m128d_f64[1]._0_4_ = local_518.Translation.XY.m128d_f64[1]._0_4_;
        local_5d8.Translation.XY.m128d_f64[1]._4_4_ = local_518.Translation.XY.m128d_f64[1]._4_4_;
        local_5d8.Translation.ZW.m128d_f64[0]._0_4_ = local_518.Translation.ZW.m128d_f64[0]._0_4_;
        local_5d8.Translation.ZW.m128d_f64[0]._4_4_ = local_518.Translation.ZW.m128d_f64[0]._4_4_;
        local_5d8.Translation.ZW.m128d_f64[1]._0_4_ = local_518.Translation.ZW.m128d_f64[1]._0_4_;
        local_5d8.Translation.ZW.m128d_f64[1]._4_4_ = local_518.Translation.ZW.m128d_f64[1]._4_4_;
        local_5d8.Scale3D.ZW.m128d_f64[0] = local_6b0._s_0.Z;
        local_5d8.Scale3D.ZW.m128d_f64[1] = 0.0;
        if (local_6b8 < __real_3f7ff972) {
          pTVar30 = FRigVMMathLibrary::LerpTransform(&local_458,&local_518,&local_5d8,local_6b8);
          local_518.Rotation.XY.m128d_f64 = *&(pTVar30->Rotation).XY.m128d_f64;
          local_518.Rotation.ZW.m128d_f64 = *&(pTVar30->Rotation).ZW.m128d_f64;
          local_518.Translation.XY.m128d_f64[0]._0_4_ =
               *(undefined4 *)(pTVar30->Translation).XY.m128d_f64;
          local_518.Translation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar30->Translation).XY.m128d_f64 + 4);
          local_518.Translation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar30->Translation).XY.m128d_f64 + 1);
          local_518.Translation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar30->Translation).XY.m128d_f64 + 0xc);
          local_518.Translation.ZW.m128d_f64[0]._0_4_ =
               *(undefined4 *)(pTVar30->Translation).ZW.m128d_f64;
          local_518.Translation.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar30->Translation).ZW.m128d_f64 + 4);
          local_518.Translation.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar30->Translation).ZW.m128d_f64 + 1);
          local_518.Translation.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar30->Translation).ZW.m128d_f64 + 0xc);
          dVar8 = (pTVar30->Scale3D).XY.m128d_f64[0];
          dVar45 = (pTVar30->Scale3D).XY.m128d_f64[1];
          local_5d8.Scale3D.XY.m128d_f64 = *&(pTVar30->Scale3D).XY.m128d_f64;
          p_Var1 = &(pTVar30->Scale3D).ZW;
          uVar39 = *(undefined4 *)p_Var1->m128d_f64;
          uVar40 = *(undefined4 *)((longlong)(pTVar30->Scale3D).ZW.m128d_f64 + 4);
          local_5d8.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
          pdVar10 = (pTVar30->Scale3D).ZW.m128d_f64 + 1;
          uVar41 = *(undefined4 *)pdVar10;
          uVar42 = *(undefined4 *)((longlong)(pTVar30->Scale3D).ZW.m128d_f64 + 0xc);
          local_5d8.Scale3D.ZW.m128d_f64[1] = *pdVar10;
        }
        local_5d8.Rotation.XY.m128d_f64 = local_518.Rotation.XY.m128d_f64;
        local_5d8.Rotation.ZW.m128d_f64 = local_518.Rotation.ZW.m128d_f64;
        local_5d8.Translation.XY.m128d_f64[0]._0_4_ = local_518.Translation.XY.m128d_f64[0]._0_4_;
        local_5d8.Translation.XY.m128d_f64[0]._4_4_ = local_518.Translation.XY.m128d_f64[0]._4_4_;
        local_5d8.Translation.XY.m128d_f64[1]._0_4_ = local_518.Translation.XY.m128d_f64[1]._0_4_;
        local_5d8.Translation.XY.m128d_f64[1]._4_4_ = local_518.Translation.XY.m128d_f64[1]._4_4_;
        local_5d8.Translation.ZW.m128d_f64[0]._0_4_ = local_518.Translation.ZW.m128d_f64[0]._0_4_;
        local_5d8.Translation.ZW.m128d_f64[0]._4_4_ = local_518.Translation.ZW.m128d_f64[0]._4_4_;
        local_5d8.Translation.ZW.m128d_f64[1]._0_4_ = local_518.Translation.ZW.m128d_f64[1]._0_4_;
        local_5d8.Translation.ZW.m128d_f64[1]._4_4_ = local_518.Translation.ZW.m128d_f64[1]._4_4_;
        if (param_2->Type == Control) {
          pTVar30 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_5d8,&local_458,&local_578);
          dVar11 = (pTVar30->Rotation).XY.m128d_f64[0];
          dVar12 = (pTVar30->Rotation).XY.m128d_f64[1];
          dVar13 = (pTVar30->Rotation).ZW.m128d_f64[0];
          dVar14 = (pTVar30->Rotation).ZW.m128d_f64[1];
          local_5d8.Translation.XY.m128d_f64[0]._0_4_ =
               *(undefined4 *)(pTVar30->Translation).XY.m128d_f64;
          local_5d8.Translation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar30->Translation).XY.m128d_f64 + 4);
          local_5d8.Translation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar30->Translation).XY.m128d_f64 + 1);
          local_5d8.Translation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar30->Translation).XY.m128d_f64 + 0xc);
          local_5d8.Translation.ZW.m128d_f64[0]._0_4_ =
               *(undefined4 *)(pTVar30->Translation).ZW.m128d_f64;
          local_5d8.Translation.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar30->Translation).ZW.m128d_f64 + 4);
          local_5d8.Translation.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar30->Translation).ZW.m128d_f64 + 1);
          local_5d8.Translation.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar30->Translation).ZW.m128d_f64 + 0xc);
          auVar43._0_8_ = dVar11 * dVar11 + dVar13 * dVar13;
          auVar43._8_8_ = dVar12 * dVar12 + dVar14 * dVar14;
          dVar8 = (pTVar30->Scale3D).XY.m128d_f64[0];
          dVar45 = (pTVar30->Scale3D).XY.m128d_f64[1];
          local_5d8.Scale3D.XY.m128d_f64 = *&(pTVar30->Scale3D).XY.m128d_f64;
          dVar49 = auVar43._8_8_ + auVar43._0_8_;
          dVar2 = auVar43._0_8_ + auVar43._8_8_;
          p_Var1 = &(pTVar30->Scale3D).ZW;
          uVar39 = *(undefined4 *)p_Var1->m128d_f64;
          uVar40 = *(undefined4 *)((longlong)(pTVar30->Scale3D).ZW.m128d_f64 + 4);
          local_5d8.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
          pdVar10 = (pTVar30->Scale3D).ZW.m128d_f64 + 1;
          uVar41 = *(undefined4 *)pdVar10;
          uVar42 = *(undefined4 *)((longlong)(pTVar30->Scale3D).ZW.m128d_f64 + 0xc);
          local_5d8.Scale3D.ZW.m128d_f64[1] = *pdVar10;
          auVar44._8_4_ = SUB84(dVar2,0);
          auVar44._0_8_ = dVar49;
          auVar44._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          auVar44 = sqrtpd(auVar43,auVar44);
          uVar35 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar49);
          uVar37 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar2);
          auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar44);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
          uVar36 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar49);
          uVar38 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar2);
          auVar48._0_8_ = uVar35 & (ulonglong)(auVar47._0_8_ * dVar11);
          uVar9 = uVar37 & (ulonglong)(auVar47._8_8_ * dVar12);
          auVar48._8_4_ = (undefined4)uVar9;
          auVar48._12_4_ = (undefined4)(uVar9 >> 0x20);
          auVar50._0_8_ = uVar36 & (ulonglong)(auVar44._0_8_ * dVar13);
          uVar9 = uVar38 & (ulonglong)(auVar44._8_8_ * dVar14);
          auVar50._8_4_ = (undefined4)uVar9;
          auVar50._12_4_ = (undefined4)(uVar9 >> 0x20);
          auVar47._4_4_ =
               ~(uint)(uVar35 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar47._0_4_ = ~(uint)uVar35 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar47._8_4_ = ~(uint)uVar37 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar47._12_4_ =
               ~(uint)(uVar37 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          local_5d8.Rotation.XY.m128d_f64 = (double  [2])(auVar48 | auVar47);
          auVar3._4_4_ = ~(uint)(uVar36 >> 0x20) &
                         GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar3._0_4_ = ~(uint)uVar36 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar3._8_4_ = ~(uint)uVar38 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar3._12_4_ =
               ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          local_5d8.Rotation.ZW.m128d_f64 = (double  [2])(auVar50 | auVar3);
        }
        uVar25 = local_5d8.Translation.ZW.m128d_f64[1]._4_4_;
        uVar24 = local_5d8.Translation.ZW.m128d_f64[1]._0_4_;
        uVar23 = local_5d8.Translation.ZW.m128d_f64[0]._4_4_;
        uVar22 = local_5d8.Translation.ZW.m128d_f64[0]._0_4_;
        uVar21 = local_5d8.Translation.XY.m128d_f64[1]._4_4_;
        uVar20 = local_5d8.Translation.XY.m128d_f64[1]._0_4_;
        uVar19 = local_5d8.Translation.XY.m128d_f64[0]._4_4_;
        uVar18 = local_5d8.Translation.XY.m128d_f64[0]._0_4_;
        _Var17.m128d_f64 = local_5d8.Rotation.ZW.m128d_f64;
        _Var16.m128d_f64 = local_5d8.Rotation.XY.m128d_f64;
        local_6c8.Type = param_2->Type;
        local_6c8._1_3_ = *(undefined3 *)&param_2->field_0x1;
        local_6c8.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
        local_6c8.Name.Number = (param_2->Name).Number;
        iVar27 = URigHierarchy::GetIndex(this_00,&local_6c8,true);
        local_4b8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar45,0);
        local_4b8.Scale3D.XY.m128d_f64[0] = dVar8;
        local_4b8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_4b8.Rotation.XY.m128d_f64 = _Var16.m128d_f64;
        local_4b8.Rotation.ZW.m128d_f64 = _Var17.m128d_f64;
        local_4b8.Translation.XY.m128d_f64[0]._0_4_ = uVar18;
        local_4b8.Translation.XY.m128d_f64[0]._4_4_ = uVar19;
        local_4b8.Translation.XY.m128d_f64[1]._0_4_ = uVar20;
        local_4b8.Translation.XY.m128d_f64[1]._4_4_ = uVar21;
        local_4b8.Translation.ZW.m128d_f64[0]._0_4_ = uVar22;
        local_4b8.Translation.ZW.m128d_f64[0]._4_4_ = uVar23;
        local_4b8.Translation.ZW.m128d_f64[1]._0_4_ = uVar24;
        local_4b8.Translation.ZW.m128d_f64[1]._4_4_ = uVar25;
        local_4b8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar39;
        local_4b8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar40;
        local_4b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar41;
        local_4b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar42;
        URigHierarchy::SetLocalTransformByIndex(this_00,iVar27,&local_4b8,false,true,false,false);
      }
    }
  }
  if (local_608 != (code *)0x0) {
    plVar31 = local_5f8;
    if (local_5e0 != (longlong *)0x0) {
      plVar31 = local_5e0;
    }
    (**(code **)(*plVar31 + 0x10))();
  }
  return;
}

