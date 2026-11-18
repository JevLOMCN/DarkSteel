// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a49c3a0

UScriptStruct * __cdecl FRigUnit_TransformConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint,(UObject *)pUVar1,
                         L"RigUnit_TransformConstraint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49c420

UScriptStruct * __thiscall
FRigUnit_TransformConstraint::GetExecuteContextStruct(FRigUnit_TransformConstraint *this)

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

// Execute @ 14a49c6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_TransformConstraint::Execute(FRigUnit_TransformConstraint *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2d8 [32];
  FRigElementKey local_298;
  FRigElementKey local_28c;
  TArrayView<FConstraintTarget_const_,int> local_280;
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
  local_280.DataPtr = (FConstraintTarget *)(this->Targets).AllocatorInstance.Data;
  iVar1 = (this->Targets).ArrayNum;
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
  local_298.Name = this->BaseBone;
  local_28c.Name = this->Bone;
  local_298.Type = Bone;
  local_28c.Type = Bone;
  local_280.ArrayNum = iVar1;
  FRigUnit_TransformConstraintPerItem::StaticExecute
            ((FControlRigExecuteContext *)local_268,&local_28c,this->BaseTransformSpace,
             &this->BaseTransform,&local_298,&local_280,this->bUseInitialTransforms,&this->WorkData)
  ;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4a3f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_TransformConstraint::GetUpgradeInfo
          (FRigUnit_TransformConstraint *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  ulonglong uVar2;
  int iVar3;
  UPackage *pUVar4;
  FRigVMRegistry_RWLock *pFVar5;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [4];
  uint uStack_164;
  uint uStack_160;
  int iStack_15c;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_158;
  FRigVMStruct local_148;
  undefined **local_140;
  undefined8 local_138;
  uint local_130;
  ETransformSpaceMode local_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  uint local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  FConstraintData *local_a0;
  undefined8 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_118 = (this->BaseTransform).Rotation.ZW.m128d_f64[0];
  dStack_110 = (this->BaseTransform).Rotation.ZW.m128d_f64[1];
  local_168 = (undefined1  [4])CONCAT31(local_168._1_3_,1);
  local_140 = &___7FRigVMExecutePin__6B_;
  local_148 = (FRigVMStruct)&___7FRigUnit_TransformConstraintPerItem__6B_;
  uStack_164 = (uint)(this->Bone).ComparisonIndex;
  uStack_160 = (this->Bone).Number;
  local_80._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_138 = CONCAT44(uStack_164,local_168);
  local_128 = (this->BaseTransform).Rotation.XY.m128d_f64[0];
  dStack_120 = (this->BaseTransform).Rotation.XY.m128d_f64[1];
  local_130 = uStack_160;
  local_12c = this->BaseTransformSpace;
  local_108 = (this->BaseTransform).Translation.XY.m128d_f64[0];
  dStack_100 = (this->BaseTransform).Translation.XY.m128d_f64[1];
  uStack_164 = (uint)(this->BaseBone).ComparisonIndex;
  uStack_160 = (this->BaseBone).Number;
  local_f8 = (this->BaseTransform).Translation.ZW.m128d_f64[0];
  dStack_f0 = (this->BaseTransform).Translation.ZW.m128d_f64[1];
  local_e8 = (this->BaseTransform).Scale3D.XY.m128d_f64[0];
  dStack_e0 = (this->BaseTransform).Scale3D.XY.m128d_f64[1];
  local_c0 = uStack_160;
  local_d8 = (this->BaseTransform).Scale3D.ZW.m128d_f64[0];
  dStack_d0 = (this->BaseTransform).Scale3D.ZW.m128d_f64[1];
  local_168[0] = 1;
  local_c8 = CONCAT44(uStack_164,local_168);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a8 = 1;
  local_a0 = (FConstraintData *)0x0;
  local_98 = 0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = (void *)0x0;
  local_48 = 0;
  if ((TArray<FConstraintTarget,TSizedDefaultAllocator<32>_> *)&local_b8 != &this->Targets) {
    uVar1 = (this->Targets).ArrayNum;
    _Src = (this->Targets).AllocatorInstance.Data;
    local_b0 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,uVar1,0,&local_b8,uVar1,(int *)((longlong)&local_b0 + 4));
      memcpy(local_b8.Data,_Src,(longlong)(int)uVar1 * 0x70);
    }
  }
  local_a8 = this->bUseInitialTransforms;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraint,(UObject *)pUVar4,
                         L"RigUnit_TransformConstraint");
    pFVar5 = FRigVMRegistry_RWLock::Get();
    local_168 = (undefined1  [4])0x52199bc0;
    uStack_164 = 1;
    uStack_160 = 1;
    local_158.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics::RigVMFunctions;
    local_158._12_4_ = iStack_15c;
    local_158.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar5,Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint.OuterSingleton,
               &local_158);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraint.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraintPerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraintPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem,
                         (UObject *)pUVar4,L"RigUnit_TransformConstraintPerItem");
    pFVar5 = FRigVMRegistry_RWLock::Get();
    local_168 = (undefined1  [4])0x52199cf0;
    uStack_164 = 1;
    uStack_160 = 1;
    local_158.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::RigVMFunctions;
    local_158._12_4_ = iStack_15c;
    local_158.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar5,Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraintPerItem.
                      OuterSingleton,&local_158);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraintPerItem.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_168 = (undefined1  [4])0x0;
  uStack_164 = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_148);
  ::FString::FString((FString *)&local_158,L"Item.Name");
  ::FString::FString((FString *)local_168,L"Bone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_168,(FString *)&local_158,true,true);
  if ((void *)CONCAT44(uStack_164,local_168) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_164,local_168));
  }
  if (local_158.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_158.DataPtr);
  }
  ::FString::FString((FString *)local_168,L"BaseItem.Name");
  ::FString::FString((FString *)&local_158,L"BaseBone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_158,(FString *)local_168,true,true);
  if (local_158.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_158.DataPtr);
  }
  if ((void *)CONCAT44(uStack_164,local_168) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_164,local_168));
  }
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  uVar2 = local_88 >> 0x20;
  local_88 = local_88 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_90,0,(int *)((longlong)&local_88 + 4));
  }
  iVar3 = local_80.MaxBits;
  local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
  uStack_60 = 0xffffffff;
  if (0x80 < (uint)iVar3) {
    local_80.NumBits = 0;
    local_80.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  DestructItems<FConstraintData,int>(local_a0,(int)local_98);
  if (local_a0 != (FConstraintData *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_TransformConstraint @ 14a516870

FRigUnit_TransformConstraint * __thiscall
FRigUnit_TransformConstraint::FRigUnit_TransformConstraint(FRigUnit_TransformConstraint *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->BaseTransformSpace = GlobalSpace;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_TransformConstraint__6B_;
  (this->Bone).ComparisonIndex = 0;
  (this->Bone).Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->BaseTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->BaseTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->BaseTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->BaseTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->BaseTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->BaseTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->BaseTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->BaseTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->BaseTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->BaseBone).ComparisonIndex = 0;
  (this->BaseBone).Number = 0;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  (this->WorkData).ConstraintData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ConstraintData.ArrayNum = 0;
  (this->WorkData).ConstraintData.ArrayMax = 0;
  *(undefined8 *)&(this->WorkData).ConstraintDataToTargets = 0;
  *(undefined8 *)&(this->WorkData).ConstraintDataToTargets.field_0x8 = 0;
  *(undefined8 *)&(this->WorkData).ConstraintDataToTargets.field_0x20 = 0;
  this->bUseInitialTransforms = true;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x28 = 0;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x2c = 0x80;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x34 = 0;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorkData).ConstraintDataToTargets.field_0x40 = 0;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x48 = 0;
  return this;
}

// ~FRigUnit_TransformConstraint @ 14a518b90

void __thiscall
FRigUnit_TransformConstraint::~FRigUnit_TransformConstraint(FRigUnit_TransformConstraint *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorkData).ConstraintDataToTargets.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WorkData).ConstraintDataToTargets);
  DestructItems<FConstraintData,int>
            ((FConstraintData *)(this->WorkData).ConstraintData.AllocatorInstance.Data,
             (this->WorkData).ConstraintData.ArrayNum);
  pFVar2 = (this->WorkData).ConstraintData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Targets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a52ed80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TransformConstraint::Execute
          (FRigUnit_TransformConstraint *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRigElementKey local_38;
  FRigElementKey local_2c;
  TArrayView<FConstraintTarget_const_,int> local_20;
  
  local_20.DataPtr = (FConstraintTarget *)(this->Targets).AllocatorInstance.Data;
  iVar1 = (this->Targets).ArrayNum;
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
  local_38.Name = this->BaseBone;
  local_2c.Name = this->Bone;
  local_38.Type = Bone;
  local_2c.Type = Bone;
  local_20.ArrayNum = iVar1;
  FRigUnit_TransformConstraintPerItem::StaticExecute
            (param_1,&local_2c,this->BaseTransformSpace,&this->BaseTransform,&local_38,&local_20,
             this->bUseInitialTransforms,&this->WorkData);
  return;
}

// RigVMExecute @ 14a559cc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TransformConstraint::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ETransformSpaceMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  ETransformSpaceMode *pEVar7;
  TTransform<double> *pTVar8;
  FRigVMMemoryHandle *pFVar9;
  FName *pFVar10;
  uchar *puVar11;
  uchar *puVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_TransformConstraint_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  FRigElementKey local_58;
  FRigElementKey local_4c;
  TArrayView<FConstraintTarget_const_,int> local_40;
  
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
    pFVar6 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
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
    pEVar7 = pFVar9[1].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  EVar1 = *pEVar7;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TTransform<double> *)pFVar9[2].Ptr;
  }
  else {
    pTVar8 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar10 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar4 = (bool)*puVar12;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_TransformConstraint_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar13->Offset + pFVar13->Index);
  local_40.DataPtr = *(FConstraintTarget **)puVar11;
  local_40.ArrayNum = *(int *)(puVar11 + 8);
  if (local_40.ArrayNum < 0) {
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
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  local_58.Name = *pFVar10;
  local_4c.Name = *pFVar6;
  local_58.Type = Bone;
  local_4c.Type = Bone;
  FRigUnit_TransformConstraintPerItem::StaticExecute
            (pFVar15,&local_4c,EVar1,pTVar8,&local_58,&local_40,bVar4,pFVar14);
  return;
}

// StaticExecute @ 14a59ddf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TransformConstraint::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ETransformSpaceMode param_3,
          TTransform<double> *param_4,FName *param_5,
          TArrayView<FConstraintTarget_const_,int> *param_6,bool param_7,
          FRigUnit_TransformConstraint_WorkData *param_8)

{
  FRigElementKey local_28;
  FRigElementKey local_1c [2];
  
  local_1c[0].Type = Bone;
  local_28.Type = Bone;
  local_28.Name = *param_5;
  local_1c[0].Name = *param_2;
  FRigUnit_TransformConstraintPerItem::StaticExecute
            (param_1,local_1c,param_3,param_4,&local_28,param_6,param_7,param_8);
  return;
}

