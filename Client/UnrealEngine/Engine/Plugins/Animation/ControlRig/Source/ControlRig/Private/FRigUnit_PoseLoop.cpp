// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// StaticStruct @ 14a4f46c0

UScriptStruct * __cdecl FRigUnit_PoseLoop::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PoseLoop.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PoseLoop.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseLoop,(UObject *)pUVar1,
                         L"RigUnit_PoseLoop");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PoseLoop.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PoseLoop.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f48f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_PoseLoop::GetExecuteContextStruct(FRigUnit_PoseLoop *this)

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

// GetControlFlowBlocks_Impl @ 14a4f5160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigUnit_PoseLoop::GetControlFlowBlocks_Impl(FRigUnit_PoseLoop *this)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_PoseLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_PoseLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_PoseLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
      FLazyName::Resolve(&FRigVMStruct::ForLoopCompletedPinName);
      _Blocks = (undefined8 *)0x0;
      _DAT_1552b4530 = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,2,0,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_PoseLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
                          ::__l2::Blocks,2,(int *)&DAT_1552b4534);
      puVar1 = _Blocks;
      *_Blocks = local_18;
      puVar1[1] = uStack_10;
      atexit(`FRigUnit_PoseLoop::GetControlFlowBlocks_Impl'::__l2::
             _dynamic_atexit_destructor_for__Blocks__);
      _Init_thread_footer(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_PoseLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<FName,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_PoseLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
              ::__l2::Blocks;
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigUnit_PoseLoop::GetControlFlowBlocks_Impl(void)const___ptr64'
          ::__l2::Blocks;
}

// IsControlFlowBlockSliced @ 14a4f5250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_PoseLoop::IsControlFlowBlockSliced(FRigUnit_PoseLoop *this,FName *param_1)

{
  FName local_res10;
  
  FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
  return *param_1 == local_res10;
}

// GetNumSlices @ 14a4f5360

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigUnit_PoseLoop::GetNumSlices(FRigUnit_PoseLoop *this)

{
  return this->Count;
}

// Execute @ 14a4f5370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PoseLoop::Execute(FRigUnit_PoseLoop *this)

{
  (**(code **)(*(longlong *)&this->Completed + 8))(&this->Completed);
  StaticExecute(&this->Completed,&this->BlockToRun,&this->Pose,&this->Item,&this->GlobalTransform,
                &this->LocalTransform,&this->CurveValue,&this->Index,&this->Count,&this->Ratio);
  return;
}

// FRigUnit_PoseLoop @ 14a514b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_PoseLoop * __thiscall FRigUnit_PoseLoop::FRigUnit_PoseLoop(FRigUnit_PoseLoop *this)

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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
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
  (this->Pose).CachedPoseHash = -1;
  pTVar2 = &(this->Pose).KeyToIndex;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->BlockToRun).ComparisonIndex = 0;
  (this->BlockToRun).Number = 0;
  this->_padding_ = (longlong)&___7FRigUnit_PoseLoop__6B_;
  (pFVar1->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pose).Elements.ArrayNum = 0;
  (this->Pose).Elements.ArrayMax = 0;
  *(undefined8 *)pTVar2 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  (this->Item).Type = None;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Rotation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar6,0);
  auVar8._0_8_ = (double)fVar5;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Rotation.ZW.m128d_f64 = auVar8;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Translation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar6,0);
  auVar10._0_8_ = (double)fVar5;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Translation.ZW.m128d_f64 = auVar10;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Scale3D.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar6,0);
  auVar12._0_8_ = (double)fVar5;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Scale3D.ZW.m128d_f64 = auVar12;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar6,0);
  auVar14._0_8_ = (double)fVar5;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.ZW.m128d_f64 = auVar14;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Translation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar6,0);
  auVar16._0_8_ = (double)fVar5;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Translation.ZW.m128d_f64 = auVar16;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar6,0);
  auVar18._0_8_ = (double)fVar5;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.ZW.m128d_f64 = auVar18;
  FControlRigExecuteContext::FControlRigExecuteContext(&this->Completed);
  local_88._0_4_ = -1;
  local_80 = -1;
  (this->BlockToRun).ComparisonIndex = 0;
  (this->BlockToRun).Number = 0;
  local_88._4_4_ = -1;
  local_48 = 0xffffffff;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_90._4_4_ = 0;
  local_88 = 0xffffffffffffffff;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_44 = 0;
  local_30 = 0;
  local_38 = (void *)0x0;
  iVar25 = local_88._4_4_;
  iVar24 = (int)local_88;
  if (pFVar1 != (FRigPose *)&local_98) {
    pFVar3 = (pFVar1->Elements).AllocatorInstance.Data;
    local_90._0_4_ = 0;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Elements).AllocatorInstance.Data = local_98.Data;
    (this->Pose).Elements.ArrayNum = (int)local_90;
    (this->Pose).Elements.ArrayMax = local_90._4_4_;
    iVar25 = local_88._4_4_;
    iVar24 = (int)local_88;
  }
  local_90 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  (this->Pose).HierarchyTopologyVersion = iVar24;
  (this->Pose).PoseHash = iVar25;
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
  uVar23 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  iVar25 = local_68.MaxBits;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68._24_8_ = (ulonglong)(uint)local_68.MaxBits << 0x20;
  if (0x80 < (uint)iVar25) {
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
  (this->Item).Type = None;
  *(undefined3 *)&(this->Item).field_0x1 = 0;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->CurveValue = 0.0;
  this->Index = 0;
  dVar19 = (this->LocalTransform).Rotation.XY.m128d_f64[1];
  dVar20 = (this->LocalTransform).Rotation.ZW.m128d_f64[0];
  dVar21 = (this->LocalTransform).Rotation.ZW.m128d_f64[1];
  (this->GlobalTransform).Rotation.XY.m128d_f64[0] = (this->LocalTransform).Rotation.XY.m128d_f64[0]
  ;
  (this->GlobalTransform).Rotation.XY.m128d_f64[1] = dVar19;
  this->Count = 0;
  this->Ratio = 0.0;
  dVar19 = (this->LocalTransform).Translation.XY.m128d_f64[0];
  dVar22 = (this->LocalTransform).Translation.XY.m128d_f64[1];
  (this->GlobalTransform).Rotation.ZW.m128d_f64[0] = dVar20;
  (this->GlobalTransform).Rotation.ZW.m128d_f64[1] = dVar21;
  dVar20 = (this->LocalTransform).Translation.ZW.m128d_f64[0];
  dVar21 = (this->LocalTransform).Translation.ZW.m128d_f64[1];
  (this->GlobalTransform).Translation.XY.m128d_f64[0] = dVar19;
  (this->GlobalTransform).Translation.XY.m128d_f64[1] = dVar22;
  dVar19 = (this->LocalTransform).Scale3D.XY.m128d_f64[0];
  dVar22 = (this->LocalTransform).Scale3D.XY.m128d_f64[1];
  (this->GlobalTransform).Translation.ZW.m128d_f64[0] = dVar20;
  (this->GlobalTransform).Translation.ZW.m128d_f64[1] = dVar21;
  dVar20 = (this->LocalTransform).Scale3D.ZW.m128d_f64[0];
  dVar21 = (this->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (this->GlobalTransform).Scale3D.XY.m128d_f64[0] = dVar19;
  (this->GlobalTransform).Scale3D.XY.m128d_f64[1] = dVar22;
  (this->GlobalTransform).Scale3D.ZW.m128d_f64[0] = dVar20;
  (this->GlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar21;
  return this;
}

// Execute @ 14a52b990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PoseLoop::Execute(FRigUnit_PoseLoop *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->BlockToRun,&this->Pose,&this->Item,&this->GlobalTransform,
                &this->LocalTransform,&this->CurveValue,&this->Index,&this->Count,&this->Ratio);
  return;
}

// RigVMExecute @ 14a54daa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseLoop::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigElementKey *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FRigPose *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  TTransform<double> *pTVar8;
  TTransform<double> *pTVar9;
  float *pfVar10;
  int *piVar11;
  int *piVar12;
  float *pfVar13;
  FControlRigExecuteContext *pFVar14;
  
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
    pFVar5 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
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
    pFVar6 = (FRigPose *)pFVar7[1].Ptr;
  }
  else {
    pFVar6 = (FRigPose *)
             FRigVMPropertyPath::GetData_Internal
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
  pFVar2 = (FRigElementKey *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  piVar12 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,pFVar5,pFVar6,pFVar2,pTVar8,pTVar9,pfVar10,piVar11,piVar12,pfVar13);
  return;
}

// StaticExecute @ 14a5893e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseLoop::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FRigPose *param_3,
          FRigElementKey *param_4,TTransform<double> *param_5,TTransform<double> *param_6,
          float *param_7,int *param_8,int *param_9,float *param_10)

{
  undefined8 uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  FName local_res10;
  uint local_38;
  
  if (*param_2 == (FName)0x0) {
    *param_9 = (param_3->Elements).ArrayNum;
    *param_8 = 0;
    FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
    *param_2 = (FName)param_9;
  }
  else {
    FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
    if (*param_2 == (FName)param_8) {
      *param_8 = *param_8 + 1;
    }
  }
  uVar2 = *param_8;
  if (uVar2 == *param_9) {
    local_38 = local_38 & 0xffffff00;
    uVar6 = (ulonglong)local_38;
    param_4->Type = (char)uVar6;
    *(int3 *)&param_4->field_0x1 = (int3)(uVar6 >> 8);
    (param_4->Name).ComparisonIndex = (FNameEntryId)(int)(uVar6 >> 0x20);
    (param_4->Name).Number = 0;
    *&(param_6->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_6->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_6->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_6->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_6->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_6->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    dVar5 = (param_6->Rotation).XY.m128d_f64[1];
    (param_5->Rotation).XY.m128d_f64[0] = (param_6->Rotation).XY.m128d_f64[0];
    (param_5->Rotation).XY.m128d_f64[1] = dVar5;
    dVar5 = (param_6->Rotation).ZW.m128d_f64[1];
    (param_5->Rotation).ZW.m128d_f64[0] = (param_6->Rotation).ZW.m128d_f64[0];
    (param_5->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar5 = (param_6->Translation).XY.m128d_f64[1];
    (param_5->Translation).XY.m128d_f64[0] = (param_6->Translation).XY.m128d_f64[0];
    (param_5->Translation).XY.m128d_f64[1] = dVar5;
    dVar5 = (param_6->Translation).ZW.m128d_f64[1];
    (param_5->Translation).ZW.m128d_f64[0] = (param_6->Translation).ZW.m128d_f64[0];
    (param_5->Translation).ZW.m128d_f64[1] = dVar5;
    dVar5 = (param_6->Scale3D).XY.m128d_f64[1];
    (param_5->Scale3D).XY.m128d_f64[0] = (param_6->Scale3D).XY.m128d_f64[0];
    (param_5->Scale3D).XY.m128d_f64[1] = dVar5;
    dVar5 = (param_6->Scale3D).ZW.m128d_f64[1];
    (param_5->Scale3D).ZW.m128d_f64[0] = (param_6->Scale3D).ZW.m128d_f64[0];
    (param_5->Scale3D).ZW.m128d_f64[1] = dVar5;
    *param_7 = 0.0;
    FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
    *param_2 = local_res10;
  }
  else {
    uVar8 = 0;
    if ((int)uVar2 < (param_3->Elements).ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (param_3->Elements).AllocatorInstance.Data;
    lVar9 = (longlong)(int)uVar2 * 0x110;
    uVar1 = *(undefined8 *)(pFVar3 + lVar9);
    param_4->Type = (char)uVar1;
    *(int3 *)&param_4->field_0x1 = (int3)((ulonglong)uVar1 >> 8);
    (param_4->Name).ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar1 >> 0x20);
    (param_4->Name).Number = *(uint *)(pFVar3 + lVar9 + 8);
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x20 + 8);
    (param_5->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0x20);
    (param_5->Rotation).XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x30 + 8);
    (param_5->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0x30);
    (param_5->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x40 + 8);
    (param_5->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0x40);
    (param_5->Translation).XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x50 + 8);
    (param_5->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0x50);
    (param_5->Translation).ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x60 + 8);
    (param_5->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0x60);
    (param_5->Scale3D).XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x70 + 8);
    (param_5->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0x70);
    (param_5->Scale3D).ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x80 + 8);
    (param_6->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0x80);
    (param_6->Rotation).XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x90 + 8);
    (param_6->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0x90);
    (param_6->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0xa0 + 8);
    (param_6->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0xa0);
    (param_6->Translation).XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0xb0 + 8);
    (param_6->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0xb0);
    (param_6->Translation).ZW.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0xc0 + 8);
    (param_6->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0xc0);
    (param_6->Scale3D).XY.m128d_f64[1] = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0xd0 + 8);
    (param_6->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar9 + 0xd0);
    (param_6->Scale3D).ZW.m128d_f64[1] = dVar5;
    *param_7 = *(float *)(pFVar3 + lVar9 + 0x104);
  }
  fVar10 = FRigVMStruct::GetRatioFromIndex(*param_8,*param_9);
  *param_10 = fVar10;
  return;
}

