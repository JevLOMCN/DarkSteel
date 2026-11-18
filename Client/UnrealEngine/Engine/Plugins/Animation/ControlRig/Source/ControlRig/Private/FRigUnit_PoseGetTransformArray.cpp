// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f0fe0

UScriptStruct * __cdecl FRigUnit_PoseGetTransformArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetTransformArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetTransformArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray,(UObject *)pUVar1,
                         L"RigUnit_PoseGetTransformArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetTransformArray.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetTransformArray.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f1060

UScriptStruct * __thiscall
FRigUnit_PoseGetTransformArray::GetExecuteContextStruct(FRigUnit_PoseGetTransformArray *this)

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

// Execute @ 14a4f12b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PoseGetTransformArray::Execute(FRigUnit_PoseGetTransformArray *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Pose,this->Space,&this->Valid,
                &this->Transforms);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_PoseGetTransformArray @ 14a5145c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigUnit_PoseGetTransformArray * __thiscall
FRigUnit_PoseGetTransformArray::FRigUnit_PoseGetTransformArray(FRigUnit_PoseGetTransformArray *this)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  (this->Pose).HierarchyTopologyVersion = -1;
  (this->Pose).PoseHash = -1;
  (this->Pose).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->Pose;
  pTVar2 = &(this->Pose).KeyToIndex;
  (this->Pose).Elements.ArrayNum = 0;
  (this->Pose).Elements.ArrayMax = 0;
  *(undefined8 *)pTVar2 = 0;
  this->_padding_ = (longlong)&___7FRigUnit_PoseGetTransformArray__6B_;
  piVar3 = &(this->Transforms).ArrayMax;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  local_98._0_4_ = -1;
  (this->Pose).CachedPoseHash = -1;
  local_a0._0_4_ = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  local_98._4_4_ = -1;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  local_48 = (void *)0x0;
  *piVar3 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_98 = 0xffffffffffffffff;
  local_90 = -1;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_40 = 0;
  iVar7 = (int)local_98;
  iVar8 = local_98._4_4_;
  if (pFVar1 != (FRigPose *)&local_a8) {
    pFVar4 = (pFVar1->Elements).AllocatorInstance.Data;
    local_a0._4_4_ = (int)local_a0;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Elements).AllocatorInstance.Data = local_a8.Data;
    (this->Pose).Elements.ArrayNum = (int)local_a0;
    (this->Pose).Elements.ArrayMax = local_a0._4_4_;
    iVar7 = (int)local_98;
    iVar8 = local_98._4_4_;
  }
  local_a0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  (this->Pose).HierarchyTopologyVersion = iVar7;
  (this->Pose).PoseHash = iVar8;
  (this->Pose).CachedPoseHash = local_90;
  if (pTVar2 != (TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                 *)&local_88) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(FScriptContainerElement **)pTVar2 = local_88.Data;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x8 = (undefined4)local_80;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0xc = local_80._4_4_;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    if ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pose).KeyToIndex.field_0x10 != &local_78) {
      if (local_78.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        (this->Pose).KeyToIndex.field_0x10 = local_78.AllocatorInstance.InlineData[0];
        (this->Pose).KeyToIndex.field_0x11 = local_78.AllocatorInstance.InlineData[1];
        (this->Pose).KeyToIndex.field_0x12 = local_78.AllocatorInstance.InlineData[2];
        (this->Pose).KeyToIndex.field_0x13 = local_78.AllocatorInstance.InlineData[3];
        (this->Pose).KeyToIndex.field_0x14 = local_78.AllocatorInstance.InlineData[4];
        (this->Pose).KeyToIndex.field_0x15 = local_78.AllocatorInstance.InlineData[5];
        (this->Pose).KeyToIndex.field_0x16 = local_78.AllocatorInstance.InlineData[6];
        (this->Pose).KeyToIndex.field_0x17 = local_78.AllocatorInstance.InlineData[7];
        (this->Pose).KeyToIndex.field_0x18 = local_78.AllocatorInstance.InlineData[8];
        (this->Pose).KeyToIndex.field_0x19 = local_78.AllocatorInstance.InlineData[9];
        (this->Pose).KeyToIndex.field_0x1a = local_78.AllocatorInstance.InlineData[10];
        (this->Pose).KeyToIndex.field_0x1b = local_78.AllocatorInstance.InlineData[0xb];
        (this->Pose).KeyToIndex.field_0x1c = local_78.AllocatorInstance.InlineData[0xc];
        (this->Pose).KeyToIndex.field_0x1d = local_78.AllocatorInstance.InlineData[0xd];
        (this->Pose).KeyToIndex.field_0x1e = local_78.AllocatorInstance.InlineData[0xe];
        (this->Pose).KeyToIndex.field_0x1f = local_78.AllocatorInstance.InlineData[0xf];
      }
      pvVar5 = *(void **)&(this->Pose).KeyToIndex.field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(ForElementType<unsigned_int> *)&(this->Pose).KeyToIndex.field_0x20 =
           local_78.AllocatorInstance.SecondaryData;
      *(int *)&(this->Pose).KeyToIndex.field_0x28 = local_78.NumBits;
      *(int *)&(this->Pose).KeyToIndex.field_0x2c = local_78.MaxBits;
      local_78.NumBits = 0;
      local_78.MaxBits = 0;
      local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    }
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = local_58;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = local_54;
    local_54 = 0;
    local_58 = 0xffffffff;
    if (local_48 == (void *)0x0) {
      *(undefined4 *)&(this->Pose).KeyToIndex.field_0x38 = local_50;
    }
    pvVar5 = *(void **)&(this->Pose).KeyToIndex.field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(void **)&(this->Pose).KeyToIndex.field_0x40 = local_48;
    local_48 = (void *)0x0;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = local_40;
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar6 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  iVar7 = local_78.MaxBits;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78._24_8_ = (ulonglong)(uint)local_78.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_78.NumBits = 0;
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  this->Space = GlobalSpace;
  this->Valid = false;
  (this->Transforms).ArrayNum = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Transforms).AllocatorInstance,0,piVar3);
  }
  return this;
}

// Execute @ 14a52b930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PoseGetTransformArray::Execute
          (FRigUnit_PoseGetTransformArray *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Pose,this->Space,&this->Valid,&this->Transforms);
  return;
}

// RigVMExecute @ 14a54d820

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetTransformArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  bool *pbVar3;
  code *pcVar4;
  bool bVar5;
  FRigPose *pFVar6;
  ERigVMTransformSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  FControlRigExecuteContext *pFVar10;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
    pFVar6 = (FRigPose *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FRigPose *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
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
  if (iVar2 < 3) {
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
  pbVar3 = (bool *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar6,EVar1,pbVar3,pTVar9);
  return;
}

// StaticExecute @ 14a589070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetTransformArray::StaticExecute
          (FControlRigExecuteContext *param_1,FRigPose *param_2,ERigVMTransformSpace param_3,
          bool *param_4,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  
  *param_4 = false;
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  *param_4 = true;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_5,(param_2->Elements).ArrayNum,Default);
  iVar20 = (param_2->Elements).ArrayNum;
  if (param_3 == GlobalSpace) {
    uVar22 = 0;
    if (0 < iVar20) {
      lVar23 = 0;
      lVar21 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar22 < iVar20) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_2->Elements).AllocatorInstance.Data;
        uVar8 = *(undefined8 *)(pFVar2 + lVar21 + 0x30);
        uVar9 = *(undefined8 *)(pFVar2 + lVar21 + 0x30 + 8);
        uVar10 = *(undefined8 *)(pFVar2 + lVar21 + 0x40);
        uVar11 = *(undefined8 *)(pFVar2 + lVar21 + 0x40 + 8);
        pFVar1 = pFVar2 + lVar21 + 0x20;
        uVar4 = *(undefined4 *)pFVar1;
        uVar5 = *(undefined4 *)(pFVar1 + 4);
        uVar6 = *(undefined4 *)(pFVar1 + 8);
        uVar7 = *(undefined4 *)(pFVar1 + 0xc);
        uVar12 = *(undefined8 *)(pFVar2 + lVar21 + 0x50);
        uVar13 = *(undefined8 *)(pFVar2 + lVar21 + 0x50 + 8);
        uVar14 = *(undefined8 *)(pFVar2 + lVar21 + 0x60);
        uVar15 = *(undefined8 *)(pFVar2 + lVar21 + 0x60 + 8);
        uVar16 = *(undefined8 *)(pFVar2 + lVar21 + 0x70);
        uVar17 = *(undefined8 *)(pFVar2 + lVar21 + 0x70 + 8);
        uVar19 = 0;
        if ((int)uVar22 < param_5->ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_5->AllocatorInstance).Data;
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 0x110;
        pFVar1 = pFVar2 + lVar23;
        *(undefined4 *)pFVar1 = uVar4;
        *(undefined4 *)(pFVar1 + 4) = uVar5;
        *(undefined4 *)(pFVar1 + 8) = uVar6;
        *(undefined4 *)(pFVar1 + 0xc) = uVar7;
        *(undefined8 *)(pFVar2 + lVar23 + 0x10) = uVar8;
        *(undefined8 *)(pFVar2 + lVar23 + 0x10 + 8) = uVar9;
        *(undefined8 *)(pFVar2 + lVar23 + 0x20) = uVar10;
        *(undefined8 *)(pFVar2 + lVar23 + 0x20 + 8) = uVar11;
        *(undefined8 *)(pFVar2 + lVar23 + 0x30) = uVar12;
        *(undefined8 *)(pFVar2 + lVar23 + 0x30 + 8) = uVar13;
        *(undefined8 *)(pFVar2 + lVar23 + 0x40) = uVar14;
        *(undefined8 *)(pFVar2 + lVar23 + 0x40 + 8) = uVar15;
        *(undefined8 *)(pFVar2 + lVar23 + 0x50) = uVar16;
        *(undefined8 *)(pFVar2 + lVar23 + 0x50 + 8) = uVar17;
        lVar23 = lVar23 + 0x60;
        iVar20 = (param_2->Elements).ArrayNum;
      } while ((int)uVar22 < iVar20);
    }
  }
  else {
    uVar22 = 0;
    if (0 < iVar20) {
      lVar23 = 0;
      lVar21 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar22 < iVar20) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_2->Elements).AllocatorInstance.Data;
        uVar8 = *(undefined8 *)(pFVar2 + lVar21 + 0x90);
        uVar9 = *(undefined8 *)(pFVar2 + lVar21 + 0x90 + 8);
        uVar10 = *(undefined8 *)(pFVar2 + lVar21 + 0xa0);
        uVar11 = *(undefined8 *)(pFVar2 + lVar21 + 0xa0 + 8);
        pFVar1 = pFVar2 + lVar21 + 0x80;
        uVar4 = *(undefined4 *)pFVar1;
        uVar5 = *(undefined4 *)(pFVar1 + 4);
        uVar6 = *(undefined4 *)(pFVar1 + 8);
        uVar7 = *(undefined4 *)(pFVar1 + 0xc);
        uVar12 = *(undefined8 *)(pFVar2 + lVar21 + 0xb0);
        uVar13 = *(undefined8 *)(pFVar2 + lVar21 + 0xb0 + 8);
        uVar14 = *(undefined8 *)(pFVar2 + lVar21 + 0xc0);
        uVar15 = *(undefined8 *)(pFVar2 + lVar21 + 0xc0 + 8);
        uVar16 = *(undefined8 *)(pFVar2 + lVar21 + 0xd0);
        uVar17 = *(undefined8 *)(pFVar2 + lVar21 + 0xd0 + 8);
        uVar19 = 0;
        if ((int)uVar22 < param_5->ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_5->AllocatorInstance).Data;
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 0x110;
        pFVar1 = pFVar2 + lVar23;
        *(undefined4 *)pFVar1 = uVar4;
        *(undefined4 *)(pFVar1 + 4) = uVar5;
        *(undefined4 *)(pFVar1 + 8) = uVar6;
        *(undefined4 *)(pFVar1 + 0xc) = uVar7;
        *(undefined8 *)(pFVar2 + lVar23 + 0x10) = uVar8;
        *(undefined8 *)(pFVar2 + lVar23 + 0x10 + 8) = uVar9;
        *(undefined8 *)(pFVar2 + lVar23 + 0x20) = uVar10;
        *(undefined8 *)(pFVar2 + lVar23 + 0x20 + 8) = uVar11;
        *(undefined8 *)(pFVar2 + lVar23 + 0x30) = uVar12;
        *(undefined8 *)(pFVar2 + lVar23 + 0x30 + 8) = uVar13;
        *(undefined8 *)(pFVar2 + lVar23 + 0x40) = uVar14;
        *(undefined8 *)(pFVar2 + lVar23 + 0x40 + 8) = uVar15;
        *(undefined8 *)(pFVar2 + lVar23 + 0x50) = uVar16;
        *(undefined8 *)(pFVar2 + lVar23 + 0x50 + 8) = uVar17;
        lVar23 = lVar23 + 0x60;
        iVar20 = (param_2->Elements).ArrayNum;
      } while ((int)uVar22 < iVar20);
    }
  }
  return;
}

