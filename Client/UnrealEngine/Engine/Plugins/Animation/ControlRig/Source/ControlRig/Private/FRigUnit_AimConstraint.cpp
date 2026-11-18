// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4a8250

UScriptStruct * __cdecl FRigUnit_AimConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AimConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AimConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimConstraint,(UObject *)pUVar1,
                         L"RigUnit_AimConstraint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_AimConstraint.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_AimConstraint.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a8310

UScriptStruct * __thiscall
FRigUnit_AimConstraint::GetExecuteContextStruct(FRigUnit_AimConstraint *this)

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

// Execute @ 14a4a8500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AimConstraint::Execute(FRigUnit_AimConstraint *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_2d8 [32];
  TArrayView<FAimTarget_const_,int> local_288;
  TArrayView<FAimTarget_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
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
  local_278.DataPtr = (FAimTarget *)(this->AimTargets).AllocatorInstance.Data;
  iVar1 = (this->AimTargets).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_288.DataPtr = (FAimTarget *)(this->UpTargets).AllocatorInstance.Data;
  iVar2 = (this->UpTargets).ArrayNum;
  local_278.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_288.ArrayNum = iVar2;
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Joint,this->AimMode,this->UpMode,
                &this->AimVector,&this->UpVector,&local_278,&local_288,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4b35a0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_AimConstraint::GetUpgradeInfo
          (FRigUnit_AimConstraint *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a524450

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_AimConstraint::Execute(FRigUnit_AimConstraint *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FAimTarget_const_,int> local_28;
  TArrayView<FAimTarget_const_,int> local_18;
  
  local_18.DataPtr = (FAimTarget *)(this->AimTargets).AllocatorInstance.Data;
  iVar1 = (this->AimTargets).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = (FAimTarget *)(this->UpTargets).AllocatorInstance.Data;
  iVar2 = (this->UpTargets).ArrayNum;
  local_18.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.ArrayNum = iVar2;
  StaticExecute(param_1,&this->Joint,this->AimMode,this->UpMode,&this->AimVector,&this->UpVector,
                &local_18,&local_28,&this->WorkData);
  return;
}

// RigVMExecute @ 14a534e80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimConstraint::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EAimMode EVar1;
  EAimMode EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  EAimMode *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  uchar *puVar11;
  uchar *puVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_AimConstraint_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  TArrayView<FAimTarget_const_,int> local_58;
  TArrayView<FAimTarget_const_,int> local_48;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar8[1].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  EVar1 = *pEVar7;
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar8[2].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  EVar2 = *pEVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_AimConstraint_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar13->Offset + pFVar13->Index);
  local_58.DataPtr = *(FAimTarget **)puVar12;
  local_58.ArrayNum = *(int *)(puVar12 + 8);
  if (local_58.ArrayNum < 0) {
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
  local_48.DataPtr = *(FAimTarget **)puVar11;
  iVar3 = *(int *)(puVar11 + 8);
  if (iVar3 < 0) {
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
  local_48.ArrayNum = iVar3;
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar6,EVar1,EVar2,pTVar9,pTVar10,&local_48,&local_58,pFVar14);
  return;
}

// StaticExecute @ 14a55f520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimConstraint::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,EAimMode param_3,EAimMode param_4,
          TVector<double> *param_5,TVector<double> *param_6,
          TArrayView<FAimTarget_const_,int> *param_7,TArrayView<FAimTarget_const_,int> *param_8,
          FRigUnit_AimConstraint_WorkData *param_9)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FConstraintData *pFVar5;
  URigHierarchy *pUVar6;
  FConstraintDescriptionEx *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  TVector<double> *pTVar24;
  undefined8 uVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  FAimTarget *pFVar31;
  FAimConstraintDescription *pFVar32;
  FRigElementKey *pFVar33;
  uint uVar34;
  FConstraintDescriptor *this;
  longlong lVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  double dVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined1 auStackY_4b8 [32];
  FRigElementKey local_460;
  TVector<double> *local_450;
  FControlRigExecuteContext *local_448;
  TVector<double> *local_440;
  TArrayView<FAimTarget_const_,int> *local_438;
  FRigElementKey local_430 [2];
  FRigElementKey local_418 [2];
  double local_3f8;
  undefined **local_3f0;
  undefined2 local_3e8;
  undefined1 local_3e6;
  TVector<double>_u_0 local_3e0;
  undefined8 uStack_3c8;
  TVector<double>_u_0 local_3c0;
  undefined8 uStack_3a8;
  undefined1 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  double local_388;
  double local_380;
  double local_378;
  undefined8 local_370;
  double dStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  double dStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  FRigElementKey local_330;
  double local_320;
  double dStack_318;
  double local_310;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_440 = param_5;
  iVar27 = (param_9->ConstraintData).ArrayNum;
  local_450 = param_6;
  local_438 = param_8;
  local_448 = param_1;
  if (iVar27 != param_7->ArrayNum) {
    piVar1 = &(param_9->ConstraintData).ArrayMax;
    pFVar5 = (FConstraintData *)(param_9->ConstraintData).AllocatorInstance.Data;
    if (*piVar1 < 0) {
      DestructItems<FConstraintData,int>(pFVar5,iVar27);
      (param_9->ConstraintData).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,0x10,0,(ForAnyElementType *)param_9,0,piVar1);
      }
    }
    else {
      DestructItems<FConstraintData,int>(pFVar5,iVar27);
      (param_9->ConstraintData).ArrayNum = 0;
    }
    pUVar6 = param_1->Hierarchy;
    if (pUVar6 != (URigHierarchy *)0x0) {
      local_430[0].Name = *param_2;
      local_430[0].Type = Bone;
      iVar27 = URigHierarchy::GetIndex(pUVar6,local_430,true);
      if ((iVar27 != -1) && (iVar30 = param_7->ArrayNum, 0 < iVar30)) {
        URigHierarchy::GetGlobalTransformByIndex(pUVar6,&local_128,iVar27,false);
        iVar27 = 0;
        do {
          pFVar31 = TArrayView<FAimTarget_const_,int>::operator[](param_7,iVar27);
          uVar28 = (param_9->ConstraintData).ArrayNum;
          if (uVar28 == *piVar1) {
            uVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10e0,(ForAnyElementType *)param_9,piVar1);
          }
          (param_9->ConstraintData).ArrayNum = uVar28 + 1;
          DefaultConstructItems<FConstraintData,int>
                    ((param_9->ConstraintData).AllocatorInstance.Data + (longlong)(int)uVar28 * 0xe0
                     ,1);
          if ((uVar28 == 0xffffffff) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NewIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Deprecated\\RigUnit_AimConstraint.cpp"
                                  ,0x24,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar29 = 0;
          if ((int)uVar28 < (param_9->ConstraintData).ArrayNum) {
            uVar29 = ~uVar28 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_3e8 = 0x101;
          this = (FConstraintDescriptor *)
                 ((param_9->ConstraintData).AllocatorInstance.Data + (longlong)(int)uVar28 * 0xe0);
          local_3e6 = 1;
          FAxis::FAxis((FAxis *)&local_3e0._s_0,&UE::Math::TVector<double>::ForwardVector);
          FAxis::FAxis((FAxis *)&local_3c0._s_0,&UE::Math::TVector<double>::UpVector);
          local_388 = 0.0;
          local_3a0 = 0;
          local_398 = 0;
          uStack_390 = 0;
          pFVar32 = ::operator_new(0x70);
          if (pFVar32 == (FAimConstraintDescription *)0x0) {
            pFVar32 = (FAimConstraintDescription *)0x0;
          }
          else {
            *(undefined2 *)&pFVar32->_padding_ = local_3e8;
            (pFVar32->LookAt_Axis).Axis.field0_0x0._s_0.X = local_3e0._s_0.X;
            (pFVar32->LookAt_Axis).Axis.field0_0x0._s_0.Y = local_3e0._s_0.Y;
            *(undefined1 *)((longlong)&pFVar32->_padding_ + 2) = local_3e6;
            pFVar32->_padding_ = (longlong)&___7FAimConstraintDescription__6B_;
            (pFVar32->LookAt_Axis).Axis.field0_0x0._s_0.Z = local_3e0._s_0.Z;
            *(undefined8 *)&(pFVar32->LookAt_Axis).bInLocalSpace = uStack_3c8;
            pFVar32->bUseLookUp = false;
            (pFVar32->LookUp_Axis).Axis.field0_0x0._s_0.X = local_3c0._s_0.X;
            (pFVar32->LookUp_Axis).Axis.field0_0x0._s_0.Y = local_3c0._s_0.Y;
            (pFVar32->LookUpTarget).field0_0x0._s_0.X = 0.0;
            (pFVar32->LookUpTarget).field0_0x0._s_0.Y = 0.0;
            (pFVar32->LookUpTarget).field0_0x0._s_0.Z = local_388;
            (pFVar32->LookUp_Axis).Axis.field0_0x0._s_0.Z = local_3c0._s_0.Z;
            *(undefined8 *)&(pFVar32->LookUp_Axis).bInLocalSpace = uStack_3a8;
          }
          pFVar7 = this->ConstraintDescription;
          if (pFVar7 != (FConstraintDescriptionEx *)0x0) {
            (**(code **)pFVar7->_padding_)(pFVar7,1);
            this->ConstraintDescription = (FConstraintDescriptionEx *)0x0;
          }
          this->Type = Aim;
          if (pFVar32 != (FAimConstraintDescription *)0x0) {
            FConstraintDescriptor::Set(this,pFVar32);
            (**(code **)pFVar32->_padding_)(pFVar32,1);
          }
          iVar27 = iVar27 + 1;
          local_3f0 = &___7FConstraintDescriptionEx__6B_;
          this[1].field_0x4 = 0;
          *(float *)(this + 1) = pFVar31->Weight;
          param_1 = local_448;
          param_6 = local_450;
        } while (iVar27 < iVar30);
      }
    }
  }
  pUVar6 = param_1->Hierarchy;
  if (pUVar6 != (URigHierarchy *)0x0) {
    local_460.Name.ComparisonIndex = (*param_2).ComparisonIndex;
    local_460.Name.Number = (*param_2).Number;
    local_460.Type = Bone;
    iVar27 = URigHierarchy::GetIndex(pUVar6,&local_460,true);
    pTVar24 = local_440;
    dVar23 = __real_3e45798ee0000000;
    dVar22 = __real_3ff0000000000000;
    if ((iVar27 != -1) && (0 < param_7->ArrayNum)) {
      iVar30 = (param_9->ConstraintData).ArrayNum;
      uVar28 = 0;
      if (0 < iVar30) {
        lVar35 = 0;
        do {
          uVar34 = ~uVar28 >> 0x1f;
          uVar29 = 0;
          if ((int)uVar28 < iVar30) {
            uVar29 = uVar34;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar25 = uStack_338;
          uVar42 = uStack_358;
          dVar3 = (pTVar24->field0_0x0)._s_0.X;
          dStack_368 = (pTVar24->field0_0x0)._s_0.Y;
          dVar4 = *(double *)((longlong)&pTVar24->field0_0x0 + 0x10);
          uStack_358 = CONCAT71(uStack_358._1_7_,1);
          lVar8 = *(longlong *)((param_9->ConstraintData).AllocatorInstance.Data + lVar35 + 8);
          dVar40 = dStack_368 * dStack_368 + dVar3 * dVar3 + dVar4 * dVar4;
          if (dVar40 == dVar22) {
            auVar38 = *(undefined1 (*) [16])&pTVar24->field0_0x0;
            uVar39 = auVar38._0_4_;
            uVar43 = auVar38._4_4_;
            local_3f8 = *(double *)((longlong)&pTVar24->field0_0x0 + 0x10);
            dStack_368 = auVar38._8_8_;
            uVar41 = local_3f8;
          }
          else if (dVar23 <= dVar40) {
            local_380 = dVar22 / SQRT(dVar40);
            dStack_368 = dStack_368 * local_380;
            uVar39 = SUB84(dVar3 * local_380,0);
            uVar43 = (undefined4)((ulonglong)(dVar3 * local_380) >> 0x20);
            uVar41 = dVar4 * local_380;
          }
          else {
            uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            local_3f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dStack_368 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
            uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          local_370 = CONCAT44(uVar43,uVar39);
          *(undefined8 *)(lVar8 + 0x10) = local_370;
          *(double *)(lVar8 + 0x18) = dStack_368;
          uStack_358._4_4_ = SUB84(uVar42,4);
          auVar11._4_8_ = dStack_368;
          auVar11._0_4_ = local_360._4_4_;
          auVar38._0_8_ = auVar11._0_8_ << 0x20;
          auVar38._8_4_ = (undefined4)uStack_358;
          auVar38._12_4_ = uStack_358._4_4_;
          uStack_358 = auVar38._8_8_;
          *(undefined8 *)(lVar8 + 0x20) = uVar41;
          *(undefined8 *)(lVar8 + 0x28) = uStack_358;
          local_360 = (double)uVar41;
          if ((-1 < (int)uVar28) && ((int)uVar28 < local_438->ArrayNum)) {
            dVar3 = (param_6->field0_0x0)._s_0.X;
            dStack_348 = (param_6->field0_0x0)._s_0.Y;
            dVar4 = *(double *)((longlong)&param_6->field0_0x0 + 0x10);
            uStack_338 = CONCAT71(uStack_338._1_7_,1);
            dVar40 = dStack_348 * dStack_348 + dVar3 * dVar3 + dVar4 * dVar4;
            if (dVar40 == dVar22) {
              auVar38 = *(undefined1 (*) [16])&param_6->field0_0x0;
              uVar39 = auVar38._0_4_;
              uVar43 = auVar38._4_4_;
              local_3f8 = *(double *)((longlong)&param_6->field0_0x0 + 0x10);
              dStack_348 = auVar38._8_8_;
              uVar42 = local_3f8;
            }
            else if (dVar23 <= dVar40) {
              local_378 = dVar22 / SQRT(dVar40);
              dStack_348 = dStack_348 * local_378;
              uVar39 = SUB84(dVar3 * local_378,0);
              uVar43 = (undefined4)((ulonglong)(dVar3 * local_378) >> 0x20);
              uVar42 = dVar4 * local_378;
            }
            else {
              uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_3f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              dStack_348 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
              uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            local_350 = CONCAT44(uVar43,uVar39);
            *(undefined8 *)(lVar8 + 0x30) = local_350;
            *(double *)(lVar8 + 0x38) = dStack_348;
            uStack_338._4_4_ = SUB84(uVar25,4);
            auVar12._4_8_ = dStack_348;
            auVar12._0_4_ = local_340._4_4_;
            auVar36._0_8_ = auVar12._0_8_ << 0x20;
            auVar36._8_4_ = (undefined4)uStack_338;
            auVar36._12_4_ = uStack_338._4_4_;
            uStack_338 = auVar36._8_8_;
            *(undefined8 *)(lVar8 + 0x40) = uVar42;
            *(undefined8 *)(lVar8 + 0x48) = uStack_338;
            dVar3 = (param_6->field0_0x0)._s_0.X;
            dVar4 = *(double *)((longlong)&param_6->field0_0x0 + 0x10);
            dVar40 = (param_6->field0_0x0)._s_0.Y;
            auVar37._0_8_ = dVar40 * dVar40 + dVar3 * dVar3 + dVar4 * dVar4;
            auVar37._8_8_ = 0;
            auVar38 = sqrtpd(auVar37,auVar37);
            *(bool *)(lVar8 + 0x50) = 0.0 < auVar38._0_8_;
            local_340 = (double)uVar42;
            pFVar31 = TArrayView<FAimTarget_const_,int>::operator[](local_438,uVar28);
            local_320 = (pFVar31->Transform).Translation.XY.m128d_f64[0];
            dStack_318 = (pFVar31->Transform).Translation.XY.m128d_f64[1];
            local_310 = (pFVar31->Transform).Translation.ZW.m128d_f64[0];
            *(double *)(lVar8 + 0x58) = local_320;
            *(double *)(lVar8 + 0x60) = dStack_318;
            *(double *)(lVar8 + 0x68) = local_310;
          }
          pFVar31 = TArrayView<FAimTarget_const_,int>::operator[](param_7,uVar28);
          dVar3 = (pFVar31->Transform).Rotation.XY.m128d_f64[0];
          dVar4 = (pFVar31->Transform).Rotation.XY.m128d_f64[1];
          dVar40 = (pFVar31->Transform).Rotation.ZW.m128d_f64[0];
          dVar13 = (pFVar31->Transform).Rotation.ZW.m128d_f64[1];
          dVar14 = (pFVar31->Transform).Translation.XY.m128d_f64[0];
          dVar15 = (pFVar31->Transform).Translation.XY.m128d_f64[1];
          dVar16 = (pFVar31->Transform).Translation.ZW.m128d_f64[0];
          dVar17 = (pFVar31->Transform).Translation.ZW.m128d_f64[1];
          dVar18 = (pFVar31->Transform).Scale3D.XY.m128d_f64[0];
          dVar19 = (pFVar31->Transform).Scale3D.XY.m128d_f64[1];
          dVar20 = (pFVar31->Transform).Scale3D.ZW.m128d_f64[0];
          dVar21 = (pFVar31->Transform).Scale3D.ZW.m128d_f64[1];
          uVar29 = 0;
          if ((int)uVar28 < (param_9->ConstraintData).ArrayNum) {
            uVar29 = uVar34;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar9 = (param_9->ConstraintData).AllocatorInstance.Data;
          *(double *)(pFVar9 + lVar35 + 0x80) = dVar3;
          *(double *)(pFVar9 + lVar35 + 0x80 + 8) = dVar4;
          *(double *)(pFVar9 + lVar35 + 0x90) = dVar40;
          *(double *)(pFVar9 + lVar35 + 0x90 + 8) = dVar13;
          *(double *)(pFVar9 + lVar35 + 0xa0) = dVar14;
          *(double *)(pFVar9 + lVar35 + 0xa0 + 8) = dVar15;
          *(double *)(pFVar9 + lVar35 + 0xb0) = dVar16;
          *(double *)(pFVar9 + lVar35 + 0xb0 + 8) = dVar17;
          *(double *)(pFVar9 + lVar35 + 0xc0) = dVar18;
          *(double *)(pFVar9 + lVar35 + 0xc0 + 8) = dVar19;
          *(double *)(pFVar9 + lVar35 + 0xd0) = dVar20;
          *(double *)(pFVar9 + lVar35 + 0xd0 + 8) = dVar21;
          pFVar31 = TArrayView<FAimTarget_const_,int>::operator[](param_7,uVar28);
          fVar2 = pFVar31->Weight;
          uVar29 = 0;
          if ((int)uVar28 < (param_9->ConstraintData).ArrayNum) {
            uVar29 = uVar34;
          }
          if ((uVar29 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar28 = uVar28 + 1;
          *(float *)((param_9->ConstraintData).AllocatorInstance.Data + lVar35 + 0x10) = fVar2;
          lVar35 = lVar35 + 0xe0;
          iVar30 = (param_9->ConstraintData).ArrayNum;
        } while ((int)uVar28 < iVar30);
      }
      local_2a8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_2a8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_2a8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_2a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_418[0].Name.ComparisonIndex.Value = local_460.Name.ComparisonIndex.Value;
      local_418[0].Type = local_460.Type;
      local_418[0]._1_3_ = local_460._1_3_;
      local_2a8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_2a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_418[0].Name.Number = local_460.Name.Number;
      pFVar33 = URigHierarchy::GetFirstParent(pUVar6,&local_330,local_418);
      iVar30 = URigHierarchy::GetIndex(pUVar6,pFVar33,true);
      if (iVar30 != -1) {
        URigHierarchy::GetGlobalTransformByIndex(pUVar6,&local_248,iVar30,false);
        local_2a8.Rotation.XY.m128d_f64[1] = local_248.Rotation.XY.m128d_f64[1];
        local_2a8.Rotation.XY.m128d_f64[0] = local_248.Rotation.XY.m128d_f64[0];
        local_2a8.Rotation.ZW.m128d_f64[1] = local_248.Rotation.ZW.m128d_f64[1];
        local_2a8.Rotation.ZW.m128d_f64[0] = local_248.Rotation.ZW.m128d_f64[0];
        local_2a8.Translation.XY.m128d_f64[1] = local_248.Translation.XY.m128d_f64[1];
        local_2a8.Translation.XY.m128d_f64[0] = local_248.Translation.XY.m128d_f64[0];
        local_2a8.Translation.ZW.m128d_f64[1] = local_248.Translation.ZW.m128d_f64[1];
        local_2a8.Translation.ZW.m128d_f64[0] = local_248.Translation.ZW.m128d_f64[0];
        local_2a8.Scale3D.XY.m128d_f64[1] = local_248.Scale3D.XY.m128d_f64[1];
        local_2a8.Scale3D.XY.m128d_f64[0] = local_248.Scale3D.XY.m128d_f64[0];
        local_2a8.Scale3D.ZW.m128d_f64[1] = local_248.Scale3D.ZW.m128d_f64[1];
        local_2a8.Scale3D.ZW.m128d_f64[0] = local_248.Scale3D.ZW.m128d_f64[0];
      }
      URigHierarchy::GetGlobalTransformByIndex(pUVar6,&local_188,iVar27,false);
      AnimationCore::SolveConstraints(&local_1e8,&local_188,&local_2a8,&param_9->ConstraintData);
      local_308.Rotation.XY.m128d_f64[0] = local_1e8.Rotation.XY.m128d_f64[0];
      local_308.Rotation.XY.m128d_f64[1] = local_1e8.Rotation.XY.m128d_f64[1];
      local_308.Rotation.ZW.m128d_f64[0] = local_1e8.Rotation.ZW.m128d_f64[0];
      local_308.Rotation.ZW.m128d_f64[1] = local_1e8.Rotation.ZW.m128d_f64[1];
      local_308.Translation.XY.m128d_f64[0] = local_1e8.Translation.XY.m128d_f64[0];
      local_308.Translation.XY.m128d_f64[1] = local_1e8.Translation.XY.m128d_f64[1];
      local_308.Translation.ZW.m128d_f64[0] = local_1e8.Translation.ZW.m128d_f64[0];
      local_308.Translation.ZW.m128d_f64[1] = local_1e8.Translation.ZW.m128d_f64[1];
      local_308.Scale3D.XY.m128d_f64[0] = local_1e8.Scale3D.XY.m128d_f64[0];
      local_308.Scale3D.XY.m128d_f64[1] = local_1e8.Scale3D.XY.m128d_f64[1];
      local_308.Scale3D.ZW.m128d_f64[0] = local_1e8.Scale3D.ZW.m128d_f64[0];
      local_308.Scale3D.ZW.m128d_f64[1] = local_1e8.Scale3D.ZW.m128d_f64[1];
      URigHierarchy::SetGlobalTransformByIndex(pUVar6,iVar27,&local_308,false,true,false,false);
    }
  }
  return;
}

