// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// StaticStruct @ 14a4eda50

UScriptStruct * __cdecl FRigUnit_PoseGetDelta::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetDelta.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetDelta.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta,(UObject *)pUVar1,
                         L"RigUnit_PoseGetDelta");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetDelta.OuterSingleton,&local_18
              );
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetDelta.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4edad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_PoseGetDelta::GetExecuteContextStruct(FRigUnit_PoseGetDelta *this)

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

// Execute @ 14a4edde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PoseGetDelta::Execute(FRigUnit_PoseGetDelta *this)

{
  undefined1 auStackY_2c8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->PoseA,&this->PoseB,
                this->PositionThreshold,this->RotationThreshold,this->ScaleThreshold,
                this->CurveThreshold,this->ElementType,this->Space,&this->ItemsToCompare,
                &this->PosesAreEqual,&this->ItemsWithDelta);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_PoseGetDelta @ 14a513890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_PoseGetDelta * __thiscall
FRigUnit_PoseGetDelta::FRigUnit_PoseGetDelta(FRigUnit_PoseGetDelta *this)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  FRigElementKeyCollection *pFVar3;
  FRigElementKeyCollection *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b8 [2];
  FScriptContainerElement *local_a8;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a0._4_4_ = 0;
  (this->PoseA).HierarchyTopologyVersion = -1;
  (this->PoseA).PoseHash = -1;
  (this->PoseA).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->PoseB;
  (this->PoseA).Elements.ArrayNum = 0;
  (this->PoseA).Elements.ArrayMax = 0;
  pTVar2 = &(this->PoseB).KeyToIndex;
  *(undefined8 *)&(this->PoseA).KeyToIndex = 0;
  pFVar3 = &this->ItemsToCompare;
  *(undefined8 *)&(this->PoseA).KeyToIndex.field_0x8 = 0;
  pFVar4 = &this->ItemsWithDelta;
  *(undefined8 *)&(this->PoseA).KeyToIndex.field_0x20 = 0;
  this->_padding_ = (longlong)&___7FRigUnit_PoseGetDelta__6B_;
  local_98._0_4_ = -1;
  (this->PoseA).CachedPoseHash = -1;
  local_a0._0_4_ = 0;
  *(undefined4 *)&(this->PoseA).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->PoseA).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->PoseA).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PoseA).KeyToIndex.field_0x34 = 0;
  iVar8 = -1;
  *(undefined8 *)&(this->PoseA).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->PoseA).KeyToIndex.field_0x48 = 0;
  (pFVar1->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseB).Elements.ArrayNum = 0;
  (this->PoseB).Elements.ArrayMax = 0;
  (this->PoseB).HierarchyTopologyVersion = -1;
  (this->PoseB).PoseHash = -1;
  (this->PoseB).CachedPoseHash = -1;
  *(undefined8 *)pTVar2 = 0;
  *(undefined8 *)&(this->PoseB).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->PoseB).KeyToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->PoseB).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x48 = 0;
  (pFVar3->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemsToCompare).Keys.ArrayNum = 0;
  (this->ItemsToCompare).Keys.ArrayMax = 0;
  (pFVar4->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemsWithDelta).Keys.ArrayNum = 0;
  (this->ItemsWithDelta).Keys.ArrayMax = 0;
  local_a8 = (FScriptContainerElement *)0x0;
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
  local_48 = (void *)0x0;
  local_40 = 0;
  iVar9 = (int)local_98;
  if (pFVar1 != (FRigPose *)&local_a8) {
    pFVar5 = (pFVar1->Elements).AllocatorInstance.Data;
    pFVar7 = (FScriptContainerElement *)0x0;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
      pFVar7 = local_a8;
      iVar8 = local_98._4_4_;
    }
    (pFVar1->Elements).AllocatorInstance.Data = pFVar7;
    (this->PoseB).Elements.ArrayNum = (int)local_a0;
    (this->PoseB).Elements.ArrayMax = local_a0._4_4_;
    iVar9 = (int)local_98;
  }
  local_a0 = 0;
  local_a8 = (FScriptContainerElement *)0x0;
  (this->PoseB).HierarchyTopologyVersion = iVar9;
  (this->PoseB).PoseHash = iVar8;
  (this->PoseB).CachedPoseHash = local_90;
  if (pTVar2 != (TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                 *)&local_88) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(FScriptContainerElement **)pTVar2 = local_88.Data;
    *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x8 = (undefined4)local_80;
    *(uint *)&(this->PoseB).KeyToIndex.field_0xc = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
    if ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PoseB).KeyToIndex.field_0x10 != &local_78) {
      if (local_78.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        (this->PoseB).KeyToIndex.field_0x10 = local_78.AllocatorInstance.InlineData[0];
        (this->PoseB).KeyToIndex.field_0x11 = local_78.AllocatorInstance.InlineData[1];
        (this->PoseB).KeyToIndex.field_0x12 = local_78.AllocatorInstance.InlineData[2];
        (this->PoseB).KeyToIndex.field_0x13 = local_78.AllocatorInstance.InlineData[3];
        (this->PoseB).KeyToIndex.field_0x14 = local_78.AllocatorInstance.InlineData[4];
        (this->PoseB).KeyToIndex.field_0x15 = local_78.AllocatorInstance.InlineData[5];
        (this->PoseB).KeyToIndex.field_0x16 = local_78.AllocatorInstance.InlineData[6];
        (this->PoseB).KeyToIndex.field_0x17 = local_78.AllocatorInstance.InlineData[7];
        (this->PoseB).KeyToIndex.field_0x18 = local_78.AllocatorInstance.InlineData[8];
        (this->PoseB).KeyToIndex.field_0x19 = local_78.AllocatorInstance.InlineData[9];
        (this->PoseB).KeyToIndex.field_0x1a = local_78.AllocatorInstance.InlineData[10];
        (this->PoseB).KeyToIndex.field_0x1b = local_78.AllocatorInstance.InlineData[0xb];
        (this->PoseB).KeyToIndex.field_0x1c = local_78.AllocatorInstance.InlineData[0xc];
        (this->PoseB).KeyToIndex.field_0x1d = local_78.AllocatorInstance.InlineData[0xd];
        (this->PoseB).KeyToIndex.field_0x1e = local_78.AllocatorInstance.InlineData[0xe];
        (this->PoseB).KeyToIndex.field_0x1f = local_78.AllocatorInstance.InlineData[0xf];
      }
      pvVar6 = *(void **)&(this->PoseB).KeyToIndex.field_0x20;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      *(ForElementType<unsigned_int> *)&(this->PoseB).KeyToIndex.field_0x20 =
           local_78.AllocatorInstance.SecondaryData;
      *(int *)&(this->PoseB).KeyToIndex.field_0x28 = local_78.NumBits;
      *(int *)&(this->PoseB).KeyToIndex.field_0x2c = local_78.MaxBits;
      local_78.NumBits = 0;
      local_78.MaxBits = 0;
      local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    }
    *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x30 = local_58;
    *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x34 = local_54;
    local_54 = 0;
    local_58 = 0xffffffff;
    if (local_48 == (void *)0x0) {
      *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x38 = local_50;
    }
    pvVar6 = *(void **)&(this->PoseB).KeyToIndex.field_0x40;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    *(void **)&(this->PoseB).KeyToIndex.field_0x40 = local_48;
    *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x48 = local_40;
    local_40 = 0;
    local_48 = (void *)0x0;
  }
  FRigPose::operator=(&this->PoseA,pFVar1);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  bVar10 = local_80._4_4_ != 0;
  local_80 = (ulonglong)local_80._4_4_ << 0x20;
  if (bVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  iVar8 = local_78.MaxBits;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78._24_8_ = (ulonglong)(uint)local_78.MaxBits << 0x20;
  if (0x80 < (uint)iVar8) {
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
  if (local_a8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8);
  }
  this->ElementType = All;
  this->Space = LocalSpace;
  if (pFVar4 != (FRigElementKeyCollection *)local_b8) {
    pFVar5 = (pFVar4->Keys).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ItemsWithDelta).Keys.ArrayNum = 0;
    (this->ItemsWithDelta).Keys.ArrayMax = 0;
  }
  if (pFVar3 != pFVar4) {
    iVar8 = (this->ItemsWithDelta).Keys.ArrayNum;
    pFVar5 = (pFVar4->Keys).AllocatorInstance.Data;
    iVar9 = (this->ItemsToCompare).Keys.ArrayMax;
    (this->ItemsToCompare).Keys.ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar9 == 0)) {
      (this->ItemsToCompare).Keys.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar8,iVar9,(ForAnyElementType *)pFVar3,iVar8,
                 &(this->ItemsToCompare).Keys.ArrayMax);
      if (iVar8 != 0) {
        memcpy((pFVar3->Keys).AllocatorInstance.Data,pFVar5,(longlong)iVar8 * 0xc);
      }
    }
  }
  this->PositionThreshold = 0.1;
  this->RotationThreshold = 0.0;
  this->ScaleThreshold = 0.0;
  this->CurveThreshold = 0.0;
  this->PosesAreEqual = false;
  return this;
}

// ~FRigUnit_PoseGetDelta @ 14a518ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PoseGetDelta::~FRigUnit_PoseGetDelta(FRigUnit_PoseGetDelta *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ItemsWithDelta).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemsToCompare).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PoseB).KeyToIndex.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PoseB).KeyToIndex.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PoseB).KeyToIndex);
  pFVar1 = (this->PoseB).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PoseA).KeyToIndex.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PoseA).KeyToIndex.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PoseA).KeyToIndex);
  pFVar1 = (this->PoseA).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// AreCurvesEqual @ 14a51e8e0

bool __cdecl FRigUnit_PoseGetDelta::AreCurvesEqual(float param_1,float param_2,float param_3)

{
  if (__real_322bcc77 < param_3) {
    return (float)((uint)(param_1 - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) < param_3;
  }
  return true;
}

// ArePoseElementsEqual @ 14a51e910

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
FRigUnit_PoseGetDelta::ArePoseElementsEqual
          (FRigPoseElement *param_1,FRigPoseElement *param_2,ERigVMTransformSpace param_3,
          float param_4,float param_5,float param_6,float param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  if (((param_1->Index).Key.Name != (param_2->Index).Key.Name) ||
     ((param_1->Index).Key.Type != (param_2->Index).Key.Type)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyA == KeyB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Execution\\RigUnit_Hierarchy.cpp"
                       ,0x214,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_1->Index).Key.Type == Curve) {
    if (param_7 <= __real_322bcc77) {
      bVar2 = true;
    }
    else {
      bVar2 = (float)((uint)(param_1->CurveValue - param_2->CurveValue) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff) < param_7;
    }
  }
  else {
    lVar4 = 0x20;
    if (param_3 != GlobalSpace) {
      lVar4 = 0x80;
    }
    bVar2 = AreTransformsEqual((TTransform<double> *)
                               ((longlong)(&(param_1->GlobalTransform).Rotation + -1) + lVar4),
                               (TTransform<double> *)
                               ((longlong)(&(param_2->GlobalTransform).Rotation + -1) + lVar4),
                               param_4,param_5,param_6);
  }
  return bVar2;
}

// AreTransformsEqual @ 14a51e9f0

bool __cdecl
FRigUnit_PoseGetDelta::AreTransformsEqual
          (TTransform<double> *param_1,TTransform<double> *param_2,float param_3,float param_4,
          float param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  TRotator<double> *pTVar6;
  double dVar7;
  double dVar8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TRotator<double> local_88;
  TQuat<double> local_68 [3];
  
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar3 = __real_322bcc77;
  if (__real_322bcc77 < param_3) {
    local_a0._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
    dVar8 = (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
    dVar7 = (param_1->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
    dVar1 = (double)param_3;
    dVar2 = (param_1->Translation).ZW.m128d_f64[0] - local_a0._s_0.Z;
    if (dVar1 <= (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      return false;
    }
    if (dVar1 <= (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      return false;
    }
    if (dVar1 <= (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      return false;
    }
  }
  if (__real_322bcc77 < param_4) {
    local_68[0].X = (param_1->Rotation).XY.m128d_f64[0];
    local_68[0].Y = (param_1->Rotation).XY.m128d_f64[1];
    local_68[0].Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_68[0].W = (param_1->Rotation).ZW.m128d_f64[1];
    pTVar6 = UE::Math::TQuat<double>::Rotator(local_68,&local_88);
    UE::Math::TRotator<double>::Euler(pTVar6,(TVector<double> *)&local_b8._s_0);
    local_68[0].X = (param_2->Rotation).XY.m128d_f64[0];
    local_68[0].Y = (param_2->Rotation).XY.m128d_f64[1];
    local_68[0].Z = (param_2->Rotation).ZW.m128d_f64[0];
    local_68[0].W = (param_2->Rotation).ZW.m128d_f64[1];
    pTVar6 = UE::Math::TQuat<double>::Rotator(local_68,&local_88);
    UE::Math::TRotator<double>::Euler(pTVar6,(TVector<double> *)&local_a0._s_0);
    dVar1 = (double)param_4;
    if (dVar1 <= (double)CONCAT44((uint)((ulonglong)(local_b8._s_0.X - local_a0._s_0.X) >> 0x20) &
                                  uVar5,SUB84(local_b8._s_0.X - local_a0._s_0.X,0) & uVar4)) {
      return false;
    }
    if (dVar1 <= (double)CONCAT44((uint)((ulonglong)(local_b8._s_0.Y - local_a0._s_0.Y) >> 0x20) &
                                  uVar5,SUB84(local_b8._s_0.Y - local_a0._s_0.Y,0) & uVar4)) {
      return false;
    }
    if (dVar1 <= (double)CONCAT44((uint)((ulonglong)(local_b8._s_0.Z - local_a0._s_0.Z) >> 0x20) &
                                  uVar5,SUB84(local_b8._s_0.Z - local_a0._s_0.Z,0) & uVar4)) {
      return false;
    }
  }
  if (param_5 <= fVar3) {
    return true;
  }
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[0] - (param_2->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_1->Scale3D).XY.m128d_f64[0] - (param_2->Scale3D).XY.m128d_f64[0];
  dVar8 = (param_1->Scale3D).XY.m128d_f64[1] - (param_2->Scale3D).XY.m128d_f64[1];
  dVar1 = (double)param_5;
  if (((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar5,SUB84(dVar7,0) & uVar4) < dVar1) &&
     ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar5,SUB84(dVar8,0) & uVar4) < dVar1)) {
    return (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar5,SUB84(dVar2,0) & uVar4) < dVar1
    ;
  }
  return false;
}

// Execute @ 14a52b6e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PoseGetDelta::Execute(FRigUnit_PoseGetDelta *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->PoseA,&this->PoseB,this->PositionThreshold,this->RotationThreshold,
                this->ScaleThreshold,this->CurveThreshold,this->ElementType,this->Space,
                &this->ItemsToCompare,&this->PosesAreEqual,&this->ItemsWithDelta);
  return;
}

// RigVMExecute @ 14a54d000

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetDelta::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ERigElementType EVar5;
  ERigVMTransformSpace EVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  FRigPose *pFVar10;
  FRigPose *pFVar11;
  float *pfVar12;
  FRigVMMemoryHandle *pFVar13;
  ERigElementType *pEVar14;
  ERigVMTransformSpace *pEVar15;
  FRigElementKeyCollection *pFVar16;
  bool *pbVar17;
  FRigElementKeyCollection *pFVar18;
  FControlRigExecuteContext *pFVar19;
  
  iVar7 = param_2->ArrayNum;
  if (iVar7 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FRigPose *)pFVar13->Ptr;
  }
  else {
    pFVar10 = (FRigPose *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar13->PropertyPath,pFVar13->Ptr,pFVar13->Property);
  }
  if (iVar7 < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar11 = (FRigPose *)pFVar13[1].Ptr;
  }
  else {
    pFVar11 = (FRigPose *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar13[1].PropertyPath,pFVar13[1].Ptr,pFVar13[1].Property);
  }
  if (iVar7 < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar12 = (float *)pFVar13[2].Ptr;
  }
  else {
    pfVar12 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar13[2].PropertyPath,pFVar13[2].Ptr,pFVar13[2].Property);
  }
  fVar1 = *pfVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar2 = *pfVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar3 = *pfVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar4 = *pfVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pEVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  EVar5 = *pEVar14;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pEVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  EVar6 = *pEVar15;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar16 = (FRigElementKeyCollection *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pbVar17 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar13,false,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar18 = (FRigElementKeyCollection *)FRigVMMemoryHandle::GetData_Internal(pFVar13,false,-1);
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar19,pFVar10,pFVar11,fVar1,fVar2,fVar3,fVar4,EVar5,EVar6,pFVar16,pbVar17,pFVar18)
  ;
  return;
}

// StaticExecute @ 14a588800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetDelta::StaticExecute
          (FControlRigExecuteContext *param_1,FRigPose *param_2,FRigPose *param_3,float param_4,
          float param_5,float param_6,float param_7,ERigElementType param_8,
          ERigVMTransformSpace param_9,FRigElementKeyCollection *param_10,bool *param_11,
          FRigElementKeyCollection *param_12)

{
  int *piVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FRigPoseElement *pFVar6;
  FRigPoseElement *pFVar7;
  uint *puVar8;
  uint uVar9;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  FRigElementKey *pFVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res10 [2];
  FRigPose *local_res18;
  TPairInitializer<FRigElementKey_const_&,int_const_&> local_98;
  uint *local_88;
  ulonglong uVar10;
  
  uVar12 = 0;
  piVar1 = &(param_12->Keys).ArrayMax;
  *param_11 = true;
  (param_12->Keys).ArrayNum = 0;
  local_res18 = param_3;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_12,0,piVar1);
  }
  iVar4 = (param_2->Elements).ArrayNum;
  if (iVar4 == 0) {
    if ((param_3->Elements).ArrayNum == 0) {
      *param_11 = true;
    }
    else {
      *param_11 = false;
      FRigUnit_PoseGetItemsItemArray::StaticExecute(param_1,param_3,param_8,&param_12->Keys);
    }
  }
  else if ((param_3->Elements).ArrayNum == 0) {
    *param_11 = false;
    FRigUnit_PoseGetItemsItemArray::StaticExecute(param_1,param_2,param_8,&param_12->Keys);
  }
  else {
    fVar17 = (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    iVar5 = (param_10->Keys).ArrayNum;
    fVar18 = (float)((uint)param_5 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar19 = (float)((uint)param_6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar20 = (float)((uint)param_7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (iVar5 == 0) {
      if (param_2->PoseHash == param_3->PoseHash) {
        if (0 < iVar4) {
          do {
            iVar4 = (int)uVar12;
            pFVar6 = FRigPose::operator[](param_2,iVar4);
            pFVar7 = FRigPose::operator[](param_3,iVar4);
            if ((((pFVar6->Index).Key.Name != (pFVar7->Index).Key.Name) ||
                ((pFVar6->Index).Key.Type != (pFVar7->Index).Key.Type)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("KeyA == KeyB",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Execution\\RigUnit_Hierarchy.cpp"
                                   ,0x1cc,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((((pFVar6->Index).Key.Type & param_8) != None) &&
               (bVar3 = ArePoseElementsEqual(pFVar6,pFVar7,param_9,fVar17,fVar18,fVar19,fVar20),
               !bVar3)) {
              *param_11 = false;
              FRigElementKeyCollection::Add(param_12,(FRigElementKey *)pFVar6);
            }
            uVar12 = (ulonglong)(iVar4 + 1U);
          } while ((int)(iVar4 + 1U) < (param_2->Elements).ArrayNum);
        }
      }
      else {
        if (0 < iVar4) {
          do {
            pFVar6 = FRigPose::operator[](param_2,(int)uVar12);
            if (((pFVar6->Index).Key.Type & param_8) != None) {
              iVar4 = FRigPose::GetIndex(param_3,(FRigElementKey *)pFVar6);
              if (iVar4 != -1) {
                pFVar7 = FRigPose::operator[](param_3,iVar4);
                bVar3 = ArePoseElementsEqual(pFVar6,pFVar7,param_9,fVar17,fVar18,fVar19,fVar20);
                if (bVar3) goto LAB_14a588bc5;
              }
              *param_11 = false;
              FRigElementKeyCollection::Add(param_12,(FRigElementKey *)pFVar6);
            }
LAB_14a588bc5:
            uVar15 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar15;
          } while ((int)uVar15 < (param_2->Elements).ArrayNum);
        }
        uVar13 = 0;
        iVar4 = (param_3->Elements).ArrayNum;
        uVar12 = uVar13;
        uVar10 = uVar13;
        if (0 < iVar4) {
          do {
            uVar14 = (uint)uVar10;
            uVar15 = 0;
            if ((int)uVar14 < iVar4) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar16 = (FRigElementKey *)((param_3->Elements).AllocatorInstance.Data + uVar12);
            if ((pFVar16->Type & param_8) != None) {
              this = &param_2->KeyToIndex;
              if (param_2->CachedPoseHash != param_2->PoseHash) {
                TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                ::Reset((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                         *)this);
                param_2->CachedPoseHash = param_2->PoseHash;
              }
              puVar8 = (uint *)TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                               ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                                       *)this,pFVar16);
              if (puVar8 == (uint *)0x0) {
                iVar4 = (param_2->Elements).ArrayNum;
                local_res10[0] = 0;
                uVar10 = uVar13;
                if (0 < iVar4) {
                  do {
                    uVar9 = (uint)uVar10;
                    uVar15 = 0;
                    if ((int)uVar9 < iVar4) {
                      uVar15 = ~uVar9 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    local_88 = local_res10;
                    pFVar11 = (param_2->Elements).AllocatorInstance.Data +
                              (longlong)(int)uVar9 * 0x110;
                    local_98.Value = (int *)pFVar11;
                    TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FRigElementKey_const_&,int_const_&>_>
                              ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                                *)this,&local_98,(bool *)&local_98.Value);
                    if ((*(FName *)(pFVar11 + 4) == pFVar16->Name) &&
                       (uVar15 = local_res10[0], *pFVar11 == (FScriptContainerElement)pFVar16->Type)
                       ) goto LAB_14a588d41;
                    iVar4 = (param_2->Elements).ArrayNum;
                    local_res10[0] = local_res10[0] + 1;
                    uVar10 = (ulonglong)local_res10[0];
                  } while ((int)local_res10[0] < iVar4);
                }
              }
              else {
                uVar15 = *puVar8;
LAB_14a588d41:
                if (uVar15 != 0xffffffff) goto LAB_14a588d61;
              }
              *param_11 = false;
              TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FRigElementKey_const_&>(&param_12->Keys,pFVar16);
            }
LAB_14a588d61:
            iVar4 = (param_3->Elements).ArrayNum;
            uVar12 = uVar12 + 0x110;
            uVar10 = (ulonglong)(uVar14 + 1);
          } while ((int)(uVar14 + 1) < iVar4);
        }
      }
    }
    else {
      uVar10 = uVar12;
      if (0 < iVar5) {
        do {
          uVar14 = (uint)uVar12;
          uVar15 = 0;
          if ((int)uVar14 < iVar5) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar16 = (FRigElementKey *)((param_10->Keys).AllocatorInstance.Data + uVar10);
          if ((pFVar16->Type & param_8) != None) {
            iVar4 = FRigPose::GetIndex(param_2,pFVar16);
            if ((iVar4 != -1) &&
               (iVar5 = FRigPose::GetIndex(param_3,pFVar16), param_3 = local_res18, iVar5 != -1)) {
              pFVar6 = FRigPose::operator[](param_2,iVar4);
              param_3 = local_res18;
              pFVar7 = FRigPose::operator[](local_res18,iVar5);
              bVar3 = ArePoseElementsEqual(pFVar6,pFVar7,param_9,fVar17,fVar18,fVar19,fVar20);
              if (bVar3) goto LAB_14a588a49;
            }
            *param_11 = false;
            FRigElementKeyCollection::Add(param_12,pFVar16);
          }
LAB_14a588a49:
          iVar5 = (param_10->Keys).ArrayNum;
          uVar12 = (ulonglong)(uVar14 + 1);
          uVar10 = uVar10 + 0xc;
        } while ((int)(uVar14 + 1) < iVar5);
      }
    }
  }
  return;
}

