// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f2420

UScriptStruct * __cdecl FRigUnit_PoseGetCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetCurve.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve,(UObject *)pUVar1,
                         L"RigUnit_PoseGetCurve");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetCurve.OuterSingleton,&local_18
              );
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetCurve.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f2730

UScriptStruct * __thiscall
FRigUnit_PoseGetCurve::GetExecuteContextStruct(FRigUnit_PoseGetCurve *this)

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

// Execute @ 14a4f2f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PoseGetCurve::Execute(FRigUnit_PoseGetCurve *this)

{
  int iVar1;
  FRigPoseElement *pFVar2;
  undefined1 auStack_298 [32];
  FRigElementKey local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
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
  this->Valid = false;
  this->CurveValue = 0.0;
  if (this->CachedPoseHash != (this->Pose).HierarchyTopologyVersion) {
    this->CachedPoseHash = (this->Pose).PoseHash;
    local_278.Name = this->Curve;
    local_278.Type = Curve;
    iVar1 = FRigPose::GetIndex(&this->Pose,&local_278);
    this->CachedPoseElementIndex = iVar1;
  }
  if (this->CachedPoseElementIndex != -1) {
    this->Valid = true;
    pFVar2 = FRigPose::operator[](&this->Pose,this->CachedPoseElementIndex);
    this->CurveValue = pFVar2->CurveValue;
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_PoseGetCurve @ 14a5135b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigUnit_PoseGetCurve * __thiscall
FRigUnit_PoseGetCurve::FRigUnit_PoseGetCurve(FRigUnit_PoseGetCurve *this)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStackY_d8 [32];
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  (this->Pose).HierarchyTopologyVersion = -1;
  (this->Pose).PoseHash = -1;
  pFVar1 = &this->Pose;
  local_88._0_4_ = -1;
  pTVar2 = &(this->Pose).KeyToIndex;
  (pFVar1->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)pTVar2 = 0;
  this->_padding_ = (longlong)&___7FRigUnit_PoseGetCurve__6B_;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
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
  (this->Curve).ComparisonIndex = 0;
  (this->Curve).Number = 0;
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
  (this->Curve).ComparisonIndex = 0;
  (this->Curve).Number = 0;
  this->Valid = false;
  this->CurveValue = 0.0;
  this->CachedPoseElementIndex = -1;
  this->CachedPoseHash = -1;
  return this;
}

// Execute @ 14a52b690

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PoseGetCurve::Execute(FRigUnit_PoseGetCurve *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Pose,&this->Curve,&this->Valid,&this->CurveValue,
                &this->CachedPoseElementIndex,&this->CachedPoseHash);
  return;
}

// RigVMExecute @ 14a54ce00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetCurve::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  bool *pbVar2;
  code *pcVar3;
  bool bVar4;
  FRigPose *pFVar5;
  FName *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  float *pfVar8;
  FRigVMSlice *pFVar9;
  int *piVar10;
  int *piVar11;
  FControlRigExecuteContext *pFVar12;
  
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
    pFVar5 = (FRigPose *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FRigPose *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
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
    pFVar6 = (FName *)pFVar7[1].Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
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
  pbVar2 = (bool *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar10 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index)
  ;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index)
  ;
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar5,pFVar6,pbVar2,pfVar8,piVar10,piVar11);
  return;
}

// StaticExecute @ 14a588760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetCurve::StaticExecute
          (FControlRigExecuteContext *param_1,FRigPose *param_2,FName *param_3,bool *param_4,
          float *param_5,int *param_6,int *param_7)

{
  int iVar1;
  FRigPoseElement *pFVar2;
  FRigElementKey local_18;
  
  *param_4 = false;
  *param_5 = 0.0;
  if (*param_7 != param_2->HierarchyTopologyVersion) {
    *param_7 = param_2->PoseHash;
    local_18.Name = *param_3;
    local_18.Type = Curve;
    iVar1 = FRigPose::GetIndex(param_2,&local_18);
    *param_6 = iVar1;
  }
  if (*param_6 != -1) {
    *param_4 = true;
    pFVar2 = FRigPose::operator[](param_2,*param_6);
    *param_5 = pFVar2->CurveValue;
  }
  return;
}

