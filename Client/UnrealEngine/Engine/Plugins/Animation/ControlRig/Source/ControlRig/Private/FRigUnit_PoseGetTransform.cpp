// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4ef380

UScriptStruct * __cdecl FRigUnit_PoseGetTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform,(UObject *)pUVar1,
                         L"RigUnit_PoseGetTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ef400

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_PoseGetTransform::GetExecuteContextStruct(FRigUnit_PoseGetTransform *this)

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

// Execute @ 14a4ef9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PoseGetTransform::Execute(FRigUnit_PoseGetTransform *this)

{
  undefined1 auStackY_2b8 [32];
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Pose,&this->Item,this->Space,
                &this->Valid,&this->Transform,&this->CurveValue,&this->CachedPoseElementIndex,
                &this->CachedPoseHash);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_PoseGetTransform @ 14a514220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_PoseGetTransform * __thiscall
FRigUnit_PoseGetTransform::FRigUnit_PoseGetTransform(FRigUnit_PoseGetTransform *this)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStackY_d8 [32];
  uint local_a8;
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
  (this->Pose).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->Pose;
  *(undefined8 *)&(this->Pose).KeyToIndex = 0;
  pTVar2 = &(this->Pose).KeyToIndex;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  this->_padding_ = (longlong)&___7FRigUnit_PoseGetTransform__6B_;
  local_88._0_4_ = -1;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  (this->Pose).Elements.ArrayNum = 0;
  (this->Pose).Elements.ArrayMax = 0;
  (this->Pose).CachedPoseHash = -1;
  local_90._0_4_ = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  local_88._4_4_ = -1;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  (this->Item).Type = None;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
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
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar6,0);
  auVar8._0_8_ = (double)fVar5;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar8;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar6,0);
  auVar10._0_8_ = (double)fVar5;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar10;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar6,0);
  auVar12._0_8_ = (double)fVar5;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar12;
  local_38 = (void *)0x0;
  iVar15 = local_88._4_4_;
  iVar14 = (int)local_88;
  if (pFVar1 != (FRigPose *)&local_98) {
    pFVar3 = (pFVar1->Elements).AllocatorInstance.Data;
    local_90._4_4_ = (int)local_90;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Elements).AllocatorInstance.Data = local_98.Data;
    (this->Pose).Elements.ArrayNum = (int)local_90;
    (this->Pose).Elements.ArrayMax = local_90._4_4_;
    iVar15 = local_88._4_4_;
    iVar14 = (int)local_88;
  }
  local_90 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  (this->Pose).HierarchyTopologyVersion = iVar14;
  (this->Pose).PoseHash = iVar15;
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
  uVar13 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  iVar15 = local_68.MaxBits;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68._24_8_ = (ulonglong)(uint)local_68.MaxBits << 0x20;
  if (0x80 < (uint)iVar15) {
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
  this->Space = GlobalSpace;
  this->Valid = false;
  local_a8 = local_a8 & 0xffffff00;
  uVar13 = (ulonglong)local_a8;
  (this->Item).Type = (char)uVar13;
  *(int3 *)&(this->Item).field_0x1 = (int3)(uVar13 >> 8);
  (this->Item).Name.ComparisonIndex = (FNameEntryId)(int)(uVar13 >> 0x20);
  (this->Item).Name.Number = 0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->CurveValue = 0.0;
  this->CachedPoseElementIndex = -1;
  this->CachedPoseHash = -1;
  return this;
}

// Execute @ 14a52b8b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PoseGetTransform::Execute
          (FRigUnit_PoseGetTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Pose,&this->Item,this->Space,&this->Valid,&this->Transform,
                &this->CurveValue,&this->CachedPoseElementIndex,&this->CachedPoseHash);
  return;
}

// RigVMExecute @ 14a54d5b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRigPose *pFVar5;
  FRigElementKey *pFVar6;
  ERigVMTransformSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  bool *pbVar9;
  TTransform<double> *pTVar10;
  float *pfVar11;
  FRigVMSlice *pFVar12;
  int *piVar13;
  int *piVar14;
  FControlRigExecuteContext *pFVar15;
  
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
    pFVar5 = (FRigPose *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FRigPose *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
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
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar8[2].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  EVar1 = *pEVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pbVar9 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar13 = (int *)FRigVMMemoryHandle::GetData_Internal
                             (pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar14 = (int *)FRigVMMemoryHandle::GetData_Internal
                             (pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar5,pFVar6,EVar1,pbVar9,pTVar10,pfVar11,piVar13,piVar14);
  return;
}

// StaticExecute @ 14a588f30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FRigPose *param_2,FRigElementKey *param_3,
          ERigVMTransformSpace param_4,bool *param_5,TTransform<double> *param_6,float *param_7,
          int *param_8,int *param_9)

{
  double dVar1;
  int iVar2;
  FRigPoseElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_5 = false;
  *&(param_6->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_6->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_6->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_6->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_6->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_6->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (*param_9 != param_2->HierarchyTopologyVersion) {
    *param_9 = param_2->PoseHash;
    iVar2 = FRigPose::GetIndex(param_2,param_3);
    *param_8 = iVar2;
  }
  if (*param_8 != -1) {
    *param_5 = true;
    pFVar3 = FRigPose::operator[](param_2,*param_8);
    if (param_4 == GlobalSpace) {
      dVar1 = (pFVar3->GlobalTransform).Rotation.XY.m128d_f64[1];
      (param_6->Rotation).XY.m128d_f64[0] = (pFVar3->GlobalTransform).Rotation.XY.m128d_f64[0];
      (param_6->Rotation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar3->GlobalTransform).Rotation.ZW.m128d_f64[1];
      (param_6->Rotation).ZW.m128d_f64[0] = (pFVar3->GlobalTransform).Rotation.ZW.m128d_f64[0];
      (param_6->Rotation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pFVar3->GlobalTransform).Translation.XY.m128d_f64[1];
      (param_6->Translation).XY.m128d_f64[0] = (pFVar3->GlobalTransform).Translation.XY.m128d_f64[0]
      ;
      (param_6->Translation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar3->GlobalTransform).Translation.ZW.m128d_f64[1];
      (param_6->Translation).ZW.m128d_f64[0] = (pFVar3->GlobalTransform).Translation.ZW.m128d_f64[0]
      ;
      (param_6->Translation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pFVar3->GlobalTransform).Scale3D.XY.m128d_f64[1];
      (param_6->Scale3D).XY.m128d_f64[0] = (pFVar3->GlobalTransform).Scale3D.XY.m128d_f64[0];
      (param_6->Scale3D).XY.m128d_f64[1] = dVar1;
      uVar4 = *(undefined4 *)(pFVar3->GlobalTransform).Scale3D.ZW.m128d_f64;
      uVar5 = *(undefined4 *)((longlong)(pFVar3->GlobalTransform).Scale3D.ZW.m128d_f64 + 4);
      uVar6 = *(undefined4 *)((pFVar3->GlobalTransform).Scale3D.ZW.m128d_f64 + 1);
      uVar7 = *(undefined4 *)((longlong)(pFVar3->GlobalTransform).Scale3D.ZW.m128d_f64 + 0xc);
    }
    else {
      dVar1 = (pFVar3->LocalTransform).Rotation.XY.m128d_f64[1];
      (param_6->Rotation).XY.m128d_f64[0] = (pFVar3->LocalTransform).Rotation.XY.m128d_f64[0];
      (param_6->Rotation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar3->LocalTransform).Rotation.ZW.m128d_f64[1];
      (param_6->Rotation).ZW.m128d_f64[0] = (pFVar3->LocalTransform).Rotation.ZW.m128d_f64[0];
      (param_6->Rotation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pFVar3->LocalTransform).Translation.XY.m128d_f64[1];
      (param_6->Translation).XY.m128d_f64[0] = (pFVar3->LocalTransform).Translation.XY.m128d_f64[0];
      (param_6->Translation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar3->LocalTransform).Translation.ZW.m128d_f64[1];
      (param_6->Translation).ZW.m128d_f64[0] = (pFVar3->LocalTransform).Translation.ZW.m128d_f64[0];
      (param_6->Translation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pFVar3->LocalTransform).Scale3D.XY.m128d_f64[1];
      (param_6->Scale3D).XY.m128d_f64[0] = (pFVar3->LocalTransform).Scale3D.XY.m128d_f64[0];
      (param_6->Scale3D).XY.m128d_f64[1] = dVar1;
      uVar4 = *(undefined4 *)(pFVar3->LocalTransform).Scale3D.ZW.m128d_f64;
      uVar5 = *(undefined4 *)((longlong)(pFVar3->LocalTransform).Scale3D.ZW.m128d_f64 + 4);
      uVar6 = *(undefined4 *)((pFVar3->LocalTransform).Scale3D.ZW.m128d_f64 + 1);
      uVar7 = *(undefined4 *)((longlong)(pFVar3->LocalTransform).Scale3D.ZW.m128d_f64 + 0xc);
    }
    *(undefined4 *)(param_6->Scale3D).ZW.m128d_f64 = uVar4;
    *(undefined4 *)((longlong)(param_6->Scale3D).ZW.m128d_f64 + 4) = uVar5;
    *(undefined4 *)((param_6->Scale3D).ZW.m128d_f64 + 1) = uVar6;
    *(undefined4 *)((longlong)(param_6->Scale3D).ZW.m128d_f64 + 0xc) = uVar7;
  }
  return;
}

