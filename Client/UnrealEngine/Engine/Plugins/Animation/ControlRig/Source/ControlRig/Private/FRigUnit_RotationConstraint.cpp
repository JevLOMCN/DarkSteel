// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4c1520

UScriptStruct * __cdecl FRigUnit_RotationConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint,(UObject *)pUVar1,
                         L"RigUnit_RotationConstraint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraint.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraint.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c1700

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_RotationConstraint::GetExecuteContextStruct(FRigUnit_RotationConstraint *this)

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

// Execute @ 14a4c1ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_RotationConstraint::Execute(FRigUnit_RotationConstraint *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FConstraintParent_const_,int> local_278;
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
                &this->Filter,&local_278,&this->AdvancedSettings,this->Weight);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4c1d10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_RotationConstraint::GetUpgradeInfo
          (FRigUnit_RotationConstraint *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *pFVar3;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_98;
  FRigUnit_RotationConstraintLocalSpaceOffset local_88;
  
  FRigUnit_RotationConstraintLocalSpaceOffset::FRigUnit_RotationConstraintLocalSpaceOffset
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
    iVar1 = (this->Parents).ArrayNum;
    _Src = (this->Parents).AllocatorInstance.Data;
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
  local_88.AdvancedSettings = this->AdvancedSettings;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraint,(UObject *)pUVar2,
                         L"RigUnit_RotationConstraint");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_98.ArrayNum = 1;
    local_98.DataPtr = Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraint.OuterSingleton,
               &local_98);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraint.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset,
                         (UObject *)pUVar2,L"RigUnit_RotationConstraintLocalSpaceOffset");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_98.ArrayNum = 1;
    local_98.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset.
                      OuterSingleton,&local_98);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton;
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

// FRigUnit_RotationConstraint @ 14a515320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_RotationConstraint * __thiscall
FRigUnit_RotationConstraint::FRigUnit_RotationConstraint(FRigUnit_RotationConstraint *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  piVar1 = &(this->Parents).ArrayMax;
  this->_padding_ = (longlong)&___7FRigUnit_RotationConstraint__6B_;
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
  (this->AdvancedSettings).InterpolationType = Average;
  (this->AdvancedSettings).RotationOrderForFilter = XZY;
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

// Execute @ 14a52bfc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RotationConstraint::Execute
          (FRigUnit_RotationConstraint *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&this->Child,this->bMaintainOffset,&this->Filter,&local_18,
                &this->AdvancedSettings,this->Weight);
  return;
}

// RigVMExecute @ 14a54f390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_RotationConstraint::RigVMExecute
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
  FRigUnit_RotationConstraint_AdvancedSettings *pFVar10;
  float *pfVar11;
  FControlRigExecuteContext *pFVar12;
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
  pFVar10 = (FRigUnit_RotationConstraint_AdvancedSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  local_38[0].DataPtr = *(FConstraintParent **)puVar7;
  local_38[0].ArrayNum = *(int *)(puVar7 + 8);
  fVar1 = *pfVar11;
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
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar6,bVar4,pFVar8,local_38,pFVar10,fVar1);
  return;
}

// StaticExecute @ 14a58c120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_RotationConstraint::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FFilterOptionPerAxis *param_4,TArrayView<FConstraintParent_const_,int> *param_5,
          FRigUnit_RotationConstraint_AdvancedSettings *param_6,float param_7)

{
  URigHierarchy *this;
  code *pcVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  FRigControlElement *pFVar23;
  TTransform<double> *pTVar24;
  TQuat<double> *pTVar25;
  URigHierarchy *pUVar26;
  FName *pFVar27;
  FConstraintParent *pFVar28;
  FConstraintParent *pFVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar52;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  uint uVar74;
  double dVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar75;
  undefined1 auVar76 [16];
  double dVar78;
  undefined1 auVar77 [16];
  undefined4 uVar79;
  undefined4 uVar80;
  float fVar81;
  double dVar83;
  undefined1 auVar82 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  double dVar87;
  double dVar90;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar91;
  undefined4 uVar92;
  FNameEntryId FVar93;
  float fVar94;
  undefined1 auVar95 [16];
  double dVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  __m128d _Var101;
  undefined1 auVar102 [16];
  __m128d _Var103;
  undefined1 auVar104 [16];
  undefined1 auStackY_798 [32];
  undefined1 local_748 [16];
  undefined1 local_738 [16];
  float local_728;
  float local_720;
  undefined8 local_718;
  undefined8 uStack_710;
  TVector<double> local_708;
  FFilterOptionPerAxis *local_6f0;
  FRigElementKey local_6e8;
  FRigElementKey local_6d8;
  FRigElementKey local_6c8;
  FRigElementKey local_6b8;
  FRigElementKey local_6a8;
  FRigElementKey local_698;
  TVector<double> local_688;
  TVector<double> local_670;
  double local_658;
  undefined8 local_650;
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  TQuat<double> local_5e8;
  TTransform<double> local_5c8;
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  TQuat<double> local_548;
  TQuat<double> local_528;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  fVar86 = __real_38d1b717;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_798;
  local_720 = param_7;
  if ((((__real_38d1b717 <= param_7) && (this = param_1->Hierarchy, this != (URigHierarchy *)0x0))
      && (local_6f0 = param_4,
         bVar20 = ::FName::IsWithinBounds((FNameEntryId)(param_2->Name).ComparisonIndex.Value),
         bVar20)) && ((param_2->Name != (FName)0x0 && (param_2->Type != None)))) {
    local_6e8.Type = param_2->Type;
    local_6e8._1_3_ = *(undefined3 *)&param_2->field_0x1;
    local_6e8.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
    local_6e8.Name.Number = (param_2->Name).Number;
    iVar21 = URigHierarchy::GetIndex(this,&local_6e8,true);
    URigHierarchy::GetGlobalTransformByIndex(this,&local_328,iVar21,true);
    local_6d8.Type = param_2->Type;
    local_6d8._1_3_ = *(undefined3 *)&param_2->field_0x1;
    local_6d8.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
    local_6d8.Name.Number = (param_2->Name).Number;
    iVar21 = URigHierarchy::GetIndex(this,&local_6d8,true);
    URigHierarchy::GetGlobalTransformByIndex(this,&local_2c8,iVar21,false);
    pFVar28 = param_5->DataPtr;
    auVar65 = ZEXT816(0);
    pFVar29 = pFVar28 + param_5->ArrayNum;
    if (pFVar28 != pFVar29) {
      pFVar27 = &(pFVar28->Item).Name;
      do {
        fVar97 = (float)pFVar27[1].ComparisonIndex.Value;
        if (fVar97 <= 0.0) {
          fVar97 = 0.0;
        }
        if (((fVar86 <= fVar97) &&
            (bVar20 = ::FName::IsWithinBounds((FNameEntryId)(pFVar27->ComparisonIndex).Value),
            bVar20)) && ((*pFVar27 != (FName)0x0 && ((pFVar28->Item).Type != None)))) {
          auVar65._0_4_ = auVar65._0_4_ + fVar97;
        }
        pFVar28 = pFVar28 + 1;
        pFVar27 = pFVar27 + 2;
      } while (pFVar28 != pFVar29);
      if (fVar86 < auVar65._0_4_) {
        dVar70 = 0.0;
        dVar73 = 0.0;
        pFVar28 = param_5->DataPtr;
        auVar88._0_8_ = 0.0;
        dVar87 = 0.0;
        uVar92 = SUB84(__real_3e45798ee0000000,0);
        FVar93.Value = (uint)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
        fVar98 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar99 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar100 = GlobalVectorConstants::Float0001.m128_f32[3];
        fVar81 = __real_3f800000 / auVar65._0_4_;
        pFVar29 = pFVar28 + param_5->ArrayNum;
        local_748 = ZEXT816(0);
        local_738 = ZEXT816(0);
        local_718 = __real_3e45798ee0000000;
        uStack_710 = 0;
        _Var101.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
        _Var103.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
        dVar75 = 0.0;
        dVar78 = 0.0;
        local_728 = fVar81;
        if (pFVar28 != pFVar29) {
          pFVar27 = &(pFVar28->Item).Name;
          do {
            fVar94 = (float)pFVar27[1].ComparisonIndex.Value;
            if (fVar94 <= 0.0) {
              fVar94 = 0.0;
            }
            if (fVar86 <= fVar94) {
              bVar20 = ::FName::IsWithinBounds((FNameEntryId)(pFVar27->ComparisonIndex).Value);
              auVar95 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
              auVar89 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
              if (((bVar20) && (*pFVar27 != (FName)0x0)) && ((pFVar28->Item).Type != None)) {
                local_6c8.Type = (pFVar28->Item).Type;
                local_6c8._1_3_ = *(undefined3 *)&(pFVar28->Item).field_0x1;
                local_6c8.Name.ComparisonIndex.Value = (pFVar28->Item).Name.ComparisonIndex.Value;
                local_6c8.Name.Number = (pFVar28->Item).Name.Number;
                local_648._0_8_ = UE::Math::TQuat<double>::Identity.X;
                local_648._8_8_ = UE::Math::TQuat<double>::Identity.Y;
                local_638._0_8_ = UE::Math::TQuat<double>::Identity.Z;
                local_638._8_8_ = UE::Math::TQuat<double>::Identity.W;
                iVar21 = URigHierarchy::GetIndex(this,&local_6c8,true);
                pUVar26 = this;
                URigHierarchy::GetGlobalTransformByIndex(this,&local_3e8,iVar21,false);
                uVar79 = SUB84(pUVar26,0);
                if (param_3) {
                  local_6b8.Type = (pFVar28->Item).Type;
                  local_6b8._1_3_ = *(undefined3 *)&(pFVar28->Item).field_0x1;
                  local_6b8.Name.ComparisonIndex.Value = (pFVar28->Item).Name.ComparisonIndex.Value;
                  local_6b8.Name.Number = (pFVar28->Item).Name.Number;
                  iVar21 = URigHierarchy::GetIndex(this,&local_6b8,true);
                  pUVar26 = this;
                  URigHierarchy::GetGlobalTransformByIndex(this,&local_388,iVar21,true);
                  uVar79 = SUB84(pUVar26,0);
                  dVar70 = local_388.Rotation.XY.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  auVar88._0_8_ =
                       local_388.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  dVar87 = local_388.Rotation.ZW.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  dVar90 = local_388.Rotation.ZW.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                  fVar98 = GlobalVectorConstants::Float0001.m128_f32[1];
                  fVar99 = GlobalVectorConstants::Float0001.m128_f32[2];
                  fVar100 = GlobalVectorConstants::Float0001.m128_f32[3];
                  auVar84._8_4_ = SUB84(dVar90,0);
                  auVar84._0_8_ = dVar87;
                  auVar84._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
                  auVar76._8_4_ = SUB84(dVar70,0);
                  auVar76._0_8_ = dVar70;
                  auVar76._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
                  auVar64._8_8_ = local_328.Rotation.XY.m128d_f64[0];
                  auVar64._0_8_ = local_328.Rotation.XY.m128d_f64[1];
                  auVar34._8_4_ = SUB84(dVar87,0);
                  auVar34._0_8_ = dVar87;
                  auVar34._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
                  dVar75 = dVar70 * local_328.Rotation.ZW.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                           local_328.Rotation.XY.m128d_f64[0] * auVar84._8_8_ +
                           local_328.Rotation.ZW.m128d_f64[0] * auVar88._0_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                           dVar87 * local_328.Rotation.XY.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  dVar78 = auVar76._8_8_ * local_328.Rotation.ZW.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                           local_328.Rotation.XY.m128d_f64[1] * dVar90 +
                           local_328.Rotation.ZW.m128d_f64[1] * auVar88._0_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                           auVar34._8_8_ * local_328.Rotation.XY.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  auVar35._8_4_ = SUB84(dVar78,0);
                  auVar35._0_8_ = dVar75;
                  auVar35._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
                  dVar73 = dVar70 * local_328.Rotation.XY.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           local_328.Rotation.ZW.m128d_f64[0] * auVar84._8_8_ +
                           local_328.Rotation.XY.m128d_f64[0] * auVar88._0_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                           dVar87 * local_328.Rotation.ZW.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  dVar70 = dVar70 * local_328.Rotation.XY.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                           local_328.Rotation.ZW.m128d_f64[1] * dVar90 +
                           local_328.Rotation.XY.m128d_f64[1] * auVar88._0_8_ *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                           dVar87 * local_328.Rotation.ZW.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  auVar53._8_4_ = SUB84(dVar70,0);
                  auVar53._0_8_ = dVar73;
                  auVar53._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
                  auVar88._0_8_ = dVar73 * dVar73 + dVar75 * dVar75;
                  dVar87 = auVar53._8_8_ * dVar70 + auVar35._8_8_ * dVar78;
                  auVar36._8_4_ = SUB84(dVar87,0);
                  auVar36._0_8_ = auVar88._0_8_;
                  auVar36._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
                  auVar37._0_8_ = auVar36._8_8_ + auVar88._0_8_;
                  auVar37._8_8_ = auVar88._0_8_ + dVar87;
                  auVar65 = sqrtpd(auVar64,auVar37);
                  local_658 = local_718;
                  auVar88 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar65);
                  uVar30 = -(ulonglong)(local_718 <= auVar37._0_8_);
                  uVar31 = -(ulonglong)(local_718 <= auVar37._8_8_);
                  uVar22 = (uint)(uVar30 >> 0x20);
                  uVar74 = (uint)(uVar31 >> 0x20);
                  auVar54._0_4_ = ~(uint)uVar30 & SUB84((double)fVar97,0);
                  auVar54._4_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar97 >> 0x20);
                  auVar54._8_4_ = ~(uint)uVar31 & SUB84((double)fVar98,0);
                  auVar54._12_4_ = ~uVar74 & (uint)((ulonglong)(double)fVar98 >> 0x20);
                  auVar89._0_8_ = uVar30 & (ulonglong)(auVar88._0_8_ * dVar75);
                  uVar10 = uVar31 & (ulonglong)(auVar88._8_8_ * dVar78);
                  auVar89._8_4_ = (undefined4)uVar10;
                  auVar89._12_4_ = (undefined4)(uVar10 >> 0x20);
                  auVar89 = auVar89 | auVar54;
                  auVar95._0_4_ = ~(uint)uVar30 & SUB84((double)fVar99,0);
                  auVar95._4_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar99 >> 0x20);
                  auVar95._8_4_ = ~(uint)uVar31 & SUB84((double)fVar100,0);
                  auVar95._12_4_ = ~uVar74 & (uint)((ulonglong)(double)fVar100 >> 0x20);
                  auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar65);
                  auVar38._0_8_ = (ulonglong)(auVar65._0_8_ * dVar73) & uVar30;
                  uVar31 = (ulonglong)(auVar65._8_8_ * dVar70) & uVar31;
                  auVar38._8_4_ = (undefined4)uVar31;
                  auVar38._12_4_ = (undefined4)(uVar31 >> 0x20);
                  auVar95 = auVar95 | auVar38;
                  uVar92 = (undefined4)local_718;
                  FVar93.Value = local_718._4_4_;
                  local_648 = auVar89;
                  local_638 = auVar95;
                }
                else {
                  fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                  fVar98 = GlobalVectorConstants::Float0001.m128_f32[1];
                  fVar99 = GlobalVectorConstants::Float0001.m128_f32[2];
                  fVar100 = GlobalVectorConstants::Float0001.m128_f32[3];
                }
                dVar78 = auVar89._0_8_;
                dVar90 = local_3e8.Rotation.ZW.m128d_f64[0];
                dVar83 = local_3e8.Rotation.ZW.m128d_f64[1];
                dVar87 = auVar95._0_8_;
                dVar91 = auVar89._8_8_;
                in_XMM2._8_8_ = dVar78;
                in_XMM2._0_8_ = dVar91;
                dVar96 = auVar95._8_8_;
                auVar39._8_4_ = local_3e8.Rotation.ZW.m128d_f64[0]._0_4_;
                auVar39._0_8_ = dVar90;
                auVar39._12_4_ = local_3e8.Rotation.ZW.m128d_f64[0]._4_4_;
                dVar75 = dVar96 * local_3e8.Rotation.XY.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
                dVar70 = local_3e8.Rotation.XY.m128d_f64[0] * dVar96 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                         dVar78 * dVar83 +
                         dVar87 * local_3e8.Rotation.XY.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                         dVar90 * dVar91 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                dVar73 = local_3e8.Rotation.XY.m128d_f64[0] * dVar87 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                         dVar91 * dVar83 + dVar75 +
                         auVar39._8_8_ * dVar78 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                uVar80 = (undefined4)((ulonglong)dVar73 >> 0x20);
                auVar88._0_8_ =
                     local_3e8.Rotation.XY.m128d_f64[0] * dVar91 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar87 * dVar83 +
                     dVar78 * local_3e8.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar90 * dVar96 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                auVar88._8_8_ =
                     local_3e8.Rotation.XY.m128d_f64[0] * dVar78 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar96 * dVar83 +
                     dVar91 * local_3e8.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar90 * dVar87 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                local_628._8_4_ = SUB84(dVar73,0);
                local_628._0_8_ = dVar70;
                local_628._12_4_ = uVar80;
                local_618 = auVar88;
                if (param_6->InterpolationType == Average) {
                  dVar87 = (double)(fVar94 * fVar81);
                  dVar70 = dVar87 * dVar70;
                  dVar73 = dVar87 * dVar73;
                  auVar88._0_8_ = dVar87 * auVar88._0_8_;
                  dVar87 = dVar87 * auVar88._8_8_;
                  auVar2._4_8_ = dVar75;
                  auVar2._0_4_ = (int)((ulonglong)dVar70 >> 0x20);
                  auVar55._0_8_ = auVar2._0_8_ << 0x20;
                  auVar55._8_4_ = SUB84(dVar73,0);
                  auVar55._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
                  auVar3._4_8_ = dVar78;
                  auVar3._0_4_ = (int)((ulonglong)auVar88._0_8_ >> 0x20);
                  auVar66._0_8_ = auVar3._0_8_ << 0x20;
                  auVar66._8_4_ = SUB84(dVar87,0);
                  auVar66._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
                  in_XMM2._0_8_ =
                       auVar66._8_8_ * (double)local_738._8_8_ +
                       auVar88._0_8_ * (double)local_738._0_8_ +
                       auVar55._8_8_ * (double)local_748._8_8_ + dVar70 * (double)local_748._0_8_;
                  in_XMM2._8_8_ = dVar87;
                  fVar86 = __real_38d1b717;
                  _Var101.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
                  _Var103.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
                  fVar81 = local_728;
                  if (0.0 <= in_XMM2._0_8_) {
                    dVar70 = (double)local_748._0_8_ + dVar70;
                    dVar73 = (double)local_748._8_8_ + dVar73;
                    auVar88._0_8_ = (double)local_738._0_8_ + auVar88._0_8_;
                    dVar87 = (double)local_738._8_8_ + dVar87;
                    local_748._8_8_ = dVar73;
                    local_748._0_8_ = dVar70;
                    local_738._8_4_ = SUB84(dVar87,0);
                    local_738._0_8_ = auVar88._0_8_;
                    local_738._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
                  }
                  else {
                    dVar70 = (double)local_748._0_8_ - dVar70;
                    dVar73 = (double)local_748._8_8_ - dVar73;
                    auVar88._0_8_ = (double)local_738._0_8_ - auVar88._0_8_;
                    dVar87 = (double)local_738._8_8_ - dVar87;
                    local_748._8_8_ = dVar73;
                    local_748._0_8_ = dVar70;
                    local_738._8_4_ = SUB84(dVar87,0);
                    local_738._0_8_ = auVar88._0_8_;
                    local_738._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
                  }
                  goto LAB_14a58c8b4;
                }
                if (param_6->InterpolationType != Shortest) {
                  bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_5743640656631298991>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                                      ,0x451,"false");
                  if (bVar20) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  dVar70 = local_2c8.Rotation.XY.m128d_f64[0];
                  auVar8._4_8_ = in_XMM2._8_8_;
                  auVar8._0_4_ = local_2c8.Rotation.XY.m128d_f64[0]._4_4_;
                  auVar68._0_8_ = auVar8._0_8_ << 0x20;
                  auVar68._8_4_ = local_2c8.Rotation.XY.m128d_f64[1]._0_4_;
                  auVar68._12_4_ = local_2c8.Rotation.XY.m128d_f64[1]._4_4_;
                  fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                  fVar98 = GlobalVectorConstants::Float0001.m128_f32[1];
                  fVar99 = GlobalVectorConstants::Float0001.m128_f32[2];
                  fVar100 = GlobalVectorConstants::Float0001.m128_f32[3];
                  auVar9._4_8_ = extraout_XMM0_Qb;
                  auVar9._0_4_ = local_2c8.Rotation.ZW.m128d_f64[0]._4_4_;
                  auVar46._0_8_ = auVar9._0_8_ << 0x20;
                  auVar46._8_4_ = local_2c8.Rotation.ZW.m128d_f64[1]._0_4_;
                  auVar46._12_4_ = local_2c8.Rotation.ZW.m128d_f64[1]._4_4_;
                  dVar73 = auVar68._8_8_;
                  in_XMM2._8_8_ = local_2c8.Rotation.XY.m128d_f64[1];
                  in_XMM2._0_8_ = dVar73;
                  _Var101 = GlobalVectorConstants::DoubleOne.XY;
                  _Var103 = GlobalVectorConstants::DoubleOne.ZW;
                  dVar75 = local_2c8.Rotation.ZW.m128d_f64[0];
                  dVar78 = auVar46._8_8_;
                  param_7 = local_720;
                  break;
                }
                auVar40._8_8_ = -(ulonglong)((double)local_738._8_8_ == 0.0);
                auVar40._0_8_ = -(ulonglong)((double)local_738._0_8_ == 0.0);
                auVar56._8_8_ = -(ulonglong)((double)local_748._8_8_ == 0.0);
                auVar56._0_8_ = -(ulonglong)((double)local_748._0_8_ == 0.0);
                iVar21 = movmskpd(uVar79,auVar40);
                uVar22 = movmskpd(1,auVar56);
                if ((iVar21 << 2 | uVar22) == 0xf) {
                  auVar4._4_8_ = -(ulonglong)((double)local_748._8_8_ == 0.0);
                  auVar4._0_4_ = (int)((ulonglong)dVar70 >> 0x20);
                  auVar57._0_8_ = auVar4._0_8_ << 0x20;
                  auVar57._8_4_ = SUB84(dVar73,0);
                  auVar57._12_4_ = uVar80;
                  auVar5._4_8_ = -(ulonglong)((double)local_738._8_8_ == 0.0);
                  auVar5._0_4_ = (int)((ulonglong)auVar88._0_8_ >> 0x20);
                  auVar41._0_8_ = auVar5._0_8_ << 0x20;
                  auVar41._8_4_ = SUB84(auVar88._8_8_,0);
                  auVar41._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
                  local_748._8_8_ = auVar57._8_8_;
                  uVar52 = auVar41._8_8_;
                }
                else {
                  auVar71._0_8_ = (double)(fVar94 * fVar81);
                  auVar71._8_8_ = 0;
                  pTVar25 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                      (&local_548,(TQuat<double> *)local_748,
                                       (TQuat<double> *)local_628,auVar71._0_8_);
                  fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                  fVar98 = GlobalVectorConstants::Float0001.m128_f32[1];
                  fVar99 = GlobalVectorConstants::Float0001.m128_f32[2];
                  fVar100 = GlobalVectorConstants::Float0001.m128_f32[3];
                  dVar70 = pTVar25->X;
                  auVar88._0_8_ = pTVar25->Y;
                  dVar73 = pTVar25->Z;
                  dVar87 = pTVar25->W;
                  local_650 = CONCAT44(FVar93.Value,uVar92);
                  dVar75 = dVar73 * dVar73 + dVar70 * dVar70;
                  dVar78 = dVar87 * dVar87 + auVar88._0_8_ * auVar88._0_8_;
                  auVar42._8_4_ = SUB84(dVar78,0);
                  auVar42._0_8_ = dVar75;
                  auVar42._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
                  auVar43._0_8_ = auVar42._8_8_ + dVar75;
                  auVar43._8_8_ = dVar75 + dVar78;
                  auVar65 = sqrtpd(auVar71,auVar43);
                  uVar30 = -(ulonglong)((double)CONCAT44(FVar93.Value,uVar92) <= auVar43._0_8_);
                  uVar31 = -(ulonglong)((double)CONCAT44(FVar93.Value,uVar92) <= auVar43._8_8_);
                  uVar22 = (uint)(uVar30 >> 0x20);
                  uVar74 = (uint)(uVar31 >> 0x20);
                  auVar89 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar65);
                  auVar58._0_4_ = ~(uint)uVar30 & SUB84((double)fVar97,0);
                  auVar58._4_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar97 >> 0x20);
                  auVar58._8_4_ = ~(uint)uVar31 & SUB84((double)fVar98,0);
                  auVar58._12_4_ = ~uVar74 & (uint)((ulonglong)(double)fVar98 >> 0x20);
                  local_568._0_8_ = uVar30 & (ulonglong)(auVar89._0_8_ * dVar70);
                  uVar10 = uVar31 & (ulonglong)(auVar89._8_8_ * auVar88._0_8_);
                  local_568._8_4_ = (undefined4)uVar10;
                  local_568._12_4_ = (undefined4)(uVar10 >> 0x20);
                  local_568 = local_568 | auVar58;
                  auVar6._4_8_ = auVar58._8_8_;
                  auVar6._0_4_ = local_568._4_4_;
                  auVar59._0_8_ = auVar6._0_8_ << 0x20;
                  auVar59._8_4_ = local_568._8_4_;
                  auVar59._12_4_ = local_568._12_4_;
                  auVar67._0_4_ = ~(uint)uVar30 & SUB84((double)fVar99,0);
                  auVar67._4_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar99 >> 0x20);
                  auVar67._8_4_ = ~(uint)uVar31 & SUB84((double)fVar100,0);
                  auVar67._12_4_ = ~uVar74 & (uint)((ulonglong)(double)fVar100 >> 0x20);
                  local_748._8_8_ = auVar59._8_8_;
                  auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar65);
                  dVar70 = local_568._0_8_;
                  auVar44._0_8_ = (ulonglong)(auVar65._0_8_ * dVar73) & uVar30;
                  uVar31 = (ulonglong)(auVar65._8_8_ * dVar87) & uVar31;
                  auVar44._8_4_ = (undefined4)uVar31;
                  auVar44._12_4_ = (undefined4)(uVar31 >> 0x20);
                  in_XMM2 = auVar67 | auVar44;
                  auVar7._4_8_ = auVar44._8_8_;
                  auVar7._0_4_ = in_XMM2._4_4_;
                  auVar45._0_8_ = auVar7._0_8_ << 0x20;
                  auVar45._8_4_ = in_XMM2._8_4_;
                  auVar45._12_4_ = in_XMM2._12_4_;
                  uVar52 = auVar45._8_8_;
                  auVar88._0_8_ = in_XMM2._0_8_;
                  local_558 = in_XMM2;
                }
                uVar79 = (undefined4)uVar52;
                uVar80 = (undefined4)((ulonglong)uVar52 >> 0x20);
                local_738._8_4_ = uVar79;
                local_738._0_8_ = auVar88._0_8_;
                local_738._12_4_ = uVar80;
                local_748._0_8_ = dVar70;
                fVar86 = __real_38d1b717;
                dVar73 = (double)local_748._8_8_;
                fVar81 = local_728;
              }
              else {
                auVar88._0_8_ = local_738._0_8_;
                uVar79 = local_738._8_4_;
                uVar80 = local_738._12_4_;
                fVar97 = GlobalVectorConstants::Float0001.m128_f32[0];
                fVar98 = GlobalVectorConstants::Float0001.m128_f32[1];
                fVar99 = GlobalVectorConstants::Float0001.m128_f32[2];
                fVar100 = GlobalVectorConstants::Float0001.m128_f32[3];
                dVar70 = (double)local_748._0_8_;
                dVar73 = (double)local_748._8_8_;
              }
              dVar87 = (double)CONCAT44(uVar80,uVar79);
              _Var101.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
              _Var103.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
            }
LAB_14a58c8b4:
            pFVar28 = pFVar28 + 1;
            pFVar27 = pFVar27 + 2;
            dVar75 = auVar88._0_8_;
            dVar78 = dVar87;
            param_7 = local_720;
          } while (pFVar28 != pFVar29);
        }
        local_6a8.Name.Number = (param_2->Name).Number;
        auVar60._8_4_ = SUB84(dVar78,0);
        auVar60._0_8_ = dVar75;
        auVar60._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
        auVar88._0_8_ = dVar75 * dVar75 + dVar70 * dVar70;
        dVar87 = auVar60._8_8_ * dVar78 + dVar73 * dVar73;
        auVar47._8_4_ = SUB84(dVar87,0);
        auVar47._0_8_ = auVar88._0_8_;
        auVar47._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
        auVar48._0_8_ = auVar47._8_8_ + auVar88._0_8_;
        auVar48._8_8_ = auVar88._0_8_ + dVar87;
        auVar65 = sqrtpd(in_XMM2,auVar48);
        uVar30 = -(ulonglong)((double)CONCAT44(FVar93.Value,uVar92) <= auVar48._0_8_);
        uVar31 = -(ulonglong)((double)CONCAT44(FVar93.Value,uVar92) <= auVar48._8_8_);
        uVar22 = (uint)(uVar30 >> 0x20);
        uVar74 = (uint)(uVar31 >> 0x20);
        auVar88 = divpd((undefined1  [16])_Var101.m128d_f64,auVar65);
        auVar65 = divpd((undefined1  [16])_Var103.m128d_f64,auVar65);
        auVar61._0_4_ = ~(uint)uVar30 & SUB84((double)fVar97,0);
        auVar61._4_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar97 >> 0x20);
        auVar61._8_4_ = ~(uint)uVar31 & SUB84((double)fVar98,0);
        auVar61._12_4_ = ~uVar74 & (uint)((ulonglong)(double)fVar98 >> 0x20);
        auVar102._0_8_ = uVar30 & (ulonglong)(auVar88._0_8_ * dVar70);
        uVar10 = uVar31 & (ulonglong)(auVar88._8_8_ * dVar73);
        auVar102._8_4_ = (undefined4)uVar10;
        auVar102._12_4_ = (undefined4)(uVar10 >> 0x20);
        local_748 = auVar102 | auVar61;
        auVar62._0_4_ = ~(uint)uVar30 & SUB84((double)fVar99,0);
        auVar62._4_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar99 >> 0x20);
        auVar62._8_4_ = ~(uint)uVar31 & SUB84((double)fVar100,0);
        auVar62._12_4_ = ~uVar74 & (uint)((ulonglong)(double)fVar100 >> 0x20);
        local_6a8.Type = param_2->Type;
        local_6a8._1_3_ = *(undefined3 *)&param_2->field_0x1;
        local_6a8.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
        auVar104._0_8_ = (ulonglong)(auVar65._0_8_ * dVar75) & uVar30;
        uVar31 = (ulonglong)(auVar65._8_8_ * dVar78) & uVar31;
        auVar104._8_4_ = (undefined4)uVar31;
        auVar104._12_4_ = (undefined4)(uVar31 >> 0x20);
        local_738 = auVar62 | auVar104;
        iVar21 = URigHierarchy::GetIndex(this,&local_6a8,true);
        URigHierarchy::GetParentTransformByIndex(this,&local_268,iVar21,false);
        local_268.Rotation.XY.m128d_f64[0] =
             local_268.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        local_268.Rotation.XY.m128d_f64[1] =
             local_268.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        local_268.Rotation.ZW.m128d_f64[0] =
             local_268.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        local_268.Rotation.ZW.m128d_f64[1] =
             local_268.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar77._8_4_ = SUB84(local_268.Rotation.ZW.m128d_f64[1],0);
        auVar77._0_8_ = local_268.Rotation.ZW.m128d_f64[0];
        auVar77._12_4_ = (int)((ulonglong)local_268.Rotation.ZW.m128d_f64[1] >> 0x20);
        auVar49._8_4_ = SUB84(local_268.Rotation.ZW.m128d_f64[0],0);
        auVar49._0_8_ = local_268.Rotation.ZW.m128d_f64[0];
        auVar49._12_4_ = (int)((ulonglong)local_268.Rotation.ZW.m128d_f64[0] >> 0x20);
        dVar70 = local_268.Rotation.XY.m128d_f64[0] * (double)local_738._0_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 (double)local_748._8_8_ * local_268.Rotation.ZW.m128d_f64[1] +
                 (double)local_738._8_8_ * local_268.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar49._8_8_ * (double)local_748._0_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar88._0_8_ =
             local_268.Rotation.XY.m128d_f64[0] * (double)local_748._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             (double)local_738._8_8_ * local_268.Rotation.ZW.m128d_f64[1] +
             (double)local_748._8_8_ * local_268.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             local_268.Rotation.ZW.m128d_f64[0] * (double)local_738._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_608._8_4_ = SUB84(dVar70,0);
        local_608._0_8_ =
             local_268.Rotation.XY.m128d_f64[0] * (double)local_738._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             (double)local_748._0_8_ * auVar77._8_8_ +
             (double)local_738._0_8_ * local_268.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             local_268.Rotation.ZW.m128d_f64[0] * (double)local_748._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_608._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
        local_5f8._8_4_ = SUB84(auVar88._0_8_,0);
        local_5f8._0_8_ =
             local_268.Rotation.XY.m128d_f64[0] * (double)local_748._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             (double)local_738._0_8_ * auVar77._8_8_ +
             (double)local_748._0_8_ * local_268.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             local_268.Rotation.ZW.m128d_f64[0] * (double)local_738._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_5f8._12_4_ = (int)((ulonglong)auVar88._0_8_ >> 0x20);
        AnimationCore::EulerFromQuat
                  (&local_688,(TQuat<double> *)local_608,param_6->RotationOrderForFilter,false);
        local_698.Type = param_2->Type;
        local_698._1_3_ = *(undefined3 *)&param_2->field_0x1;
        local_698.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
        local_698.Name.Number = (param_2->Name).Number;
        iVar21 = URigHierarchy::GetIndex(this,&local_698,true);
        URigHierarchy::GetLocalTransformByIndex(this,&local_448,iVar21,false);
        local_4a8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_4a8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_4a8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_4a8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_4a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_4a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        if (param_2->Type == Control) {
          iVar21 = URigHierarchy::GetIndex(this,param_2,true);
          pFVar23 = URigHierarchy::Get<FRigControlElement>(this,iVar21);
          if (pFVar23 != (FRigControlElement *)0x0) {
            pTVar24 = URigHierarchy::GetControlOffsetTransform(this,&local_208,pFVar23,CurrentLocal)
            ;
            local_4a8.Rotation.XY.m128d_f64 = *&(pTVar24->Rotation).XY.m128d_f64;
            local_4a8.Rotation.ZW.m128d_f64 = *&(pTVar24->Rotation).ZW.m128d_f64;
            local_4a8.Translation.XY.m128d_f64 = *&(pTVar24->Translation).XY.m128d_f64;
            local_4a8.Translation.ZW.m128d_f64 = *&(pTVar24->Translation).ZW.m128d_f64;
            local_4a8.Scale3D.XY.m128d_f64 = *&(pTVar24->Scale3D).XY.m128d_f64;
            local_4a8.Scale3D.ZW.m128d_f64 = *&(pTVar24->Scale3D).ZW.m128d_f64;
            UE::Math::TTransform<double>::Multiply(&local_448,&local_448,&local_4a8);
          }
        }
        local_5e8.X = local_448.Rotation.XY.m128d_f64[0];
        local_5e8.Y = local_448.Rotation.XY.m128d_f64[1];
        local_5e8.Z = local_448.Rotation.ZW.m128d_f64[0];
        local_5e8.W = local_448.Rotation.ZW.m128d_f64[1];
        AnimationCore::EulerFromQuat(&local_670,&local_5e8,param_6->RotationOrderForFilter,false);
        pTVar25 = AnimationCore::QuatFromEuler
                            (&local_528,&local_708,param_6->RotationOrderForFilter,false);
        local_508.Rotation.XY.m128d_f64[0] = pTVar25->X;
        local_508.Rotation.XY.m128d_f64[1] = pTVar25->Y;
        local_508.Rotation.ZW.m128d_f64[0] = pTVar25->Z;
        local_508.Rotation.ZW.m128d_f64[1] = pTVar25->W;
        local_508.Translation.XY.m128d_f64[0]._0_4_ = local_448.Translation.XY.m128d_f64[0]._0_4_;
        local_508.Translation.XY.m128d_f64[0]._4_4_ = local_448.Translation.XY.m128d_f64[0]._4_4_;
        local_508.Translation.XY.m128d_f64[1]._0_4_ = local_448.Translation.XY.m128d_f64[1]._0_4_;
        local_508.Translation.XY.m128d_f64[1]._4_4_ = local_448.Translation.XY.m128d_f64[1]._4_4_;
        local_508.Translation.ZW.m128d_f64[0] = local_448.Translation.ZW.m128d_f64[0];
        local_508.Translation.ZW.m128d_f64[1] = local_448.Translation.ZW.m128d_f64[1];
        local_508.Scale3D.XY.m128d_f64[0]._0_4_ = local_448.Scale3D.XY.m128d_f64[0]._0_4_;
        local_508.Scale3D.XY.m128d_f64[0]._4_4_ = local_448.Scale3D.XY.m128d_f64[0]._4_4_;
        local_508.Scale3D.XY.m128d_f64[1]._0_4_ = local_448.Scale3D.XY.m128d_f64[1]._0_4_;
        local_508.Scale3D.XY.m128d_f64[1]._4_4_ = local_448.Scale3D.XY.m128d_f64[1]._4_4_;
        local_508.Scale3D.ZW.m128d_f64[0]._0_4_ = local_448.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_508.Scale3D.ZW.m128d_f64[0]._4_4_ = local_448.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_508.Scale3D.ZW.m128d_f64[1]._0_4_ = local_448.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_508.Scale3D.ZW.m128d_f64[1]._4_4_ = local_448.Scale3D.ZW.m128d_f64[1]._4_4_;
        if (param_7 < __real_3f7ff972) {
          pTVar24 = FRigVMMathLibrary::LerpTransform(&local_1a8,&local_448,&local_508,param_7);
          local_508.Rotation.XY.m128d_f64 = *&(pTVar24->Rotation).XY.m128d_f64;
          local_508.Rotation.ZW.m128d_f64 = *&(pTVar24->Rotation).ZW.m128d_f64;
          local_448.Translation.XY.m128d_f64[0]._0_4_ =
               *(undefined4 *)(pTVar24->Translation).XY.m128d_f64;
          local_448.Translation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Translation).XY.m128d_f64 + 4);
          local_448.Translation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar24->Translation).XY.m128d_f64 + 1);
          local_448.Translation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Translation).XY.m128d_f64 + 0xc);
          local_448.Translation.ZW.m128d_f64[0] = (pTVar24->Translation).ZW.m128d_f64[0];
          local_448.Translation.ZW.m128d_f64[1] = (pTVar24->Translation).ZW.m128d_f64[1];
          local_448.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar24->Scale3D).XY.m128d_f64;
          local_448.Scale3D.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Scale3D).XY.m128d_f64 + 4);
          local_448.Scale3D.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar24->Scale3D).XY.m128d_f64 + 1);
          local_448.Scale3D.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Scale3D).XY.m128d_f64 + 0xc);
          local_448.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar24->Scale3D).ZW.m128d_f64;
          local_448.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Scale3D).ZW.m128d_f64 + 4);
          local_448.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar24->Scale3D).ZW.m128d_f64 + 1);
          local_448.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Scale3D).ZW.m128d_f64 + 0xc);
        }
        local_508.Translation.XY.m128d_f64[0]._0_4_ = local_448.Translation.XY.m128d_f64[0]._0_4_;
        local_508.Translation.XY.m128d_f64[0]._4_4_ = local_448.Translation.XY.m128d_f64[0]._4_4_;
        local_508.Translation.XY.m128d_f64[1]._0_4_ = local_448.Translation.XY.m128d_f64[1]._0_4_;
        local_508.Translation.XY.m128d_f64[1]._4_4_ = local_448.Translation.XY.m128d_f64[1]._4_4_;
        local_508.Translation.ZW.m128d_f64[0] = local_448.Translation.ZW.m128d_f64[0];
        local_508.Translation.ZW.m128d_f64[1] = local_448.Translation.ZW.m128d_f64[1];
        local_508.Scale3D.XY.m128d_f64[0]._0_4_ = local_448.Scale3D.XY.m128d_f64[0]._0_4_;
        local_508.Scale3D.XY.m128d_f64[0]._4_4_ = local_448.Scale3D.XY.m128d_f64[0]._4_4_;
        local_508.Scale3D.XY.m128d_f64[1]._0_4_ = local_448.Scale3D.XY.m128d_f64[1]._0_4_;
        local_508.Scale3D.XY.m128d_f64[1]._4_4_ = local_448.Scale3D.XY.m128d_f64[1]._4_4_;
        local_508.Scale3D.ZW.m128d_f64[0]._0_4_ = local_448.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_508.Scale3D.ZW.m128d_f64[0]._4_4_ = local_448.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_508.Scale3D.ZW.m128d_f64[1]._0_4_ = local_448.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_508.Scale3D.ZW.m128d_f64[1]._4_4_ = local_448.Scale3D.ZW.m128d_f64[1]._4_4_;
        if (param_2->Type == Control) {
          pTVar24 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_508,&local_148,&local_4a8);
          dVar70 = (pTVar24->Rotation).XY.m128d_f64[0];
          auVar88._0_8_ = (pTVar24->Rotation).XY.m128d_f64[1];
          dVar73 = (pTVar24->Rotation).ZW.m128d_f64[0];
          dVar87 = (pTVar24->Rotation).ZW.m128d_f64[1];
          local_508.Translation.XY.m128d_f64[0]._0_4_ =
               *(undefined4 *)(pTVar24->Translation).XY.m128d_f64;
          local_508.Translation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Translation).XY.m128d_f64 + 4);
          local_508.Translation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar24->Translation).XY.m128d_f64 + 1);
          local_508.Translation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Translation).XY.m128d_f64 + 0xc);
          local_508.Translation.ZW.m128d_f64[0] = (pTVar24->Translation).ZW.m128d_f64[0];
          local_508.Translation.ZW.m128d_f64[1] = (pTVar24->Translation).ZW.m128d_f64[1];
          auVar63._0_8_ = dVar70 * dVar70 + dVar73 * dVar73;
          auVar63._8_8_ = auVar88._0_8_ * auVar88._0_8_ + dVar87 * dVar87;
          local_508.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar24->Scale3D).XY.m128d_f64;
          local_508.Scale3D.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Scale3D).XY.m128d_f64 + 4);
          local_508.Scale3D.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar24->Scale3D).XY.m128d_f64 + 1);
          local_508.Scale3D.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Scale3D).XY.m128d_f64 + 0xc);
          auVar50._8_4_ = SUB84(auVar63._8_8_,0);
          auVar50._0_8_ = auVar63._0_8_;
          auVar50._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
          auVar51._0_8_ = auVar50._8_8_ + auVar63._0_8_;
          auVar51._8_8_ = auVar63._0_8_ + auVar63._8_8_;
          local_508.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar24->Scale3D).ZW.m128d_f64;
          local_508.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Scale3D).ZW.m128d_f64 + 4);
          local_508.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar24->Scale3D).ZW.m128d_f64 + 1);
          local_508.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar24->Scale3D).ZW.m128d_f64 + 0xc);
          auVar65 = sqrtpd(auVar63,auVar51);
          uVar31 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar51._0_8_);
          uVar32 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar51._8_8_);
          auVar89 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar65);
          auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar65);
          uVar30 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar51._0_8_);
          uVar33 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar51._8_8_);
          auVar82._0_8_ = uVar31 & (ulonglong)(auVar89._0_8_ * dVar70);
          uVar10 = uVar32 & (ulonglong)(auVar89._8_8_ * auVar88._0_8_);
          auVar82._8_4_ = (undefined4)uVar10;
          auVar82._12_4_ = (undefined4)(uVar10 >> 0x20);
          auVar69._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar69._4_4_ =
               ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar69._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar69._12_4_ =
               ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar85._0_8_ = uVar30 & (ulonglong)(auVar65._0_8_ * dVar73);
          uVar10 = uVar33 & (ulonglong)(auVar65._8_8_ * dVar87);
          auVar85._8_4_ = (undefined4)uVar10;
          auVar85._12_4_ = (undefined4)(uVar10 >> 0x20);
          auVar72._0_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar72._4_4_ =
               ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar72._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar72._12_4_ =
               ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          local_508.Rotation.XY.m128d_f64 = (double  [2])(auVar82 | auVar69);
          local_508.Rotation.ZW.m128d_f64 = (double  [2])(auVar85 | auVar72);
        }
        uVar19 = local_508.Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar18 = local_508.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar17 = local_508.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar16 = local_508.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar15 = local_508.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar14 = local_508.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar13 = local_508.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar12 = local_508.Scale3D.XY.m128d_f64[0]._0_4_;
        auVar88._0_8_ = local_508.Translation.ZW.m128d_f64[1];
        dVar70 = local_508.Translation.ZW.m128d_f64[0];
        uVar11 = local_508.Translation.XY.m128d_f64[1]._4_4_;
        uVar80 = local_508.Translation.XY.m128d_f64[1]._0_4_;
        uVar79 = local_508.Translation.XY.m128d_f64[0]._4_4_;
        uVar92 = local_508.Translation.XY.m128d_f64[0]._0_4_;
        _Var103.m128d_f64 = local_508.Rotation.ZW.m128d_f64;
        _Var101.m128d_f64 = local_508.Rotation.XY.m128d_f64;
        local_718._0_1_ = param_2->Type;
        local_718._1_3_ = *(undefined3 *)&param_2->field_0x1;
        local_718._4_4_ = (param_2->Name).ComparisonIndex.Value;
        uStack_710 = CONCAT44(uStack_710._4_4_,(param_2->Name).Number);
        iVar21 = URigHierarchy::GetIndex(this,(FRigElementKey *)&local_718,true);
        local_5c8.Rotation.XY.m128d_f64 = _Var101.m128d_f64;
        local_5c8.Rotation.ZW.m128d_f64 = _Var103.m128d_f64;
        local_5c8.Translation.XY.m128d_f64[0]._0_4_ = uVar92;
        local_5c8.Translation.XY.m128d_f64[0]._4_4_ = uVar79;
        local_5c8.Translation.XY.m128d_f64[1]._0_4_ = uVar80;
        local_5c8.Translation.XY.m128d_f64[1]._4_4_ = uVar11;
        local_5c8.Translation.ZW.m128d_f64[0] = dVar70;
        local_5c8.Translation.ZW.m128d_f64[1] = auVar88._0_8_;
        local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar12;
        local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar13;
        local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar14;
        local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar15;
        local_5c8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar16;
        local_5c8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar17;
        local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar18;
        local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar19;
        URigHierarchy::SetLocalTransformByIndex(this,iVar21,&local_5c8,false,true,false,false);
      }
    }
  }
  return;
}

