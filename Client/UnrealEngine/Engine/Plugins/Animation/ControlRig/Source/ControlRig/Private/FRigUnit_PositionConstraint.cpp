// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4bf410

UScriptStruct * __cdecl FRigUnit_PositionConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint,(UObject *)pUVar1,
                         L"RigUnit_PositionConstraint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraint.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraint.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4bf4e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_PositionConstraint::GetExecuteContextStruct(FRigUnit_PositionConstraint *this)

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

// Execute @ 14a4bff30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PositionConstraint::Execute(FRigUnit_PositionConstraint *this)

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

// GetUpgradeInfo @ 14a4c01c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_PositionConstraint::GetUpgradeInfo
          (FRigUnit_PositionConstraint *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *pFVar3;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_98;
  FRigUnit_PositionConstraintLocalSpaceOffset local_88;
  
  FRigUnit_PositionConstraintLocalSpaceOffset::FRigUnit_PositionConstraintLocalSpaceOffset
            (&local_88);
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionConstraint,(UObject *)pUVar2,
                         L"RigUnit_PositionConstraint");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_98.ArrayNum = 1;
    local_98.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraint.OuterSingleton,
               &local_98);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraint.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset,
                         (UObject *)pUVar2,L"RigUnit_PositionConstraintLocalSpaceOffset");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_98.ArrayNum = 1;
    local_98.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset.
                      OuterSingleton,&local_98);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset.OuterSingleton;
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

// FRigUnit_PositionConstraint @ 14a514ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_PositionConstraint * __thiscall
FRigUnit_PositionConstraint::FRigUnit_PositionConstraint(FRigUnit_PositionConstraint *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  piVar1 = &(this->Parents).ArrayMax;
  this->_padding_ = (longlong)&___7FRigUnit_PositionConstraint__6B_;
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

// Execute @ 14a52ba30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PositionConstraint::Execute
          (FRigUnit_PositionConstraint *this,FControlRigExecuteContext *param_1)

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

// RigVMExecute @ 14a54dd00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PositionConstraint::RigVMExecute
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

// StaticExecute @ 14a589670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PositionConstraint::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FFilterOptionPerAxis *param_4,TArrayView<FConstraintParent_const_,int> *param_5,
          float param_6)

{
  undefined1 uVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  URigHierarchy *this;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  ulonglong uVar10;
  float fVar11;
  double adVar12 [2];
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  int iVar18;
  TTransform<double> *pTVar19;
  FRigControlElement *pFVar20;
  uint uVar21;
  URigHierarchy *pUVar22;
  FName *pFVar23;
  FConstraintParent *pFVar24;
  FConstraintParent *pFVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  __m128d _Var49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined4 uVar64;
  double dVar65;
  double in_XMM4_Qb;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  undefined8 uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar83;
  double dVar84;
  undefined4 uVar90;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined4 uVar91;
  undefined1 auVar89 [16];
  double dVar92;
  undefined1 auVar93 [16];
  __m128d _Var94;
  double dVar95;
  undefined1 auStackY_438 [32];
  undefined1 local_3f8 [8];
  double dStack_3f0;
  uint local_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  double local_3d8;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3a8;
  undefined8 uStack_3a0;
  FFilterOptionPerAxis *local_398;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  fVar11 = __real_38d1b717;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  if ((((__real_38d1b717 <= param_6) && (this = param_1->Hierarchy, this != (URigHierarchy *)0x0))
      && (local_398 = param_4,
         bVar17 = ::FName::IsWithinBounds((FNameEntryId)(param_2->Name).ComparisonIndex.Value),
         bVar17)) && ((param_2->Name != (FName)0x0 && (param_2->Type != None)))) {
    local_3a8 = *(double *)param_2;
    uStack_3a0 = CONCAT44(uStack_3a0._4_4_,(param_2->Name).Number);
    iVar18 = URigHierarchy::GetIndex(this,(FRigElementKey *)&local_3a8,true);
    URigHierarchy::GetGlobalTransformByIndex(this,&local_148,iVar18,true);
    pFVar24 = param_5->DataPtr;
    fVar78 = 0.0;
    pFVar25 = pFVar24 + param_5->ArrayNum;
    if (pFVar24 != pFVar25) {
      pFVar23 = &(pFVar24->Item).Name;
      do {
        fVar72 = (float)pFVar23[1].ComparisonIndex.Value;
        if (fVar72 <= 0.0) {
          fVar72 = 0.0;
        }
        if (((fVar11 <= fVar72) &&
            (bVar17 = ::FName::IsWithinBounds((FNameEntryId)(pFVar23->ComparisonIndex).Value),
            bVar17)) && ((*pFVar23 != (FName)0x0 && ((pFVar24->Item).Type != None)))) {
          fVar78 = fVar78 + fVar72;
        }
        pFVar24 = pFVar24 + 1;
        pFVar23 = pFVar23 + 2;
      } while (pFVar24 != pFVar25);
      if (fVar11 < fVar78) {
        pFVar24 = param_5->DataPtr;
        pFVar25 = pFVar24 + param_5->ArrayNum;
        uVar90 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar91 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        local_3d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_3e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_3e4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uStack_3e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uStack_3dc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        fVar78 = __real_3f800000 / fVar78;
        if (pFVar24 != pFVar25) {
          pFVar23 = &(pFVar24->Item).Name;
          dVar83 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          dVar84 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
          uVar79 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          do {
            fVar72 = (float)pFVar23[1].ComparisonIndex.Value;
            if (fVar72 <= 0.0) {
              fVar72 = 0.0;
            }
            if ((((fVar11 <= fVar72) &&
                 (bVar17 = ::FName::IsWithinBounds((FNameEntryId)(pFVar23->ComparisonIndex).Value),
                 bVar17)) && (*pFVar23 != (FName)0x0)) && ((pFVar24->Item).Type != None)) {
              local_3c8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
              dStack_3c0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
              local_3a8 = *(double *)&pFVar24->Item;
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,(pFVar24->Item).Name.Number);
              local_3b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              iVar18 = URigHierarchy::GetIndex(this,(FRigElementKey *)&local_3a8,true);
              URigHierarchy::GetGlobalTransformByIndex(this,&local_208,iVar18,false);
              if (param_3) {
                local_3f8[0] = (pFVar24->Item).Type;
                local_3f8._1_3_ = *(undefined3 *)&(pFVar24->Item).field_0x1;
                local_3f8._4_4_ = (pFVar24->Item).Name.ComparisonIndex;
                dStack_3f0._0_4_ = (pFVar24->Item).Name.Number;
                iVar18 = URigHierarchy::GetIndex(this,(FRigElementKey *)local_3f8,true);
                URigHierarchy::GetGlobalTransformByIndex(this,&local_268,iVar18,true);
                local_3b8 = local_148.Translation.ZW.m128d_f64[0] -
                            local_268.Translation.ZW.m128d_f64[0];
                dVar95 = local_148.Translation.XY.m128d_f64[0] -
                         local_268.Translation.XY.m128d_f64[0];
                in_XMM4_Qb = local_148.Translation.ZW.m128d_f64[1];
                dVar92 = local_148.Translation.XY.m128d_f64[1] -
                         local_268.Translation.XY.m128d_f64[1];
              }
              else {
                in_XMM4_Qb = 0.0;
                dVar95 = local_3c8;
                dVar92 = dStack_3c0;
              }
              dVar55 = (double)(fVar72 * fVar78);
              dVar65 = local_3b8 + local_208.Translation.ZW.m128d_f64[0];
              local_3b8 = local_208.Translation.ZW.m128d_f64[0];
              dVar84 = dVar84 + (dVar95 + local_208.Translation.XY.m128d_f64[0]) * dVar55;
              uVar79 = (double)uVar79 + dVar65 * dVar55;
              dVar83 = dVar83 + (dVar92 + local_208.Translation.XY.m128d_f64[1]) * dVar55;
            }
            pFVar24 = pFVar24 + 1;
            pFVar23 = pFVar23 + 2;
          } while (pFVar24 != pFVar25);
          uVar90 = (undefined4)uVar79;
          uVar91 = (undefined4)((ulonglong)uVar79 >> 0x20);
          uStack_3e0 = SUB84(dVar83,0);
          uStack_3dc = (undefined4)((ulonglong)dVar83 >> 0x20);
          local_3e8 = SUB84(dVar84,0);
          uStack_3e4 = (uint)((ulonglong)dVar84 >> 0x20);
          local_3d8 = (double)uVar79;
        }
        uVar16 = uStack_3dc;
        uVar15 = uStack_3e0;
        uVar14 = uStack_3e4;
        uVar13 = local_3e8;
        local_3f8[0] = param_2->Type;
        local_3f8._1_3_ = *(undefined3 *)&param_2->field_0x1;
        local_3f8._4_4_ = (param_2->Name).ComparisonIndex;
        dStack_3f0._0_4_ = (param_2->Name).Number;
        iVar18 = URigHierarchy::GetIndex(this,(FRigElementKey *)local_3f8,true);
        pUVar22 = this;
        pTVar19 = URigHierarchy::GetParentTransformByIndex(this,&local_1a8,iVar18,false);
        auVar56._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_);
        auVar56._8_4_ = _UNK_15061cc88 & local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_;
        auVar56._12_4_ = _UNK_15061cc8c & local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_;
        auVar44._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar56._8_8_);
        auVar44._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar56._0_8_);
        uVar21 = movmskpd((int)pUVar22,auVar44);
        auVar57._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              local_1a8.Scale3D.XY.m128d_f64[0]._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              local_1a8.Scale3D.XY.m128d_f64[0]._0_4_);
        auVar57._8_4_ = _UNK_15061cc88 & local_1a8.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar57._12_4_ = _UNK_15061cc8c & local_1a8.Scale3D.XY.m128d_f64[1]._4_4_;
        auVar33._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar57._8_8_);
        auVar33._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar57._0_8_);
        iVar18 = movmskpd((int)pTVar19,auVar33);
        if ((uVar21 & 0x3fffffff) == 0 && iVar18 == 0) {
          local_1a8.Rotation.XY.m128d_f64[0] =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_1a8.Rotation.XY.m128d_f64[1] =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_1a8.Rotation.ZW.m128d_f64[0] =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_1a8.Rotation.ZW.m128d_f64[1] =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_3b8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_3f8 = (undefined1  [8])
                      UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          dStack_3f0 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          _Var49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
          _Var94 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
        }
        else {
          auVar8._4_8_ = in_XMM4_Qb;
          auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar66._0_8_ = auVar8._0_8_ << 0x20;
          auVar66._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar66._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar67._8_8_ = auVar66._8_8_;
          auVar67._0_8_ = local_1a8.Scale3D.ZW.m128d_f64[0];
          local_1a8.Rotation.XY.m128d_f64[0] =
               local_1a8.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          local_1a8.Rotation.XY.m128d_f64[1] =
               local_1a8.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar63 = (undefined4)((ulonglong)local_1a8.Rotation.XY.m128d_f64[1] >> 0x20);
          local_1a8.Rotation.ZW.m128d_f64[0] =
               local_1a8.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          local_1a8.Rotation.ZW.m128d_f64[1] =
               local_1a8.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar64 = (undefined4)((ulonglong)local_1a8.Rotation.ZW.m128d_f64[1] >> 0x20);
          lVar26 = -(ulonglong)
                    ((double)CONCAT44(local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_ &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_ &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar93._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                local_1a8.Scale3D.XY.m128d_f64[0]._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                local_1a8.Scale3D.XY.m128d_f64[0]._0_4_);
          auVar93._8_4_ = _UNK_15061cc88 & local_1a8.Scale3D.XY.m128d_f64[1]._0_4_;
          auVar93._12_4_ = _UNK_15061cc8c & local_1a8.Scale3D.XY.m128d_f64[1]._4_4_;
          lVar27 = -(ulonglong)
                    (auVar93._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar30 = -(ulonglong)
                    (auVar93._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar67);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          (undefined1  [16])local_1a8.Scale3D.XY.m128d_f64);
          auVar68._8_4_ = SUB84(local_1a8.Rotation.XY.m128d_f64[1],0);
          auVar68._0_8_ = local_1a8.Rotation.XY.m128d_f64[0];
          auVar68._12_4_ = uVar63;
          _Var94.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar27 >> 0x20) & auVar44._4_4_,
                                ~(uint)lVar27 & auVar44._0_4_);
          _Var94.m128d_f64[1]._0_4_ = ~(uint)lVar30 & auVar44._8_4_;
          _Var94.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar44._12_4_;
          dVar92 = auVar68._8_8_;
          auVar73._8_4_ = _Var94.m128d_f64[1]._0_4_;
          auVar73._0_8_ = _Var94.m128d_f64[0];
          auVar73._12_4_ = _Var94.m128d_f64[1]._4_4_;
          auVar70._8_4_ = SUB84(local_1a8.Rotation.XY.m128d_f64[1],0);
          auVar70._0_8_ = local_1a8.Rotation.XY.m128d_f64[0];
          auVar70._12_4_ = uVar63;
          local_1a8.Translation.XY.m128d_f64[0] =
               _Var94.m128d_f64[0] * local_1a8.Translation.XY.m128d_f64[0];
          local_1a8.Translation.XY.m128d_f64[1] =
               auVar73._8_8_ * local_1a8.Translation.XY.m128d_f64[1];
          auVar80._8_4_ = SUB84(local_1a8.Rotation.ZW.m128d_f64[1],0);
          auVar80._0_8_ = local_1a8.Rotation.ZW.m128d_f64[0];
          auVar80._12_4_ = uVar64;
          local_3e8 = ~(uint)lVar26 & auVar33._0_4_;
          uStack_3e4 = ~(uint)((ulonglong)lVar26 >> 0x20) & auVar33._4_4_;
          auVar85._8_4_ = SUB84(local_1a8.Translation.XY.m128d_f64[1],0);
          auVar85._0_8_ = local_1a8.Translation.XY.m128d_f64[0];
          uVar63 = (undefined4)((ulonglong)local_1a8.Translation.XY.m128d_f64[1] >> 0x20);
          auVar85._12_4_ = uVar63;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          local_1a8.Translation.ZW.m128d_f64[0] =
               (double)CONCAT44(uStack_3e4,local_3e8) * local_1a8.Translation.ZW.m128d_f64[0];
          local_1a8.Translation.ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1] * 0.0;
          auVar34._8_4_ = SUB84(local_1a8.Rotation.ZW.m128d_f64[0],0);
          auVar34._0_8_ = dVar92;
          auVar34._12_4_ = (int)((ulonglong)local_1a8.Rotation.ZW.m128d_f64[0] >> 0x20);
          auVar45._8_4_ = SUB84(local_1a8.Translation.XY.m128d_f64[1],0);
          auVar45._0_8_ = local_1a8.Translation.XY.m128d_f64[0];
          auVar45._12_4_ = uVar63;
          auVar5._8_4_ = SUB84(local_1a8.Translation.ZW.m128d_f64[1],0);
          auVar5._0_8_ = local_1a8.Translation.ZW.m128d_f64[0];
          auVar5._12_4_ = (int)((ulonglong)local_1a8.Translation.ZW.m128d_f64[1] >> 0x20);
          auVar33 = blendpd(auVar45,auVar5,2);
          auVar86._0_8_ =
               auVar85._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] -
               dVar92 * local_1a8.Translation.XY.m128d_f64[0];
          auVar86._8_8_ =
               local_1a8.Translation.ZW.m128d_f64[0] * local_1a8.Rotation.XY.m128d_f64[1] -
               auVar34._8_8_ * local_1a8.Translation.XY.m128d_f64[1];
          auVar6._8_4_ = SUB84(local_1a8.Rotation.ZW.m128d_f64[1],0);
          auVar6._0_8_ = local_1a8.Rotation.ZW.m128d_f64[0];
          auVar6._12_4_ = uVar64;
          auVar44 = blendpd(auVar70,auVar6,2);
          auVar46._0_8_ =
               auVar33._0_8_ * local_1a8.Rotation.ZW.m128d_f64[0] -
               auVar44._0_8_ * local_1a8.Translation.ZW.m128d_f64[0];
          auVar46._8_8_ =
               auVar33._8_8_ * local_1a8.Rotation.ZW.m128d_f64[1] -
               auVar44._8_8_ * local_1a8.Translation.ZW.m128d_f64[1];
          auVar33 = blendpd(auVar86,auVar46,2);
          dVar84 = auVar86._8_8_ + auVar86._8_8_;
          dVar83 = auVar46._0_8_ + auVar46._0_8_;
          uVar63 = SUB84(dVar83,0);
          uVar64 = (undefined4)((ulonglong)dVar83 >> 0x20);
          auVar87._0_8_ = auVar33._0_8_ + auVar33._0_8_;
          auVar87._8_8_ = auVar33._8_8_ + auVar33._8_8_;
          auVar58._8_4_ = uVar63;
          auVar58._0_8_ = dVar84;
          auVar58._12_4_ = uVar64;
          auVar35._8_4_ = uVar63;
          auVar35._0_8_ = dVar84;
          auVar35._12_4_ = uVar64;
          auVar47._8_4_ = uVar63;
          auVar47._0_8_ = dVar84;
          auVar47._12_4_ = uVar64;
          auVar33 = blendpd(auVar47,auVar87,2);
          auVar59._0_8_ = auVar58._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - dVar84 * dVar92;
          auVar59._8_8_ =
               auVar87._0_8_ * local_1a8.Rotation.XY.m128d_f64[1] -
               auVar35._8_8_ * local_1a8.Rotation.ZW.m128d_f64[0];
          auVar36._8_4_ = SUB84(auVar87._8_8_,0);
          auVar36._0_8_ = auVar87._0_8_;
          auVar36._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
          auVar48._0_8_ =
               auVar33._0_8_ * local_1a8.Rotation.ZW.m128d_f64[0] - auVar87._0_8_ * auVar44._0_8_;
          auVar48._8_8_ =
               auVar33._8_8_ * local_1a8.Rotation.ZW.m128d_f64[1] - auVar36._8_8_ * auVar44._8_8_;
          auVar37._8_4_ = SUB84(auVar59._8_8_,0);
          auVar37._0_8_ = auVar59._0_8_;
          auVar37._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
          auVar33 = blendpd(auVar59,auVar48,2);
          dStack_3f0 = 0.0 - (dVar83 * local_1a8.Rotation.ZW.m128d_f64[1] +
                              local_1a8.Translation.XY.m128d_f64[1] + auVar48._0_8_);
          local_3f8 = (undefined1  [8])
                      (0.0 - (dVar84 * auVar80._8_8_ + local_1a8.Translation.XY.m128d_f64[0] +
                             auVar37._8_8_));
          _Var49.m128d_f64[1] = 0.0;
          _Var49.m128d_f64[0] = (double)CONCAT44(uStack_3e4,local_3e8);
          local_3b8 = 0.0 - (auVar87._0_8_ * auVar80._8_8_ + local_1a8.Translation.ZW.m128d_f64[0] +
                            auVar33._0_8_);
          uStack_3a0 = 0;
          local_3a8 = local_3b8;
        }
        adVar12 = _local_3f8;
        uVar63 = (undefined4)((ulonglong)local_1a8.Rotation.ZW.m128d_f64[1] >> 0x20);
        dVar92 = _Var94.m128d_f64[0] * (double)CONCAT44(uVar14,uVar13);
        dVar95 = _Var94.m128d_f64[1] * (double)CONCAT44(uVar16,uVar15);
        auVar81._0_8_ = (double)CONCAT44(uVar91,uVar90) * _Var49.m128d_f64[0];
        auVar81._8_8_ = _Var49.m128d_f64[1] * 0.0;
        auVar74._8_4_ = SUB84(dVar95,0);
        auVar74._0_8_ = dVar92;
        uVar90 = (undefined4)((ulonglong)dVar95 >> 0x20);
        auVar74._12_4_ = uVar90;
        auVar38._8_4_ = SUB84(local_1a8.Rotation.ZW.m128d_f64[0],0);
        auVar38._0_8_ = local_1a8.Rotation.XY.m128d_f64[1];
        auVar38._12_4_ = (int)((ulonglong)local_1a8.Rotation.ZW.m128d_f64[0] >> 0x20);
        auVar69._8_4_ = SUB84(local_1a8.Rotation.XY.m128d_f64[1],0);
        auVar69._0_8_ = local_1a8.Rotation.XY.m128d_f64[0];
        auVar69._12_4_ = (int)((ulonglong)local_1a8.Rotation.XY.m128d_f64[1] >> 0x20);
        auVar7._8_4_ = SUB84(local_1a8.Rotation.ZW.m128d_f64[1],0);
        auVar7._0_8_ = local_1a8.Rotation.ZW.m128d_f64[0];
        auVar7._12_4_ = uVar63;
        auVar44 = blendpd(auVar69,auVar7,2);
        auVar75._0_8_ =
             auVar74._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] -
             local_1a8.Rotation.XY.m128d_f64[1] * dVar92;
        auVar75._8_8_ = auVar81._0_8_ * local_1a8.Rotation.XY.m128d_f64[1] - auVar38._8_8_ * dVar95;
        auVar50._8_4_ = SUB84(dVar95,0);
        auVar50._0_8_ = dVar92;
        auVar50._12_4_ = uVar90;
        auVar88._8_4_ = SUB84(auVar75._8_8_,0);
        auVar88._0_8_ = auVar75._0_8_;
        auVar88._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
        auVar71._8_4_ = SUB84(local_1a8.Rotation.ZW.m128d_f64[1],0);
        auVar71._0_8_ = local_1a8.Rotation.ZW.m128d_f64[0];
        auVar71._12_4_ = uVar63;
        auVar33 = blendpd(auVar50,auVar81,2);
        auVar51._0_8_ =
             auVar33._0_8_ * local_1a8.Rotation.ZW.m128d_f64[0] - auVar44._0_8_ * auVar81._0_8_;
        auVar51._8_8_ =
             auVar33._8_8_ * local_1a8.Rotation.ZW.m128d_f64[1] - auVar44._8_8_ * auVar81._8_8_;
        auVar33 = blendpd(auVar75,auVar51,2);
        dVar84 = auVar88._8_8_ + auVar88._8_8_;
        dVar83 = auVar51._0_8_ + auVar51._0_8_;
        auVar76._0_8_ = auVar33._0_8_ + auVar33._0_8_;
        auVar76._8_8_ = auVar33._8_8_ + auVar33._8_8_;
        uVar90 = SUB84(dVar83,0);
        auVar60._8_4_ = uVar90;
        auVar60._0_8_ = dVar84;
        uVar91 = (undefined4)((ulonglong)dVar83 >> 0x20);
        auVar60._12_4_ = uVar91;
        auVar39._8_4_ = uVar90;
        auVar39._0_8_ = dVar84;
        auVar39._12_4_ = uVar91;
        auVar52._8_4_ = uVar90;
        auVar52._0_8_ = dVar84;
        auVar52._12_4_ = uVar91;
        auVar33 = blendpd(auVar52,auVar76,2);
        auVar61._0_8_ =
             auVar60._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] -
             dVar84 * local_1a8.Rotation.XY.m128d_f64[1];
        auVar61._8_8_ =
             auVar76._0_8_ * local_1a8.Rotation.XY.m128d_f64[1] -
             auVar39._8_8_ * local_1a8.Rotation.ZW.m128d_f64[0];
        auVar40._8_4_ = SUB84(auVar76._8_8_,0);
        auVar40._0_8_ = auVar76._0_8_;
        auVar40._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
        auVar53._0_8_ =
             auVar33._0_8_ * local_1a8.Rotation.ZW.m128d_f64[0] - auVar76._0_8_ * auVar44._0_8_;
        auVar53._8_8_ =
             auVar33._8_8_ * local_1a8.Rotation.ZW.m128d_f64[1] - auVar40._8_8_ * auVar44._8_8_;
        auVar41._8_4_ = SUB84(auVar61._8_8_,0);
        auVar41._0_8_ = auVar61._0_8_;
        auVar41._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
        uVar1 = param_2->Type;
        uVar2 = *(undefined3 *)&param_2->field_0x1;
        uVar3 = (param_2->Name).ComparisonIndex;
        local_3f8._4_4_ = uVar3;
        local_3f8._1_3_ = uVar2;
        local_3f8[0] = uVar1;
        uVar79 = local_3f8;
        local_3f8 = adVar12[0];
        dVar84 = dVar84 * auVar71._8_8_ + dVar92 + auVar41._8_8_ + (double)local_3f8;
        dStack_3f0 = adVar12[1];
        dVar83 = dVar83 * local_1a8.Rotation.ZW.m128d_f64[1] + dVar95 + auVar53._0_8_ + dStack_3f0;
        dStack_3f0._4_4_ = adVar12[1]._4_4_;
        dStack_3f0._0_4_ = (param_2->Name).Number;
        auVar33 = blendpd(auVar61,auVar53,2);
        _local_3f8 = (double  [2])CONCAT88(dStack_3f0,uVar79);
        local_3b8 = auVar76._0_8_ * auVar71._8_8_ + auVar81._0_8_ + auVar33._0_8_ + local_3b8;
        iVar18 = URigHierarchy::GetIndex(this,(FRigElementKey *)local_3f8,true);
        URigHierarchy::GetLocalTransformByIndex(this,&local_2c8,iVar18,false);
        local_328.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_328.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_328.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_328.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_328.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_328.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        if (param_2->Type == Control) {
          iVar18 = URigHierarchy::GetIndex(this,param_2,true);
          pFVar20 = URigHierarchy::Get<FRigControlElement>(this,iVar18);
          if (pFVar20 != (FRigControlElement *)0x0) {
            pTVar19 = URigHierarchy::GetControlOffsetTransform(this,&local_208,pFVar20,CurrentLocal)
            ;
            local_328.Rotation.XY.m128d_f64 = *&(pTVar19->Rotation).XY.m128d_f64;
            local_328.Rotation.ZW.m128d_f64 = *&(pTVar19->Rotation).ZW.m128d_f64;
            local_328.Translation.XY.m128d_f64 = *&(pTVar19->Translation).XY.m128d_f64;
            local_328.Translation.ZW.m128d_f64 = *&(pTVar19->Translation).ZW.m128d_f64;
            local_328.Scale3D.XY.m128d_f64 = *&(pTVar19->Scale3D).XY.m128d_f64;
            local_328.Scale3D.ZW.m128d_f64 = *&(pTVar19->Scale3D).ZW.m128d_f64;
            UE::Math::TTransform<double>::Multiply(&local_2c8,&local_2c8,&local_328);
          }
        }
        local_3d8 = local_2c8.Translation.ZW.m128d_f64[0];
        if (local_398->bX == false) {
          dVar84 = local_2c8.Translation.XY.m128d_f64[0];
        }
        if (local_398->bY == false) {
          auVar9._4_8_ = dVar83;
          auVar9._0_4_ = local_2c8.Translation.XY.m128d_f64[0]._4_4_;
          auVar89._0_8_ = auVar9._0_8_ << 0x20;
          auVar89._8_4_ = local_2c8.Translation.XY.m128d_f64[1]._0_4_;
          auVar89._12_4_ = local_2c8.Translation.XY.m128d_f64[1]._4_4_;
          dVar83 = auVar89._8_8_;
        }
        local_388.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
        if (local_398->bZ != false) {
          local_388.Translation.ZW.m128d_f64[0] = local_3b8;
        }
        uVar90 = SUB84(dVar83,0);
        uVar91 = (undefined4)((ulonglong)dVar83 >> 0x20);
        local_388.Translation.XY.m128d_f64[1]._0_4_ = uVar90;
        local_388.Translation.XY.m128d_f64[0] = dVar84;
        local_388.Translation.XY.m128d_f64[1]._4_4_ = uVar91;
        local_208.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
        local_208.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
        local_208.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
        local_208.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
        local_388.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
        local_388.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
        local_388.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
        local_388.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
        local_388.Translation.ZW.m128d_f64[1] = 0.0;
        local_388.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
        local_388.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
        local_388.Scale3D.ZW.m128d_f64[0]._0_4_ = local_2c8.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_388.Scale3D.ZW.m128d_f64[0]._4_4_ = local_2c8.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_388.Scale3D.ZW.m128d_f64[1]._0_4_ = local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_388.Scale3D.ZW.m128d_f64[1]._4_4_ = local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_3b8 = local_388.Translation.ZW.m128d_f64[0];
        if (param_6 < __real_3f7ff972) {
          pTVar19 = FRigVMMathLibrary::LerpTransform(&local_208,&local_2c8,&local_388,param_6);
          local_2c8.Rotation.XY.m128d_f64 = *&(pTVar19->Rotation).XY.m128d_f64;
          local_2c8.Rotation.ZW.m128d_f64 = *&(pTVar19->Rotation).ZW.m128d_f64;
          local_388.Translation.XY.m128d_f64 = *&(pTVar19->Translation).XY.m128d_f64;
          dVar84 = local_388.Translation.XY.m128d_f64[0];
          uVar90 = local_388.Translation.XY.m128d_f64[1]._0_4_;
          uVar91 = local_388.Translation.XY.m128d_f64[1]._4_4_;
          local_388.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
          local_388.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
          local_2c8.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
          local_2c8.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
          local_2c8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar19->Scale3D).ZW.m128d_f64;
          local_2c8.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 4);
          local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar19->Scale3D).ZW.m128d_f64 + 1);
          local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 0xc);
        }
        local_388.Rotation.XY.m128d_f64 = local_2c8.Rotation.XY.m128d_f64;
        local_388.Rotation.ZW.m128d_f64 = local_2c8.Rotation.ZW.m128d_f64;
        local_388.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
        local_388.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
        local_388.Scale3D.ZW.m128d_f64[0]._0_4_ = local_2c8.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_388.Scale3D.ZW.m128d_f64[0]._4_4_ = local_2c8.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_388.Scale3D.ZW.m128d_f64[1]._0_4_ = local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_388.Scale3D.ZW.m128d_f64[1]._4_4_ = local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_;
        if (param_2->Type == Control) {
          pTVar19 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_388,&local_208,&local_328);
          dVar83 = (pTVar19->Rotation).XY.m128d_f64[0];
          dVar92 = (pTVar19->Rotation).XY.m128d_f64[1];
          dVar95 = (pTVar19->Rotation).ZW.m128d_f64[0];
          dVar55 = (pTVar19->Rotation).ZW.m128d_f64[1];
          local_388.Translation.XY.m128d_f64 = *&(pTVar19->Translation).XY.m128d_f64;
          dVar84 = local_388.Translation.XY.m128d_f64[0];
          uVar90 = local_388.Translation.XY.m128d_f64[1]._0_4_;
          uVar91 = local_388.Translation.XY.m128d_f64[1]._4_4_;
          local_388.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
          local_388.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
          auVar54._0_8_ = dVar83 * dVar83 + dVar95 * dVar95;
          auVar54._8_8_ = dVar92 * dVar92 + dVar55 * dVar55;
          local_388.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
          local_388.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
          auVar42._8_4_ = SUB84(auVar54._8_8_,0);
          auVar42._0_8_ = auVar54._0_8_;
          auVar42._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
          auVar43._0_8_ = auVar42._8_8_ + auVar54._0_8_;
          auVar43._8_8_ = auVar54._0_8_ + auVar54._8_8_;
          local_388.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar19->Scale3D).ZW.m128d_f64;
          local_388.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 4);
          local_388.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar19->Scale3D).ZW.m128d_f64 + 1);
          local_388.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 0xc);
          auVar33 = sqrtpd(auVar54,auVar43);
          uVar28 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar43._0_8_);
          uVar31 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar43._8_8_);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
          auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
          uVar29 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar43._0_8_);
          uVar32 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar43._8_8_);
          auVar77._0_8_ = uVar28 & (ulonglong)(auVar44._0_8_ * dVar83);
          uVar10 = uVar31 & (ulonglong)(auVar44._8_8_ * dVar92);
          auVar77._8_4_ = (undefined4)uVar10;
          auVar77._12_4_ = (undefined4)(uVar10 >> 0x20);
          auVar62._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar62._4_4_ =
               ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar62._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar62._12_4_ =
               ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar82._0_8_ = uVar29 & (ulonglong)(auVar33._0_8_ * dVar95);
          uVar10 = uVar32 & (ulonglong)(auVar33._8_8_ * dVar55);
          auVar82._8_4_ = (undefined4)uVar10;
          auVar82._12_4_ = (undefined4)(uVar10 >> 0x20);
          local_388.Rotation.XY.m128d_f64 = (double  [2])(auVar77 | auVar62);
          auVar4._4_4_ = ~(uint)(uVar29 >> 0x20) &
                         GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar4._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar4._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar4._12_4_ =
               ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          local_388.Rotation.ZW.m128d_f64 = (double  [2])(auVar82 | auVar4);
        }
        uVar64 = local_388.Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar63 = local_388.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar16 = local_388.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar15 = local_388.Scale3D.ZW.m128d_f64[0]._0_4_;
        dVar55 = local_388.Scale3D.XY.m128d_f64[1];
        dVar95 = local_388.Scale3D.XY.m128d_f64[0];
        dVar92 = local_388.Translation.ZW.m128d_f64[1];
        dVar83 = local_388.Translation.ZW.m128d_f64[0];
        _Var94.m128d_f64 = local_388.Rotation.ZW.m128d_f64;
        _Var49.m128d_f64 = local_388.Rotation.XY.m128d_f64;
        local_3f8[0] = param_2->Type;
        local_3f8._1_3_ = *(undefined3 *)&param_2->field_0x1;
        local_3f8._4_4_ = (param_2->Name).ComparisonIndex;
        dStack_3f0._0_4_ = (param_2->Name).Number;
        iVar18 = URigHierarchy::GetIndex(this,(FRigElementKey *)local_3f8,true);
        local_268.Translation.XY.m128d_f64[1]._0_4_ = uVar90;
        local_268.Translation.XY.m128d_f64[0] = dVar84;
        local_268.Translation.XY.m128d_f64[1]._4_4_ = uVar91;
        local_268.Rotation.XY.m128d_f64 = _Var49.m128d_f64;
        local_268.Rotation.ZW.m128d_f64 = _Var94.m128d_f64;
        local_268.Translation.ZW.m128d_f64[0] = dVar83;
        local_268.Translation.ZW.m128d_f64[1] = dVar92;
        local_268.Scale3D.XY.m128d_f64[0] = dVar95;
        local_268.Scale3D.XY.m128d_f64[1] = dVar55;
        local_268.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar15;
        local_268.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar16;
        local_268.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar63;
        local_268.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar64;
        URigHierarchy::SetLocalTransformByIndex(this,iVar18,&local_268,false,true,false,false);
      }
    }
  }
  return;
}

